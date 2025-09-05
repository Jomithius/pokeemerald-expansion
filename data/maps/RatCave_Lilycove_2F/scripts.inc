RatCave_Lilycove_2F_MapScripts::
# 2 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RatCave_Lilycove_2F_OnResume
	.byte 0


RatCave_Lilycove_2F_OnResume::
# 6 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	call_if_set FLAG_TEMP_7, RatCave_Lilycove_2F_RemoveRaticate
	end


RatCave_Lilycove_2F_RemoveRaticate::
# 11 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	removeobject 4
# 12 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	removeobject 5
	return


LilycoveCity_RatCave_Rock::
# 17 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	lock
# 18 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	msgbox LilycoveCity_RatCave_Rock_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitmessage
# 21 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	release
	end


RatCave_LilycoveCity_2F_EventScript_Ratduardo::
# 26 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	lock
# 27 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	delay 20
# 28 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	playse SE_PIN
# 29 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 30 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitmovement 3
# 31 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitse
# 32 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	faceplayer
# 33 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 34 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq RatCave_LilycoveCity_2F_EventScript_Ratduardo_2
RatCave_LilycoveCity_2F_EventScript_Ratduardo_1:
# 39 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setflag FLAG_TEMP_7
# 40 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_3, RatCave_LilycoveCity_2F_Text_RatduardoDefeat
# 41 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	call RatCave_LilycoveCity_2F_BattleOver
# 42 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	call LilycoveCityRatCaveShake
# 43 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	release
	end

RatCave_LilycoveCity_2F_EventScript_Ratduardo_2:
# 35 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 36 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 37 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitmovement 5
	goto RatCave_LilycoveCity_2F_EventScript_Ratduardo_1


RatCave_LilycoveCity_2F_BattleOver::
# 57 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 58 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	removeobject 3
# 59 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	removeobject 4
# 60 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	removeobject 5
# 61 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 62 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_LILYCOVE
	return


LilycoveCityRatCaveShake::
# 67 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	delay 30
# 68 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 69 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setvar VAR_0x8005, 6
# 70 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setvar VAR_0x8006, 8
# 71 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 72 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	special ShakeCamera
# 73 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitstate
# 74 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	delay 60
# 75 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	special ShakeCamera
# 76 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitstate
# 77 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	delay 60
	return


LilycoveCity_RatCave_Rock_Text_0:
# 18 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	.string "Doesn't look like the cave in \n can be cleared anytime soon.$"

RatCave_LilycoveCity_2F_Text_RatduardoIntro::
# 47 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	.string "…!$"

RatCave_LilycoveCity_2F_Text_RatduardoDefeat::
# 51 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	.string "I… just… want to be…\n free…$"
