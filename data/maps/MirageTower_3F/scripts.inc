# 1 "data/maps/MirageTower_3F/scripts.pory"
.set LOCALID_ROOT_FOSSIL, 3
# 2 "data/maps/MirageTower_3F/scripts.pory"
.set LOCALID_CLAW_FOSSIL, 4
# 3 "data/maps/MirageTower_3F/scripts.pory"

# 4 "data/maps/MirageTower_3F/scripts.pory"
MirageTower_3F_MapScripts::
# 5 "data/maps/MirageTower_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 6 "data/maps/MirageTower_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 7 "data/maps/MirageTower_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_3F_SetHoleWarp
# 8 "data/maps/MirageTower_3F/scripts.pory"
	.byte 0
# 9 "data/maps/MirageTower_3F/scripts.pory"

# 10 "data/maps/MirageTower_3F/scripts.pory"
MirageTower_3F_SetHoleWarp:
# 11 "data/maps/MirageTower_3F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 12 "data/maps/MirageTower_3F/scripts.pory"
	setholewarp MAP_MIRAGE_TOWER_2F
# 13 "data/maps/MirageTower_3F/scripts.pory"
	end
# 14 "data/maps/MirageTower_3F/scripts.pory"

# 15 "data/maps/MirageTower_3F/scripts.pory"
MirageTower_3F_EventScript_RootFossil::
# 16 "data/maps/MirageTower_3F/scripts.pory"
	lock
# 17 "data/maps/MirageTower_3F/scripts.pory"
	faceplayer
# 18 "data/maps/MirageTower_3F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 19 "data/maps/MirageTower_3F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveRootFossil
# 20 "data/maps/MirageTower_3F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 21 "data/maps/MirageTower_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 22 "data/maps/MirageTower_3F/scripts.pory"
	closemessage
# 23 "data/maps/MirageTower_3F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 24 "data/maps/MirageTower_3F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 25 "data/maps/MirageTower_3F/scripts.pory"
	removeobject LOCALID_ROOT_FOSSIL
# 26 "data/maps/MirageTower_3F/scripts.pory"
	delay 30
# 27 "data/maps/MirageTower_3F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 28 "data/maps/MirageTower_3F/scripts.pory"
	goto MirageTower_3F_EventScript_OtherFossilDisappeared
# 29 "data/maps/MirageTower_3F/scripts.pory"
	end
# 30 "data/maps/MirageTower_3F/scripts.pory"

# 31 "data/maps/MirageTower_3F/scripts.pory"
MirageTower_3F_EventScript_LeaveRootFossil::
# 32 "data/maps/MirageTower_3F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
# 33 "data/maps/MirageTower_3F/scripts.pory"
	release
# 34 "data/maps/MirageTower_3F/scripts.pory"
	end
# 35 "data/maps/MirageTower_3F/scripts.pory"

# 36 "data/maps/MirageTower_3F/scripts.pory"
MirageTower_3F_EventScript_ClawFossil::
# 37 "data/maps/MirageTower_3F/scripts.pory"
	lock
# 38 "data/maps/MirageTower_3F/scripts.pory"
	faceplayer
# 39 "data/maps/MirageTower_3F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 40 "data/maps/MirageTower_3F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveClawFossil
# 41 "data/maps/MirageTower_3F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 42 "data/maps/MirageTower_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 43 "data/maps/MirageTower_3F/scripts.pory"
	closemessage
# 44 "data/maps/MirageTower_3F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 45 "data/maps/MirageTower_3F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 46 "data/maps/MirageTower_3F/scripts.pory"
	removeobject LOCALID_CLAW_FOSSIL
# 47 "data/maps/MirageTower_3F/scripts.pory"
	delay 30
# 48 "data/maps/MirageTower_3F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 49 "data/maps/MirageTower_3F/scripts.pory"
	goto MirageTower_3F_EventScript_OtherFossilDisappeared
# 50 "data/maps/MirageTower_3F/scripts.pory"
	end
# 51 "data/maps/MirageTower_3F/scripts.pory"

# 52 "data/maps/MirageTower_3F/scripts.pory"
MirageTower_3F_EventScript_LeaveClawFossil::
# 53 "data/maps/MirageTower_3F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
# 54 "data/maps/MirageTower_3F/scripts.pory"
	release
# 55 "data/maps/MirageTower_3F/scripts.pory"
	end

MirageTower_3F_EventScript_OtherFossilDisappeared::
# 59 "data/maps/MirageTower_3F/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, MirageTower_3F_EventScript_OtherFossilDisappeared_2
# 66 "data/maps/MirageTower_3F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 67 "data/maps/MirageTower_3F/scripts.pory"
	removeobject LOCALID_CLAW_FOSSIL
# 68 "data/maps/MirageTower_3F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 69 "data/maps/MirageTower_3F/scripts.pory"
	msgbox MirageTower_3F_EventScript_OtherFossilDisappeared_Text_1, MSGBOX_AUTOCLOSE
MirageTower_3F_EventScript_OtherFossilDisappeared_1:
# 71 "data/maps/MirageTower_3F/scripts.pory"
	waitmessage
# 72 "data/maps/MirageTower_3F/scripts.pory"
	release
	end

MirageTower_3F_EventScript_OtherFossilDisappeared_2:
# 60 "data/maps/MirageTower_3F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 61 "data/maps/MirageTower_3F/scripts.pory"
	removeobject LOCALID_ROOT_FOSSIL
# 62 "data/maps/MirageTower_3F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 63 "data/maps/MirageTower_3F/scripts.pory"
	msgbox MirageTower_3F_EventScript_OtherFossilDisappeared_Text_0, MSGBOX_AUTOCLOSE
	goto MirageTower_3F_EventScript_OtherFossilDisappeared_1


MirageTower_3F_EventScript_OtherFossilDisappeared_Text_0:
# 63 "data/maps/MirageTower_3F/scripts.pory"
	.string "The ROOT FOSSIL disappeared…$"

MirageTower_3F_EventScript_OtherFossilDisappeared_Text_1:
# 69 "data/maps/MirageTower_3F/scripts.pory"
	.string "The CLAW FOSSIL disappeared…$"
