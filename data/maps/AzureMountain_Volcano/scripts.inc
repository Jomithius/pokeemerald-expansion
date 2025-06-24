AzureMountain_Volcano_MapScripts::
	.byte 0


AzureMountain_Volcano_EventScript_Volcanion::
# 4 "data/maps/AzureMountain_Volcano/scripts.pory"
	lock
# 5 "data/maps/AzureMountain_Volcano/scripts.pory"
	playmoncry SPECIES_VOLCANION, CRY_MODE_ENCOUNTER
# 6 "data/maps/AzureMountain_Volcano/scripts.pory"
	delay 40
# 7 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitmoncry
# 8 "data/maps/AzureMountain_Volcano/scripts.pory"
	setwildbattle SPECIES_VOLCANION, 75
# 9 "data/maps/AzureMountain_Volcano/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 10 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitstate
# 11 "data/maps/AzureMountain_Volcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_Volcano_EventScript_Volcanion_2
# 12 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_Volcano_EventScript_Volcanion_2
# 17 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_Volcano_EventScript_Volcanion_3
# 17 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_Volcano_EventScript_Volcanion_3
AzureMountain_Volcano_EventScript_Volcanion_1:
# 20 "data/maps/AzureMountain_Volcano/scripts.pory"
	release
	end

AzureMountain_Volcano_EventScript_Volcanion_2:
# 13 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/AzureMountain_Volcano/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_Volcano_EventScript_Volcanion_1

AzureMountain_Volcano_EventScript_Volcanion_3:
# 18 "data/maps/AzureMountain_Volcano/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_Volcano_EventScript_Volcanion_1


AzureMountain_Volcano_EventScript_Heatran::
# 25 "data/maps/AzureMountain_Volcano/scripts.pory"
	lock
# 26 "data/maps/AzureMountain_Volcano/scripts.pory"
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
# 27 "data/maps/AzureMountain_Volcano/scripts.pory"
	delay 40
# 28 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitmoncry
# 29 "data/maps/AzureMountain_Volcano/scripts.pory"
	setwildbattle SPECIES_HEATRAN, 75
# 30 "data/maps/AzureMountain_Volcano/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitstate
# 32 "data/maps/AzureMountain_Volcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_Volcano_EventScript_Heatran_2
# 33 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_Volcano_EventScript_Heatran_2
# 38 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_Volcano_EventScript_Heatran_3
# 38 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_Volcano_EventScript_Heatran_3
AzureMountain_Volcano_EventScript_Heatran_1:
# 41 "data/maps/AzureMountain_Volcano/scripts.pory"
	release
	end

AzureMountain_Volcano_EventScript_Heatran_2:
# 34 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/AzureMountain_Volcano/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_Volcano_EventScript_Heatran_1

AzureMountain_Volcano_EventScript_Heatran_3:
# 39 "data/maps/AzureMountain_Volcano/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_Volcano_EventScript_Heatran_1


AzureMountain_Volcano_EventScript_Diancie::
# 46 "data/maps/AzureMountain_Volcano/scripts.pory"
	lock
# 47 "data/maps/AzureMountain_Volcano/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
# 48 "data/maps/AzureMountain_Volcano/scripts.pory"
	delay 40
# 49 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitmoncry
# 50 "data/maps/AzureMountain_Volcano/scripts.pory"
	setwildbattle SPECIES_DIANCIE, 75
# 51 "data/maps/AzureMountain_Volcano/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 52 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitstate
# 53 "data/maps/AzureMountain_Volcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_Volcano_EventScript_Diancie_2
# 54 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_Volcano_EventScript_Diancie_2
# 59 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_Volcano_EventScript_Diancie_3
# 59 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_Volcano_EventScript_Diancie_3
AzureMountain_Volcano_EventScript_Diancie_1:
# 62 "data/maps/AzureMountain_Volcano/scripts.pory"
	release
	end

AzureMountain_Volcano_EventScript_Diancie_2:
# 55 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/AzureMountain_Volcano/scripts.pory"
	removeobject VAR_LAST_TALKED
# 57 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_Volcano_EventScript_Diancie_1

AzureMountain_Volcano_EventScript_Diancie_3:
# 60 "data/maps/AzureMountain_Volcano/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_Volcano_EventScript_Diancie_1

