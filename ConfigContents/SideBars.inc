[SideBarStroke]
Meter=Shape
Shape=Rectangle 0,0,((-30)*[Set.S]+#Set.P#*3),(#Set.H#-#Sec.selector_height#-#Set.TitleBarH#),(10*[Set.S]) | StrokeWidth 0 |Extend This
Shape2=Rectangle 0,0,((-40)*[Set.S]+#Set.P#*3),(#Set.H#-#Sec.selector_height#-#Set.TitleBarH#-12*[Set.S]),(10*[Set.S]) | StrokeWidth 0 |  OffSet (5*[Set.S]),(6*[Set.S])|Extend My
This=Fill Color #m.LogoBar#
My=FillColor #m.WindowsControls#
X=(10*[Set.S])
Y=(80*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
DynamicVariables=1
Group=Small
MouseOverAction=[!ShowMeterGroup Big][!HideMeterGroup Small][!UpdateMeter #CURRENTSECTION#][!Redraw]

[SideBarStroke.Big]
Meter=Shape
Shape=Rectangle 0,0,((80)*[Set.S]+#Set.P#*3),(#Set.H#-#Sec.selector_height#-#Set.TitleBarH#),(10*[Set.S]) | StrokeWidth 0 |Extend This
Shape2=Rectangle 0,0,((70)*[Set.S]+#Set.P#*3),(#Set.H#-#Sec.selector_height#-#Set.TitleBarH#-12*[Set.S]),(10*[Set.S]) | StrokeWidth 0 |  OffSet (5*[Set.S]),(6*[Set.S])|Extend My
This=Fill Color #m.LogoBar#
My=FillColor #m.WindowsControls#
X=(10*[Set.S])
Y=(80*[Set.S]/2+2*[Set.S]+#Set.TitleBarH#)
DynamicVariables=1
Group=Big
Hidden=1
MouseleaveAction=[!ShowMeterGroup Small][!HideMeterGroup Big][!UpdateMeter #CURRENTSECTION#][!Redraw]