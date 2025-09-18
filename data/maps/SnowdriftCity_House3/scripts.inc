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
	end


SnowdriftCity_House3_UpdateMusic::
# 16 "data/maps/SnowdriftCity_House3/scripts.pory"
	playbgm MUS_ENCOUNTER_CYNTHIA, TRUE
	return


SnowdriftCity_House3_EventScript_CynthiaEncounter::
# 21 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 22 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_PIN
# 23 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 24 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 25 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 26 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 27 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 28 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 30 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaApproachesPlayer
# 31 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 32 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_1, MSGBOX_AUTOCLOSE
# 40 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 41 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 42 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 43 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 48 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 49 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 50 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_3, MSGBOX_DEFAULT
# 54 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 55 "data/maps/SnowdriftCity_House3/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_4, SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_5
# 56 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SnowdriftCity_House3_EventScript_PlayerFlees
# 57 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto SnowdriftCity_House3_EventScript_CynthiaBattle
	end


SnowdriftCity_House3_EventScript_CynthiaReencounter::
# 62 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 63 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_PIN
# 64 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 65 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 66 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 67 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 68 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 69 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 71 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaApproachesPlayer
# 72 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 73 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_1, MSGBOX_DEFAULT
# 75 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 76 "data/maps/SnowdriftCity_House3/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_2, SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_3
# 77 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SnowdriftCity_House3_EventScript_PlayerFlees
# 78 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto SnowdriftCity_House3_EventScript_CynthiaBattle
	end


SnowdriftCity_House3_EventScript_PlayerFlees::
# 83 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 84 "data/maps/SnowdriftCity_House3/scripts.pory"
	closemessage
# 85 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_CYNTHIA_STATE, 1
# 86 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 0
# 88 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 89 "data/maps/SnowdriftCity_House3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_FLEE
# 91 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 92 "data/maps/SnowdriftCity_House3/scripts.pory"
	warpsilent MAP_SNOWDRIFT_CITY, 34, 28
# 93 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitstate
# 94 "data/maps/SnowdriftCity_House3/scripts.pory"
	releaseall
	end


SnowdriftCity_House3_EventScript_CynthiaBattle::
# 99 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 100 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 101 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 102 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaBattle_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 110 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 111 "data/maps/SnowdriftCity_House3/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA, SnowdriftCity_House3_Text_CynthiaLoss
# 112 "data/maps/SnowdriftCity_House3/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 113 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaBattle_Text_1, MSGBOX_AUTOCLOSE
# 120 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 121 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaReturnsToSeat
# 122 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 123 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_SYS_DEFEATED_CYNTHIA
# 124 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_CYNTHIA_STATE, 2
# 125 "data/maps/SnowdriftCity_House3/scripts.pory"
	call_if_eq VAR_ULTRA_SPACE_STATE, 4, SnowdriftCity_House3_EventScriptTryUnlockAreaZero
# 126 "data/maps/SnowdriftCity_House3/scripts.pory"
	savebgm MUS_DUMMY
# 127 "data/maps/SnowdriftCity_House3/scripts.pory"
	fadedefaultbgm
# 128 "data/maps/SnowdriftCity_House3/scripts.pory"
	releaseall
	end


SnowdriftCity_House3_EventScriptTryUnlockAreaZero::
# 133 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_UNLOCKED_AREA_ZERO, SnowdriftCity_House3_EventScriptTryUnlockAreaZero_3
SnowdriftCity_House3_EventScriptTryUnlockAreaZero_1:
	return

SnowdriftCity_House3_EventScriptTryUnlockAreaZero_2:
# 134 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
	goto SnowdriftCity_House3_EventScriptTryUnlockAreaZero_1

SnowdriftCity_House3_EventScriptTryUnlockAreaZero_3:
# 133 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_RED, SnowdriftCity_House3_EventScriptTryUnlockAreaZero_2
	goto SnowdriftCity_House3_EventScriptTryUnlockAreaZero_1


SnowdriftCity_House3_EventScript_Cynthia::
# 140 "data/maps/SnowdriftCity_House3/scripts.pory"
	lock
# 141 "data/maps/SnowdriftCity_House3/scripts.pory"
	faceplayer
# 142 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_Cynthia_Text_0, MSGBOX_AUTOCLOSE
# 152 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 153 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 154 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 0
# 155 "data/maps/SnowdriftCity_House3/scripts.pory"
	release
	end


# 165 "data/maps/SnowdriftCity_House3/scripts.pory"
SnowdriftCity_House3_Movement_CynthiaReturnsToSeat:
# 166 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_up
# 166 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_up
# 167 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_right
# 167 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_right
	step_end

# 170 "data/maps/SnowdriftCity_House3/scripts.pory"
SnowdriftCity_House3_Movement_CynthiaApproachesPlayer:
# 171 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_left
# 171 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_left
# 172 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_down
	step_end

