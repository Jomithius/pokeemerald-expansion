TheUnder_ShadyHouse_MapScripts::
# 2 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TheUnder_ShadyHouse_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

TheUnder_ShadyHouse_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	setflag FLAG_TEMP_E
# 4 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	compare VAR_NEWMOON_ISLAND_STATE, 1
	goto_if_eq TheUnder_ShadyHouse_MapScripts_MAP_SCRIPT_ON_LOAD_2
TheUnder_ShadyHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

TheUnder_ShadyHouse_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 5 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_MOON_ISLAND
	goto TheUnder_ShadyHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1

