TheUnder_ToCanyonLake_MapScripts::
# 2 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TheUnder_ToCanyonLake_OnLoad
	.byte 0


TheUnder_ToCanyonLake_OnLoad::
# 6 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	call_if_unset FLAG_SYS_THE_UNDER_DIG, TheUnder_ToCanyonLake_CloseEntrance
	end


TheUnder_ToCanyonLake_CloseEntrance::
# 11 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_EntranceCover, TRUE
# 12 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setmetatile 8, 3, METATILE_Cave_EntranceCover, TRUE
	return


TheUnder_ToCanyonLake_MiddleTrigger_CheckLeadMon::
# 17 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	lock
# 18 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 19 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	special IsLeadMonCat
# 20 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_PIN
# 21 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 22 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 1
# 23 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 24 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 25 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 26 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 27 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 28 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 29 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 30 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 31 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 60
# 32 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TheUnder_ToCanyonLake_EventScript_ScareAwayRats
# 33 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 34 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmoncry
# 35 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 36 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 1
# 37 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 38 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 1
# 39 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 40 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	release
	end


TheUnder_ToCanyonLake_RightTrigger_CheckLeadMon::
# 45 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	lock
# 46 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 47 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	special IsLeadMonCat
# 48 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_PIN
# 49 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 50 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 3
# 51 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 52 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 53 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 54 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 55 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 56 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 57 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 58 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 59 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 60
# 60 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TheUnder_ToCanyonLake_EventScript_ScareAwayRats
# 61 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 62 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmoncry
# 63 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 64 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 3
# 65 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 66 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 3
# 67 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 68 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	release
	end


TheUnder_ToCanyonLake_LeftTrigger_CheckLeadMon::
# 73 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	lock
# 74 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 75 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	special IsLeadMonCat
# 76 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_PIN
# 77 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 78 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 2
# 79 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 80 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 81 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 82 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 83 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 84 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 85 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 86 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 87 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 60
# 88 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TheUnder_ToCanyonLake_EventScript_ScareAwayRats
# 89 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 90 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmoncry
# 91 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 92 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 2
# 93 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 94 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 2
# 95 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 96 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	release
	end


TheUnder_ToCanyonLake_EventScript_ScareAwayRats::
# 101 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	lock
# 102 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 103 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	fadenewbgm MUS_NONE
# 104 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_PIN
# 105 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 106 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 107 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 108 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 109 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 110 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 3
# 111 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 112 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	msgbox TheUnder_ToCanyonLake_EventScript_ScareAwayRats_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmessage
# 115 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 116 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_FLEE
# 117 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 118 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	call TheUnder_ToCanyonLake_OpenEntrance
# 119 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 1
# 120 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 2
# 121 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 3
# 122 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 4
# 123 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 5
# 124 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 6
# 125 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 7
# 126 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 127 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	fadedefaultbgm
# 128 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 129 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 9
# 130 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	release
	end


TheUnder_ToCanyonLake_OpenEntrance::
# 135 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 136 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setmetatile 8, 3, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 137 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	special DrawWholeMapView
# 138 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_BANG
# 139 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setflag FLAG_SYS_THE_UNDER_DIG
	return


TheUnder_ToCanyonLake_EventScript_ScareAwayRats_Text_0:
# 112 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	.string "The RATICATE are afraid of\n  {STR_VAR_1}!$"
