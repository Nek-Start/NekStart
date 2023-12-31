[Variables]
Page.Items.P=(10*[Set.S])
Page.Items.H=(60*[Set.S])
Page.Items.Content.P=(10*[Set.S])

[WindowsString]
Meter=String
Text=Top SearchBars
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

[TypeText]
FontColor=#IndicatorColor#
FontFace=#FontText#
Antialias=1
Container=#Sec.Container#
FontSize=(12*[Set.S])
DynamicVariables=1

[StyleLogo]
FontColor=#FontColor#
FontFace=#FontLogo#
Antialias=1
Container=#Sec.Container#
DynamicVariables=1
-----------------------------------------------------------------------------------------------------------------------
                                                 Contents
-----------------------------------------------------------------------------------------------------------------------
----------------------------------------------------;Content;----------------------------------------------------------
@includeMain="#SKINSPATH#\Top SearchBars\StartShell\Settings\Engines.inc"
----------------------------------------------------;m.NotInstallInform;----------------------------------------------------------
[m.Not Install]
Meter=String
X=(#Page.Items.Content.P#*30)
Y=(#Page.Items.H#*6-#Page.Items.Content.P#+#Scroll#)
Text= Unfortunately Top SearchBars#CrLf#are not install in your Computer go to NekStore to#CRLF#install Top SearchBars
FontSize=(15*[Set.S])
FontFace=#FontText#
FontColor=#IndicatorColor#
AntiAlias=1
Container=#Sec.Container#
DynamicVariables=1

[m.Sad]
Meter=String
X=(#Page.Items.Content.P#*45)
Y=(#Page.Items.H#*8-#Page.Items.Content.P#+#Scroll#)
Text=[\xe035]
FontSize=(32*[Set.S])
FontFace=#FontLogo#
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
AntiAlias=1
Container=#Sec.Container#
DynamicVariables=1

[m.Sad1]
Meter=String
X=(#Page.Items.Content.P#*50)
Y=(#Page.Items.H#*8-#Page.Items.Content.P#+#Scroll#)
Text=[\xe035]
FontSize=(32*[Set.S])
FontFace=#FontLogo#
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
AntiAlias=1
Container=#Sec.Container#
DynamicVariables=1
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
------------------------------------------------;main;--------------------------------------------------------------
[NeededWalpaperImgSide]
Meter=image
ImageName=#@#Materials\Images\Needed Wallpaper.png
X=(30*[Set.S])
Y=(160*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
W=(#Page.Items.H#-#Page.Items.Content.P#)
H=(#Page.Items.H#-#Page.Items.Content.P#)
DynamicVariables=1

[m.String1]
Meter=String
X=(#Page.Items.Content.P#*2)
Y=(#Page.Items.H#-#Page.Items.Content.P#*-0.1)r
Text=Top Sea..
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
Text=Top SearchBars
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
----------------------------------------------------;SideBar;----------------------------------------------------------
@include="#SKINSPATH#\Top SearchBars\StartShell\Settings\SidebarsDes.inc"
----------------------------------------------------;Anchor;----------------------------------------------------------

[AnchorPuller]
Meter=String
DynamicVariables=1
x=r
Y=[EngineShape8:YH]
Container=BC