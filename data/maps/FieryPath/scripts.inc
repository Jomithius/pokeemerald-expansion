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
	lockall
# 18 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_SALAZZLE_TOTEM
# 19 "data/maps/FieryPath/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 20 "data/maps/FieryPath/scripts.pory"
	waitmovement 7
# 21 "data/maps/FieryPath/scripts.pory"
	playmoncry SPECIES_SALAZZLE, CRY_MODE_ENCOUNTER
# 22 "data/maps/FieryPath/scripts.pory"
	delay 40
# 23 "data/maps/FieryPath/scripts.pory"
	waitmoncry
# 24 "data/maps/FieryPath/scripts.pory"
	setwildbattle SPECIES_SALAZZLE_TOTEM, 30, ITEM_CHARCOAL
# 25 "data/maps/FieryPath/scripts.pory"
	dowildbattle
# 26 "data/maps/FieryPath/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FieryPath_EventScript_Salazzle_2
# 30 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FieryPath_EventScript_Salazzle_3
# 33 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FieryPath_EventScript_Salazzle_4
# 36 "data/maps/FieryPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FieryPath_EventScript_Salazzle_5
FieryPath_EventScript_Salazzle_1:
# 39 "data/maps/FieryPath/scripts.pory"
	waitmessage
# 40 "data/maps/FieryPath/scripts.pory"
	releaseall
	end

FieryPath_EventScript_Salazzle_2:
# 28 "data/maps/FieryPath/scripts.pory"
	call SalazzleWon_Caught
	goto FieryPath_EventScript_Salazzle_1

FieryPath_EventScript_Salazzle_3:
# 31 "data/maps/FieryPath/scripts.pory"
	call SalazzleWon_Caught
	goto FieryPath_EventScript_Salazzle_1

FieryPath_EventScript_Salazzle_4:
# 34 "data/maps/FieryPath/scripts.pory"
	call SalazzleFailed
	goto FieryPath_EventScript_Salazzle_1

FieryPath_EventScript_Salazzle_5:
# 37 "data/maps/FieryPath/scripts.pory"
	call SalazzleFailed
	goto FieryPath_EventScript_Salazzle_1


SalazzleWon_Caught::
# 45 "data/maps/FieryPath/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data/maps/FieryPath/scripts.pory"
	removeobject 7
# 47 "data/maps/FieryPath/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	return


SalazzleFailed::
# 52 "data/maps/FieryPath/scripts.pory"
	playmoncry SPECIES_SALAZZLE, CRY_MODE_ENCOUNTER
# 53 "data/maps/FieryPath/scripts.pory"
	delay 20
# 54 "data/maps/FieryPath/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/FieryPath/scripts.pory"
	removeobject 7
# 56 "data/maps/FieryPath/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 57 "data/maps/FieryPath/scripts.pory"
	msgbox SalazzleFailed_Text_0
	return


SalazzleFailed_Text_0:
# 57 "data/maps/FieryPath/scripts.pory"
	.string "The SALAZZLE disappeared…$"
