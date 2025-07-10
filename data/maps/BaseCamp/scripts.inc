BaseCamp_MapScripts::
# 4 "data/maps/BaseCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BaseCamp_PokemonCenter_OnTransition
# 5 "data/maps/BaseCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


BaseCamp_PokemonCenter_OnTransition::
# 9 "data/maps/BaseCamp/scripts.pory"
	setrespawn HEAL_LOCATION_THE_UNDER
	end


BaseCamp_PokemonCenter_EventScript_Nurse::
# 14 "data/maps/BaseCamp/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/BaseCamp/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/BaseCamp/scripts.pory"
	waitmessage
# 17 "data/maps/BaseCamp/scripts.pory"
	waitbuttonpress
# 18 "data/maps/BaseCamp/scripts.pory"
	release
	end


BaseCamp_PokemonCenter_EventScript_Hiker::
# 23 "data/maps/BaseCamp/scripts.pory"
	msgbox BaseCamp_PokemonCenter_EventScript_Hiker_Text_0, MSGBOX_NPC
	end


BaseCamp_PokemonCenter_EventScript_Pokefan_M::
# 31 "data/maps/BaseCamp/scripts.pory"
	msgbox BaseCamp_PokemonCenter_EventScript_Pokefan_M_Text_0, MSGBOX_NPC
	end


BaseCamp_PokemonCenter_EventScript_Camper::
# 37 "data/maps/BaseCamp/scripts.pory"
	msgbox BaseCamp_PokemonCenter_EventScript_Camper_Text_0, MSGBOX_NPC
	end


BaseCamp_PokemonCenter_EventScript_Cooltrainer::
# 42 "data/maps/BaseCamp/scripts.pory"
	msgbox BaseCamp_PokemonCenter_EventScript_Cooltrainer_Text_0, MSGBOX_NPC
	end


BaseCamp_PokemonCenter_EventScript_Hiker_Text_0:
# 23 "data/maps/BaseCamp/scripts.pory"
	.string "This part of HOENN used to be very\n hard to get to.\p Whoever dug out that cave system did\n the region a favor.$"

BaseCamp_PokemonCenter_EventScript_Pokefan_M_Text_0:
# 31 "data/maps/BaseCamp/scripts.pory"
	.string "There's so many POKéMON here\n that I've never seen before!$"

BaseCamp_PokemonCenter_EventScript_Camper_Text_0:
# 37 "data/maps/BaseCamp/scripts.pory"
	.string "A new age of exploration awaits me!$"

BaseCamp_PokemonCenter_EventScript_Cooltrainer_Text_0:
# 42 "data/maps/BaseCamp/scripts.pory"
	.string "There's some strong TRAINERS around here.\n I'm getting fired up!$"
