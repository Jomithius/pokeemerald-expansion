# 1 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_MapScripts::
# 2 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
# 3 "data/maps/ScorchedSlab/scripts.pory"
	.byte 0
# 4 "data/maps/ScorchedSlab/scripts.pory"

# 5 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_OnTransition:
# 6 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_LANDMARK_SCORCHED_SLAB
# 7 "data/maps/ScorchedSlab/scripts.pory"
	end

ScorchedSlab_EventScript_Entei::
# 13 "data/maps/ScorchedSlab/scripts.pory"
	lock
# 14 "data/maps/ScorchedSlab/scripts.pory"
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
# 15 "data/maps/ScorchedSlab/scripts.pory"
	delay 40
# 16 "data/maps/ScorchedSlab/scripts.pory"
	waitmoncry
# 17 "data/maps/ScorchedSlab/scripts.pory"
	setwildbattle SPECIES_ENTEI, 75
# 18 "data/maps/ScorchedSlab/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 19 "data/maps/ScorchedSlab/scripts.pory"
	waitstate
# 20 "data/maps/ScorchedSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 21 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ScorchedSlab_EventScript_Entei_2
# 21 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ScorchedSlab_EventScript_Entei_2
# 26 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ScorchedSlab_EventScript_Entei_3
# 26 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq ScorchedSlab_EventScript_Entei_3
ScorchedSlab_EventScript_Entei_1:
# 29 "data/maps/ScorchedSlab/scripts.pory"
	release
	end

ScorchedSlab_EventScript_Entei_2:
# 22 "data/maps/ScorchedSlab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/ScorchedSlab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 24 "data/maps/ScorchedSlab/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto ScorchedSlab_EventScript_Entei_1

ScorchedSlab_EventScript_Entei_3:
# 27 "data/maps/ScorchedSlab/scripts.pory"
	goto Common_EventScript_NopReturn
	goto ScorchedSlab_EventScript_Entei_1

