WachunpelonCity_SmallHouse2_MapScripts::
	.byte 0


WachunpelonCity_SmallHouse2_EventScript_Fuecoco::
# 4 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	lock
# 5 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	faceplayer
# 6 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	playmoncry SPECIES_FUECOCO, CRY_MODE_ENCOUNTER
# 7 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	waitmoncry
# 8 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	release
	end


WachunpelonCity_SmallHouse2_EventScript_Man::
# 13 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	msgbox WachunpelonCity_SmallHouse2_EventScript_Man_Text_0, MSGBOX_NPC
	end


WachunpelonCity_SmallHouse2_EventScript_Woman::
# 22 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	msgbox WachunpelonCity_SmallHouse2_EventScript_Woman_Text_0, MSGBOX_NPC
	end


WachunpelonCity_SmallHouse2_EventScript_Man_Text_0:
# 13 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	.string "Lately I've heard weird noises coming\n from the sewers.\l It sounds like a bike.\p But there's no way anybody would bring\n a motorcycle down there, right?$"

WachunpelonCity_SmallHouse2_EventScript_Woman_Text_0:
# 22 "data/maps/WachunpelonCity_SmallHouse2/scripts.pory"
	.string "For awhile, there were a lot of tremors\n happening in the area.\l Mainly around ROUTE 137.\p Then, suddenly, they just… stopped.\n I wonder what happened.$"
