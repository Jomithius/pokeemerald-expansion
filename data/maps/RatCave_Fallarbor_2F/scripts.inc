RatCave_Fallarbor_2F_MapScripts::
# 2 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RatCave_Fallarbor_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RatCave_Fallarbor_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	map_script_2 VAR_RAT_CAVE_STATE, 5, RatCave_Fallarbor_2F_EventScript_Ratduardo
	.2byte 0


RatCave_Fallarbor_2F_EventScript_Ratduardo::
# 8 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lockall
# 9 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 10 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmovement 0
# 11 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 12 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox RatCave_Fallarbor_2F_Text_RatduardoIntro, MSGBOX_AUTOCLOSE
# 13 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 14 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_2, RatCave_Fallarbor_2F_Text_RatduardoDefeat
# 15 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 16 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 1
# 17 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 2
# 18 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	removeobject 3
# 19 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 20 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox RatCave_Fallarbor_2F_EventScript_Ratduardo_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 23 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_FALLARBOR
# 24 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	call FallarborRatCaveShake
# 25 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 6
# 26 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	releaseall
	end


FallarborRatCaveShake::
# 40 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 30
# 41 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 42 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8005, 6
# 43 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8006, 8
# 44 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 45 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	special ShakeCamera
# 46 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitstate
# 47 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 60
# 48 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	special ShakeCamera
# 49 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitstate
# 50 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	delay 60
	return


Fallarbor_RatCave_Rock::
# 55 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	lock
# 56 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	msgbox Fallarbor_RatCave_Rock_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	waitmessage
# 59 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	release
	end


RatCave_Fallarbor_2F_EventScript_Ratduardo_Text_0:
# 20 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "RATDUARDO's voice echoes:\p Don't… get… in my way…!$"

Fallarbor_RatCave_Rock_Text_0:
# 56 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "Doesn't look like the cave in \n can be cleared anytime soon.$"

RatCave_Fallarbor_2F_Text_RatduardoIntro::
# 31 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "Again… You…$"

RatCave_Fallarbor_2F_Text_RatduardoDefeat::
# 35 "data/maps/RatCave_Fallarbor_2F/scripts.pory"
	.string "…$"
