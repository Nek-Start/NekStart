--------------;m.Style;-------------------------------------------------------
[Effects]
Shape=Rectangle 0,0,((#HomePage.P#*4)/2),#Page.Items.H#,(8*[Set.S]),(8*[Set.S])| StrokeWidth 0 | Extend This
This=Fill Color #m.SubTextColor1#,75
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1# ,100| Scale 1.01,1.01"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=#Sec.Container#
DynamicVariables=1

[Effects1]
Shape=Rectangle 0,0,((#HomePage.P#*4)/2),#Page.Items.H#,(8*[Set.S]),(8*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0
Container=#Sec.Container#
DynamicVariables=1

[Text]
FontFace=#FontText#
FontSize=(16*[Set.S])
FontColor=#FontColor#
Container=#Sec.Container#
AntiAlias=1
DynamicVariables=1

[Content]
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),(#Page.Items.H#*3),8 | StrokeWidth 2 |Stroke LinearGradient Gradient| Extend This
This=Fill Color #m.WindowsControls#
Gradient=45 | #m.AccentColor# ; 0 | #m.AccentColor1# ; 1
Container=#Sec.Container#
DynamicVariables=1

[ContentText]
FontColor=#FontColor#
FontFace=#FontText#
FontSize=(15*[Set.S])
DynamicVariables=1
FontWeight=900
Antialias=1
Container=#Sec.Container#

[AddText]
Text=[\xe017]
FontSize=(20*[Set.S])
FontColor=#FontColor#
FontWeight=900
Antialias=1
DynamicVariables=1
Container=#Sec.Container#
FontFace=#FontLogo#

[GoText]
Text=[\xe021]
FontSize=(20*[Set.S])
FontColor=#FontColor#
FontWeight=900
Antialias=1
DynamicVariables=1
Container=#Sec.Container#
FontFace=#FontLogo#

[ContentStatus]
Text=Status : Not Install        
FontColor=76,181,88
FontFace=#FontText#
FontSize=(15*[Set.S])
DynamicVariables=1
FontWeight=900
Antialias=1
Container=#Sec.Container#

[ContentStatusGo]
Text=Status :  Install        
FontColor=76,181,88
FontFace=#FontText#
FontSize=(15*[Set.S])
DynamicVariables=1
FontWeight=900
Antialias=1
Container=#Sec.Container#
--------------;m.LibrarySelector;-------------------------------------------------------
[LibraryWidgetSelector]
Meter=Shape
X=(#Page.Items.H#/1.5-#Page.Items.Content.P#)r
Y=(110*[Set.S]+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables LibraryCat Page01][!RainmeterRefreshApp]
MeterStyle=Effects

[LibraryWidgetText]
Meter=String
Text=Widgets
X=(#Page.Items.H#/1-#Page.Items.Content.P#*-3)
Y=(127*[Set.S]+#Scroll#)
MeterStyle=Text

[LibraryModulesSelector]
Meter=Shape
X=(#Page.Items.H#*4.2-#Page.Items.Content.P#)
Y=(110*[Set.S]+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables LibraryCat Page02][!RainmeterRefreshApp]
MeterStyle=Effects

[LibraryModulesText]
Meter=String
Text=Modules
X=(#Page.Items.H#*5.1-#Page.Items.Content.P#)
Y=(127*[Set.S]+#Scroll#)
MeterStyle=Text

[LibraryShortcutsSelector]
Meter=Shape
X=(#Page.Items.H#*7.8-#Page.Items.Content.P#)
Y=(110*[Set.S]+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables LibraryCat Page03][!RainmeterRefreshApp]
MeterStyle=Effects

[LibraryShortcutsText]
Meter=String
Text=Shortcuts
X=(#Page.Items.H#*8.7-#Page.Items.Content.P#)
Y=(127*[Set.S]+#Scroll#)
MeterStyle=Text

[LibrarySpecialSelector]
Meter=Shape
X=(#Page.Items.H#*11.4-#Page.Items.Content.P#)
Y=(110*[Set.S]+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables LibraryCat Page04][!RainmeterRefreshApp]
MeterStyle=Effects1

[LibrarySpecialText]
Meter=String
Text=Special#CRlF#Purposes
X=(#Page.Items.H#*12.3-#Page.Items.Content.P#)
Y=(116*[Set.S]+#Scroll#)
FontFace=#FontText#
FontSize=(14*[Set.S])
MeterStyle=Text
---------------------------------------;m.SpecialContent;-------------------------------------------------------
[SpecialText]
Meter=String
Text=Special Purposes
X=(#HomePage.P#)
Y=(200*[Set.S]+#Scroll#)
FontFace=#FontText#
FontSize=(16*[Set.S])
FontColor=#FontColor#
Container=#Sec.Container#
AntiAlias=1
DynamicVariables=1

[SpecialLine]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Line 0,0,((#Set.W#-#HomePage.P#*1)/2),0 | StrokeWidth (2*[Set.S]) | Stroke Color #FontColor# | StrokeStartCap Round | StrokeEndCap Round
DynamicVariables=1
Container=#Sec.Container#
---------------------------------------;m.Wallpaper;-------------------------------------------------------
@include=#SkinsPath#Needed Wallpapers\@Resources\InstallationStatus.inc

[NeededWallaperHelper]
Measure=String
String=#NeededInstall#
IfMatch=1
IfMatchAction=[!SetOption  NeededWalpaperTest MeterStyle ContentStatusGo][!SetOption  Add MeterStyle GoText][!SetOption  NeededWallpaperShape LeftMouseUpAction  """[!WriteKeyValue Variables LastCat Wallpapers\Wallpapers][!Refresh]"""][!Update]
DynamicVariables=1

[NeededWallpaperShape]
Meter=Shape
X=(#HomePage.P#)
Y=(#Page.Items.P#*28+#Scroll#)
MeterStyle=Content
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Wallpapers\LibraryHelper][!Refresh]

[NeededWalpaperImage]
Meter=image
ImageName=#@#Materials\Images\Needed Wallpaper.png
X=(#HomePage.P#*1.2)
Y=(#Page.Items.P#*28+#Scroll#)
W=(#Page.Items.H#-#Page.Items.Content.P#*-4)
H=(#Page.Items.H#-#Page.Items.Content.P#*-7)
Container=#Sec.Container#
DynamicVariables=1

[NeededWalpaperText]
Meter=String
Text=Needed#Crlf#Wallpapers 
X=(#HomePage.P#*2.5)
Y=(#Page.Items.P#*32+#Scroll#)
MeterStyle=ContentText

[NeededWalpaperTest]
Meter=String
X=(#HomePage.P#*1.3)
Y=(#Page.Items.P#*42+#Scroll#)
MeterStyle=ContentStatus

[Add]
Meter=String
X=((#Set.W#-#HomePage.P#*1.5)/2)
Y=(#Page.Items.P#*42+#Scroll#)
MeterStyle=AddText
---------------------------------------;m.SearchBar;-------------------------------------------------------
[SearchBarShape]
Meter=Shape
X=((#Set.W#-#HomePage.P#*0.5)/1.8)
Y=(#Page.Items.P#*28+#Scroll#)
MeterStyle=Content
LeftMouseUpAction=[!WriteKeyValue Variables LastCat SearchBars\SearchBars][!RainmeterRefreshApp]
@includeSearch="#SKINSPATH#\Top SearchBars\StartShell\LibraryDescription.inc"

[SearchbarsImage]
Meter=image
ImageName=#@#Materials\Images\TopSearchBars.png
X=((#Set.W#-#HomePage.P#*0.5)/1.7)
Y=(#Page.Items.P#*28+#Scroll#)
W=(#Page.Items.H#-#Page.Items.Content.P#*-4)
H=(#Page.Items.H#-#Page.Items.Content.P#*-7)
Container=#Sec.Container#
DynamicVariables=1

[SearchbarsText]
Meter=String
Text=Top#Crlf#SearchBars
X=((#Set.W#-#HomePage.P#*0.5)/1.4)
Y=(#Page.Items.P#*32+#Scroll#)
MeterStyle=ContentText

[SearchbarsTest]
Meter=String
X=((#Set.W#-#HomePage.P#*0.3)/1.7)
Y=(#Page.Items.P#*42+#Scroll#)
MeterStyle=ContentStatus

[AddSearch]
Meter=String
X=((#Set.W#-#HomePage.P#*1.5)/1)
Y=(#Page.Items.P#*42+#Scroll#)
MeterStyle=AddText






























