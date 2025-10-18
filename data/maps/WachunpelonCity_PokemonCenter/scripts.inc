WachunpelonCity_PokemonCenter_MapScripts::
# 2 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WachunpelonCity_PokemonCenter_OnTransition
# 3 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


WachunpelonCity_PokemonCenter_OnTransition::
# 7 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_WACHUNPELON_CITY
# 8 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	setflag FLAG_VISITED_WACHUNPELON
	end


WachunpelonCity_PokemonCenter_EventScript_Nurse::
# 13 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	waitmessage
# 16 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 17 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	release
	end


WachunpelonCity_PokemonCenter_EventScript_PeatBlock::
# 22 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	lock
# 23 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	faceplayer
# 24 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	goto_if_set FLAG_RECEIVED_PEAT_BLOCK, WachunpelonCity_PokemonCenter_EventScript_UrsalunaHint
# 25 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	msgbox WachunpelonCity_PokemonCenter_EventScript_PeatBlock_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	waitmessage
# 31 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	checkitemspace ITEM_PEAT_BLOCK
# 32 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WachunpelonCity_PokemonCenter_EventScript_PeatBlock_2
# 39 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
WachunpelonCity_PokemonCenter_EventScript_PeatBlock_1:
# 41 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	msgbox WachunpelonCity_PokemonCenter_EventScript_PeatBlock_Text_1, MSGBOX_AUTOCLOSE
# 45 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	waitmessage
	end

WachunpelonCity_PokemonCenter_EventScript_PeatBlock_2:
# 33 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	giveitem ITEM_PEAT_BLOCK
# 34 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	setflag FLAG_RECEIVED_PEAT_BLOCK
# 35 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	waitmessage
# 36 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	clearflag FLAG_DEFEATED_URSALUNA_BLOODMOON
	goto WachunpelonCity_PokemonCenter_EventScript_PeatBlock_1


WachunpelonCity_PokemonCenter_EventScript_UrsalunaHint::
# 50 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	msgbox WachunpelonCity_PokemonCenter_EventScript_UrsalunaHint_Text_0, MSGBOX_NPC
	end


WachunpelonCity_PokemonCenter_EventScript_Beauty::
# 58 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	msgbox WachunpelonCity_PokemonCenter_EventScript_Beauty_Text_0, MSGBOX_NPC
	end


WachunpelonCity_PokemonCenter_EventScript_DevonEmployee::
# 63 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	msgbox WachunpelonCity_PokemonCenter_EventScript_DevonEmployee_Text_0, MSGBOX_NPC
	end


WachunpelonCity_PokemonCenter_EventScript_PeatBlock_Text_0:
# 25 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	.string "You're a TRAINER, aren't you?\p I found this weird rock in PETALBURG\n WOODS.\p I couldn't find a use for it, but maybe\n you can.$"

WachunpelonCity_PokemonCenter_EventScript_PeatBlock_Text_1:
# 41 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	.string "There was also a scary looking POKéMON\n I've never seen before!\p It's probably still there, but I'm too\n scared to go back.$"

WachunpelonCity_PokemonCenter_EventScript_UrsalunaHint_Text_0:
# 50 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	.string "There was a scary looking POKéMON in\n PETALBURG WOODS!\p It's probably still there, but I'm too\n scared to go back.$"

WachunpelonCity_PokemonCenter_EventScript_Beauty_Text_0:
# 58 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	.string "I just love coming here for vacation!$"

WachunpelonCity_PokemonCenter_EventScript_DevonEmployee_Text_0:
# 63 "data/maps/WachunpelonCity_PokemonCenter/scripts.pory"
	.string "DEVON CORP. paid for this vacation.\n Man, I love my job.$"
