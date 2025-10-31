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
	lockall
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
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
# 29 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 30 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 31 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 32 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 60
# 33 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TheUnder_ToCanyonLake_EventScript_ScareAwayRats
# 34 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 35 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmoncry
# 36 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 37 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 1
# 38 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 39 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 1
# 40 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 41 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	releaseall
	end


TheUnder_ToCanyonLake_RightTrigger_CheckLeadMon::
# 46 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	lockall
# 47 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 48 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	special IsLeadMonCat
# 49 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_PIN
# 50 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 51 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 3
# 52 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 53 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 54 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 55 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 56 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 57 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
# 58 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 59 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 60 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 61 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 60
# 62 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TheUnder_ToCanyonLake_EventScript_ScareAwayRats
# 63 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 64 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmoncry
# 65 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 66 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 3
# 67 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 68 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 3
# 69 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 70 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	releaseall
	end


TheUnder_ToCanyonLake_LeftTrigger_CheckLeadMon::
# 75 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	lockall
# 76 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 77 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	special IsLeadMonCat
# 78 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_PIN
# 79 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 80 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 2
# 81 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 82 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 83 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 84 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 85 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 86 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
# 87 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 88 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 89 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 0
# 90 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 60
# 91 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TheUnder_ToCanyonLake_EventScript_ScareAwayRats
# 92 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 93 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmoncry
# 94 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 95 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 2
# 96 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 97 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 2
# 98 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 99 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	releaseall
	end


TheUnder_ToCanyonLake_EventScript_ScareAwayRats::
# 104 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 105 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	fadenewbgm MUS_NONE
# 106 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_PIN
# 107 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 108 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 109 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 110 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	delay 8
# 111 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 112 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmovement 3
# 113 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 114 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	msgbox TheUnder_ToCanyonLake_EventScript_ScareAwayRats_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitmessage
# 117 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 118 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_FLEE
# 119 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
# 120 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	call TheUnder_ToCanyonLake_OpenEntrance
# 121 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 1
# 122 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 2
# 123 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 3
# 124 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 4
# 125 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 5
# 126 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 6
# 127 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	removeobject 7
# 128 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 129 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	fadedefaultbgm
# 130 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 131 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 1
# 132 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	releaseall
	end


TheUnder_ToCanyonLake_OpenEntrance::
# 137 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 138 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setmetatile 8, 3, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 139 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	special DrawWholeMapView
# 140 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	playse SE_BANG
# 141 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	setflag FLAG_SYS_THE_UNDER_DIG
# 142 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	waitse
	return


TheUnder_ToCanyonLake_EventScript_ScareAwayRats_Text_0:
# 114 "data/maps/TheUnder_ToCanyonLake/scripts.pory"
	.string "The RATICATE are afraid of\n {STR_VAR_1}!$"
