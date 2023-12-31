; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[SlideAnimation]
Measure=Script
ScriptFile=#@#Lua\SlideAnimation.lua

[Ctx.H:eX]
Measure=Calc
DynamicVariables=1
Formula=#Ctx.H#

[Ctx.Move:M]
Measure=Script
ScriptFile=#@#Lua\MoveCtx.lua
DynamicVariables=1

[Variables]
Ctx.S=((#SCREENAREAWIDTH#/1920) < (#SCREENAREAHEIGHT#/1080) ? (#SCREENAREAWIDTH#/1920) : (#SCREENAREAHEIGHT#/1080))
Ctx.BoxH=(30*#Ctx.S#)
Ctx.W=(250*#Ctx.S#)
Ctx.P=(10*#Ctx.S#)
Ctx.H=([EndAnchor:Y]+#Ctx.P#)
Ctx.R=(5*#Ctx.S#)

Easetype=InOutSine
Animation_Steps=10
Animate_Offset=10
AniDir=Top

; [FrostedGlass]
; Measure=Plugin
; Plugin=FrostedGlass
; Type=Acrylic
; DynamicVariables=1
; Border=All

; ---------------------------------------------------------------------------- ;
;                                  MeterStyles                                 ;
; ---------------------------------------------------------------------------- ;

[Ctx.String:S]
FontFace=#FontFace#
AntiAlias=1
FontSize=(12*[Set.S])
FontColor=#FontColor#
SolidColor=0,0,0,1

[CtxBox:S]
X=(#Ctx.P#+1)
Y=(#Ctx.BoxH#/2+#Ctx.P#)r
Shape=Rectangle 0,0,(#Ctx.W#-#Ctx.P#*2),(#Ctx.BoxH#),(#Ctx.R#/2),(#Ctx.R#/2) | StrokeWidth 0 | Extend Fill
DynamicVariables=1
Group=Ctx.SideButtons
Fill=Fill Color #m.SubTextColor#,0
MouseOverAction=[!UpdateMeter *][!Redraw]
MouseLeaveAction=[!UpdateMeter *][!Redraw]
[CtxIcon:S]
ImageName=#@#Icons\Context\#CURRENTSECTION#.png
X=(#Ctx.P#*1.5+1)
Y=(#Ctx.BoxH#/2-24/2*#Ctx.S#)r
W=(19*#Ctx.S#)
H=(19*#Ctx.S#)
Padding=(2.5*#Ctx.S#),(2.5*#Ctx.S#),(2.5*#Ctx.S#),(2.5*#Ctx.S#)
DynamicVariables=1
GreyScale=1
ImageTint=#FontColor#
Group=Ctx.SideButtons | Ctx.SideIcons

[CtxText:S]
X=(5*#Ctx.S#)R
Y=(24/2*#Ctx.S#)r
StringAlign=LeftCenter
FontColor=#FontColor#
FontSize=(10*#Ctx.S#)
Group=Ctx.SideButtons

[CtxTextNoIcon:S]
X=(#Ctx.P#*1.5+1)
Y=(#Ctx.BoxH#/2*#Ctx.S#)r
StringAlign=LeftCenter
FontColor=#FontColor#
FontSize=(10*#Ctx.S#)
Group=Ctx.SideButtons

[CtxTextIcon:S]
X=(#Ctx.W#-1-#Ctx.P#*1.5)
Y=r
StringAlign=RightCenter
FontFace=Segoe Fluent Icons
Text=[\xe970]
FontColor=#FontColor#
FontSize=(10*#Ctx.S#)
Group=Ctx.SideButtons

[Ctx.Div:S]
X=#Ctx.P#
Y=(24*#Ctx.S#+#Ctx.P#)r
Shape=Line 0,0,(#Ctx.W#-#Ctx.P#*2),0 | StrokeWidth 1 | Fill Color #m.BackGroundColor#,0 | Stroke Color #FontColor#,50

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[BA]
Meter=Shape
X=1
Y=1
Shape=Rectangle #Ctx.Stroke#,#Ctx.Stroke#,#Ctx.W#,#Ctx.H#,#Ctx.R# | Fill Color #m.BackGroundColor#,250 | StrokeWidth 0.5 | StrokeColor #FontColor#
DynamicVariables=1