RatCave_Fallarbor_2F_MapScripts::
	.byte 0


RatCave_Fallarbor_2F_EventScript_Raticate::
# 4 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lock
# 5 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 6 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 20
# 7 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	release
	return


RatCave_Fallarbor_2F_EventScript_RaticateAlola::
# 11 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lock
# 12 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 13 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 20
# 14 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	release
	return


RatCave_Fallarbor_2F_EventScript_Ratduardo::
# 18 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lockall
# 19 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox RatCave_Fallarbor_2F_Text_RatduardoIntro, MSGBOX_AUTOCLOSE
# 20 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 21 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_2, RatCave_Fallarbor_2F_Text_RatduardoDefeat
# 22 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	call RatCave_Fallarbor_2F_BattleOver
# 23 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	call FallarborRatCaveShake
# 24 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 6
# 25 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	releaseall
	end


RatCave_Fallarbor_2F_BattleOver::
# 39 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lockall
# 40 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 41 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 1
# 42 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 2
# 43 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 3
# 44 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 45 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox RatCave_Fallarbor_2F_BattleOver_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 48 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_FALLARBOR
	return


FallarborRatCaveShake::
# 53 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 30
# 54 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 55 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8005, 6
# 56 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8006, 8
# 57 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 58 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	special ShakeCamera
# 59 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitstate
# 60 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 60
# 61 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	special ShakeCamera
# 62 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitstate
# 63 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 60
	return


Fallarbor_RatCave_Rock::
# 68 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lock
# 69 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox Fallarbor_RatCave_Rock_Text_0, MSGBOX_AUTOCLOSE
# 71 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 72 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	release
	end


RatCave_Fallarbor_2F_BattleOver_Text_0:
# 45 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE} RATDUARDO's voice echoes again:\p {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Don't.. get.. in my way...!$"

Fallarbor_RatCave_Rock_Text_0:
# 69 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "Doesn't look like the cave in \n can be cleared anytime soon.$"

RatCave_Fallarbor_2F_Text_RatduardoIntro::
# 30 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "Again... You...$"

RatCave_Fallarbor_2F_Text_RatduardoDefeat::
# 34 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "...$"
