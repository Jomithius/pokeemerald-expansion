SnowdriftCity_House3_MapScripts::
# 2 "data/maps/SnowdriftCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowdriftCity_House3_OnTransition
# 3 "data/maps/SnowdriftCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SnowdriftCity_House3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SnowdriftCity_House3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SnowdriftCity_House3/scripts.pory"
	map_script_2 VAR_CYNTHIA_STATE, 0, SnowdriftCity_House3_EventScript_CynthiaEncounter
# 5 "data/maps/SnowdriftCity_House3/scripts.pory"
	map_script_2 VAR_CYNTHIA_STATE, 1, SnowdriftCity_House3_EventScript_CynthiaReencounter
	.2byte 0


SnowdriftCity_House3_OnTransition::
# 10 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_TEMP_E
# 11 "data/maps/SnowdriftCity_House3/scripts.pory"
	call_if_not_defeated TRAINER_CYNTHIA, SnowdriftCity_House3_UpdateMusic
# 12 "data/maps/SnowdriftCity_House3/scripts.pory"
	call_if_ge VAR_FINAL_REMATCH_STATE, 9, SnowdriftCity_House3_UpdateMusicJimmy
	end


SnowdriftCity_House3_UpdateMusic::
# 17 "data/maps/SnowdriftCity_House3/scripts.pory"
	savebgm MUS_ENCOUNTER_CYNTHIA
	return


SnowdriftCity_House3_UpdateMusicJimmy::
# 22 "data/maps/SnowdriftCity_House3/scripts.pory"
	savebgm MUS_THE_DAY_WILL_COME
	return


SnowdriftCity_House3_EventScript_CynthiaEncounter::
# 27 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 28 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_PIN
# 29 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 30 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 31 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 32 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 33 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 34 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 36 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaApproachesPlayer
# 37 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 38 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_1, MSGBOX_AUTOCLOSE
# 46 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 47 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 48 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 49 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 54 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 55 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 56 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_3, MSGBOX_DEFAULT
# 60 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 61 "data/maps/SnowdriftCity_House3/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_4, SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_5
# 62 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SnowdriftCity_House3_EventScript_PlayerFlees
# 63 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto SnowdriftCity_House3_EventScript_CynthiaBattle
	end


SnowdriftCity_House3_EventScript_CynthiaReencounter::
# 68 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 69 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_PIN
# 70 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 71 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 72 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 73 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 74 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 75 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_0, MSGBOX_AUTOCLOSE
# 76 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 77 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaApproachesPlayer
# 78 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 79 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 82 "data/maps/SnowdriftCity_House3/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_2, SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_3
# 83 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SnowdriftCity_House3_EventScript_PlayerFlees
# 84 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto SnowdriftCity_House3_EventScript_CynthiaBattle
	end


SnowdriftCity_House3_EventScript_PlayerFlees::
# 89 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 90 "data/maps/SnowdriftCity_House3/scripts.pory"
	closemessage
# 91 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_CYNTHIA_STATE, 1
# 92 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 0
# 94 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 95 "data/maps/SnowdriftCity_House3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_FLEE
# 97 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 98 "data/maps/SnowdriftCity_House3/scripts.pory"
	warpsilent MAP_SNOWDRIFT_CITY, 34, 28
# 99 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitstate
# 100 "data/maps/SnowdriftCity_House3/scripts.pory"
	releaseall
	end


SnowdriftCity_House3_EventScript_CynthiaBattle::
# 105 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 106 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 107 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 108 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaBattle_Text_0, MSGBOX_AUTOCLOSE
# 115 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 116 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 117 "data/maps/SnowdriftCity_House3/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA, SnowdriftCity_House3_Text_CynthiaLoss
# 118 "data/maps/SnowdriftCity_House3/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 119 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaBattle_Text_1, MSGBOX_AUTOCLOSE
# 126 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 127 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaReturnsToSeat
# 128 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 129 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_SYS_DEFEATED_CYNTHIA
# 130 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_CYNTHIA_STATE, 2
# 131 "data/maps/SnowdriftCity_House3/scripts.pory"
	call_if_eq VAR_ULTRA_SPACE_STATE, 4, SnowdriftCity_House3_EventScriptTryUnlockAreaZero
# 132 "data/maps/SnowdriftCity_House3/scripts.pory"
	savebgm MUS_DUMMY
# 133 "data/maps/SnowdriftCity_House3/scripts.pory"
	fadedefaultbgm
# 134 "data/maps/SnowdriftCity_House3/scripts.pory"
	releaseall
	end


