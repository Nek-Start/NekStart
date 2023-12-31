$ErrorActionPreference = 'SilentlyContinue'

$root = $RmAPI.VariableStr("SKINSPATH") + "#NekInstallerCache"
function InitInstall { 
    $url = $RmAPI.VariableStr('DownloadLink')
    $name = $RmAPI.VariableStr('DownloadName')
    $RmAPI.Bang("[!DeactivateConfig `"#NekStart\Accessories\GenericInteractionBox`"][!CommandMeasure Func `"interactionBox('Install', '$name', '$url')`"]")
}
# ---------------------------------------------------------------------------- #
#                                   Functions                                  #
# ---------------------------------------------------------------------------- #

function Get-IniContent ($filePath) {
    $ini = [ordered]@{}
    if (![System.IO.File]::Exists($filePath)) {
        throw "$filePath invalid"
    }
    # $section = ';ItIsNotAFuckingSection;'
    # $ini.Add($section, [ordered]@{})

    foreach ($line in [System.IO.File]::ReadLines($filePath)) {
        if ($line -match "^\s*\[(.+?)\]\s*$") {
            $section = $matches[1]
            $secDup = 1
            while ($ini.Keys -contains $section) {
                $section = $section + '||ps' + $secDup
            }
            $ini.Add($section, [ordered]@{})
        }
        elseif ($line -match "^\s*;.*$") {
            $notSectionCount = 0
            while ($ini[$section].Keys -contains ';NotSection' + $notSectionCount) {
                $notSectionCount++
            }
            $ini[$section][';NotSection' + $notSectionCount] = $matches[1]
        }
        elseif ($line -match "^\s*(.+?)\s*=\s*(.+?)$") {
            $key, $value = $matches[1..2]
            $ini[$section][$key] = $value
        }
        else {
            $notSectionCount = 0
            while ($ini[$section].Keys -contains ';NotSection' + $notSectionCount) {
                $notSectionCount++
            }
            $ini[$section][';NotSection' + $notSectionCount] = $line
        }
    }

    return $ini
}

function Set-IniContent($ini, $filePath) {
    $str = @()

    foreach ($section in $ini.GetEnumerator()) {
        if ($section -ne ';ItIsNotAFuckingSection;') {
            $str += "[" + ($section.Key -replace '\|\|ps\d+$', '') + "]"
        }
        foreach ($keyvaluepair in $section.Value.GetEnumerator()) {
            if ($keyvaluepair.Key -match "^;NotSection\d+$") {
                $str += $keyvaluepair.Value
            }
            else {
                $str += $keyvaluepair.Key + "=" + $keyvaluepair.Value
            }
        }
    }

    $finalStr = $str -join [System.Environment]::NewLine

    $finalStr | Out-File -filePath $filePath -Force -Encoding unicode
}

function debug {
    param(
        [Parameter()]
        [string]
        $message
    )

    $RmAPI.Bang("[!Log `"`"`"NekInstaller: " + $message + "`"`"`" Debug]")
}

function Get-Webfile ($url, $dest) {
    debug "Downloading $url`n"
    $uri = New-Object "System.Uri" "$url"
    $request = [System.Net.HttpWebRequest]::Create($uri)
    $request.set_Timeout(5000)
    $response = $request.GetResponse()
    $length = $response.get_ContentLength()
    $responseStream = $response.GetResponseStream()
    $destStream = New-Object -TypeName System.IO.FileStream -ArgumentList $dest, Create
    $buffer = New-Object byte[] 100KB
    $count = $responseStream.Read($buffer, 0, $buffer.length)
    $downloadedBytes = $count

    while ($count -gt 0) {
        $RmAPI.Bang("[!SetVariable Progress `"$([System.Math]::Round(($downloadedBytes / $length) * 100,0))`"][!SetVariable InstallText `"Downloading [#Progress]%`"][!UpdateMeterGroup Progress][!Redraw]")
        $destStream.Write($buffer, 0, $count)
        $count = $responseStream.Read($buffer, 0, $buffer.length)
        $downloadedBytes += $count
    }

    debug "`nDownload of `"$dest`" finished."
    $destStream.Flush()
    $destStream.Close()
    $destStream.Dispose()
    $responseStream.Dispose()
}

function New-Cache {

    [System.IO.Directory]::CreateDirectory("$root") | Out-Null
    Get-ChildItem "$root" | ForEach-Object {
        Remove-Item $_.FullName -Force -Recurse
    }
}

# ---------------------------------------------------------------------------- #
#                                    Actions                                   #
# ---------------------------------------------------------------------------- #
function Install {
    $url = $RmAPI.VariableStr('sec.arg2')
    $name = $RmAPI.VariableStr('sec.arg1')
    $outPath = "$root/$name.rmskin"

    New-Cache

    $process = Get-Process 'Rainmeter'
    $ppid = $process.Id
    Get-CimInstance Win32_Process | Where-Object { $_.ParentProcessId -eq $ppid } | ForEach-Object { Stop-Process $_.ProcessId }

    Get-Webfile $url $outPath

    $RmAPI.Bang("[!SetVariable InstallText `"Do not touch controls, running installer...`"][!UpdateMeterGroup Progress][!Redraw]")

    Start-Process -FilePath $outPath

    If ($Null -NotMatch (get-process "SkinInstaller" -ea SilentlyContinue)) {
        If ($name -NotMatch 'NekStart') {
            $wshell = New-Object -ComObject wscript.shell
            $wshell.AppActivate('Rainmeter Skin Installer')
            Start-Sleep -s 1.5
            $wshell.SendKeys('{TAB}')
            $wshell.SendKeys(' ')
            $wshell.SendKeys('{ENTER}')
        }
        else {
            $wshell = New-Object -ComObject wscript.shell
            $wshell.AppActivate('Rainmeter Skin Installer')
            Start-Sleep -s 1.5
            $wshell.SendKeys('{ENTER}')
        }
    }
}

function FinishInstall {
    New-Cache
    $RmAPI.Bang('[!DeactivateConfig]')
}

function CheckForDLC {
    If ([String]::IsNullOrWhiteSpace((Get-content "$($RmAPI.VariableStr('SKINSPATH'))..\NekData\@DLCs\InstalledDLCs.inc"))) {
        $RmAPI.Bang('[!ActivateConfig "#NekStart\Main" "NekStart.Ini"][!DeactivateConfig]')
    } else {
        $Ini = Get-IniContent -filePath "$($RmAPI.VariableStr('SKINSPATH'))..\NekData\@DLCs\InstalledDLCs.inc"
        $InstalledSkin = $RmAPI.VariableStr('SKIN.NAME')
        for ($i = 0; $i -lt $Ini['Variables'].Keys.Count; $i++) { 
            debug $Ini['Variables'].Keys[$i]
            if ($Ini['Variables'].Keys[$i] -match $InstalledSkin) {
                debug "Found $InstalledSkin"
                $RmAPI.Bang('[!ActivateConfig "#NekStart\Main" "NekStart.Ini"][!DeactivateConfig]')
                Return
            } else {
                debug "Not Found"
            }
        }
        $RmAPI.Bang('[!ActivateConfig "#NekStart\Main" "NekStart.Ini"][!DeactivateConfig]')
        # [!ActivateConfig "'+$RmAPI.VariableStr('Skin.Name')+'\Main"]
    }
    $RmAPI.Bang('[!ActivateConfig "#NekStart\Main" "NekStart.Ini"][!DeactivateConfig]')
}

