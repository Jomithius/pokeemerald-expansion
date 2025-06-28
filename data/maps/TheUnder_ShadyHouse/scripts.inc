TheUnder_ShadyHouse_MapScripts::
# 2 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheUnder_ShadyHouse_OnTransition
# 3 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


TheUnder_ShadyHouse_OnTransition::
# 7 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_MOON_ISLAND
# 8 "data/maps/TheUnder_ShadyHouse/scripts.pory"
	setflag FLAG_TEMP_E
	end