SnowdriftCity_House3_EventScriptTryUnlockAreaZero::
# 139 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_UNLOCKED_AREA_ZERO, SnowdriftCity_House3_EventScriptTryUnlockAreaZero_3
SnowdriftCity_House3_EventScriptTryUnlockAreaZero_1:
	return

SnowdriftCity_House3_EventScriptTryUnlockAreaZero_2:
# 140 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
	goto SnowdriftCity_House3_EventScriptTryUnlockAreaZero_1

SnowdriftCity_House3_EventScriptTryUnlockAreaZero_3:
# 139 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_RED, SnowdriftCity_House3_EventScriptTryUnlockAreaZero_2
	goto SnowdriftCity_House3_EventScriptTryUnlockAreaZero_1


SnowdriftCity_House3_EventScript_Cynthia::
# 146 "data/maps/SnowdriftCity_House3/scripts.pory"
	lock
# 147 "data/maps/SnowdriftCity_House3/scripts.pory"
	faceplayer
# 148 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_Cynthia_Text_0, MSGBOX_AUTOCLOSE
# 158 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 159 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 160 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 0
# 161 "data/maps/SnowdriftCity_House3/scripts.pory"
	release
	end


# 171 "data/maps/SnowdriftCity_House3/scripts.pory"
SnowdriftCity_House3_Movement_CynthiaReturnsToSeat:
# 172 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_up
# 172 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_up
# 173 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_right
# 173 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/SnowdriftCity_House3/scripts.pory"
SnowdriftCity_House3_Movement_CynthiaApproachesPlayer:
# 177 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_left
# 177 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_left
# 178 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_down
	step_end

SnowdriftCity_House3_EventScript_JimmyStatReport::
# 182 "data/maps/SnowdriftCity_House3/scripts.pory"
	lock
# 183 "data/maps/SnowdriftCity_House3/scripts.pory"
	faceplayer
# 184 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_0, MSGBOX_DEFAULT
# 194 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 195 "data/maps/SnowdriftCity_House3/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_WIPE_COUNTER
# 196 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_WIPE_COUNTER, 10
	goto_if_gt SnowdriftCity_House3_EventScript_JimmyStatReport_6
SnowdriftCity_House3_EventScript_JimmyStatReport_5:
# 200 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_WIPE_COUNTER, 0
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_3
# 206 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_3, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_1:
# 209 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 210 "data/maps/SnowdriftCity_House3/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIFFICULTY_SWITCH_COUNTER
# 211 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_DIFFICULTY_SWITCH_COUNTER, 5
	goto_if_gt SnowdriftCity_House3_EventScript_JimmyStatReport_10
# 215 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_DIFFICULTY_SWITCH_COUNTER, 0
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_11
# 220 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_6, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_9:
# 223 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 224 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_RAT_CAVE_STATE, 12
	goto_if_le SnowdriftCity_House3_EventScript_JimmyStatReport_16
# 230 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_8, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_15:
# 234 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 235 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, SnowdriftCity_House3_EventScript_JimmyStatReport_20
# 241 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_10, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_19:
# 244 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 245 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_RED, SnowdriftCity_House3_EventScript_JimmyStatReport_24
# 254 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_12, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_23:
# 257 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 258 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_JAMES, SnowdriftCity_House3_EventScript_JimmyStatReport_28
# 265 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_14, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_27:
# 269 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 270 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_32
SnowdriftCity_House3_EventScript_JimmyStatReport_31:
# 279 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_35
SnowdriftCity_House3_EventScript_JimmyStatReport_34:
# 289 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_LINA_TALKED_TO, 3
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_38
SnowdriftCity_House3_EventScript_JimmyStatReport_37:
# 298 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_set FLAG_HIDE_MAE_WACHUNPELON, SnowdriftCity_House3_EventScript_JimmyStatReport_41
SnowdriftCity_House3_EventScript_JimmyStatReport_40:
# 305 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE_PARTNER, SnowdriftCity_House3_EventScript_JimmyStatReport_44
SnowdriftCity_House3_EventScript_JimmyStatReport_43:
# 316 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_20, MSGBOX_YESNO
# 317 "data/maps/SnowdriftCity_House3/scripts.pory"
	call_if_eq VAR_RESULT, YES, SnowdriftCity_House3_EventScript_ResetFinalRematches
# 318 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_21, MSGBOX_AUTOCLOSE
# 325 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 326 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_HIDE_FAT_MAN_BATTLE_FRONTIER
# 327 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 328 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 0
# 329 "data/maps/SnowdriftCity_House3/scripts.pory"
	release
	end

SnowdriftCity_House3_EventScript_JimmyStatReport_2:
# 197 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_1, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_1

