# 1 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
MeteorFalls_B1F_2R_MapScripts::
# 2 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	.byte 0

MeteorFalls_B1F_2R_EventScript_Suicune::
# 5 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	lock
# 6 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	faceplayer
# 7 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MeteorFalls_B1F_2R_EventScript_SuicuneWeaker
# 8 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 9 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitmoncry
# 10 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setwildbattle SPECIES_SUICUNE, 75
# 11 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 12 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitstate
# 13 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_2
# 14 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_2
# 19 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_3
# 19 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_3
MeteorFalls_B1F_2R_EventScript_Suicune_1:
# 22 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	release
	end

MeteorFalls_B1F_2R_EventScript_Suicune_2:
# 15 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MeteorFalls_B1F_2R_EventScript_Suicune_1

MeteorFalls_B1F_2R_EventScript_Suicune_3:
# 20 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MeteorFalls_B1F_2R_EventScript_Suicune_1


MeteorFalls_B1F_2R_EventScript_SuicuneWeaker::
# 27 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 28 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitmoncry
# 29 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setwildbattle SPECIES_SUICUNE, 50
# 30 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitstate
# 32 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_2
# 33 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_2
# 38 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_3
# 38 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_3
MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_1:
# 41 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	release
	end

MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_2:
# 34 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_1

MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_3:
# 39 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_1

