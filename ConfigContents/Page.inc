---------------------------------------;m.PageSelector;-------------------------------------------------------
[m.PageSelector]
Meter=Shape
X=(#Set.WinB#/2)
Y=(#Set.H#-#Sec.selector_height#+2)
Shape=Rectangle 0,0,(#Set.W#),(#Sec.selector_height#) | StrokeWidth 0 | Fill Color #m.WindowsControls#
DynamicVariables=1
---------------------------------------;m.Effects;-------------------------------------------------------
[HomeEffect]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.SubTextColor#,75 "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.WindowsControls# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
X=((#Set.W#/2-((140*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Home][!RainmeterRefreshApp]

[LibraryEffect]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.SubTextColor#,75 "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.WindowsControls# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
X=((#Set.W#/2-((10*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Library][!WriteKeyValue Variables LibraryCat Page01][!RainmeterRefreshApp]

[SettingsEffect]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.SubTextColor#,75 "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #m.WindowsControls# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
X=((#Set.W#/2-((-120*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Settings][!RainmeterRefreshApp]
---------------------------------------;m.Bkg;-------------------------------------------------------
[HomeBkg]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=((#Set.W#/2-((140*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1

[LibraryBkg]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=((#Set.W#/2-((10*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1

[SettingsBkg]
Meter=Shape
Shape=Rectangle 0,0,((10*4)*[Set.S]+#Set.P#*3),(45*[Set.S]),(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=((#Set.W#/2-((-120*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-17*[Set.S])
DynamicVariables=1
---------------------------------------;m.Logo;-------------------------------------------------------
[HomeLogo]
Meter=String
X=((#Set.W#/2-((130*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=[\xe019]
FontSize=(20*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
FontWeight=500
AntiAlias=1
DynamicVariables=1

[LibraryLogo]
Meter=String
X=((#Set.W#/2-((-1*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=[\xe018]
FontSize=(20*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
FontWeight=500
AntiAlias=1
DynamicVariables=1

[SettingsLogo]
Meter=String
X=((#Set.W#/2-((-135*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=[\xe005]
FontSize=(20*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
FontWeight=900
AntiAlias=1
DynamicVariables=1
---------------------------------------;m.String;-------------------------------------------------------
[HomeString]
Meter=String
X=((#Set.W#/2-((110*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=Home
FontSize=(15*[Set.S])
FontFace=#FontText#
FontColor=#FontColor#
AntiAlias=1
DynamicVariables=1

[LibraryString]
Meter=String
X=((#Set.W#/2-((-20*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=Library
FontSize=(15*[Set.S])
FontFace=#FontText#
FontColor=#FontColor#
AntiAlias=1
DynamicVariables=1

[SettingsString]
Meter=String
X=((#Set.W#/2-((-150*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.H#-#Sec.selector_height#/2-7*[Set.S])
Text=Settings
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
X=((#Set.W#-120*[Set.S])+20*[Set.S])
Y=(#Set.H#-#Sec.selector_height#/2-12*[Set.S])
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat About][!RainmeterRefreshApp]

[NextLogo]
Meter=String
X=(25*[Set.S])r
Y=(8*[Set.S])r
Text=[\xe021]
FontSize=(15*[Set.S])
FontFace=#FontLogo#
FontColor=#FontColor#
FontWeight=900
AntiAlias=1
DynamicVariables=1


