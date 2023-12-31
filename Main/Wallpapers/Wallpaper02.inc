[Variables]
Page.Items.P=(10*[Set.S])
Page.Items.H=(60*[Set.S])
Page.Items.Content.P=(10*[Set.S])

[WindowsString]
Meter=String
Text=Needed Wallpaper
X=((#Set.W#/2-((-25*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.TitleBarH#/2)
FontSize=(12)
Fontface=#FontText#
FontColor=#FontColor#
StringAlign=CenterCenter
Antialias=1
DynamicVariables=1

[BkgShape]
Meter=Shape
X=(#HomePage.P#*1.4)r
Y=(#Page.Items.P#*4.4+#Scroll#)R
Shape=Rectangle 0,0,(#Set.W#-#HomePage.P#-100),(#Page.Items.H#*3),8 | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1

[NeededWalpaperImg]
Meter=image
ImageName=#@#Materials\Images\Needed Wallpaper.png
X=(#Page.Items.Content.P#*35)
Y=(#Page.Items.Content.P#*22+#Scroll#)
W=(#Page.Items.H#-#Page.Items.Content.P#-200*[Set.S])
H=(#Page.Items.H#-#Page.Items.Content.P#-200*[Set.S])
Container=#Sec.Container#
DynamicVariables=1

[m.String]
Meter=String
X=(#Page.Items.Content.P#*34)
Y=(#Page.Items.H#*-1.2-#Page.Items.Content.P#)r
Text=Needed Wallpaper
FontSize=(20*[Set.S])
FontWeight=650
FontFace=#FontText#
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
AntiAlias=1
Container=#Sec.Container#
DynamicVariables=1
--------------------------------------------------;Nextitems,---------------------------------------------------------------
[WindowsWallSelector]
Meter=Shape
X=(#Page.Items.H#-#Page.Items.Content.P#*-8)
Y=(#Page.Items.Content.P#*11)r
Shape=Rectangle 0,0,((#HomePage.P#*4)/2),(#Page.Items.H#),(8*[Set.S]),(8*[Set.S])| StrokeWidth 0 | Extend This
This=Fill Color #m.SubTextColor1#,75
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1# ,100"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=#Sec.Container#
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Wallpapers\Wallpapers][!Refresh]

[m.WindowString]
Meter=String
X=(#Page.Items.Content.P#*24)
Y=(#Page.Items.H#-#Page.Items.Content.P#*3)r
Text=Windows#CRLF#Wallpaper
FontSize=(12*[Set.S])
FontColor=#FontColor#
FontFace=#FontText#
AntiAlias=1
StringAlign=CenterCenter
Container=#Sec.Container#
DynamicVariables=1

[MAcWallSelector]
Meter=Shape
X=(#Page.Items.H#*5.8)
Y=(#Page.Items.Content.P#*-3)r
Shape=Rectangle 0,0,((#HomePage.P#*4)/2),(#Page.Items.H#),(8*[Set.S]),(8*[Set.S])| StrokeWidth 0 | Extend This
This=Fill Color #m.SubTextColor1#,75
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1# ,100"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=#Sec.Container#
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Wallpapers\Wallpaper01][!Refresh]

[m.MacString]
Meter=String
X=(#Page.Items.Content.P#*45)
Y=(#Page.Items.H#-#Page.Items.Content.P#*3)r
Text=Mac#CRLF#Wallpaper
FontSize=(12*[Set.S])
FontColor=#FontColor#
FontFace=#FontText#
AntiAlias=1
StringAlign=CenterCenter
Container=#Sec.Container#
DynamicVariables=1

[NatureWallSelector]
Meter=Shape
X=(#Page.Items.H#*9.3)
Y=(#Page.Items.Content.P#*-3)r
Shape=Rectangle 0,0,((#HomePage.P#*4)/2),(#Page.Items.H#),(8*[Set.S]),(8*[Set.S])| StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=240 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1# ,100"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.SubTextColor1#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=#Sec.Container#
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Wallpapers\Wallpaper02][!Refresh]

[m.natureString]
Meter=String
X=(#Page.Items.Content.P#*65)
Y=(#Page.Items.H#-#Page.Items.Content.P#*3)r
Text=Nature#CRLF#Wallpaper
FontSize=(12*[Set.S])
FontColor=#FontColor#
FontFace=#FontText#
AntiAlias=1
StringAlign=CenterCenter
Container=#Sec.Container#
DynamicVariables=1
--------------------------------------------------;MAinContents,---------------------------------------------------------------
[m.Config]
@include=#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc
[MeterBox]
ImageName=#SKINSPATH#\Needed Wallpapers\@Resources\Wallpapers Thumbs\#CurrentSection#.jpg
W=(100*[Set.S])
H=(60*[Set.S])
LeftMouseUpAction=[!SetWallpaper "#SKINSPATH#\Needed Wallpapers\@Resources\Wallpapers\#CurrentSection#.jpg"  #Fit#][!WriteKeyValue Variables Wallpapers #CurrentSection#  "#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc"]
DynamicVariables=1
Container=#Sec.Container#

[101]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*14)
Y=(#Page.Items.Content.P#*8)r

[102]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[103]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[104]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[105]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[106]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[107]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[108]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*14)
Y=(#Page.Items.Content.P#*7)r

[109]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[110]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[111]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[112]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[113]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[114]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[115]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*14)
Y=(#Page.Items.Content.P#*7)r

[116]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[117]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[118]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[119]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[120]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[121]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[122]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*14)
Y=(#Page.Items.Content.P#*7)r

[123]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[124]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[125]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[126]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[127]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/8)r

[128]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*12)r
Y=(#Page.Items.Content.P#/10)r

[129]
Meter=Image
MeterStyle=MeterBox
X=(#Page.Items.Content.P#*14)
Y=(#Page.Items.Content.P#*7)r

----------------------------------------------------;SideBars;----------------------------------------------------------
@includeSideBars=#ROOTCONFIGPATH#\ConfigContents\SideBars.inc

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
X=(30*[Set.S])
Y=(280*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
Text=Neede..
FontSize=(12*[Set.S])
FontWeight=650
FontFace=#FontText#
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
AntiAlias=1
Group=Small
DynamicVariables=1

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
Y=(445*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Library][!Refresh]
MeterStyle=EffectStyle

[Effect1]
Meter=Shape
X=(#Page.Items.Content.P#*1.8)
Y=(620*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
LeftMouseUpAction=[!WriteKeyValue Variables LastCat  Wallpapers\Wallpapers][!Refresh]
MeterStyle=EffectStyle

[Effect2]
Meter=Shape
X=(#Page.Items.Content.P#*1.8)
Y=(720*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
LeftMouseUpAction=[!WriteKeyValue Variables LastCat  Wallpapers\Wallpaper01][!Refresh]
MeterStyle=EffectStyle

[Effect3]
Meter=Shape
X=(#Page.Items.Content.P#*1.8)
Y=(820*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
LeftMouseUpAction=[!WriteKeyValue Variables LastCat  Wallpapers\Wallpaper02][!Refresh]
MeterStyle=EffectStyle
------------------------------------------------;main;--------------------------------------------------------------
[m.String2]
Meter=String
X=(30*[Set.S])
Y=(280*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
Text=Needed Wallpapers
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
Text=Sel..
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
Text=Selection
FontSize=(15*[Set.S])
FontFace=#FontText#
AntiAlias=1
FontWeight=900
FontColor=#FontColor#
DynamicVariables=1
Group=Big
Hidden=1

[WindowsImgSide]
Meter=image
ImageName=#@#Materials\Images\Windows.png
X=(#Page.Items.Content.P#*7)
Y=(660*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
W=(#Page.Items.H#-#Page.Items.Content.P#-80*[Set.S])
H=(#Page.Items.H#-#Page.Items.Content.P#-80*[Set.S])
DynamicVariables=1

[m.WindowsText1]
Meter=String
X=(#Page.Items.Content.P#*9)
Y=(620*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Text=Windows
MeterStyle=Set.Text

[MacImgSide]
Meter=image
ImageName=#@#Materials\Images\Mac.png
X=(#Page.Items.Content.P#*7)
Y=(760*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
W=(#Page.Items.H#-#Page.Items.Content.P#-80*[Set.S])
H=(#Page.Items.H#-#Page.Items.Content.P#-80*[Set.S])
DynamicVariables=1

[m.AppearnceText]
Meter=String
X=(#Page.Items.Content.P#*9)
Y=(720*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Text=Mac
MeterStyle=Set.Text

[NatureImgSide]
Meter=image
ImageName=#@#Materials\Images\Nature.png
X=(#Page.Items.Content.P#*7)
Y=(860*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
W=(#Page.Items.H#-#Page.Items.Content.P#-80*[Set.S])
H=(#Page.Items.H#-#Page.Items.Content.P#-80*[Set.S])
DynamicVariables=1

[m.NatureText]
Meter=String
X=(#Page.Items.Content.P#*9)
Y=(820*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Text=Nature
MeterStyle=Set.Text
----------------------------------------------------;Anchor;----------------------------------------------------------
[AnchorPuller]
Meter=String
DynamicVariables=1
x=r
Y=[129:YH]
Container=BC