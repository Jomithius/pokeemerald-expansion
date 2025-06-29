TheUnder_ShadyHouse_MapScripts::
# 2 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheUnder_ShadyHouse_OnTransition
	.byte 0


TheUnder_ShadyHouse_OnTransition::
# 6 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_MOON_ISLAND
# 7 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	setflag FLAG_TEMP_E
	end

