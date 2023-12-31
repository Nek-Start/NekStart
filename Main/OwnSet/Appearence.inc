[Variables]
Page.Items.P=(10*[Set.S])
Page.Items.H=(60*[Set.S])
Page.Items.Content.P=(10*[Set.S])

[WindowsString]
Meter=String
Text=Settings
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

[StyleText1]
FontColor=#FontColor#
FontFace=#FontText#
Antialias=1
Container=#Sec.Container#
DynamicVariables=1
FontWeight=900
FontSize=(12*[Set.S])
Group=Themes
Hidden=1

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

[LinesStyle]
Shape=Line 0,0,((#HomePage.P#*4)/2),0 | StrokeWidth (1*[Set.S]) | Stroke Color #FontColor#,75 | StrokeStartCap Round | StrokeEndCap Round
DynamicVariables=1
Container=#Sec.Container#
Group=Themes
Hidden=1

[ThemeStyle]
Shape=Rectangle 0,0,((#HomePage.P#*4.5)/2),(#Page.Items.H#-25*[Set.S]),(4*[Set.S]),(4*[Set.S])| StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
Group=Themes
Hidden=1

[ColorToggle]
Shape=Ellipse (25*[Set.S]),(25*[Set.S]),(20*[Set.S]),(20*[Set.S])| StrokeWidth 0 | Fill Color #m.SubTextColor1#,75
Shape2=Ellipse (25*[Set.S]),(25*[Set.S]),(10*[Set.S]),(10*[Set.S])| StrokeWidth (2*[Set.S]) | Extend That  | Extend This 
That=StrokeColor #m.SubTextColor#,75
MouseOverAction=[!SetOption #CURRENTSECTION# That "StrokeColor #m.SubTextColor#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# That "StrokeColor #m.SubTextColor1#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=#Sec.Container#
DynamicVariables=1

[ColorLine]
Shape=Line 0,0,(#Set.W#-#HomePage.P#-92*[Set.S]),0 | StrokeWidth (1*[Set.S]) | Stroke Color #FontColor#,75 | StrokeStartCap Round | StrokeEndCap Round
DynamicVariables=1
Container=#Sec.Container#

[Meter]
StringAlign=Center
FontFace=#FontText#
FontColor=#Fontcolor#
FontSize=(10*[Set.S])
AntiAlias=1
DynamicVariables=1
Container=#Sec.Container#
-----------------------------------------------------------------------------------------------------------------------
                                                 Contents
-----------------------------------------------------------------------------------------------------------------------
[m.AppearenceText]
Meter=String
Text=Appearance
X=(#HomePage.P#*1.4)r
Y=(#Page.Items.P#*4.4+#Scroll#)R
FontSize=(25*[Set.S])
FontWeight=900
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
MeterStyle=StyleText

[m.LayoutsText]
Meter=String
Text=Layouts
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*7)r
FontSize=(15*[Set.S])
FontWeight=900
MeterStyle=StyleText

[Set.LayoutsText]
Meter=String
Text=Nek Appearance Style
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*6)r
FontSize=(12*[Set.S])
MeterStyle=StyleText

[m.LayoutsSelect]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*-2)r
Shape=Rectangle 0,0,((#HomePage.P#*4.5)/2),(#Page.Items.H#-10*[Set.S]),(4*[Set.S]),(4*[Set.S])| StrokeWidth 0 | Extend This
This=Fill Color #m.SubTextColor1#,75
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1# ,100"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup Themes][!Update]
Container=#Sec.Container#
DynamicVariables=1

[m.LayoutsSelectText]
Meter=String
Text=#Layout#
X=(#Set.W#-100*[Set.S])
Y=(#Page.Items.P#*2.5)r
FontSize=(10*[Set.S])
StringAlign=RightCenter
MeterStyle=StyleText

[m.VersionLogo]
Meter=String
Text=[\xe027]
X=(#Set.W#-80*[Set.S])
Y=(#Page.Items.P#*-1)r
FontSize=(20*[Set.S])
MeterStyle=StyleLogo
------------------------------------------------;Styling;--------------------------------------------------------------
[m.StylingText]
Meter=String
Text=Styling
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*22+#Scroll#)
FontSize=(15*[Set.S])
FontWeight=900
MeterStyle=StyleText

[Set.StylingText]
Meter=String
Text=Font Color
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*29+#Scroll#)
FontSize=(12*[Set.S])
MeterStyle=StyleText

[FontColor]
Meter=Shape
X=(#Set.W#-100*[Set.S])
Y=(#Page.Items.P#*27+#Scroll#)
This=Fill Color #FontColor#
MeterStyle=ColorToggle
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=FontColor" "FileName=#@#Vars.inc" ][!RainmeterRefreshApp]

[FontLine]
Meter=Shape
X=(140*[Set.S])
Y=(#Page.Items.P#*32.5+#Scroll#)
MeterStyle=ColorLine

[Set.FaceText]
Meter=String
Text=Font Face
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*34.5+#Scroll#)
FontSize=(12*[Set.S])
MeterStyle=StyleText

[MeterNameCode]
Meter=String
X=(#Set.W#-180*[Set.S])
Y=(#Page.Items.P#*29+#Scroll#)
Text=#FontColor#
LeftMouseUpAction=[!PluginBang "MeterInputName ExecuteBatch 1"]
MeterStyle=Meter

[MeterInputName]
Measure=Plugin
Plugin=InputText.dll
X=(#Set.W#-223*[Set.S])
Y=(578*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#+#Scroll#)
W=(85*[Set.S])
H=(20*[Set.S])
SolidColor=#m.WindowsControls#
AntiAlias=1
FocusDismiss=1
StringAlign=Center
FontFace=#FontText#
FontColor=#Fontcolor#
FontSize=(10*[Set.S])
DefaultValue="#FontColor#"
DynamicVariables=1
Container=#Sec.Container#
Command1=[!WriteKeyValue Variables FontColor "$UserInput$" "#@#Vars.inc"][!RainmeterRefreshApp]
------------------------------------------------;Face;--------------------------------------------------------------
[m.FaceSelect]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*4)r
Shape=Rectangle 0,0,((#HomePage.P#*4.5)/2),(#Page.Items.H#-10*[Set.S]),(4*[Set.S]),(4*[Set.S])| StrokeWidth 0 | Extend This
This=Fill Color #m.SubTextColor1#,75
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1# ,100"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!PluginBang "MeterInputName1 ExecuteBatch 1"]
Container=#Sec.Container#
DynamicVariables=1

[m.FaceText]
Meter=String
Text=#FontText#
X=(#Set.W#-80*[Set.S])
Y=(#Page.Items.P#*2.5)r
FontSize=(10*[Set.S])
StringAlign=RightCenter
MeterStyle=StyleText

[MeterInputName1]
Measure=Plugin
Plugin=InputText.dll
X=(#Set.W#-255*[Set.S])
Y=(688*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#+#Scroll#)
W=(180*[Set.S])
H=(20*[Set.S])
SolidColor=#m.WindowsControls#
AntiAlias=1
FocusDismiss=1
StringAlign=Center
FontFace=#FontText#
FontColor=#Fontcolor#
FontSize=(10*[Set.S])
DefaultValue="#FontText#"
DynamicVariables=1
Container=#Sec.Container#
Command1=[!WriteKeyValue Variables FontText "$UserInput$" "#@#Vars.inc"][!RainmeterRefreshApp]

[FaceLine]
Meter=Shape
X=(140*[Set.S])
Y=(#Page.Items.P#*38.8+#Scroll#)
MeterStyle=ColorLine
------------------------------------------------;Coloring;--------------------------------------------------------------
[m.FillText]
Meter=String
Text=Fill and Coloring
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*41+#Scroll#)
FontSize=(15*[Set.S])
FontWeight=900
MeterStyle=StyleText

[Set.FillText]
Meter=String
Text=Primary BackGround Color
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*47+#Scroll#)
FontSize=(12*[Set.S])
MeterStyle=StyleText

[Color1]
Meter=Shape
X=(#Set.W#-100*[Set.S])
Y=(#Page.Items.P#*45+#Scroll#)
This=Fill Color #m.BackGroundColor#
MeterStyle=ColorToggle
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=m.BackGroundColor" "FileName=#@#Vars.inc"  "!RainmeterRefreshApp"]

[FillLine]
Meter=Shape
X=(140*[Set.S])
Y=(#Page.Items.P#*51+#Scroll#)
MeterStyle=ColorLine

[Set.FillText1]
Meter=String
Text=Secondary BackGround Color
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*53.5+#Scroll#)
FontSize=(12*[Set.S])
MeterStyle=StyleText

[Color2]
Meter=Shape
X=(#Set.W#-100*[Set.S])
Y=(#Page.Items.P#*52+#Scroll#)
This=Fill Color #m.WindowsControls#
MeterStyle=ColorToggle
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=m.WindowsControls" "FileName=#@#Vars.inc"  "!RainmeterRefreshApp"]

[FillLine1]
Meter=Shape
X=(140*[Set.S])
Y=(#Page.Items.P#*58+#Scroll#)
MeterStyle=ColorLine

[Set.FillText2]
Meter=String
Text=Tertiary BackGround Color
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*60.5+#Scroll#)
FontSize=(12*[Set.S])
MeterStyle=StyleText

[Color3]
Meter=Shape
X=(#Set.W#-100*[Set.S])
Y=(#Page.Items.P#*59+#Scroll#)
This=Fill Color #m.LogoBar#
MeterStyle=ColorToggle
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=m.LogoBar" "FileName=#@#Vars.inc"  "!RainmeterRefreshApp"]

[FillLine2]
Meter=Shape
X=(140*[Set.S])
Y=(#Page.Items.P#*65+#Scroll#)
MeterStyle=ColorLine

[Set.FillText3]
Meter=String
Text=Primary Accent Color
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*67.5+#Scroll#)
FontSize=(12*[Set.S])
MeterStyle=StyleText

[Color4]
Meter=Shape
X=(#Set.W#-100*[Set.S])
Y=(#Page.Items.P#*66+#Scroll#)
This=Fill Color #m.AccentColor#
MeterStyle=ColorToggle
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=m.AccentColor" "FileName=#@#Vars.inc" "!RainmeterRefreshApp"]

[FillLine3]
Meter=Shape
X=(140*[Set.S])
Y=(#Page.Items.P#*72+#Scroll#)
MeterStyle=ColorLine

[Set.FillText4]
Meter=String
Text=Secondary Accent Color
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*74.5+#Scroll#)
FontSize=(12*[Set.S])
MeterStyle=StyleText

[Color5]
Meter=Shape
X=(#Set.W#-100*[Set.S])
Y=(#Page.Items.P#*73.5+#Scroll#)
This=Fill Color #m.AccentColor1#
MeterStyle=ColorToggle
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=m.AccentColor1" "FileName=#@#Vars.inc" "!RainmeterRefreshApp"]

[MeterNameCode2]
Meter=String
X=(#Set.W#-180*[Set.S])
Y=(#Page.Items.P#*47+#Scroll#)
Text=#m.BackGroundColor#
LeftMouseUpAction=[!PluginBang "MeterInputName2 ExecuteBatch 1"]
MeterStyle=Meter

[MeterInputName2]
Measure=Plugin
Plugin=InputText.dll
X=(#Set.W#-223*[Set.S])
Y=(938*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#+#Scroll#)
W=(85*[Set.S])
H=(20*[Set.S])
SolidColor=#m.WindowsControls#
AntiAlias=1
FocusDismiss=1
StringAlign=Center
FontFace=#FontText#
FontColor=#Fontcolor#
FontSize=(10*[Set.S])
DefaultValue="#m.BackGroundColor#"
DynamicVariables=1
Container=#Sec.Container#
Command1=[!WriteKeyValue Variables m.BackGroundColor "$UserInput$" "#@#Vars.inc"][!RainmeterRefreshApp]

[MeterNameCode3]
Meter=String
X=(#Set.W#-180*[Set.S])
Y=(#Page.Items.P#*54+#Scroll#)
Text=#m.WindowsControls#
LeftMouseUpAction=[!PluginBang "MeterInputName3 ExecuteBatch 1"]
MeterStyle=Meter

[MeterInputName3]
Measure=Plugin
Plugin=InputText.dll
X=(#Set.W#-223*[Set.S])
Y=(922*[Set.S]/2+80*[Set.S]+#Set.TitleBarH#+#Scroll#)
W=(85*[Set.S])
H=(20*[Set.S])
SolidColor=#m.WindowsControls#
AntiAlias=1
FocusDismiss=1
StringAlign=Center
FontFace=#FontText#
FontColor=#Fontcolor#
FontSize=(10*[Set.S])
DefaultValue="#m.WindowsControls#"
DynamicVariables=1
Container=#Sec.Container#
Command1=[!WriteKeyValue Variables m.WindowsControls "$UserInput$" "#@#Vars.inc"][!RainmeterRefreshApp]

[MeterNameCode4]
Meter=String
X=(#Set.W#-180*[Set.S])
Y=(#Page.Items.P#*61+#Scroll#)
Text=#m.LogoBar#
LeftMouseUpAction=[!PluginBang "MeterInputName4 ExecuteBatch 1"]
MeterStyle=Meter

[MeterInputName4]
Measure=Plugin
Plugin=InputText.dll
X=(#Set.W#-223*[Set.S])
Y=(988*[Set.S]/2+117*[Set.S]+#Set.TitleBarH#+#Scroll#)
W=(85*[Set.S])
H=(20*[Set.S])
SolidColor=#m.WindowsControls#
AntiAlias=1
FocusDismiss=1
StringAlign=Center
FontFace=#FontText#
FontColor=#Fontcolor#
FontSize=(10*[Set.S])
DefaultValue="#m.LogoBar#"
DynamicVariables=1
Container=#Sec.Container#
Command1=[!WriteKeyValue Variables m.LogoBar "$UserInput$" "#@#Vars.inc"][!RainmeterRefreshApp]

[MeterNameCode5]
Meter=String
X=(#Set.W#-180*[Set.S])
Y=(#Page.Items.P#*68+#Scroll#)
Text=#m.AccentColor#
LeftMouseUpAction=[!PluginBang "MeterInputName5 ExecuteBatch 1"]
MeterStyle=Meter

[MeterInputName5]
Measure=Plugin
Plugin=InputText.dll
X=(#Set.W#-223*[Set.S])
Y=(988*[Set.S]/2+188*[Set.S]+#Set.TitleBarH#+#Scroll#)
W=(85*[Set.S])
H=(20*[Set.S])
SolidColor=#m.WindowsControls#
AntiAlias=1
FocusDismiss=1
StringAlign=Center
FontFace=#FontText#
FontColor=#Fontcolor#
FontSize=(10*[Set.S])
DefaultValue="#m.AccentColor#"
DynamicVariables=1
Container=#Sec.Container#
Command1=[!WriteKeyValue Variables m.AccentColor "$UserInput$" "#@#Vars.inc"][!RainmeterRefreshApp]

[MeterNameCode6]
Meter=String
X=(#Set.W#-180*[Set.S])
Y=(#Page.Items.P#*76+#Scroll#)
Text=#m.AccentColor1#
LeftMouseUpAction=[!PluginBang "MeterInputName6 ExecuteBatch 1"]
MeterStyle=Meter

[MeterInputName6]
Measure=Plugin
Plugin=InputText.dll
X=(#Set.W#-223*[Set.S])
Y=(988*[Set.S]/2+265*[Set.S]+#Set.TitleBarH#+#Scroll#)
W=(85*[Set.S])
H=(20*[Set.S])
SolidColor=#m.WindowsControls#
AntiAlias=1
FocusDismiss=1
StringAlign=Center
FontFace=#FontText#
FontColor=#Fontcolor#
FontSize=(10*[Set.S])
DefaultValue="#m.AccentColor1#"
DynamicVariables=1
Container=#Sec.Container#
Command1=[!WriteKeyValue Variables m.AccentColor1 "$UserInput$" "#@#Vars.inc"][!RainmeterRefreshApp]
------------------------------------------------;Themes;--------------------------------------------------------------
[BkgShape1]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.P#*15+#Scroll#)
Shape=Rectangle 0,0,((#HomePage.P#*4.5)/2),(#Page.Items.H#*7.5),(4*[Set.S]),(4*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
MouseLeaveAction=[!HideMeterGroup Themes][!Update]
DynamicVariables=1
Group=Themes
Hidden=1

[m.ThemeSelector]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*16+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 0,0,0,100 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 25,47,102 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 25,47,102 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 44,59,98 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 12,137,232 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 0,255,76 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 255,255,255 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll  120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout NekUIv1 "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector1]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*20+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 250,250,250 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 238,238,238 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 238,238,238 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 255,255,255 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 255,180,0 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 243,58,0 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 10,10,10 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Light "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector2]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*24+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 18,18,18 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 28,28,28 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 48,28,145 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 243,58,0 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 255,255,255 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll  120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1  35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Dark "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector3]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*28+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 18,18,18 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 28,28,28 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 49,49,49 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 145,145,145 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 255,255,255 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1  35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Modern "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector4]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*32+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 45,166,45 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 148,255,148 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 148,255,148 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 186,255,186 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 158,71,21 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 27,190,227 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 10,10,10 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Nature "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector5]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*36+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 0,0,0 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 28,28,28 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 150,150,150 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 75,75,75 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 255,255,255 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Classic "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector6]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*40+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 16,184,196 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 97,244,255 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 97,244,255 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 166,249,255 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 14,61,115 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 29,16,204 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 10,10,10 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Skyer "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector7]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*44+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 141,12,153 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 239,59,255 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 239,59,255 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 245,133,255 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 64,75,199 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 14,61,115 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 10,10,10 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Anime "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector8]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*48+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 115,6,8 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 247,35,38 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 247,35,38 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 255,102,105 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 54,21,93 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 249,188,90 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 10,10,10 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Ambold "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector9]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*52+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 18,18,18 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 28,28,28 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 246,178,59 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 246,178,59 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 255,255,255 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout GoldenInsider "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelector10]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*56+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables m.BackGroundColor 18,18,18 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.WindowsControls 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables m.LogoBar 28,28,28 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.AccentColor1 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables m.SubTextColor1 120,120,130 "#@#Vars.inc"][!WriteKeyValue Variables FontColor 255,255,255 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll 120,120,120 "#@#Vars.inc"][!WriteKeyValue Variables Set.Scroll1 35,35,35 "#@#Vars.inc"][!WriteKeyValue Variables Layout Galaxy "#@#Vars.inc"][!RainmeterRefreshApp]
MeterStyle=ThemeStyle

[m.ThemeSelect]
Meter=String
Text=NekUI v1
X=(#Set.W#-220*[Set.S])
Y=(#Page.Items.P#*18+#Scroll#)
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*20+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect1]
Meter=String
Text=Light Theme
X=(#Set.W#-205*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line1]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*24+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect2]
Meter=String
Text=Dark Theme
X=(#Set.W#-205*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line2]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*28+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect3]
Meter=String
Text=Modern
X=(#Set.W#-220*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line3]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*32+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect4]
Meter=String
Text=Nature
X=(#Set.W#-225*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line4]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*36+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect5]
Meter=String
Text=Classic
X=(#Set.W#-225*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line6]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*40+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect6]
Meter=String
Text=Skyer
X=(#Set.W#-230*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line6]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*44+#Scroll#)
MeterStyle=LinesStyle

[Line7]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*44+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect8]
Meter=String
Text=Anime
X=(#Set.W#-230*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line9]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*48+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect9]
Meter=String
Text=Ambold
X=(#Set.W#-225*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line10]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*52+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect10]
Meter=String
Text=Golden Insider
X=(#Set.W#-200*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line11]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*56+#Scroll#)
MeterStyle=LinesStyle

[m.ThemeSelect12]
Meter=String
Text=Galaxy
X=(#Set.W#-225*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line12]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*56+#Scroll#)
MeterStyle=LinesStyle
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
X=(#Page.Items.Content.P#*3.1)
Y=(690*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
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
Y=[Color5:YH]
Container=BC