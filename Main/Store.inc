[AboutBkg]
[Y-HubBkg]
@includeConfig="#SKINSPATH#\#NekStart\ConfigContents\Page1.inc"
[WindowsString]
Meter=String
Text=NS Store
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
[m.AboutString]
Meter=String
X=(#HomePage.P#)
Y=(90*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
Stringalign=LeftCenter
Text=NS Store
FontSize=(25*[Set.S])
FontWeight=650
FontFace=Righteous
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
MeterStyle=Set.String:S
AntiAlias=1
DynamicVariables=1



