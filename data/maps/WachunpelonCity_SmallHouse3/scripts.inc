WachunpelonCity_SmallHouse3_MapScripts::
	.byte 0


WachunpelonCity_SmallHouse3_EventScript_Lina::
# 4 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_Lina_Text_0, MSGBOX_NPC
	end


WachunpelonCity_SmallHouse3_EventScript_Kai::
# 9 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_Kai_Text_0, MSGBOX_NPC
	end


WachunpelonCity_SmallHouse3_EventScript_Luxray::
# 17 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 18 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	faceplayer
# 19 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 20 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmoncry
# 21 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end


WachunpelonCity_SmallHouse3_EventScript_Ninetales::
# 26 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 27 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	faceplayer
# 28 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
# 29 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmoncry
# 30 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end


WachunpelonCity_SmallHouse3_EventScript_Lina_Text_0:
# 4 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "I'm on vacation! Shoo!$"

WachunpelonCity_SmallHouse3_EventScript_Kai_Text_0:
# 9 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "{PLAYER}!\p I cooked up a new strategy for the\n next time we battle!\p You better be ready!$"
