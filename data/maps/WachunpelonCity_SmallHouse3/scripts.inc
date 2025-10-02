WachunpelonCity_SmallHouse3_MapScripts::
	.byte 0


WachunpelonCity_SmallHouse3_EventScript_Lina::
# 4 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 5 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	faceplayer
# 6 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	goto_if_eq VAR_LINA_TALKED_TO, 1, WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar
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


WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar::
# 16 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 17 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LINA_LAVARIDGE, WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_6
WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_5:
# 25 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LINA_LAVARIDGE, WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_3
# 31 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_Text_2, MSGBOX_AUTOCLOSE
WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_1:
# 34 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmessage
# 35 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 36 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmovement 0
# 37 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end

WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_2:
# 18 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
	goto WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_1

WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_3:
# 26 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_Text_1, MSGBOX_AUTOCLOSE
	goto WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_1

WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_6:
# 17 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	goto_if_set FLAG_LINA_HOUSE_EEVEE, WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_2
	goto WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_5


WachunpelonCity_SmallHouse3_EventScript_Kai::
# 42 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	msgbox WachunpelonCity_SmallHouse3_EventScript_Kai_Text_0, MSGBOX_NPC
	end


WachunpelonCity_SmallHouse3_EventScript_Luxray::
# 50 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 51 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	faceplayer
# 52 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	playmoncry SPECIES_LUXRAY, CRY_MODE_ENCOUNTER
# 53 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmoncry
# 54 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end


WachunpelonCity_SmallHouse3_EventScript_Ninetales::
# 59 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	lock
# 60 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	faceplayer
# 61 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
# 62 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	waitmoncry
# 63 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	release
	end


WachunpelonCity_SmallHouse3_EventScript_Lina_Text_0:
# 7 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "I'm on vacation!\nShoo!$"

WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_Text_0:
# 18 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "Oh, look who's barging into random\n peoples' houses again.\p There's nothing for you to take here!\n Hmph!\p I'm on vacation!\nShoo!$"

WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_Text_1:
# 26 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "Oh, look who's barging into random\n peoples' houses again. Hmph!\p I'm on vacation!\nShoo!$"

WachunpelonCity_SmallHouse3_EventScript_LinaTryAddVar_Text_2:
# 31 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "Oh, it's you again.\n I'm on vacation!\nShoo!$"

WachunpelonCity_SmallHouse3_EventScript_Kai_Text_0:
# 42 "data/maps/WachunpelonCity_SmallHouse3/scripts.pory"
	.string "{PLAYER}!\p I cooked up a new strategy for the\n next time we battle!\p You better be ready!$"
