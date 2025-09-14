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
	delay 40
# 10 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitmoncry
# 11 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setwildbattle SPECIES_SUICUNE, 75
# 12 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 13 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitstate
# 14 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_2
# 15 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_2
# 20 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_3
# 20 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_3
MeteorFalls_B1F_2R_EventScript_Suicune_1:
# 23 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	release
	end

MeteorFalls_B1F_2R_EventScript_Suicune_2:
# 16 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 17 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MeteorFalls_B1F_2R_EventScript_Suicune_1

MeteorFalls_B1F_2R_EventScript_Suicune_3:
# 21 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MeteorFalls_B1F_2R_EventScript_Suicune_1


MeteorFalls_B1F_2R_EventScript_SuicuneWeaker::
# 28 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 29 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	delay 40
# 30 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitmoncry
# 31 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setwildbattle SPECIES_SUICUNE, 50
# 32 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitstate
# 34 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_2
# 35 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_2
# 40 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_3
# 40 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_3
MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_1:
# 43 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	release
	end

MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_2:
# 36 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_1

MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_3:
# 41 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MeteorFalls_B1F_2R_EventScript_SuicuneWeaker_1

