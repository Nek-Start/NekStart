[Variables]
@includeSecVar=#@#SecVar.inc
Sec.W=(600*#Sec.S#)
Sec.H=(120*#Sec.S#)
AniDir=Bottom
InstallText=Inititalizing...
Progress=0
Switch=0
[moveX]
Formula=(#SCREENAREAWIDTH#/2)
[moveY]
Formula=(#SCREENAREAHEIGHT#/2)
[anchorX]
Formula=50
[anchorY]
Formula=50

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[NekInstallHandler]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Powershell\Installer.ps1
ExecutionPolicy=Unrestricted

[mInitType]
Measure=Calc
IfCondition=#Switch# = 0
IfTrueAction=[!CommandMeasure mActions "Execute 1"][!WriteKeyValue Variables Switch 1 "#ROOTCONFIGPATH#Accessories\GenericInteractionBox\Variants\Install.inc"]
IfFalseAction=[!CommandMeasure mActions "Execute 2"][!WriteKeyValue Variables Switch 0 "#ROOTCONFIGPATH#Accessories\GenericInteractionBox\Variants\Install.inc"]
UpdateDivider=-1

[mActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 100 | Kill | Wait 1000 | Download
ActionList2=Wait 100 | NewCache | Wait 1000 | CheckDLC
NewCache=[!CommandMeasure NekInstallHandler "New-Cache"]
CheckDLC=[!CommandMeasure NekInstallHandler "CheckForDLC"]
Kill=[!Setvariable InstallText "Deactivating #Skin.Name#\Main"][!UpdateMeterGroup Progress][!Redraw][!DeactivateConfig "#Skin.Name#\Main"]
Download=[!SetVariable InstallText "Starting download from #sec.arg2#"][!UpdateMeterGroup Progress][!Redraw][!CommandMeasure NekInstallHandler "Install"]
Finish=[!CommandMeasure Installer "Exit-Installation '[#Skin.Name]'"]
DynamicVariables=1

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[BC]
Meter = Shape
Shape=Rectangle 0,0,(#Sec.W#),(#Sec.H#),#Set.WinR# | StrokeWidth 0 | Fill Color #m.AccentColor#
DynamicVariables=1
[BCI]
Meter=Image
W=(#Sec.W#)
H=(#Sec.H#)
PreserveAspectRatio=2
ImageName=#@#MAterials\Logo\#Skin.Name#.ico
ImageAlpha=25
Container=BC

[HeaderString]
Meter=String
X=(#Sec.W#/2)
Y=(#Sec.P#)
StringAlign=Center
MeterStyle=Sec.String:S | HeaderString:#Switch#
FontSize=(14*#sec.s#)
FontWeight=650
DynamicVariables=1
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 2.0
[HeaderString:0]
Text=Installing #Skin.Name#
[HeaderString:1]
Text=Finishing Installation of #Skin.name#

[Description]
Meter=String
X=r
Y=(#Sec.P#/2)R
W=(#Sec.W#-#Sec.P#*2)
Clipstring=1
StringAlign=Center
Text=#InstallText#
FontColor=#FontColor#
MeterStyle=Sec.String:S
FontSize=(10*#sec.s#)
Group=Progress
DynamicVariables=1

[ProgressBar]
Meter=Shape
X=(#Sec.P#)
Y=(#Sec.P#)R
Shape=Line 0,0,((#Sec.W#-#sec.P#*2)),0 | StrokeWidth 2 | Stroke Color #m.SubTextColor# | StrokeStartCap Round | StrokeEndcap Round
Shape2=Line 0,0,((#Sec.W#-#sec.P#*2)*#Progress#/100),0 | StrokeWidth 4 | Stroke LinearGradient This | StrokeStartCap Round | StrokeEndcap Round
This=180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0
DynamicVariables=1
Group=Progress
MeterStyle=ProgressBar:#Switch#
[ProgressBar:0]
Hidden=0
[ProgressBar:1]
Hidden=1
