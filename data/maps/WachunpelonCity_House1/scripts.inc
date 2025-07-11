WachunpelonCity_House1_MapScripts::
	.byte 0


WachunpelonCity_House1_EventScript_OldWoman::
# 4 "data/maps/WachunpelonCity_House1/scripts.pory"
	msgbox WachunpelonCity_House1_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


WachunpelonCity_House1_EventScript_Wattrel::
# 15 "data/maps/WachunpelonCity_House1/scripts.pory"
	lock
# 16 "data/maps/WachunpelonCity_House1/scripts.pory"
	faceplayer
# 17 "data/maps/WachunpelonCity_House1/scripts.pory"
	playmoncry SPECIES_WATTREL, CRY_MODE_ENCOUNTER
# 18 "data/maps/WachunpelonCity_House1/scripts.pory"
	waitmoncry
# 19 "data/maps/WachunpelonCity_House1/scripts.pory"
	release
	end


WachunpelonCity_House1_EventScript_Blissey::
# 24 "data/maps/WachunpelonCity_House1/scripts.pory"
	lock
# 25 "data/maps/WachunpelonCity_House1/scripts.pory"
	faceplayer
# 26 "data/maps/WachunpelonCity_House1/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 27 "data/maps/WachunpelonCity_House1/scripts.pory"
	waitmoncry
# 28 "data/maps/WachunpelonCity_House1/scripts.pory"
	release
	end


WachunpelonCity_House1_EventScript_OldWoman_Text_0:
# 4 "data/maps/WachunpelonCity_House1/scripts.pory"
	.string "There's a legend that a very rare\n POKéMON who can cure bad dreams lives\l on an island around here.\p There used to be an adventurer couple\n that would come here in search of it.\p After a while, they just stopped\n coming.$"
