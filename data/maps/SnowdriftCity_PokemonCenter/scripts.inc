SnowdriftCity_PokemonCenter_MapScripts::
# 2 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowdriftCity_PokemonCenter_OnTransition
# 3 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SnowdriftCity_PokemonCenter_OnTransition::
# 7 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SNOWDRIFT_CITY
	end


SnowdriftCity_PokemonCenter_Nurse::
# 12 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/SnowdriftCity_PokemonCenter/scripts.pory"
	release
	end

