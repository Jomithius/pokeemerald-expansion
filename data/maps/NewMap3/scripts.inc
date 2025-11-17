NewMap3_MapScripts::
	.byte 0


SnowdriftCity_NewMap3_EventScript_Corviknight::
# 4 "data/maps/NewMap3/scripts.pory"
	lock
# 5 "data/maps/NewMap3/scripts.pory"
	faceplayer
# 6 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_CORVIKNIGHT, CRY_MODE_ENCOUNTER
# 7 "data/maps/NewMap3/scripts.pory"
	waitmoncry
# 8 "data/maps/NewMap3/scripts.pory"
	release
	end


SnowdriftCity_NewMap3_EventScript_BirdKeeper::
# 13 "data/maps/NewMap3/scripts.pory"
	msgbox SnowdriftCity_NewMap3_EventScript_BirdKeeper_Text_0, MSGBOX_NPC
	end


SnowdriftCity_NewMap3_EventScript_BirdKeeper_Text_0:
# 13 "data/maps/NewMap3/scripts.pory"
	.string "I run a business flying people up\n the mountain.\p It can be risky, but we've never\n had any accidents.$"
