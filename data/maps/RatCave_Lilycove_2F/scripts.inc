RatCave_Lilycove_2F_MapScripts::
	.byte 0


LilycoveCity_RatCave_Rock::
# 4 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	lock
# 5 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	msgbox LilycoveCity_RatCave_Rock_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitmessage
# 8 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	release
	end


RatCave_LilycoveCity_2F_EventScript_Ratduardo::
# 13 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	lockall
# 14 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	playse SE_PIN
# 15 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 16 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitmovement 3
# 17 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 18 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitmovement 3
# 19 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_3, RatCave_LilycoveCity_2F_Text_RatduardoDefeat
# 20 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	call RatCave_LilycoveCity_2F_BattleOver
# 21 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	call LilycoveCityRatCaveShake
# 22 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	releaseall
	end


RatCave_LilycoveCity_2F_BattleOver::
# 36 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	lockall
# 37 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 38 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	removeobject 3
# 39 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	removeobject 4
# 40 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	removeobject 5
# 41 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 42 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setflag FLAG_HIDE_RATDUARDO_LILYCOVE
	return


LilycoveCityRatCaveShake::
# 47 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	delay 30
# 48 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 49 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setvar VAR_0x8005, 6
# 50 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setvar VAR_0x8006, 8
# 51 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 52 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	special ShakeCamera
# 53 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitstate
# 54 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	delay 60
# 55 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	special ShakeCamera
# 56 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	waitstate
# 57 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	delay 60
	return


LilycoveCity_RatCave_Rock_Text_0:
# 5 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	.string "Doesn't look like the cave in \n can be cleared anytime soon.$"

RatCave_LilycoveCity_2F_Text_RatduardoIntro::
# 26 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	.string "...!$"

RatCave_LilycoveCity_2F_Text_RatduardoDefeat::
# 30 "data/maps/RatCave_Lilycove_2F/scripts.pory"
	.string "I... just.. want to be...\n free...$"
