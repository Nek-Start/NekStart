[LibraryBkg]
[SettingsBkg]
@includeConfig="#SKINSPATH#\#NekStart\ConfigContents\Page.inc"
[WindowsString]
Meter=String
Text=Home
X=((#Set.W#/2-((-25*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.TitleBarH#/2)
Fontface=#FontText#
FontSize=(12)
FontColor=#FontColor#
StringAlign=CenterCenter
Antialias=1
DynamicVariables=1
---------------------------------------;m.LogoBar;-------------------------------------------------------
@includeConfig="#SKINSPATH#\#NekStart\ConfigContents\PageShell.inc"
[m.NekString]
Meter=String
X=(#HomePage.P#)
Y=(90*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Stringalign=LeftCenter
Text=NekStart
FontSize=(32*[Set.S])
FontWeight=650
FontFace=Righteous
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
MeterStyle=Set.String:S
AntiAlias=1
DynamicVariables=1

[TopBarLink]
X=(-30*[Set.S])r
Y=(16*[Set.S])r
Shape=Rectangle 0,0,(100*[Set.S]),(50*[Set.S]),(10*[Set.S]),(10*[Set.S]) | StrokeWidth 0 | Extend This | OffSet (-24*[Set.S]),0
This=Fill Color #Set.Subtext_Color#,75 
NekGrad=45 | #m.Accentcolor# ; 1 | #m.AccentColor1# ;0
MouseOverAction=[!SetOption "#CURRENTSECTION#" This "Fill LinearGradient NekGrad | "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" This "Fill Color #Set.Subtext_Color#,75 |"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
DynamicVariables=1

[WebSiteBkg]
Meter=Shape
X=(#Set.W#-#HomePage.P#-10)
Y=(-25*[Set.S])r
MeterStyle=TopBarLink
LeftMouseUpAction=[!ShowMeterGroup WebsiteClickEffect]

[WebsieClickEffect]
Meter=Shape
Shape=Rectangle 0,0,(100*[Set.S]),(50*[Set.S]),(10*[Set.S]),(10*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient | OffSet (-24*[Set.S]),0
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=(#Set.W#-#HomePage.P#-10)
Y=r
Group=WebSiteClickEffect
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Settings][!RainmeterRefreshApp]
DynamicVariables=1

[WebSiteLogo]
Meter=String
Text=[\xe002]
X=(10*[Set.S])r
Y=(12*[Set.S])r
FontSize=(20*[Set.S])
FontColor=#FontColor#
FontWeight=500
Antialias=1
DynamicVariables=1
FontFace=#FontLogo#

[YouTubeBkg]
Meter=Shape
X=(-120*[Set.S])r
Y=(-12*[Set.S])r
MeterStyle=TopBarLink
LeftMouseUpAction=[!ShowMeterGroup YouTubeClickEffect]
[YouTubeClickEffect]
Meter=Shape
Shape=Rectangle 0,0,(100*[Set.S]),(50*[Set.S]),(10*[Set.S]),(10*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient | OffSet (-24*[Set.S]),0
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=r
Y=r
Group=YouTubeClickEffect
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Settings][!RainmeterRefreshApp]
DynamicVariables=1

[YouTubeLogo]
Meter=String
Text=[\xe001]
X=(-9*[Set.S])r
Y=(13*[Set.S])r
FontSize=(20*[Set.S])
FontColor=#FontColor#
FontWeight=500
Antialias=1
DynamicVariables=1
FontFace=#FontLogo#

