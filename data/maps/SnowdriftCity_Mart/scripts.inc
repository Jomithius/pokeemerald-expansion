SnowdriftCity_Mart_MapScripts::
	.byte 0


SnowdriftCity_Mart_EventScript_Clerk::
# 4 "data/maps/SnowdriftCity_Mart/scripts.pory"
	lock
# 5 "data/maps/SnowdriftCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/SnowdriftCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/SnowdriftCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/SnowdriftCity_Mart/scripts.pory"
	pokemart SnowdriftCity_Mart_Pokemart
# 9 "data/maps/SnowdriftCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/SnowdriftCity_Mart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/SnowdriftCity_Mart/scripts.pory"
SnowdriftCity_Mart_Pokemart:
# 15 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 16 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 17 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 18 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 19 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 20 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 21 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 22 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_MAX_LURE
# 23 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_ELIXIR
# 24 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 25 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 26 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 27 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

SnowdriftCity_Mart_EventScript_Hiker::
# 31 "data/maps/SnowdriftCity_Mart/scripts.pory"
	msgbox SnowdriftCity_Mart_EventScript_Hiker_Text_0, MSGBOX_SIGN
	end


SnowdriftCity_Mart_EventScript_StaffEmployee::
# 39 "data/maps/SnowdriftCity_Mart/scripts.pory"
	msgbox SnowdriftCity_Mart_EventScript_StaffEmployee_Text_0, MSGBOX_NPC
	end


SnowdriftCity_Mart_EventScript_Woman::
# 47 "data/maps/SnowdriftCity_Mart/scripts.pory"
	msgbox SnowdriftCity_Mart_EventScript_Woman_Text_0, MSGBOX_NPC
	end


SnowdriftCity_Mart_EventScript_Hiker_Text_0:
# 31 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.string "Huff… Huff…\n What a hike…\p Time to rejuvenate with some\n BAJA BLAST!$"

SnowdriftCity_Mart_EventScript_StaffEmployee_Text_0:
# 39 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.string "I like to come up here when I have\n time off.\p This is the only place in HOENN where\n you can go skiing.$"

SnowdriftCity_Mart_EventScript_Woman_Text_0:
# 47 "data/maps/SnowdriftCity_Mart/scripts.pory"
	.string "I want to buy some of these new\n TERA SHARDS, but I can't decide\l what TERA TYPE to make my POKéMON…$"