SnowdriftCity_House3_EventScript_JimmyStatReport_3:
# 201 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_2, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_1

SnowdriftCity_House3_EventScript_JimmyStatReport_6:
# 196 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_set FLAG_SYS_HARD_MODE, SnowdriftCity_House3_EventScript_JimmyStatReport_2
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_5

SnowdriftCity_House3_EventScript_JimmyStatReport_10:
# 212 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_4, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_9

SnowdriftCity_House3_EventScript_JimmyStatReport_11:
# 216 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_5, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_9

SnowdriftCity_House3_EventScript_JimmyStatReport_16:
# 225 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_7, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_15

SnowdriftCity_House3_EventScript_JimmyStatReport_20:
# 236 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_9, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_19

SnowdriftCity_House3_EventScript_JimmyStatReport_24:
# 246 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_11, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_23

SnowdriftCity_House3_EventScript_JimmyStatReport_28:
# 259 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_13, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_27

SnowdriftCity_House3_EventScript_JimmyStatReport_32:
# 271 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_15, MSGBOX_DEFAULT
# 277 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_31

SnowdriftCity_House3_EventScript_JimmyStatReport_35:
# 280 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_16, MSGBOX_DEFAULT
# 287 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_34

SnowdriftCity_House3_EventScript_JimmyStatReport_38:
# 290 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_17, MSGBOX_DEFAULT
# 296 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_37

SnowdriftCity_House3_EventScript_JimmyStatReport_41:
# 299 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_18, MSGBOX_DEFAULT
# 303 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_40

SnowdriftCity_House3_EventScript_JimmyStatReport_44:
# 306 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_19, MSGBOX_DEFAULT
# 314 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_43


SnowdriftCity_House3_EventScript_ResetFinalRematches::
# 334 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_ROXANNE_2
# 335 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_BRAWLY_2
# 336 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_WATTSON_2
# 337 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_FLANNERY_2
# 338 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_NORMAN_2
# 339 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_WINONA_2
# 340 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_MOMO
# 341 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_ARIA
# 342 "data/maps/SnowdriftCity_House3/scripts.pory"
	cleartrainerflag TRAINER_JUAN_2
# 343 "data/maps/SnowdriftCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 344 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitfanfare
# 345 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_ResetFinalRematches_Text_0, MSGBOX_DEFAULT
# 346 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_LINA_TALKED_TO, 3
	goto_if_eq SnowdriftCity_House3_EventScript_ResetFinalRematches_2
SnowdriftCity_House3_EventScript_ResetFinalRematches_1:
# 350 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_JAMES, SnowdriftCity_House3_EventScript_ResetFinalRematches_5
SnowdriftCity_House3_EventScript_ResetFinalRematches_4:
	return

SnowdriftCity_House3_EventScript_ResetFinalRematches_2:
# 347 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
# 348 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_ResetFinalRematches_Text_1, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_ResetFinalRematches_1

SnowdriftCity_House3_EventScript_ResetFinalRematches_5:
# 351 "data/maps/SnowdriftCity_House3/scripts.pory"
	clearflag FLAG_SYS_DEFEATED_JAMES
# 352 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_ResetFinalRematches_Text_2, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_ResetFinalRematches_4


SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_0:
# 34 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "???: What's this?$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_1:
# 38 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "What's your name?\p …\p Okay. I'll remember that!\n {PLAYER}, nice to meet you.\p I'm CYNTHIA.\n I'm a POKéMON TRAINER too, like you.\p I have an insatiable curiosity for\n researching POKéMON myths.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_2:
# 49 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "I'm sure you know about HOENN's\n SEALED CHAMBERS, right?\p I'm staying here at my friend's villa\n so I can investigate them.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_3:
# 56 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "In order to get to know each other\n better as POKéMON TRAINERS, I would\l like our POKéMON to have a match.\p Would you care to be my opponent?$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_4:
# 61 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "I'd love to.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_5:
# 61 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "OH, GOD. SOMEBODY SAVE ME!$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_0:
# 75 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "CYNTHIA: What's this?$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_1:
# 79 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You came back!\n Did you change your mind?$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_2:
# 82 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "… Yeah. Sorry about that.$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_3:
# 82 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "NO! I'M STILL SCARED!$"

SnowdriftCity_House3_EventScript_CynthiaBattle_Text_0:
# 108 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Before I send out my POKéMON,\n my heart always begins to race…\p Interesting…\n My POKéMON in their POKé BALLS are\l radiating a happy feeling.\p Are you the reason?\n What are you?$"

