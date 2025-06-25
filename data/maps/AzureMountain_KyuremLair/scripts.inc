AzureMountain_KyuremLair_MapScripts::
	.byte 0


AzureMountain_KyuremLair_EventScript_Kyurem::
# 5 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	lock
# 6 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
# 7 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	delay 40
# 8 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	waitmoncry
# 9 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	setwildbattle SPECIES_KYUREM, 75
# 10 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	waitstate
# 12 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_KyuremLair_EventScript_Kyurem_2
# 13 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_KyuremLair_EventScript_Kyurem_2
# 18 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_KyuremLair_EventScript_Kyurem_3
# 18 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_KyuremLair_EventScript_Kyurem_3
AzureMountain_KyuremLair_EventScript_Kyurem_1:
# 21 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	release
	end

AzureMountain_KyuremLair_EventScript_Kyurem_2:
# 14 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_KyuremLair_EventScript_Kyurem_1

AzureMountain_KyuremLair_EventScript_Kyurem_3:
# 19 "data/maps/AzureMountain_KyuremLair/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_KyuremLair_EventScript_Kyurem_1

