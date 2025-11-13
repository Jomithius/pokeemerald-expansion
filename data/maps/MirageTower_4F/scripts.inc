# 1 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_MapScripts::
# 2 "data/maps/MirageTower_4F/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, MirageTower_4F_OnResume
# 3 "data/maps/MirageTower_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MirageTower_4F/scripts.pory"

# 5 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil::
# 6 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 7 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 8 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 9 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveRootFossil
# 10 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 11 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 12 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 13 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 14 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 15 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_ROOT_FOSSIL
# 16 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 17 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 18 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 19 "data/maps/MirageTower_4F/scripts.pory"
	end
# 20 "data/maps/MirageTower_4F/scripts.pory"

# 21 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveRootFossil::
# 22 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
# 23 "data/maps/MirageTower_4F/scripts.pory"
	release
# 24 "data/maps/MirageTower_4F/scripts.pory"
	end
# 25 "data/maps/MirageTower_4F/scripts.pory"

# 26 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil::
# 27 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 28 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 29 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 30 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveClawFossil
# 31 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 32 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 34 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 35 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 36 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_CLAW_FOSSIL
# 37 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 38 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 39 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 40 "data/maps/MirageTower_4F/scripts.pory"
	end
# 41 "data/maps/MirageTower_4F/scripts.pory"

# 42 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveClawFossil::
# 43 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
# 44 "data/maps/MirageTower_4F/scripts.pory"
	release
# 45 "data/maps/MirageTower_4F/scripts.pory"
	end
# 46 "data/maps/MirageTower_4F/scripts.pory"

# 47 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CollapseMirageTower::
# 48 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 49 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 50 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32  @ num shakes
# 51 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2   @ shake delay
# 52 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 53 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 54 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 55 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 56 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 57 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 58 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 59 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 60 "data/maps/MirageTower_4F/scripts.pory"
	release
# 61 "data/maps/MirageTower_4F/scripts.pory"
	end
# 62 "data/maps/MirageTower_4F/scripts.pory"

# 63 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeRootFossil:
# 64 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the ROOT FOSSIL.\p"
# 65 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the other\n"
# 66 "data/maps/MirageTower_4F/scripts.pory"
	.string "will likely fall into the sand…\p"
# 67 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the ROOT FOSSIL anyway?$"
# 68 "data/maps/MirageTower_4F/scripts.pory"

# 69 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftRootFossilAlone:
# 70 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"
# 71 "data/maps/MirageTower_4F/scripts.pory"

# 72 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeClawFossil:
# 73 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the CLAW FOSSIL.\p"
# 74 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the other\n"
# 75 "data/maps/MirageTower_4F/scripts.pory"
	.string "will likely fall into the sand…\p"
# 76 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the CLAW FOSSIL anyway?$"
# 77 "data/maps/MirageTower_4F/scripts.pory"

# 78 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveClawFossilAlone:
# 79 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"

MirageTower_4F_OnResume::
# 84 "data/maps/MirageTower_4F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MirageTower_4F_TryRemoveVolcarona
	end


MirageTower_4F_TryRemoveVolcarona::
# 89 "data/maps/MirageTower_4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 90 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 91 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 92 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 93 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Common_EventScript_NopReturn
# 94 "data/maps/MirageTower_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 95 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_DEFEATED_VOLCARONA
# 96 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	return


MirageTower_4F_EventScript_Volcarona::
# 101 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 102 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 103 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/MirageTower_4F/scripts.pory"
	playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
# 105 "data/maps/MirageTower_4F/scripts.pory"
	waitmoncry
# 106 "data/maps/MirageTower_4F/scripts.pory"
	setwildbattle SPECIES_VOLCARONA, 35
# 107 "data/maps/MirageTower_4F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 108 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 109 "data/maps/MirageTower_4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 110 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MirageTower_4F_EventScript_Volcarona_2
# 110 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MirageTower_4F_EventScript_Volcarona_2
# 123 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MirageTower_4F_EventScript_Volcarona_3
# 137 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, MirageTower_4F_EventScript_CollapseMirageTower
# 138 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, MirageTower_4F_EventScript_CollapseMirageTower
MirageTower_4F_EventScript_Volcarona_1:
# 140 "data/maps/MirageTower_4F/scripts.pory"
	release
	end

MirageTower_4F_EventScript_Volcarona_2:
# 111 "data/maps/MirageTower_4F/scripts.pory"
	playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
# 112 "data/maps/MirageTower_4F/scripts.pory"
	waitmoncry
# 113 "data/maps/MirageTower_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 114 "data/maps/MirageTower_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 115 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 116 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_DEFEATED_VOLCARONA
# 117 "data/maps/MirageTower_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 118 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_EventScript_Volcarona_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/MirageTower_4F/scripts.pory"
	waitmessage
# 120 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, MirageTower_4F_EventScript_CollapseMirageTower
# 121 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, MirageTower_4F_EventScript_CollapseMirageTower
	goto MirageTower_4F_EventScript_Volcarona_1

MirageTower_4F_EventScript_Volcarona_3:
# 124 "data/maps/MirageTower_4F/scripts.pory"
	playmoncry SPECIES_VOLCARONA, CRY_MODE_FAINT
# 125 "data/maps/MirageTower_4F/scripts.pory"
	waitmoncry
# 126 "data/maps/MirageTower_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 127 "data/maps/MirageTower_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 128 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_DEFEATED_VOLCARONA
# 129 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 130 "data/maps/MirageTower_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 131 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_EventScript_Volcarona_Text_0, MSGBOX_AUTOCLOSE
# 132 "data/maps/MirageTower_4F/scripts.pory"
	waitmessage
# 133 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, MirageTower_4F_EventScript_CollapseMirageTower
# 134 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, MirageTower_4F_EventScript_CollapseMirageTower
	goto MirageTower_4F_EventScript_Volcarona_1


MirageTower_4F_EventScript_Volcarona_Text_0:
# 118 "data/maps/MirageTower_4F/scripts.pory"
	.string "The VOLCARONA disappeared…$"
