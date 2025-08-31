FallarborTown_House_MapScripts::
# 2 "data/maps/FallarborTown_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FallarborTown_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/FallarborTown_House/scripts.pory"
	map_script_2 VAR_RAT_CAVE_STATE, 6, FallarborTown_House_EventScript_OldMan_PostRatCave
	.2byte 0


FallarborTown_House_EventScript_OldMan_PostRatCave::
# 6 "data/maps/FallarborTown_House/scripts.pory"
	lockall
# 7 "data/maps/FallarborTown_House/scripts.pory"
	checkobjectat 3, 7
# 8 "data/maps/FallarborTown_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_House_EventScript_OldMan_PostRatCave_2
# 12 "data/maps/FallarborTown_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_House_Movement_PlayerToOldMan
FallarborTown_House_EventScript_OldMan_PostRatCave_1:
# 14 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 0
# 15 "data/maps/FallarborTown_House/scripts.pory"
	playse SE_PIN
# 16 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 17 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 1
# 18 "data/maps/FallarborTown_House/scripts.pory"
	waitse
# 19 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 20 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 1
# 21 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_Old_Man_RatCavePost, MSGBOX_AUTOCLOSE
# 22 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
# 23 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 24 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 1
# 25 "data/maps/FallarborTown_House/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 7
# 26 "data/maps/FallarborTown_House/scripts.pory"
	releaseall
	end

FallarborTown_House_EventScript_OldMan_PostRatCave_2:
# 9 "data/maps/FallarborTown_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
	goto FallarborTown_House_EventScript_OldMan_PostRatCave_1


FallarborTown_House_EventScript_Old_Man::
# 31 "data/maps/FallarborTown_House/scripts.pory"
	lock
# 32 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 33 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 1
# 34 "data/maps/FallarborTown_House/scripts.pory"
	compare VAR_RAT_CAVE_STATE, 5
	goto_if_eq FallarborTown_House_EventScript_Old_Man_2
# 38 "data/maps/FallarborTown_House/scripts.pory"
	compare VAR_RAT_CAVE_STATE, 6
	goto_if_eq FallarborTown_House_EventScript_Old_Man_3
# 44 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_EventScript_Old_Man_Text_0, MSGBOX_NPC
# 46 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
FallarborTown_House_EventScript_Old_Man_1:
# 48 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 49 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 1
# 50 "data/maps/FallarborTown_House/scripts.pory"
	release
	end

FallarborTown_House_EventScript_Old_Man_2:
# 35 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_Old_Man_RatCaveHint, MSGBOX_NPC
# 36 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
	goto FallarborTown_House_EventScript_Old_Man_1

FallarborTown_House_EventScript_Old_Man_3:
# 39 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_Old_Man_RatCavePost, MSGBOX_NPC
# 40 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
# 41 "data/maps/FallarborTown_House/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 7
	goto FallarborTown_House_EventScript_Old_Man_1


FallarborTown_House_EventScript_Old_Lady::
# 79 "data/maps/FallarborTown_House/scripts.pory"
	lock
# 80 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 81 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 2
# 82 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_Text_Old_Lady, MSGBOX_NPC
# 83 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
# 84 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 85 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 2
# 86 "data/maps/FallarborTown_House/scripts.pory"
	release
	end


# 98 "data/maps/FallarborTown_House/scripts.pory"
FallarborTown_House_Movement_PlayerToOldMan:
# 99 "data/maps/FallarborTown_House/scripts.pory"
	walk_right
# 100 "data/maps/FallarborTown_House/scripts.pory"
	walk_in_place_down
	step_end

FallarborTown_House_EventScript_Old_Man_Text_0:
# 44 "data/maps/FallarborTown_House/scripts.pory"
	.string "Huh? What?\n Speak up, youngster.$"

FallarborTown_House_Old_Man_RatCaveHint::
# 54 "data/maps/FallarborTown_House/scripts.pory"
	.string "Huh?\p What?\p Oh, finally you're here!\p We've still been hearing RATTATA noises\n in the basement lately.\p It's been so hard to sleep because\n of it.\p Be a good grandchild and go take\n care of it for me, will you?$"

FallarborTown_House_Old_Man_RatCavePost::
# 66 "data/maps/FallarborTown_House/scripts.pory"
	.string "Huh?\p What?\p Oh!\n Did you take care of it?\p … … … …\p What?\n There was a giant… rat man?\p Your eyes must be worse than mine,\n youngster.$"

FallarborTown_House_Text_Old_Lady::
# 90 "data/maps/FallarborTown_House/scripts.pory"
	.string "Lately, some of the folks have\n said they've been having a lot\l of nightmares.\p I wonder if it's something in\n the water.$"
