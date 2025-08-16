RatCave_Fallarbor_2F_MapScripts::
# 2 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RatCave_Fallarbor_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RatCave_Fallarbor_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	map_script_2 VAR_RAT_CAVE_STATE, 5, RatCave_Fallarbor_2F_EventScript_Ratduardo
	.2byte 0


RatCave_Fallarbor_2F_EventScript_Raticate::
# 8 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lock
# 9 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 10 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 20
# 11 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	release
	return


RatCave_Fallarbor_2F_EventScript_RaticateAlola::
# 15 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lock
# 16 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 17 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 20
# 18 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	release
	return


RatCave_Fallarbor_2F_EventScript_Ratduardo::
# 22 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lockall
# 23 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 24 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 26 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox RatCave_Fallarbor_2F_Text_RatduardoIntro, MSGBOX_AUTOCLOSE
# 27 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 28 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_2, RatCave_Fallarbor_2F_Text_RatduardoDefeat
# 29 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 30 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 1
# 31 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 2
# 32 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 3
# 33 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 34 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox RatCave_Fallarbor_2F_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 36 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 37 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_FALLARBOR
# 38 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	call FallarborRatCaveShake
# 39 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 6
# 40 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	releaseall
	end


FallarborRatCaveShake::
# 54 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 30
# 55 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 56 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8005, 6
# 57 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8006, 8
# 58 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 59 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	special ShakeCamera
# 60 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitstate
# 61 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 60
# 62 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	special ShakeCamera
# 63 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitstate
# 64 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 60
	return


Fallarbor_RatCave_Rock::
# 69 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lock
# 70 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox Fallarbor_RatCave_Rock_Text_0, MSGBOX_AUTOCLOSE
# 72 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 73 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	release
	end


RatCave_Fallarbor_2F_EventScript_Ratduardo_Text_0:
# 34 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE} RATDUARDO's voice echoes again:\p {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Don't… get… in my way…!$"

Fallarbor_RatCave_Rock_Text_0:
# 70 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "Doesn't look like the cave in \n can be cleared anytime soon.$"

RatCave_Fallarbor_2F_Text_RatduardoIntro::
# 45 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "Again… You…$"

RatCave_Fallarbor_2F_Text_RatduardoDefeat::
# 49 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "…$"
