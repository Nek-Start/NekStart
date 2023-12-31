[Variables]
Page.Items.P=(10*[Set.S])
Page.Items.H=(60*[Set.S])
Page.Items.Content.P=(10*[Set.S])
ProfileBaseImageSize=1080
---------------------------------------;Hidden items;-------------------------------------------------------
[HomeBkg]
Hidden=1
[LibraryBkg]
Hidden=1  
---------------------------------------;Hidden items;-------------------------------------------------------
@includeConfig="#SKINSPATH#\#NekStart\ConfigContents\Page.inc"
[WindowsString]
Meter=String
Text=Settings
X=((#Set.W#/2-((-25*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.TitleBarH#/2)
FontSize=(12)
Fontface=#FontText#
FontColor=#FontColor#
StringAlign=CenterCenter
Antialias=1
DynamicVariables=1
---------------------------------------;Styles;-------------------------------------------------------
[ContentText]
FontColor=#FontColor#
FontFace=#FontText#
FontSize=(15*[Set.S])
DynamicVariables=1
Antialias=1
Container=#Sec.Container#
---------------------------------------;User&Settings;-------------------------------------------------------
[BkgShape]
Meter=Shape
X=(#HomePage.P#*0.8)r
Y=(#Page.Items.P#*2+#Scroll#)R
Shape=Rectangle 0,0,(#Set.W#-#HomePage.P#-20),(#Page.Items.H#*5),8 | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1

[PicAdmin]
Meter=String
X=(#Page.Items.Content.P#*19.5)
Y=(#Page.Items.H#*-5.3-#Page.Items.Content.P#+#Scroll#)
Text=[\xe039]
FontSize=(450*[Set.S])
FontFace=#FontLogo#
FontColor=255,255,255
AntiAlias=1
DynamicVariables=1
Container=#Sec.Container#

[USER_SID]
Measure=SysInfo
SysInfoType=USER_SID
IfMatch=^(S\-1\-5\-21\-[\S]+)$
IfMatchAction=[!EnableMeasure CurrentUserProfilePictureLocation]
RegExpSubstitute=1
Substitute="^0$":""
DynamicVariables=1
Container=#Sec.Container#

[CurrentUserProfilePictureLocation]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows\CurrentVersion\AccountPicture\Users\[USER_SID]
RegValue=Image#ProfileBaseImageSize#
DynamicVariables=1
Disabled=1
IfMatch=(S\-1\-5\-21\-[\S]+)
IfMatchAction=[!SetOption ProfilePicture MeasureName "#CURRENTSECTION#"]
IfNotMatchAction=[!SetOption ProfilePicture MeasureName ""]
DynamicVariables=1
Container=#Sec.Container#

[ProfilePicture]
Meter=Image
ImageName=
w=(200*[Set.S])
h=(210*[Set.S])
X=(#Page.Items.Content.P#*16)
Y=(#Page.Items.Content.P#*6.5+#Scroll#)
DynamicVariables=1
Container=#Sec.Container#

[Pic Circle]
Meter=String
X=(#Page.Items.Content.P#*15)
Y=(#Page.Items.H#*-4.1-#Page.Items.Content.P#+#Scroll#)
Text=[\xe037]
FontSize=(430*[Set.S])
FontFace=#FontLogo#
FontColor=#m.WindowsControls#
AntiAlias=1
DynamicVariables=1
Container=#Sec.Container#

[m.Settings]
Meter=String
Text=Manage NekStart Settings
X=(#HomePage.P#*4)
Y=(#Page.Items.P#*14+#Scroll#)
FontSize=(20*[Set.S])
FontColor=#FontColor#
FontFace=#FontText#
FontWeight=900
Antialias=1
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor "#m.SubTextColor# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "#FontColor# "][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables LastCat  OwnSet\General][!RainmeterRefreshApp]

[m.UserName]
Meter=String
Text=%USERNAME%
X=(#HomePage.P#*4)
Y=(#Page.Items.P#*19+#Scroll#)
FontSize=(20*[Set.S])
FontColor=#FontColor#
FontFace=#FontText#
Antialias=1
Container=#Sec.Container#
DynamicVariables=1

[m.Manage Skins]
Meter=String
Text=Manage Skins
X=(#HomePage.P#*0.9)
Y=(#Page.Items.P#*33+#Scroll#)
FontSize=(25*[Set.S])
FontWeight=900
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
FontFace=#FontText#
Antialias=1
Container=#Sec.Container#
DynamicVariables=1

[ManageLine]
Meter=Shape
X=(#HomePage.P#*0.9)
Y=(#Page.Items.P#*38+#Scroll#)
Shape=Line 0,0,((#Set.W#-#HomePage.P#*3)/2),0 | StrokeWidth (2*[Set.S]) | Stroke Color #FontColor# | StrokeStartCap Round | StrokeEndCap Round
DynamicVariables=1
Container=#Sec.Container#
---------------------------------------;NeededWallpapers;-------------------------------------------------------
@include=#SkinsPath#Needed Wallpapers\@Resources\InstallationStatus.inc
[NeededWallaperHelper]
Measure=String
String=#NeededInstall#
IfMatch=1
IfMatchAction=[!SetOption  NeededWallpapers LeftMouseUpAction  """[!WriteKeyValue Variables LastCat  Wallpapers\Settings\NeededSettings][!Refresh]"""][!Update]

[NeededWallpapers]
Meter=Shape
X=(#HomePage.P#*0.9)
Y=(#Page.Items.P#*41+#Scroll#)
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(8*[Set.S]),(8*[Set.S])| StrokeWidth 0 | Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat  Wallpapers\Settings\SettingsHelper][!RainmeterRefreshApp]

[NeededWalpaperImage]
Meter=image
ImageName=#@#Materials\Images\Needed Wallpaper.png
X=(#HomePage.P#*1)
Y=(#Page.Items.P#*41.5+#Scroll#)
W=(#Page.Items.H#-#Page.Items.Content.P#)
H=(#Page.Items.H#-#Page.Items.Content.P#)
Container=#Sec.Container#
DynamicVariables=1

[NeededWalpaperText]
Meter=String
Text=Needed Wallpapers 
X=(#HomePage.P#*1.7)
Y=(#Page.Items.P#*42.8+#Scroll#)
MeterStyle=ContentText
---------------------------------------;TopSearchBars;-------------------------------------------------------
[TopSearchBArs]
Meter=Shape
X=((#Set.W#-#HomePage.P#*0.5)/1.7)
Y=(#Page.Items.P#*41+#Scroll#)
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(8*[Set.S]),(8*[Set.S])| StrokeWidth 0 | Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat  SearchBars\Settings\Engines][!RainmeterRefreshApp]

[TopSearchBArImage]
Meter=image
ImageName=#@#Materials\Images\TopSearchBars.png
X=((#Set.W#-#HomePage.P#*0.5)/1.7)
Y=(#Page.Items.P#*37+#Scroll#)
W=(#Page.Items.H#-#Page.Items.Content.P#*-10)
H=(#Page.Items.H#-#Page.Items.Content.P#*-8)
Container=#Sec.Container#
DynamicVariables=1

[TopSearchBarsText]
Meter=String
Text=Top SearchBars
X=((#Set.W#-#HomePage.P#*0.5)/1.3)
Y=(#Page.Items.P#*42.8+#Scroll#)
MeterStyle=ContentText














[AnchorPuller]
Meter=String
DynamicVariables=1
x=r
Y=[BkgShape:YH]
Container=BC