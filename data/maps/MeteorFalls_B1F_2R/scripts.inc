# 1 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
MeteorFalls_B1F_2R_MapScripts::
# 2 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	.byte 0

MeteorFalls_B1F_2R_EventScript_Suicune::
# 5 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	lock
# 6 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 7 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	delay 40
# 8 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitmoncry
# 9 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setwildbattle SPECIES_SUICUNE, 75
# 10 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitstate
# 12 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_2
# 13 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_2
# 18 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_3
# 18 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MeteorFalls_B1F_2R_EventScript_Suicune_3
MeteorFalls_B1F_2R_EventScript_Suicune_1:
# 21 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	release
	end

MeteorFalls_B1F_2R_EventScript_Suicune_2:
# 14 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto MeteorFalls_B1F_2R_EventScript_Suicune_1

MeteorFalls_B1F_2R_EventScript_Suicune_3:
# 19 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	goto Common_EventScript_NopReturn
	goto MeteorFalls_B1F_2R_EventScript_Suicune_1

