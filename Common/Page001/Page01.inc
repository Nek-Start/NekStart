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
--------------;m.LibrarySelector;-------------------------------------------------------
[LibraryWidgetSelector]
Meter=Shape
X=(#Page.Items.H#/1.5-#Page.Items.Content.P#)r
Y=(110*[Set.S]+#Scroll#)
LeftMouseUpAction=[!WriteKeyValue Variables LibraryCat Page01][!RainmeterRefreshApp]
MeterStyle=Effects1

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
MeterStyle=Effects

[LibrarySpecialText]
Meter=String
Text=Special#CRlF#Purposes
X=(#Page.Items.H#*12.3-#Page.Items.Content.P#)
Y=(116*[Set.S]+#Scroll#)
FontFace=#FontText#
FontSize=(14*[Set.S])
MeterStyle=Text
---------------------------------------;m.WidgetsContent;-------------------------------------------------------
[WidgetsText]
Meter=String
Text=Widgets
X=(#HomePage.P#)
Y=(200*[Set.S]+#Scroll#)
FontFace=#FontText#
FontSize=(16*[Set.S])
FontColor=#FontColor#
Container=#Sec.Container#
AntiAlias=1
DynamicVariables=1

[WidgetsLine]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Line 0,0,((#Set.W#-#HomePage.P#*3)/2),0 | StrokeWidth (2*[Set.S]) | Stroke Color #FontColor# | StrokeStartCap Round | StrokeEndCap Round
DynamicVariables=1
Container=#Sec.Container#

[Shape]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(#Set.R#) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.LogoBar#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.WindowsControls#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Shape1]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(#Set.R#) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.LogoBar# | Scale 1.01,1.01"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.WindowsControls#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Shape2]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(#Set.R#) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.LogoBar# | Scale 1.01,1.01"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.WindowsControls#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Shape3]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(#Set.R#) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.LogoBar# | Scale 1.01,1.01"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.WindowsControls#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Shape4]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(#Set.R#) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.LogoBar# | Scale 1.01,1.01"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.WindowsControls#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Shape5]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(#Set.R#) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.LogoBar# | Scale 1.01,1.01"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.WindowsControls#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Shape6]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(#Set.R#) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.LogoBar# | Scale 1.01,1.01"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.WindowsControls#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Shape13]
Meter=Shape
X=r
Y=(#Page.Items.P#)R
Shape=Rectangle 0,0,((#Set.W#-#HomePage.P#*3)/2),#Page.Items.H#,(#Set.R#) | StrokeWidth 0 | Extend This
This=Fill Color #m.WindowsControls#
Container=#Sec.Container#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.LogoBar# | Scale 1.01,1.01"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #m.WindowsControls#"][!UpdateMeter #CURRENTSECTION#][!Redraw]