SnowdriftCity_House3_EventScript_CynthiaBattle_Text_1:
# 119 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "That was beyond my expectation!\n What an exceptional battle!\p I really love visiting HOENN.\p I can't stay all year, because there's so\n much to investigate in SINNOH, as well.\p You're a great TRAINER, and it would\n make me happy to see you again sometime.$"

SnowdriftCity_House3_EventScript_Cynthia_Text_0:
# 148 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You certainly bear a resemblance\n to that TRAINER who faced GIRATINA…\p Oh, pardon me.\n I was just thinking out loud.\p I love visiting HOENN.\p I can't stay all year, because there's so\n much to investigate in SINNOH, as well.\p Though I've heard in HOENN there's six\n legendary golems, compared to the four\l in SINNOH.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_0:
# 184 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "{PLAYER}!\n Thanks for coming.\p You probably didn't expect me to\n know CYNTHIA, huh!\p Were you jump scared the first time\n you walked into this house?\p Well… There shouldn't be anything left\n for you to do, but I can give you some\l stats about your playthrough.\p Let's see…$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_1:
# 197 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You wiped {STR_VAR_1} times.\n Was it really that difficult?$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_2:
# 201 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You didn't wipe at all?!\p Are you a POKéMON MASTER?\n Or were you save scumming?$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_3:
# 206 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You wiped {STR_VAR_1} time(s).\n That's not bad!$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_4:
# 212 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You changed difficulties {STR_VAR_1} times.\n You couldn't make up your mind or what?$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_5:
# 216 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You stayed on the same difficulty\n your whole playthrough.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_6:
# 220 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You changed difficulty\n {STR_VAR_1} time(s).$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_7:
# 225 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Oh… poor RATDUARDO.\p He'll never be free from\n DARKRAI's curse.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_8:
# 230 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Oh!\p You freed RATDUARDO from\n DARKRAI's curse.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_9:
# 236 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Wow, you didn't beat BRUNO?\p Well, I guess everybody does\n talk about how strong he is.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_10:
# 241 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You beat BRUNO.\n Nice!$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_11:
# 246 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You missed a familiar TRAINER.\p {PLAYER}… How did you miss that?\n Or did you see him and forget?\p Either way, go back to the fork\n at AZURE MOUNTAIN and take the\l ladder up to the peak.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_12:
# 254 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You beat RED.\n Good job!$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_13:
# 259 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Oh!\n Here's something you missed.\p Go back to the lab in LUSH ACREAGE\n and talk to JAMES.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_14:
# 265 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Wow you even went back and\n fought JAMES again?\p I'm impressed.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_15:
# 271 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Damn!\n You didn't get to see the superboss!\p But you still have a chance, if you're\n interested.\p Make sure you took her EEVEE, then go\n talk to JAMES.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_16:
# 280 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Oh! Did LINA ask you about\n where her EEVEE went?\l Did you lie to her?\p Or did you just apologize to her\n a bunch?\p Either way, it looks like she\n was too scary for you.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_17:
# 290 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You beat EUGENIA too?\n How was that fight for you?\p I had a lot of fun when I battled\n her.\p She's still mad about you stealing\n her EEVEE!$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_18:
# 299 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Oh, it looks like you didn't run\n into the diva in every location.\p Check SLATEPORT or LILYCOVE DEPT.\n STORE, then WACHUNPELON.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_19:
# 306 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "ARIA would be disappointed…\n You never found the SACRED BLADE.\p Or maybe you just never talked\n to ARIA with it in your BAG.\p Well, go back to JIRACHI's ALTAR\n and you'll find it.\p If you go talk to ARIA after that\n they'll have a gift for you.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_20:
# 316 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Do you want me to reset the GYM\nLEADER final rematches too?$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_21:
# 318 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "JIMMY: Well… that's it, {PLAYER}!\p There's other things you could've\n missed.\p “PuzzlesImportantItemsSecrets” in\n the SPOILERS folder has everything.\p Thanks again for playing.\n I hope you enjoyed it!$"

SnowdriftCity_House3_EventScript_ResetFinalRematches_Text_0:
# 345 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The GYM LEADERS can now be fought\nagain.\pThe ELITE FOUR can be re-challenged at\nanytime.$"

SnowdriftCity_House3_EventScript_ResetFinalRematches_Text_1:
# 348 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}EUGENIA can also be re-challenged.$"

SnowdriftCity_House3_EventScript_ResetFinalRematches_Text_2:
# 352 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}JAMES can also be re-challenged.$"

SnowdriftCity_House3_Text_CynthiaLoss::
# 165 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "My heart is pounding so hard because I\n had such a heated battle with you.\p You're a really great TRAINER!!$"
