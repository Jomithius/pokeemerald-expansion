# 1 "data/maps/BaseCamp/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/BaseCamp/scripts.pory"

# 3 "data/maps/BaseCamp/scripts.pory"
BaseCamp_MapScripts::
# 4 "data/maps/BaseCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BaseCamp_PokemonCenter_OnTransition
# 5 "data/maps/BaseCamp/scripts.pory"
	.byte 0
# 6 "data/maps/BaseCamp/scripts.pory"

# 7 "data/maps/BaseCamp/scripts.pory"
BaseCamp_PokemonCenter_OnTransition:
# 8 "data/maps/BaseCamp/scripts.pory"
	setrespawn HEAL_LOCATION_THE_UNDER
# 9 "data/maps/BaseCamp/scripts.pory"
	end
# 10 "data/maps/BaseCamp/scripts.pory"

# 11 "data/maps/BaseCamp/scripts.pory"
BaseCamp_PokemonCenter_EventScript_Nurse::
# 12 "data/maps/BaseCamp/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/BaseCamp/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/BaseCamp/scripts.pory"
	waitmessage
# 15 "data/maps/BaseCamp/scripts.pory"
	waitbuttonpress
# 16 "data/maps/BaseCamp/scripts.pory"
	release
# 17 "data/maps/BaseCamp/scripts.pory"
	end
