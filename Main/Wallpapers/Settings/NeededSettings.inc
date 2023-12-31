[Variables]
Page.Items.P=(10*[Set.S])
Page.Items.H=(60*[Set.S])
Page.Items.Content.P=(10*[Set.S])

[WindowsString]
Meter=String
Text=Needed Wallpapers
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

[WallpaperStyle]
Shape=Rectangle 0,0,((#HomePage.P#*4.5)/2),(#Page.Items.H#-25*[Set.S]),(4*[Set.S]),(4*[Set.S])| StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
Group=Wallpapers
Hidden=1

[LinesStyle]
Shape=Line 0,0,((#HomePage.P#*4)/2),0 | StrokeWidth (1*[Set.S]) | Stroke Color #FontColor#,75 | StrokeStartCap Round | StrokeEndCap Round
DynamicVariables=1
Container=#Sec.Container#
Group=Wallpapers
Hidden=1

[StyleText1]
FontColor=#FontColor#
FontFace=#FontText#
Antialias=1
Container=#Sec.Container#
DynamicVariables=1
FontWeight=900
FontSize=(12*[Set.S])
Group=Wallpapers
Hidden=1

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
--------------------------------------------------;Config,---------------------------------------------------------------
[m.GeneralText]
Meter=String
Text=General
X=(#HomePage.P#*1.4)r
Y=(#Page.Items.P#*4.4+#Scroll#)R
FontSize=(25*[Set.S])
FontWeight=900
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
MeterStyle=StyleText

[m.BackGroundText]
Meter=String
Text=Windows BackGround
X=(#HomePage.P#*1.4)
Y=(#Page.Items.P#*5)r
FontSize=(15*[Set.S])
FontWeight=900
MeterStyle=StyleText

[m.Choose String]
Meter=String
Text=Choose a Fit
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
LeftMouseUpAction=[!CommandMeasure Focus "ExecuteBatch ALL"][!ShowMeterGroup Wallpapers][!Update]
Container=#Sec.Container#
DynamicVariables=1

[Focus]
Measure=Plugin
Plugin=InputText
FocusDismiss=1
W=(0)
H=(0)
SolidColor=0,0,0,0
Container=#Sec.Container#
DynamicVariables=1
OnDismissAction=[!HideMeterGroup Wallpapers][!Update]
Command1=["$UserInput$"][!Update]

[m.LayoutsSelectText]
Meter=String
Text=#Fit#
X=(#Set.W#-100*[Set.S])
Y=(#Page.Items.P#*2.5)r
FontSize=(10*[Set.S])
StringAlign=RightCenter
MeterStyle=StyleText

[m.Logo]
Meter=String
Text=[\xe027]
X=(#Set.W#-80*[Set.S])
Y=(#Page.Items.P#*-1)r
FontSize=(20*[Set.S])
MeterStyle=StyleLogo

[BkgShape1]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.P#*13.5+#Scroll#)
Shape=Rectangle 0,0,((#HomePage.P#*4.5)/2),(#Page.Items.H#*5),(4*[Set.S]),(4*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
Group=Wallpapers
Hidden=1

@include=#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc

[m.WallpaperSelector]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*16+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables Fit  Fill  "#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc"][!SetWallpaper "#SKINSPATH#\Needed Wallpapers\@Resources\Wallpapers\#Wallpapers#.jpg"  #Fit#][!Refresh]
MeterStyle=WallpaperStyle

[m.WallpaperSelector1]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*20+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables Fit  Fit  "#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc"][!SetWallpaper "#SKINSPATH#\Needed Wallpapers\@Resources\Wallpapers\#Wallpapers#.jpg"  #Fit#][!Refresh]
MeterStyle=WallpaperStyle

[m.WallpaperSelector2]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*24+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables Fit  Stretch  "#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc"][!SetWallpaper "#SKINSPATH#\Needed Wallpapers\@Resources\Wallpapers\#Wallpapers#.jpg"  #Fit#][!Refresh]
MeterStyle=WallpaperStyle

[m.WallpaperSelector3]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*28+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables Fit  Tile  "#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc"][!SetWallpaper "#SKINSPATH#\Needed Wallpapers\@Resources\Wallpapers\#Wallpapers#.jpg"  #Fit#][!Refresh]
MeterStyle=WallpaperStyle

[m.WallpaperSelector4]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*32+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables Fit  Center  "#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc"][!SetWallpaper "#SKINSPATH#\Needed Wallpapers\@Resources\Wallpapers\#Wallpapers#.jpg"  #Fit#][!Refresh]
MeterStyle=WallpaperStyle

[m.WallpaperSelector5]
Meter=Shape
X=(#Set.W#-280*[Set.S])
Y=(#Page.Items.Content.P#*36+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables Fit  Span  "#SkinsPath#Needed Wallpapers\@Resources\GlobalWall.inc"][!SetWallpaper "#SKINSPATH#\Needed Wallpapers\@Resources\Wallpapers\#Wallpapers#.jpg"  #Fit#][!Refresh]
MeterStyle=WallpaperStyle

[m.WallpaperSelect]
Meter=String
Text=Fill
X=(#Set.W#-240*[Set.S])
Y=(#Page.Items.P#*18+#Scroll#)
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*20+#Scroll#)
MeterStyle=LinesStyle

[m.WallpaperSelect1]
Meter=String
Text=Fit
X=(#Set.W#-240*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line1]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*24+#Scroll#)
MeterStyle=LinesStyle

[m.WallpaperSelect2]
Meter=String
Text=Stretch
X=(#Set.W#-225*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line2]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*28+#Scroll#)
MeterStyle=LinesStyle

[m.WallpaperSelect3]
Meter=String
Text=Tile
X=(#Set.W#-235*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line3]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*32+#Scroll#)
MeterStyle=LinesStyle

[m.WallpaperSelect4]
Meter=String
Text=Center
X=(#Set.W#-226*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line4]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*36+#Scroll#)
MeterStyle=LinesStyle

[m.WallpaperSelect5]
Meter=String
Text=Span
X=(#Set.W#-230*[Set.S])
Y=(#Page.Items.P#*2.2)r
StringAlign=CenterCenter
MeterStyle=StyleText1

[Line6]
Meter=Shape
X=(#Set.W#-268*[Set.S])
Y=(#Page.Items.P#*40+#Scroll#)
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
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Settings][!Refresh]
MeterStyle=EffectStyle

[Effect1]
Meter=Shape
X=(#Page.Items.Content.P#*1.8)
Y=(620*[Set.S]/2-15*[Set.S]+#Set.TitleBarH#)
LeftMouseUpAction=[!WriteKeyValue Variables LastCat Wallpapers\Settings\NeededSettings][!Refresh]
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
Text=Neede..
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

[Bkg]
Meter=Shape
Shape=Rectangle 0,0,((-35)*[Set.S]+#Set.P#*2),(40*[Set.S]),(12*[Set.S]),(12*[Set.S]) | StrokeWidth 0 | Fill LinearGradient MyGradient 
MyGradient=230 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0 
X=(#Page.Items.Content.P#*3.3)
Y=(592*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
DynamicVariables=1

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
----------------------------------------------------;Anchor;----------------------------------------------------------
[AnchorPuller]
Meter=String
DynamicVariables=1
x=r
Y=[Set.Context1:YH]
Container=BC