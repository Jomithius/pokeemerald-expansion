# 1 "data/maps/FieryPath/scripts.pory"
FieryPath_MapScripts::
# 2 "data/maps/FieryPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
# 3 "data/maps/FieryPath/scripts.pory"
	.byte 0
# 4 "data/maps/FieryPath/scripts.pory"

# 5 "data/maps/FieryPath/scripts.pory"
FieryPath_OnTransition:
# 6 "data/maps/FieryPath/scripts.pory"
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
# 7 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_LANDMARK_FIERY_PATH
# 8 "data/maps/FieryPath/scripts.pory"
	end
# 9 "data/maps/FieryPath/scripts.pory"

# 10 "data/maps/FieryPath/scripts.pory"
FieryPath_EventScript_MoveScottToFallarbor::
# 11 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 12 "data/maps/FieryPath/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 13 "data/maps/FieryPath/scripts.pory"
	return

FieryPath_EventScript_Salazzle::
# 17 "data/maps/FieryPath/scripts.pory"
	lock
# 18 "data/maps/FieryPath/scripts.pory"
	faceplayer
# 19 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_SALAZZLE_TOTEM
# 20 "data/maps/FieryPath/scripts.pory"
	playmoncry SPECIES_SALAZZLE, CRY_MODE_ENCOUNTER
# 21 "data/maps/FieryPath/scripts.pory"
	waitmoncry
# 22 "data/maps/FieryPath/scripts.pory"
	setwildbattle SPECIES_SALAZZLE_TOTEM, 30, ITEM_POISON_BARB
# 23 "data/maps/FieryPath/scripts.pory"
	dowildbattle
# 24 "data/maps/FieryPath/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FieryPath_EventScript_Salazzle_2
# 28 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FieryPath_EventScript_Salazzle_3
# 31 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FieryPath_EventScript_Salazzle_4
# 34 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FieryPath_EventScript_Salazzle_5
FieryPath_EventScript_Salazzle_1:
# 37 "data/maps/FieryPath/scripts.pory"
	waitmessage
# 38 "data/maps/FieryPath/scripts.pory"
	release
	end

FieryPath_EventScript_Salazzle_2:
# 26 "data/maps/FieryPath/scripts.pory"
	call SalazzleWon_Caught
	goto FieryPath_EventScript_Salazzle_1

FieryPath_EventScript_Salazzle_3:
# 29 "data/maps/FieryPath/scripts.pory"
	call SalazzleWon_Caught
	goto FieryPath_EventScript_Salazzle_1

FieryPath_EventScript_Salazzle_4:
# 32 "data/maps/FieryPath/scripts.pory"
	call SalazzleFailed
	goto FieryPath_EventScript_Salazzle_1

FieryPath_EventScript_Salazzle_5:
# 35 "data/maps/FieryPath/scripts.pory"
	call SalazzleFailed
	goto FieryPath_EventScript_Salazzle_1


SalazzleWon_Caught::
# 43 "data/maps/FieryPath/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/FieryPath/scripts.pory"
	removeobject VAR_LAST_TALKED
# 45 "data/maps/FieryPath/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


SalazzleFailed::
# 50 "data/maps/FieryPath/scripts.pory"
	playmoncry SPECIES_SALAZZLE, CRY_MODE_ENCOUNTER
# 51 "data/maps/FieryPath/scripts.pory"
	delay 20
# 52 "data/maps/FieryPath/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/FieryPath/scripts.pory"
	removeobject VAR_LAST_TALKED
# 54 "data/maps/FieryPath/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 55 "data/maps/FieryPath/scripts.pory"
	msgbox SalazzleFailed_Text_0
	return


FieryPath_EventScript_Moltres::
# 60 "data/maps/FieryPath/scripts.pory"
	lock
# 61 "data/maps/FieryPath/scripts.pory"
	faceplayer
# 62 "data/maps/FieryPath/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 63 "data/maps/FieryPath/scripts.pory"
	waitmoncry
# 64 "data/maps/FieryPath/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, FieryPath_EventScript_Moltres_2
# 68 "data/maps/FieryPath/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 75
FieryPath_EventScript_Moltres_1:
# 70 "data/maps/FieryPath/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 71 "data/maps/FieryPath/scripts.pory"
	waitstate
# 72 "data/maps/FieryPath/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 73 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FieryPath_EventScript_Moltres_6
# 73 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FieryPath_EventScript_Moltres_6
# 78 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FieryPath_EventScript_Moltres_7
# 78 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FieryPath_EventScript_Moltres_7
FieryPath_EventScript_Moltres_5:
# 81 "data/maps/FieryPath/scripts.pory"
	release
	end

FieryPath_EventScript_Moltres_2:
# 65 "data/maps/FieryPath/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 35
	goto FieryPath_EventScript_Moltres_1

FieryPath_EventScript_Moltres_6:
# 74 "data/maps/FieryPath/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/FieryPath/scripts.pory"
	removeobject VAR_LAST_TALKED
# 76 "data/maps/FieryPath/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FieryPath_EventScript_Moltres_5

FieryPath_EventScript_Moltres_7:
# 79 "data/maps/FieryPath/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FieryPath_EventScript_Moltres_5


SalazzleFailed_Text_0:
# 55 "data/maps/FieryPath/scripts.pory"
	.string "The SALAZZLE disappeared…$"
