---------------------------------------;m.PageSelector;-------------------------------------------------------
[m.PageSelector]
Meter=Shape
X=(#Set.WinB#/3)
Y=(#Set.H#-#Sec.selector_height#+2)
Shape=Rectangle 0,0,(#Set.W#),(#Sec.selector_height#) | StrokeWidth 0 | Fill Color #m.WindowsControls#
DynamicVariables=1
---------------------------------------;m.Effects;-------------------------------------------------------
[AboutEffect]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.SubTextColor#,75 "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.WindowsControls# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
X=((#Set.W#/2-((140*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat About][!RainmeterRefreshApp]

[NS StoreEffect]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.SubTextColor#,75 "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.WindowsControls# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
X=((#Set.W#/2-((10*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Store][!RainmeterRefreshApp]

[Y-HubEffect]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.SubTextColor#,75 "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.WindowsControls# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
X=((#Set.W#/2-((-120*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Y-Hub][!RainmeterRefreshApp]
---------------------------------------;m.Bkg;-------------------------------------------------------
[AboutBkg]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=((#Set.W#/2-((140*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1

[NS StoreBkg]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=((#Set.W#/2-((10*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1

[Y-HubBkg]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=((#Set.W#/2-((-120*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1
---------------------------------------;m.Logo;-------------------------------------------------------
[AboutLogo]
Meter=String
X=((#Set.W#/2-((130*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=[\xe030]
FontSize=(20*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
FontWeight=500
AntiAlias=1
DynamicVariables=1

[NS StoreLogo]
Meter=String
X=((#Set.W#/2-((-1*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=[\xe029]
FontSize=(20*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
FontWeight=500
AntiAlias=1
DynamicVariables=1

[Y-HubLogo]
Meter=String
X=((#Set.W#/2-((-135*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=[\xe032]
FontSize=(20*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
FontWeight=900
AntiAlias=1
DynamicVariables=1
---------------------------------------;m.String;-------------------------------------------------------
[AboutString]
Meter=String
X=((#Set.W#/2-((110*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-13*[Set.S])
Text=About#CRLF#Develepor
FontSize=(10*[Set.S])
FontFace=#FontText#
FontColor=#FontColor#
FontWeight=900
AntiAlias=1
DynamicVariables=1

[NS StoreString]
Meter=String
X=((#Set.W#/2-((-20*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=NS Store
FontSize=(15*[Set.S])
FontFace=#FontText#
FontColor=#FontColor#
AntiAlias=1
DynamicVariables=1

[Y-HubString]
Meter=String
X=((#Set.W#/2-((-155*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=Y-Hub
FontSize=(15*[Set.S])
FontFace=#FontText#
FontColor=#FontColor#
AntiAlias=1
DynamicVariables=1
---------------------------------------;m.Next;-------------------------------------------------------
[NextBkg]
Meter=Shape
Shape=Rectangle 0,0,((-60)*[Set.S]+#Set.P#*3),(35*[Set.S]),(5*[Set.S]),(5*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.SubTextColor#,75 
NekGrad=45 | #m.SubTextColor1# ; 1 | #m.SubTextColor1# ;0
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill LinearGradient NekGrad | "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.SubTextColor#,75 |"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
X=(20*[Set.S])
Y=(#Set.H#-#Sec.selector_height#/2-12*[Set.S])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Home][!RainmeterRefreshApp]

[NextLogo]
Meter=String
X=(25*[Set.S])r
Y=(8*[Set.S])r
Text=[\xe020]
FontSize=(15*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
FontWeight=900
AntiAlias=1
DynamicVariables=1


