[NS StoreBkg]
[Y-HubBkg]
@includeConfig="#SKINSPATH#\#NekStart\ConfigContents\Page1.inc"
[WindowsString]
Meter=String
Text=About
X=((#Set.W#/2-((-25*4)*[Set.S]+#Set.P#*3)/2))
Y=(#Set.TitleBarH#/2)
FontSize=(12)
FontColor=#FontColor#
Fontface=#FontText#
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
Text=About#CRLF#Developer
FontSize=(25*[Set.S])
FontWeight=650
FontFace=Righteous
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
MeterStyle=Set.String:S
AntiAlias=1
DynamicVariables=1

[AboutText]
Meter=String
X=(#HomePage.P#)
Y=(#Set.P#+#Sec.selector_height#+50)
W=(#Set.W#-#HomePage.P#*2)
FontSize=(20*[Set.S])
FontFace=Righteous
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ;1.0
ClipString=2
Text=I'm a student who enjoys graphic design and coding!#CRLF##CRLF#NekStart is my passion project, which originates from my desire for good-looking customizable UI on Windows, which is very lacking to this day, even with Windows 11.#CRLF##CRLF#The support and appreciation I've received along the way motivate me to keep going and improve the user experience. So don't hesitate to message me about anything!#CRLF##CRLF#My special goal is that taking care of user and keeping our country front!
AntiAlias=1
DynamicVariables=1

[Develepor]
Meter=String
Text=Nasir
X=((#Set.W#/2-((-220*4)*[Set.S]+#Set.P#*3)/2))
Y=(90*[Set.S]/4+2*[Set.S]+#Set.TitleBarH#)
FontWeight=(900)
AntiAlias=1
FontSize=(30*[Set.S])
FontFace=Runicx
InlineSetting=GradientColor | 180 | #m.AccentColor# ; 0.0 | #m.AccentColor1# ; 1.0
DynamicVariables=1
