WachunpelonCity_SmallHouse3_MapScripts::
	.byte 0


WachunpelonCity_SmallHouse3_EventScript_Lina::
# 4 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 5 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	faceplayer
# 6 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	goto_if_eq VAR_LINA_TALKED_TO, 1, WachunpelonCity_SmallHouse3_EventScript_LinaAddVar
# 7 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_Lina_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmessage
# 9 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 10 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmovement 0
# 11 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end


WachunpelonCity_SmallHouse3_EventScript_LinaAddVar::
# 16 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 17 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LINA_LAVARIDGE, WachunpelonCity_SmallHouse3_EventScript_LinaAddVar_2
# 24 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_LinaAddVar_Text_1, MSGBOX_AUTOCLOSE
WachunpelonCity_SmallHouse3_EventScript_LinaAddVar_1:
# 27 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmessage
# 28 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 29 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmovement 0
# 30 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end

WachunpelonCity_SmallHouse3_EventScript_LinaAddVar_2:
# 18 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_LinaAddVar_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	goto WachunpelonCity_SmallHouse3_EventScript_LinaAddVar_1


WachunpelonCity_SmallHouse3_EventScript_Kai::
# 34 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_Kai_Text_0, MSGBOX_NPC
	end


WachunpelonCity_SmallHouse3_EventScript_Luxray::
# 42 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 43 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	faceplayer
# 44 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 45 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmoncry
# 46 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end


WachunpelonCity_SmallHouse3_EventScript_Ninetales::
# 51 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 52 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	faceplayer
# 53 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
# 54 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmoncry
# 55 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end


WachunpelonCity_SmallHouse3_EventScript_Lina_Text_0:
# 7 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "I'm on vacation! Shoo!$"

WachunpelonCity_SmallHouse3_EventScript_LinaAddVar_Text_0:
# 18 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "Oh, look who's barging into random\n peoples' houses again. Hmph!\p I'm on vacation! Shoo!$"

WachunpelonCity_SmallHouse3_EventScript_LinaAddVar_Text_1:
# 24 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "Oh, you again.\n I'm on vacation! Shoo!$"

WachunpelonCity_SmallHouse3_EventScript_Kai_Text_0:
# 34 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "{PLAYER}!\p I cooked up a new strategy for the\n next time we battle!\p You better be ready!$"
