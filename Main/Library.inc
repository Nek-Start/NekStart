[Variables]
Page.Items.P=(10*[Set.S])
Page.Items.H=(60*[Set.S])
Page.Items.Content.P=(10*[Set.S])

[HomeBkg]
[SettingsBkg]

@includeConfig="#SKINSPATH#\#NekStart\ConfigContents\Page.inc"

[WindowsString]
Meter=String
Text=Library
X=((#Set.W#/2-((-25*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.TitleBarH#/2)
FontSize=(12)
Fontface=#FontText#
FontColor=#FontColor#
StringAlign=CenterCenter
Antialias=1
DynamicVariables=1
---------------------------------------;m.LogoBar;-------------------------------------------------------
@includeConfig="#SKINSPATH#\#NekStart\ConfigContents\PageShell.inc"

[m.LibraryString]
Meter=String
X=(#HomePage.P#)
Y=(90*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Stringalign=LeftCenter
Text=Library
FontSize=(32*[Set.S])
FontWeight=650
FontFace=Righteous
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
AntiAlias=1
DynamicVariables=1
@includeCommonConfig=#ROOTCONFIGPATH#Common\Page001\#LibraryCat#.inc

[AnchorPuller]
Meter=String
DynamicVariables=1
x=r
Y=[Shape13:YH]
Container=BC