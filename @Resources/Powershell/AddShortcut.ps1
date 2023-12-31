$DesktopPath = [Environment]::GetFolderPath("Desktop")
$Startpath = $env:APPDATA



function Desktop {
    $RainmeterExe = $RmAPI.VariableStr('PROGRAMPATH')
    $ResourceFolder = $RmAPI.VariableStr('@')
    $WScriptShell = New-Object -ComObject WScript.Shell
    $Shortcut = $WScriptShell.CreateShortcut($DesktopPath+"\NekStart.lnk")
    $Shortcut.TargetPath = $RainmeterExe+"Rainmeter.exe"
    $Shortcut.Arguments = '!ActivateConfig #NekStart\Main NekStart.ini'
    $shortcut.IconLocation = $ResourceFolder+"Materials\Logo\NekStart.ico"
    $Shortcut.Save()
}

function StartFolder {
    $RainmeterExe = $RmAPI.VariableStr('PROGRAMPATH')
    $ResourceFolder = $RmAPI.VariableStr('@')
    $WScriptShell = New-Object -ComObject WScript.Shell
    $Shortcut = $WScriptShell.CreateShortcut("$Startpath\Microsoft\Windows\Start Menu\Programs\NekStart.lnk")
    $Shortcut.TargetPath = $RainmeterExe+"Rainmeter.exe"
    $Shortcut.Arguments = '!ActivateConfig #NekStart\Main NekStart.ini'
    $shortcut.IconLocation = $ResourceFolder+"Materials\Logo\NekStart.ico"
    $Shortcut.Save()
}