SnowdriftCity_House3_EventScript_JimmyStatReport::
# 176 "data/maps/SnowdriftCity_House3/scripts.pory"
	lock
# 177 "data/maps/SnowdriftCity_House3/scripts.pory"
	faceplayer
# 178 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 190 "data/maps/SnowdriftCity_House3/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_WIPE_COUNTER
# 191 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_WIPE_COUNTER, 10
	goto_if_gt SnowdriftCity_House3_EventScript_JimmyStatReport_6
SnowdriftCity_House3_EventScript_JimmyStatReport_5:
# 195 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_WIPE_COUNTER, 0
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_3
# 201 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_3, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_1:
# 204 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 205 "data/maps/SnowdriftCity_House3/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DIFFICULTY_SWITCH_COUNTER
# 206 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_DIFFICULTY_SWITCH_COUNTER, 5
	goto_if_gt SnowdriftCity_House3_EventScript_JimmyStatReport_10
# 210 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_WIPE_COUNTER, 0
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_11
# 215 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_6, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_9:
# 218 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 219 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_RAT_CAVE_STATE, 12
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_16
# 225 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_8, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_15:
# 229 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 230 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_BRUNO, SnowdriftCity_House3_EventScript_JimmyStatReport_20
# 236 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_10, MSGBOX_AUTOCLOSE
SnowdriftCity_House3_EventScript_JimmyStatReport_19:
# 239 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 240 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_RED, SnowdriftCity_House3_EventScript_JimmyStatReport_24
# 249 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_12, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_23:
# 252 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 253 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_JAMES, SnowdriftCity_House3_EventScript_JimmyStatReport_28
# 260 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_14, MSGBOX_DEFAULT
SnowdriftCity_House3_EventScript_JimmyStatReport_27:
# 264 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 265 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EUGENIA, SnowdriftCity_House3_EventScript_JimmyStatReport_33
SnowdriftCity_House3_EventScript_JimmyStatReport_31:
# 274 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_LINA_TALKED_TO, 3
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_37
SnowdriftCity_House3_EventScript_JimmyStatReport_36:
# 283 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE_PARTNER, SnowdriftCity_House3_EventScript_JimmyStatReport_40
SnowdriftCity_House3_EventScript_JimmyStatReport_39:
# 294 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_18, MSGBOX_AUTOCLOSE
# 301 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 302 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 303 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 0
# 304 "data/maps/SnowdriftCity_House3/scripts.pory"
	release
	end

SnowdriftCity_House3_EventScript_JimmyStatReport_2:
# 192 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_1, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_1

SnowdriftCity_House3_EventScript_JimmyStatReport_3:
# 196 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_2, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_1

SnowdriftCity_House3_EventScript_JimmyStatReport_6:
# 191 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_set FLAG_SYS_HARD_MODE, SnowdriftCity_House3_EventScript_JimmyStatReport_2
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_5

SnowdriftCity_House3_EventScript_JimmyStatReport_10:
# 207 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_4, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_9

SnowdriftCity_House3_EventScript_JimmyStatReport_11:
# 211 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_5, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_9

SnowdriftCity_House3_EventScript_JimmyStatReport_16:
# 220 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_7, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_15

SnowdriftCity_House3_EventScript_JimmyStatReport_20:
# 231 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_9, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_19

SnowdriftCity_House3_EventScript_JimmyStatReport_24:
# 241 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_11, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_23

SnowdriftCity_House3_EventScript_JimmyStatReport_28:
# 254 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_13, MSGBOX_DEFAULT
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_27

SnowdriftCity_House3_EventScript_JimmyStatReport_32:
# 266 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_15, MSGBOX_DEFAULT
# 272 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_31

SnowdriftCity_House3_EventScript_JimmyStatReport_33:
# 265 "data/maps/SnowdriftCity_House3/scripts.pory"
	compare VAR_LINA_TALKED_TO, 1
	goto_if_eq SnowdriftCity_House3_EventScript_JimmyStatReport_32
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_31

SnowdriftCity_House3_EventScript_JimmyStatReport_37:
# 275 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_16, MSGBOX_DEFAULT
# 281 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_36

SnowdriftCity_House3_EventScript_JimmyStatReport_40:
# 284 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_JimmyStatReport_Text_17, MSGBOX_DEFAULT
# 292 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
	goto SnowdriftCity_House3_EventScript_JimmyStatReport_39


SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_0:
# 28 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "???: What's this?$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_1:
# 32 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "What's your name?\p …\p Okay. I'll remember that!\n {PLAYER}, nice to meet you.\p I'm CYNTHIA.\n I'm a POKéMON TRAINER too, like you.\p I have an insatiable curiosity for\n researching POKéMON myths.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_2:
# 43 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "I'm sure you know about HOENN's\n SEALED CHAMBERS, right?\p I'm staying here at my friend's villa\n so I can investigate them.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_3:
# 50 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "In order to get to know each other\n better as POKéMON TRAINERS, I would\l like our POKéMON to have a match.\p Would you care to be my opponent?$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_4:
# 55 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "I'd love to.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_5:
# 55 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "OH, GOD. SOMEBODY SAVE ME!$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_0:
# 69 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "CYNTHIA: What's this?$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_1:
# 73 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You came back!\n Did you change your mind?$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_2:
# 76 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "… Yeah. Sorry about that.$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_3:
# 76 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "NO! I'M STILL SCARED!$"

SnowdriftCity_House3_EventScript_CynthiaBattle_Text_0:
# 102 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Before I send out my POKéMON,\n my heart always begins to race…\p Interesting…\n My POKéMON in their POKé BALLS are\l radiating a happy feeling.\p Are you the reason?\n What are you?$"

SnowdriftCity_House3_EventScript_CynthiaBattle_Text_1:
# 113 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "That was beyond my expectation!\n What an exceptional battle!\p I really love visiting HOENN.\p I can't stay all year, because there's so\n much to investigate in SINNOH, as well.\p You're a great TRAINER, and it would\n make me happy to see you again sometime.$"

SnowdriftCity_House3_EventScript_Cynthia_Text_0:
# 142 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You certainly bear a resemblance\n to that TRAINER who faced GIRATINA…\p Oh, pardon me.\n I was just thinking out loud.\p I love visiting HOENN.\p I can't stay all year, because there's so\n much to investigate in SINNOH, as well.\p Though I've heard in HOENN there's six\n legendary golems, compared to the four\l in SINNOH.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_0:
# 178 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "{PLAYER}!\n I'm surprised you found me here.\p You probably didn't expect me to\n know CYNTHIA, huh!\p Were you jump scared the first time\n you walked into this house?\p Haha!\p Well, there shouldn't be anything left\n for you to do, but I can give you some\l stats about your playthrough.\p Let's see…$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_1:
# 192 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You wiped {STR_VAR_1} times.\n Was it really that difficult?$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_2:
# 196 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You didn't wipe at all?!\p Are you a POKéMON MASTER?\n Or were you save scumming?$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_3:
# 201 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You wiped {STR_VAR_1} time(s).\n That's not bad!$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_4:
# 207 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You changed difficulties {STR_VAR_1} times.\n You couldn't make up your mind or what?$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_5:
# 211 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You stayed on the same difficulty\n your whole playthrough.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_6:
# 215 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You changed difficulty\n {STR_VAR_1} time(s).$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_7:
# 220 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Oh… poor RATDUARDO.\p He'll never be free from\n DARKRAI's curse.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_8:
# 225 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Oh!\p You freed RATDUARDO from\n DARKRAI's curse.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_9:
# 231 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Wow, you didn't beat BRUNO?\p Well, I guess everybody does\n talk about how strong he is.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_10:
# 236 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You beat BRUNO.\n Nice!$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_11:
# 241 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You missed a familiar TRAINER.\p {PLAYER}… How did you miss that?\n Or did you see him and forget?\p Either way, go back to the fork\n at AZURE MOUNTAIN and take the\l ladder up to the peak.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_12:
# 249 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You beat RED.\n Good job!$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_13:
# 254 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Oh!\n Here's something you missed.\p Go back to the lab in LUSH ACREAGE\n and talk to JAMES.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_14:
# 260 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Wow you even went back and\n fought JAMES again?\p I'm impressed.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_15:
# 266 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Damn!\n You didn't get to see the superboss!\p But you still have a chance, if you're\n interested.\p Make sure you took her EEVEE, then go\n talk to JAMES.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_16:
# 275 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You beat EUGENIA too?\n How was that fight for you?\p I had a lot of fun when I battled\n her.\p She's still mad about you stealing\n her EEVEE!$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_17:
# 284 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "ARIA would be disappointed.\n You never found the SACRED BLADE.\p I guess bro really was protecting\n it…\p Well, go back to JIRACHI's ALTAR\n and you'll find it.\p If you go talk to ARIA after that\n they'll have a gift for you.$"

SnowdriftCity_House3_EventScript_JimmyStatReport_Text_18:
# 294 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Well, that's it, {PLAYER}!\p There's other things you could've\p missed.\p “PuzzlesImportantItemsSecrets” in\n the SPOILERS folder has everything.\p Thanks again for playing.\n I hope you enjoyed it!$"

SnowdriftCity_House3_Text_CynthiaLoss::
# 159 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "My heart is pounding so hard because I\n had such a heated battle with you.\p You're a really great TRAINER!!$"
