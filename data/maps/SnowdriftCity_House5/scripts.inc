SnowdriftCity_House5_MapScripts::
	.byte 0


SnowdriftCity_House5_EventScript_LittleBoy::
# 4 "data/maps/SnowdriftCity_House5/scripts.pory"
	goto_if_set FLAG_DEFEATED_CALYREX, SnowdriftCity_House5_EventScript_LittleBoy_2
# 8 "data/maps/SnowdriftCity_House5/scripts.pory"
	msgbox SnowdriftCity_House5_EventScript_LittleBoy_Text_1, MSGBOX_NPC
SnowdriftCity_House5_EventScript_LittleBoy_1:
	end

SnowdriftCity_House5_EventScript_LittleBoy_2:
# 5 "data/maps/SnowdriftCity_House5/scripts.pory"
	msgbox SnowdriftCity_House5_EventScript_LittleBoy_Text_0, MSGBOX_NPC
	goto SnowdriftCity_House5_EventScript_LittleBoy_1


SnowdriftCity_House5_EventScript_Vanillite::
# 15 "data/maps/SnowdriftCity_House5/scripts.pory"
	lock
# 16 "data/maps/SnowdriftCity_House5/scripts.pory"
	faceplayer
# 17 "data/maps/SnowdriftCity_House5/scripts.pory"
	playmoncry SPECIES_VANILLITE, CRY_MODE_ENCOUNTER
# 18 "data/maps/SnowdriftCity_House5/scripts.pory"
	waitmoncry
# 19 "data/maps/SnowdriftCity_House5/scripts.pory"
	release
	end


SnowdriftCity_House5_EventScript_Girl::
# 24 "data/maps/SnowdriftCity_House5/scripts.pory"
	msgbox SnowdriftCity_House5_EventScript_Girl_Text_0, MSGBOX_NPC
	end


SnowdriftCity_House5_EventScript_Man::
# 29 "data/maps/SnowdriftCity_House5/scripts.pory"
	msgbox SnowdriftCity_House5_EventScript_Man_Text_0, MSGBOX_NPC
	end


SnowdriftCity_House5_EventScript_Woman::
# 36 "data/maps/SnowdriftCity_House5/scripts.pory"
	msgbox SnowdriftCity_House5_EventScript_Woman_Text_0, MSGBOX_NPC
	end


SnowdriftCity_House5_EventScript_LittleBoy_Text_0:
# 5 "data/maps/SnowdriftCity_House5/scripts.pory"
	.string "What happened to that weird POKéMON?$"

SnowdriftCity_House5_EventScript_LittleBoy_Text_1:
# 8 "data/maps/SnowdriftCity_House5/scripts.pory"
	.string "There's a weird POKéMON outside!\n It talks like a human!$"

SnowdriftCity_House5_EventScript_Girl_Text_0:
# 24 "data/maps/SnowdriftCity_House5/scripts.pory"
	.string "I love my VANILLITE!$"

SnowdriftCity_House5_EventScript_Man_Text_0:
# 29 "data/maps/SnowdriftCity_House5/scripts.pory"
	.string "We had to get rid of all our stuff\n to move here.\p It was hard, but definitely worth it.$"

SnowdriftCity_House5_EventScript_Woman_Text_0:
# 36 "data/maps/SnowdriftCity_House5/scripts.pory"
	.string "My grandfather is a GYM LEADER\n in JOHTO.\p He comes to visit sometimes.$"
