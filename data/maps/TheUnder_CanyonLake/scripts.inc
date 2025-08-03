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
	playse SE_PIN
# 9 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 10 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 11 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitse
# 12 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, Common_Movement_WalkUp3
# 13 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 14 "data/maps/TheUnder_CanyonLake/scripts.pory"
	fadeoutbgm 0
# 15 "data/maps/TheUnder_CanyonLake/scripts.pory"
	msgbox TheUnder_CanyonLake_EventScript_NewmoonIslandMan_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmessage
# 29 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 30 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 31 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 32 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 8
# 33 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 34 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 12
# 35 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 36 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 16
# 37 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 38 "data/maps/TheUnder_CanyonLake/scripts.pory"
	applymovement 8, TheUnder_CanyonLake_Movement_ManLeaves
# 39 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 8
# 40 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 41 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 8
# 42 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 43 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 12
# 44 "data/maps/TheUnder_CanyonLake/scripts.pory"
	hideobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 45 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay 16
# 46 "data/maps/TheUnder_CanyonLake/scripts.pory"
	showobjectat 8, MAP_THE_UNDER_CANYON_LAKE
# 47 "data/maps/TheUnder_CanyonLake/scripts.pory"
	waitmovement 8
# 48 "data/maps/TheUnder_CanyonLake/scripts.pory"
	removeobject 8
# 49 "data/maps/TheUnder_CanyonLake/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 6
# 50 "data/maps/TheUnder_CanyonLake/scripts.pory"
	releaseall
	end


# 54 "data/maps/TheUnder_CanyonLake/scripts.pory"
TheUnder_CanyonLake_Movement_ManLeaves:
# 55 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_slow_down
# 56 "data/maps/TheUnder_CanyonLake/scripts.pory"
	lock_anim
# 57 "data/maps/TheUnder_CanyonLake/scripts.pory"
	delay_16
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
# 58 "data/maps/TheUnder_CanyonLake/scripts.pory"
	walk_down
	step_end

TheUnder_CanyonLake_EventScript_NewmoonIslandMan_Text_0:
# 15 "data/maps/TheUnder_CanyonLake/scripts.pory"
	.string "You've been asleep for a long, long time…\n What happened to you?\p And what were you doing here? No one has\n lived here for 50 years.\p Not since that young boy was cursed with\n eternal nightmares…\p His parents tried to find the LUNAR WING\n but failed.\p …\n …\l Where ever he is now…\p I just hope he's finally been woken up\n from those bad dreams…$"
