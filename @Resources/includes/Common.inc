;=
; common measures/meters
;============================

[mAudioOut]
; http://docs.rainmeter.net/manual-beta/plugins/audiolevel#FFTOptions
Measure=Plugin
Plugin=AudioLevel
Port=#AudioDevicePort#
ID=#AudioDeviceID#
FFTSize=#FFTSize#
FFTOverlap=#FFTOverlap#
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
FreqMin=#FreqMin#
FreqMax=#FreqMax#
Sensitivity=#Sensitivity#
RMSAttack=#FFTAttack#
RMSDecay=#FFTDecay#

[mState]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
IfEqualValue=1
IfEqualAction=[!ShowFade]
IfBelowValue=1
IfBelowAction=[!HideFade]
UpdateDivider=20
DynamicVariables=1

[Back]
Meter=Image
W=(#Radius#*2+#ExtrudeMax#*2)
H=(#RadiusY#*2+#ExtrudeMax#*2)
SolidColor=0,0,0,1
UpdateDivider=-1
LeftMouseDoubleClickAction=[!ActivateConfig "#ROOTCONFIG#\SettingsWindow"]
MouseActionCursor=0
