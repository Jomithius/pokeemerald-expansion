# 1 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_MapScripts::
# 2 "data/maps/SkyPillar_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_1F_OnTransition
# 3 "data/maps/SkyPillar_1F/scripts.pory"
	.byte 0
# 4 "data/maps/SkyPillar_1F/scripts.pory"

# 5 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_OnTransition:
# 6 "data/maps/SkyPillar_1F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_1F_EventScript_CleanFloor
# 7 "data/maps/SkyPillar_1F/scripts.pory"
	end
# 8 "data/maps/SkyPillar_1F/scripts.pory"

# 9 "data/maps/SkyPillar_1F/scripts.pory"
SkyPillar_1F_EventScript_CleanFloor::
# 10 "data/maps/SkyPillar_1F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_1F_CLEAN
# 11 "data/maps/SkyPillar_1F/scripts.pory"
	return

SkyPillar_1F_EventScript_Regidrago::
# 15 "data/maps/SkyPillar_1F/scripts.pory"
	lock
# 16 "data/maps/SkyPillar_1F/scripts.pory"
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_ENCOUNTER
# 17 "data/maps/SkyPillar_1F/scripts.pory"
	delay 40
# 18 "data/maps/SkyPillar_1F/scripts.pory"
	waitmoncry
# 19 "data/maps/SkyPillar_1F/scripts.pory"
	setwildbattle SPECIES_REGIDRAGO, 75
# 20 "data/maps/SkyPillar_1F/scripts.pory"
	special StartRegiBattle
# 21 "data/maps/SkyPillar_1F/scripts.pory"
	waitstate
# 22 "data/maps/SkyPillar_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 23 "data/maps/SkyPillar_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SkyPillar_1F_EventScript_Regidrago_2
# 23 "data/maps/SkyPillar_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SkyPillar_1F_EventScript_Regidrago_2
# 28 "data/maps/SkyPillar_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SkyPillar_1F_EventScript_Regidrago_3
# 28 "data/maps/SkyPillar_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SkyPillar_1F_EventScript_Regidrago_3
SkyPillar_1F_EventScript_Regidrago_1:
# 31 "data/maps/SkyPillar_1F/scripts.pory"
	release
	end

SkyPillar_1F_EventScript_Regidrago_2:
# 24 "data/maps/SkyPillar_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/SkyPillar_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 26 "data/maps/SkyPillar_1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto SkyPillar_1F_EventScript_Regidrago_1

SkyPillar_1F_EventScript_Regidrago_3:
# 29 "data/maps/SkyPillar_1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto SkyPillar_1F_EventScript_Regidrago_1

