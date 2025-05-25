# 1 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_MapScripts::
# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
# 3 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.byte 0
# 4 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 5 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_OnTransition:
# 6 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
# 7 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end

PokemonDayCare_Woman::
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 12 "data/maps/Route117_PokemonDayCare/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 13 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmovement 2
# 14 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto_if_set FLAG_CALL_FROM_CEO, PokemonDayCare_Woman_2
# 19 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox PokemonDayCare_Text_DacaHoundour, MSGBOX_NPC
PokemonDayCare_Woman_1:
# 22 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmessage
# 23 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
	end

PokemonDayCare_Woman_2:
# 15 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox PokemonDayCare_Text_HoundourRecovered, MSGBOX_NPC
	goto PokemonDayCare_Woman_1


PokemonDayCare_Text_HoundourRecovered::
# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I'm so glad the HOUNDOUR made a\n full recovery!\p MAUVILLE's GYM LEADER decided to\n adopt him.\p I wonder how they're doing.$"

PokemonDayCare_Text_DacaHoundour::
# 35 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "A while back, MAUVILLE's GYM LEADER\n found a badly hurt HOUNDOUR in\l RUSTURF TUNNEL.\p Since then, we've been helping it\n recover.$"
