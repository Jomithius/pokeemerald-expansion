WachunpelonCity_House1_MapScripts::
	.byte 0


WachunpelonCity_House1_EventScript_OldWoman::
# 4 "data/maps/WachunpelonCity_House1/scripts.pory"
	msgbox WachunpelonCity_House1_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


WachunpelonCity_House1_EventScript_Wattrel::
# 16 "data/maps/WachunpelonCity_House1/scripts.pory"
	lock
# 17 "data/maps/WachunpelonCity_House1/scripts.pory"
	faceplayer
# 18 "data/maps/WachunpelonCity_House1/scripts.pory"
	playmoncry SPECIES_WATTREL, CRY_MODE_ENCOUNTER
# 19 "data/maps/WachunpelonCity_House1/scripts.pory"
	waitmoncry
# 20 "data/maps/WachunpelonCity_House1/scripts.pory"
	release
	end


WachunpelonCity_House1_EventScript_Blissey::
# 25 "data/maps/WachunpelonCity_House1/scripts.pory"
	lock
# 26 "data/maps/WachunpelonCity_House1/scripts.pory"
	faceplayer
# 27 "data/maps/WachunpelonCity_House1/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 28 "data/maps/WachunpelonCity_House1/scripts.pory"
	waitmoncry
# 29 "data/maps/WachunpelonCity_House1/scripts.pory"
	release
	end


WachunpelonCity_House1_EventScript_OldWoman_Text_0:
# 4 "data/maps/WachunpelonCity_House1/scripts.pory"
	.string "There's a legend that a very rare\n POKéMON whose feathers can cure bad\l dreams lives on an island around here.\p There used to be an adventurer couple\n that would rest here while they were\l searching for it.\p After a while, they just… stopped\n coming.$"
