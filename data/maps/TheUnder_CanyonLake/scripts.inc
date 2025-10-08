TheUnder_CanyonLake_MapScripts::
# 2 "data/maps/TheUnder_CanyonLake/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TheUnder_CanyonLake_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TheUnder_CanyonLake_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/TheUnder_CanyonLake/scripts.pory"
	map_script_2 VAR_NEWMOON_ISLAND_STATE, 5, TheUnder_CanyonLake_EventScript_NewmoonIslandMan
	.2byte 0


TheUnder_CanyonLake_EventScript_NewmoonIslandMan::
# 7 "data/maps/TheUnder_CanyonLake/scripts.pory"
	lockall
# 8 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 9 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 0
# 10 "data/maps/TheUnder_CanyonLake/scripts.pory"
	opendoor 14, 4
# 11 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitdooranim
# 12 "data/maps/TheUnder_CanyonLake/scripts.pory"
	addobject 8
# 13 "data/maps/TheUnder_CanyonLake/scripts.pory"
	clearflag FLAG_HIDE_MAN_THE_UNDER_CANYON_LAKE
# 14 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, Common_Movement_WalkDown
# 15 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 16 "data/maps/TheUnder_CanyonLake/scripts.pory"
	closedoor 14, 4
# 17 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitdooranim
# 18 "data/maps/TheUnder_CanyonLake/scripts.pory"
	playse SE_PIN
# 19 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 20 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 0
# 21 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitse
# 22 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 0
# 24 "data/maps/TheUnder_CanyonLake/scripts.pory"
	fadeoutbgm 0
# 25 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 16
# 26 "data/maps/TheUnder_CanyonLake/scripts.pory"
	msgbox TheUnder_CanyonLake_EventScript_NewmoonIslandMan_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmessage
# 36 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 37 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 8
# 38 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, TheUnder_CanyonLake_Movement_WalkAroundPlayer
# 39 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 40 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 41 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 16
# 42 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 43 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 0
# 44 "data/maps/TheUnder_CanyonLake/scripts.pory"
	msgbox TheUnder_CanyonLake_EventScript_NewmoonIslandMan_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmessage
# 50 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 51 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 52 "data/maps/TheUnder_CanyonLake/scripts.pory"
	msgbox TheUnder_CanyonLake_EventScript_NewmoonIslandMan_Text_2, MSGBOX_AUTOCLOSE
# 54 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmessage
# 55 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 56 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 57 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 8
# 59 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 60 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 12
# 61 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 62 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 16
# 63 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 64 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, TheUnder_CanyonLake_Movement_ManLeaves
# 65 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 8
# 66 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 67 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 8
# 68 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 69 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 12
# 70 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 71 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 16
# 72 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 73 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 74 "data/maps/TheUnder_CanyonLake/scripts.pory"
	removeobject 8
# 75 "data/maps/TheUnder_CanyonLake/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 6
# 76 "data/maps/TheUnder_CanyonLake/scripts.pory"
	fadeinbgm 0
# 77 "data/maps/TheUnder_CanyonLake/scripts.pory"
	releaseall
	end


# 81 "data/maps/TheUnder_CanyonLake/scripts.pory"
TheUnder_CanyonLake_Movement_WalkAroundPlayer:
# 82 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 82 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 83 "data/maps/TheUnder_CanyonLake/scripts.pory"
	face_up
	step_end

# 86 "data/maps/TheUnder_CanyonLake/scripts.pory"
TheUnder_CanyonLake_Movement_ManLeaves:
# 87 "data/maps/TheUnder_CanyonLake/scripts.pory"
	lock_anim
# 88 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_slow_down
# 89 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 89 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 89 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 89 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 89 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 89 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 89 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 89 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
	step_end

TheUnder_CanyonLake_EventScript_NewmoonIslandMan_Text_0:
# 26 "data/maps/TheUnder_CanyonLake/scripts.pory"
	.string "???: You've been asleep for a long,\n long time…\l What happened to you?\p And what were you doing here? No one\n has lived here for 50 years.\p Not since that young boy was cursed…\n With eternal nightmares…\p His parents tried to find the LUNAR\n WING, but they failed.$"

TheUnder_CanyonLake_EventScript_NewmoonIslandMan_Text_1:
# 44 "data/maps/TheUnder_CanyonLake/scripts.pory"
	.string "…\n …\l Wherever he is now…\p I just hope… he's finally been set\n free from those bad dreams…$"

TheUnder_CanyonLake_EventScript_NewmoonIslandMan_Text_2:
# 52 "data/maps/TheUnder_CanyonLake/scripts.pory"
	.string "I'm…\n I'm sorry.$"
