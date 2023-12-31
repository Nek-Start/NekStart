[Variables]
Page.Items.P=(10*[Set.S])
Page.Items.H=(60*[Set.S])
Page.Items.Content.P=(10*[Set.S])

[PSRM]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Powershell\AddShortcut.ps1

[MeasureActive]
Measure=Plugin
Plugin=ConfigActive
ConfigName=#NekStart\Accessories\Tray Icon
DynamicVariables=1
IfCondition=MeasureActive = 1
IfTrueAction=[!SetOption Set.SytemTray Hidden "1"]
IfFalseAction=[!SetOption Set.SytemTray1 Hidden "1"]

[WindowsString]
Meter=String
Text=NekStart
X=((#Set.W#/2-((-25*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.TitleBarH#/2)
FontSize=(12)
FontColor=#FontColor#
FontFace=#FontText#
StringAlign=CenterCenter
Antialias=1
DynamicVariables=1
------------------------------------------------;Style;--------------------------------------------------------------
[StyleText]
FontColor=#FontColor#
FontFace=#FontText#
Antialias=1
Container=#Sec.Container#
DynamicVariables=1

[StyleLogo]
FontColor=#FontColor#
FontFace=#FontLogo#
Antialias=1
Container=#Sec.Container#
DynamicVariables=1

[StyleBkg]
Shape=Rectangle 0,0,(#Set.W#-#HomePage.P#*1.7),(#Page.Items.H#*1.5) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1

[StyleSmall]
Shape=Rectangle 0,0,((#HomePage.P#*4)/2),(#Page.Items.H#),(8*[Set.S]),(8*[Set.S])| StrokeWidth 0 | Extend This
This=Fill Color #m.SubTextColor1#,75
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1# ,100"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=#Sec.Container#
DynamicVariables=1

[StyleToggle]
Shape=Rectangle 0,0,((#HomePage.P#*1.4)/2),(35*[Set.S]),(16*[Set.S]),(16*[Set.S])| StrokeWidth 0 | Fill LinearGradient MyGradient 
Shape2=Ellipse (25*[Set.S]),(25*[Set.S]),(10*[Set.S]),(10*[Set.S])| StrokeWidth 0 | Fill Color #FontColor# | OffSet (28*[Set.S]),(-8*[Set.S])
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0
Container=#Sec.Container#
DynamicVariables=1

[StyleToggle1]
Shape=Rectangle 0,0,((#HomePage.P#*1.5)/2),(36*[Set.S]),(16*[Set.S]),(16*[Set.S])| StrokeWidth 0 | Extend This
Shape2=Ellipse (25*[Set.S]),(25*[Set.S]),(10*[Set.S]),(10*[Set.S])| StrokeWidth 0 | Fill Color #FontColor# | OffSet (-8*[Set.S]),(-7*[Set.S])
This=Fill Color 120,120,120
Container=#Sec.Container#
DynamicVariables=1
-----------------------------------------------------------------------------------------------------------------------
                                                 Contents
-----------------------------------------------------------------------------------------------------------------------
------------------------------------------------;Version;--------------------------------------------------------------
[m.GeneralText]
Meter=String
Text=General
X=(#HomePage.P#*1.4)r
Y=(#Page.Items.P#*4.4+#Scroll#)R
FontSize=(25*[Set.S])
FontWeight=900
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
MeterStyle=StyleText

[m.VersionText]
Meter=String
Text=Version
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*5)r
FontSize=(15*[Set.S])
FontWeight=900
MeterStyle=StyleText

[m.VersionBkg]
Meter=Shape
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*13+#Scroll#)
MeterStyle=StyleBkg

[m.VersionLogo]
Meter=String
Text=[\xe040]
X=(#HomePage.P#*1.6)
Y=(#Page.Items.P#*2)r
FontSize=(40*[Set.S])
MeterStyle=StyleLogo

[m.VersionCurrent]
Meter=String
Text=v786.00-Beta
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*0.5)r
FontSize=(12*[Set.S])
MeterStyle=StyleText

[m.Version1]
Meter=String
Text=View release details
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*2)r
FontSize=(12*[Set.S])
FontColor=#FontColor#,120
MeterStyle=StyleText

[m.VersionActivate]
Meter=Shape
X=(#Set.W#-250*[Set.S])
Y=(#Page.Items.Content.P#*-3)r
LeftMouseUpAction=[!ActivateConfig  "#NekStart\Accessories\Version" ]
MeterStyle=StyleSmall

[m.Version Details]
Meter=String
Text=Version Details
X=(#HomePage.P#)r
Y=(#Page.Items.P#*3)r
FontSize=(15*[Set.S])
StringAlign=CenterCenter
MeterStyle=StyleText
------------------------------------------------;Behaviour;--------------------------------------------------------------
[m.BehaviourText]
Meter=String
Text=Behaviour
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*6)r
FontSize=(15*[Set.S])
FontWeight=900
MeterStyle=StyleText
------------------------------------------------;Shortcut;--------------------------------------------------------------
[m.ShortcutBkg]
Meter=Shape
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*4)r
MeterStyle=StyleBkg

[m.ShortcutLogo]
Meter=String
Text=[\xe041]
X=(#HomePage.P#*1.6)
Y=(#Page.Items.P#*-16)r
FontSize=(180*[Set.S])
MeterStyle=StyleLogo

[m.Shortcut]
Meter=String
Text=Add Shortcut to Desktop
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*18.5)r
FontSize=(12*[Set.S])
MeterStyle=StyleText

[m.Shortcut1]
Meter=String
Text=For easy to use
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*2)r
FontSize=(12*[Set.S])
FontColor=#FontColor#,120
MeterStyle=StyleText

[m.DesktopBkg]
Meter=Shape
X=(#Set.W#-250*[Set.S])
Y=(#Page.Items.Content.P#*29+#Scroll#)
LeftMouseUpAction=[!CommandMeasure PSRM "Desktop"]
MeterStyle=StyleSmall

[m.Desktop]
Meter=String
Text=Desktop
X=(#HomePage.P#)r
Y=(#Page.Items.P#*3)r
FontSize=(15*[Set.S])
StringAlign=CenterCenter
MeterStyle=StyleText

[m.ProgramBkg]
Meter=Shape
X=(#Set.W#-470*[Set.S])
Y=(#Page.Items.Content.P#*29+#Scroll#)
LeftMouseUpAction=[!CommandMeasure PSRM "StartFolder"]
MeterStyle=StyleSmall

[m.ProgramList]
Meter=String
Text=Program List
X=(#HomePage.P#)r
Y=(#Page.Items.P#*3)r
FontSize=(15*[Set.S])
StringAlign=CenterCenter
MeterStyle=StyleText
------------------------------------------------;Performance;--------------------------------------------------------------
[m.PerformanceBkg]
Meter=Shape
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*6)r
MeterStyle=StyleBkg

[m.PerformanceLogo]
Meter=String
Text=[\xe042]
X=(#HomePage.P#*1.7)
Y=(#Page.Items.P#*-1)r
FontSize=(60*[Set.S])
MeterStyle=StyleLogo

[m.PerformanceText]
Meter=String
Text=Performance Mode
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*3.5)r
FontSize=(12*[Set.S])
MeterStyle=StyleText

[m.PerformanceText1]
Meter=String
Text=Turn Off Windows resizing
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*2)r
FontSize=(12*[Set.S])
FontColor=#FontColor#,120
MeterStyle=StyleText

[Set.PerformanceMode0]
meter=shape
X=(#Set.W#-130*[Set.S])
Y=(#Page.Items.P#*41+#Scroll#)
MeterStyle=StyleToggle
LeftMouseUpAction=[!WriteKeyValue Variables Set.PerformanceMode 0 "#@#Vars.inc"][!Refresh #currentconfig#]

[Set.PerformanceMode1]
meter=shape
X=(#Set.W#-133*[Set.S])
Y=(#Page.Items.P#*41+#Scroll#)
MeterStyle=StyleToggle1
Hidden=#Set.PerformanceMode#
LeftMouseUpAction=[!WriteKeyValue Variables Set.PerformanceMode 1 "#@#Vars.inc"][!Refresh #currentconfig#]
------------------------------------------------;TaskBar;--------------------------------------------------------------
[m.TasbarBkg]
Meter=Shape
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*8)r
MeterStyle=StyleBkg

[m.TaskBarLogo]
Meter=String
Text=[\xe044]
X=(#HomePage.P#*1.6)
Y=(#Page.Items.P#*-0.4)r
FontSize=(60*[Set.S])
MeterStyle=StyleLogo

[m.TaskBarText]
Meter=String
Text=Add System Tray Icon
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*3)r
FontSize=(12*[Set.S])
MeterStyle=StyleText

[m.TaskBarText1]
Meter=String
Text=For ease to use
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*2)r
FontSize=(12*[Set.S])
FontColor=#FontColor#,120
MeterStyle=StyleText

[Set.SytemTray]
meter=shape
X=(#Set.W#-130*[Set.S])
Y=(#Page.Items.P#*52+#Scroll#)
MeterStyle=StyleToggle1
LeftMouseUpAction=[!activateConfig "#NekStart\Accessories\Tray Icon\"][!Refresh #currentconfig#]

[Set.SytemTray1]
meter=shape
X=(#Set.W#-133*[Set.S])
Y=(#Page.Items.P#*52+#Scroll#)
MeterStyle=StyleToggle
LeftMouseUpAction=[!DeactivateConfig "#NekStart\Accessories\Tray Icon\"][!Refresh #currentconfig#]
------------------------------------------------;Context;--------------------------------------------------------------
[m.ToolTipBkg]
Meter=Shape
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*8)r
MeterStyle=StyleBkg

[m.ToolTipLogo]
Meter=String
Text=[\xe043]
X=(#HomePage.P#*1.6)
Y=(#Page.Items.P#*2.5)r
FontSize=(30*[Set.S])
MeterStyle=StyleLogo

[m.ToolTipText]
Meter=String
Text=Enable Dark ToolTip
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*-0.2)r
FontSize=(12*[Set.S])
MeterStyle=StyleText

[m.ToolTipText1]
Meter=String
Text=For Better Looking
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*2)r
FontSize=(12*[Set.S])
FontColor=#FontColor#,120
MeterStyle=StyleText

[Set.ToolTip]
meter=shape
X=(#Set.W#-130*[Set.S])
Y=(#Page.Items.P#*63+#Scroll#)
MeterStyle=StyleToggle
LeftMouseUpAction=[!WriteKeyValue Variables DarkTools 0 "#@#Vars.inc"][!Refresh #currentconfig#]

[Set.ToolTip1]
meter=shape
X=(#Set.W#-133*[Set.S])
Y=(#Page.Items.P#*63+#Scroll#)
MeterStyle=StyleToggle1
LeftMouseUpAction=[!WriteKeyValue Variables DarkTools 1 "#@#Vars.inc"][!Refresh #currentconfig#]
Hidden=#DarkTools#
------------------------------------------------;Context;--------------------------------------------------------------
[m.ContexBkg]
Meter=Shape
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*8)r
MeterStyle=StyleBkg

[m.ContexLogo]
Meter=String
Text=[\xe045]
X=(#HomePage.P#*1.6)
Y=(#Page.Items.P#*2.5)r
FontSize=(30*[Set.S])
MeterStyle=StyleLogo

[m.ContexText]
Meter=String
Text=Enable Default Contex
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*-0.2)r
FontSize=(12*[Set.S])
MeterStyle=StyleText

[m.ContexText1]
Meter=String
Text=For Better Performance
X=(#HomePage.P#*2.3)
Y=(#Page.Items.P#*2)r
FontSize=(12*[Set.S])
FontColor=#FontColor#,120
MeterStyle=StyleText

[m.ContexActivate]
Meter=Shape
X=(#Set.W#-250*[Set.S])
Y=(#Page.Items.P#*-2.5)r
LeftMouseUpAction=[!WriteKeyValue Variables DefaultContex  1 "#@#Vars.inc"][!WriteKeyValue Variables Contex  0 "#@#Vars.inc"][!WriteKeyValue Variables Contextext  !DisableNow "#@#Vars.inc"][!WriteKeyValue Variables   @includeCtx  ""][!Refresh #currentconfig#]
MeterStyle=StyleSmall
Hidden=#DefaultContex#

[m.ContexActivate1]
Meter=Shape
X=(#Set.W#-250*[Set.S])
Y=(#Page.Items.P#*73+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables DefaultContex  0 "#@#Vars.inc"][!WriteKeyValue Variables Contex  1 "#@#Vars.inc"][!WriteKeyValue Variables Contextext  !EnableNow "#@#Vars.inc"][!WriteKeyValue Variables  @includeCtx  "#SKINSPATH##NekStart\NekShell\}{CtxItms.inc"][!Refresh #currentconfig#]
MeterStyle=StyleSmall
Hidden=#Contex#

[m.Contex1]
Meter=String
Text=#Contextext#
X=(#HomePage.P#)r
Y=(#Page.Items.P#*3)r
FontSize=(15*[Set.S])
StringAlign=CenterCenter
MeterStyle=StyleText
------------------------------------------------;ContextEnabled;--------------------------------------------------------------
[m.EnabledContexBkg]
Meter=Shape
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*4)r
MeterStyle=StyleBkg

[m.ContexTextEnabled]
Meter=String
Text=Choose Dark Mode
X=(#HomePage.P#*1.6)
Y=(#Page.Items.P#*3)r
FontSize=(20*[Set.S])
MeterStyle=StyleText

[Set.Context]
meter=shape
X=(#Set.W#-130*[Set.S])
Y=(#Page.Items.P#*83+#Scroll#)
MeterStyle=StyleToggle
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode 0 "#@#Vars.inc"][!Refresh #currentconfig#]

[Set.Context1]
meter=shape
X=(#Set.W#-133*[Set.S])
Y=(#Page.Items.P#*83+#Scroll#)
MeterStyle=StyleToggle1
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode 1 "#@#Vars.inc"][!Refresh #currentconfig#]
Hidden=#DarkMode#

[m.ContexWater]
Meter=Shape
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*-3)r
Shape=Rectangle 0,0,(#Set.W#-#HomePage.P#*1.7),(#Page.Items.H#*1.5) | StrokeWidth 0 | Extend This
This=Fill Color 0,0,0,100
Container=#Sec.Container#
RightMouseUpAction=[]
MouseLeaveAction=[]
MouseOverAction=
LeftMouseUpAction=[]
MouseActionCursor=0
DynamicVariables=1
Hidden=#DefaultContex#

[m.WaterLine]
Meter=Shape
X=(#HomePage.P#*1.45)
Y=(#Page.Items.P#*80+#Scroll#)
Shape=Line 0,0,(#Set.W#-#HomePage.P#*1.8),0 | StrokeWidth (2*[Set.S]) | Stroke Color #FontColor# | StrokeStartCap Round | StrokeEndCap Round
DynamicVariables=1
Container=#Sec.Container#
--------------------------------------------------------------------------------------------------------------
                                                    SideBar
--------------------------------------------------------------------------------------------------------------
@includeSideBars=#ROOTCONFIGPATH#\ConfigContents\SideBars.inc
------------------------------------------------;Styles;--------------------------------------------------------------
[EffectStyle]
Shape=Rectangle 0,0,((16*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(6*[Set.S]),(6*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.SubTextColor#,75 "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.WindowsControls# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
DynamicVariables=1
Group=Big
Hidden=1

[Set.Text]
FontSize=(10*[Set.S])
FontFace=#FontText#
AntiAlias=1
FontColor=#FontColor#,175
DynamicVariables=1
Group=Big
Hidden=1
------------------------------------------------;Effect;--------------------------------------------------------------
[Effect]
Meter=Shape
X=(#Page.Items.Content.P#*1.8)
Y=(450*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Settings][!RainmeterRefreshApp]
MeterStyle=EffectStyle

[Effect1]
Meter=Shape
X=(#Page.Items.Content.P#*1.8)
Y=(620*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
LeftMouseUpAction=[!WriteKeyValue Variables LastCat OwnSet\General][!RainmeterRefreshApp]
MeterStyle=EffectStyle

[Effect2]
Meter=Shape
X=(#Page.Items.Content.P#*1.8)
Y=(720*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
LeftMouseUpAction=[!WriteKeyValue Variables LastCat OwnSet\Appearence][!RainmeterRefreshApp]
MeterStyle=EffectStyle
------------------------------------------------;main;--------------------------------------------------------------
[Bkg]
Meter=Shape
Shape=Rectangle 0,0,((-35)*[Set.S]+#Set.P#*2),(40*[Set.S]),(12*[Set.S]),(12*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=(#Page.Items.Content.P#*3.3)
Y=(592*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
DynamicVariables=1

[LogoFont]
Meter=String
Text=[\xe038]
X=(40*[Set.S])
Y=(80*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
FontWeight=100
AntiAlias=1
FontSize=(60*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
DynamicVariables=1

[m.String1]
Meter=String
X=(#Page.Items.Content.P#*2)
Y=(#Page.Items.H#-#Page.Items.Content.P#*-4)r
Text=#NekSt..
FontSize=(12*[Set.S])
FontWeight=650
FontFace=#FontText#
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
AntiAlias=1
Group=Small
DynamicVariables=1

[m.String2]
Meter=String
X=(#Page.Items.Content.P#*2)
Y=(#Page.Items.H#/6-#Page.Items.Content.P#)r
Text=#NekStart
FontSize=(12*[Set.S])
FontWeight=650
FontFace=#FontText#
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
AntiAlias=1
Group=Big
Hidden=1
DynamicVariables=1

[m.Navigator]
Meter=String
X=(#Page.Items.Content.P#*3)
Y=(400*[Set.S]/2-35*[Set.S]+#Set.TitleBarH#)
Text=Nav..
FontSize=(15*[Set.S])
FontFace=#FontText#
AntiAlias=1
FontWeight=900
FontColor=#FontColor#
Group=Small
DynamicVariables=1

[m.Navigator1]
Meter=String
X=(#Page.Items.Content.P#*3)
Y=(400*[Set.S]/2-35*[Set.S]+#Set.TitleBarH#)
Text=Navigator
FontSize=(15*[Set.S])
FontFace=#FontText#
AntiAlias=1
FontWeight=900
FontColor=#FontColor#
DynamicVariables=1
Group=Big
Hidden=1

[BackImage]
Meter=image
ImageName=#@#Materials\Images\Back.png
X=(#Page.Items.Content.P#*4)
Y=(#Page.Items.Content.P#*5)r
W=(#Page.Items.H#-#Page.Items.Content.P#*3)
H=(#Page.Items.H#-#Page.Items.Content.P#*3)
DynamicVariables=1

[m.BackText]
Meter=String
X=(#Page.Items.Content.P#*9)
Y=(438*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Text=Back
MeterStyle=Set.Text

[m.Selector]
Meter=String
X=(#Page.Items.Content.P#*3)
Y=(530*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Text=Beh..
FontSize=(15*[Set.S])
FontFace=#FontText#
AntiAlias=1
FontWeight=900
FontColor=#FontColor#
Group=Small
DynamicVariables=1

[m.Selector1]
Meter=String
X=(#Page.Items.Content.P#*3)
Y=(530*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Text=Behaviour
FontSize=(15*[Set.S])
FontFace=#FontText#
AntiAlias=1
FontWeight=900
FontColor=#FontColor#
DynamicVariables=1
Group=Big
Hidden=1

[m.General]
Meter=String
Text=[\xe005]
X=(#Page.Items.Content.P#*4.5)
Y=(610*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
FontSize=(20*[Set.S])
FontColor=#FontColor#
FontFace=#FontLogo#
Antialias=1
DynamicVariables=1

[m.GeneralText1]
Meter=String
X=(#Page.Items.Content.P#*9)
Y=(620*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Text=General
MeterStyle=Set.Text

[m.Appearence]
Meter=String
Text=[\xe028]
X=(#Page.Items.Content.P#*4.5)
Y=(710*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
FontSize=(20*[Set.S])
FontColor=#FontColor#
FontFace=#FontLogo#
Antialias=1
DynamicVariables=1

[m.AppearnceText]
Meter=String
X=(#Page.Items.Content.P#*9)
Y=(720*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Text=Appearence
MeterStyle=Set.Text
----------------------------------------------------;Anchor;----------------------------------------------------------
[AnchorPuller]
Meter=String
DynamicVariables=1
x=r
Y=[Set.Context1:YH]
Container=BC