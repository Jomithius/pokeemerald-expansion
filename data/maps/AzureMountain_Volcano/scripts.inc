AzureMountain_Volcano_MapScripts::
	.byte 0


AzureMountain_Volcano_EventScript_Volcanion::
# 4 "data/maps/AzureMountain_Volcano/scripts.pory"
	lock
# 5 "data/maps/AzureMountain_Volcano/scripts.pory"
	faceplayer
# 6 "data/maps/AzureMountain_Volcano/scripts.pory"
	playmoncry SPECIES_VOLCANION, CRY_MODE_ENCOUNTER
# 7 "data/maps/AzureMountain_Volcano/scripts.pory"
	delay 40
# 8 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitmoncry
# 9 "data/maps/AzureMountain_Volcano/scripts.pory"
	setwildbattle SPECIES_VOLCANION, 75
# 10 "data/maps/AzureMountain_Volcano/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitstate
# 12 "data/maps/AzureMountain_Volcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_Volcano_EventScript_Volcanion_2
# 13 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_Volcano_EventScript_Volcanion_2
# 18 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_Volcano_EventScript_Volcanion_3
# 18 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_Volcano_EventScript_Volcanion_3
AzureMountain_Volcano_EventScript_Volcanion_1:
# 21 "data/maps/AzureMountain_Volcano/scripts.pory"
	release
	end

AzureMountain_Volcano_EventScript_Volcanion_2:
# 14 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/AzureMountain_Volcano/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_Volcano_EventScript_Volcanion_1

AzureMountain_Volcano_EventScript_Volcanion_3:
# 19 "data/maps/AzureMountain_Volcano/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_Volcano_EventScript_Volcanion_1


AzureMountain_Volcano_EventScript_Heatran::
# 26 "data/maps/AzureMountain_Volcano/scripts.pory"
	lock
# 27 "data/maps/AzureMountain_Volcano/scripts.pory"
	faceplayer
# 28 "data/maps/AzureMountain_Volcano/scripts.pory"
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
# 29 "data/maps/AzureMountain_Volcano/scripts.pory"
	delay 40
# 30 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitmoncry
# 31 "data/maps/AzureMountain_Volcano/scripts.pory"
	setwildbattle SPECIES_HEATRAN, 75
# 32 "data/maps/AzureMountain_Volcano/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitstate
# 34 "data/maps/AzureMountain_Volcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_Volcano_EventScript_Heatran_2
# 35 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_Volcano_EventScript_Heatran_2
# 40 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_Volcano_EventScript_Heatran_3
# 40 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_Volcano_EventScript_Heatran_3
AzureMountain_Volcano_EventScript_Heatran_1:
# 43 "data/maps/AzureMountain_Volcano/scripts.pory"
	release
	end

AzureMountain_Volcano_EventScript_Heatran_2:
# 36 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/AzureMountain_Volcano/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_Volcano_EventScript_Heatran_1

AzureMountain_Volcano_EventScript_Heatran_3:
# 41 "data/maps/AzureMountain_Volcano/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_Volcano_EventScript_Heatran_1


AzureMountain_Volcano_EventScript_Diancie::
# 48 "data/maps/AzureMountain_Volcano/scripts.pory"
	lock
# 49 "data/maps/AzureMountain_Volcano/scripts.pory"
	faceplayer
# 50 "data/maps/AzureMountain_Volcano/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
# 51 "data/maps/AzureMountain_Volcano/scripts.pory"
	delay 40
# 52 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitmoncry
# 53 "data/maps/AzureMountain_Volcano/scripts.pory"
	setwildbattle SPECIES_DIANCIE, 75
# 54 "data/maps/AzureMountain_Volcano/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/AzureMountain_Volcano/scripts.pory"
	waitstate
# 56 "data/maps/AzureMountain_Volcano/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_Volcano_EventScript_Diancie_2
# 57 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_Volcano_EventScript_Diancie_2
# 62 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_Volcano_EventScript_Diancie_3
# 62 "data/maps/AzureMountain_Volcano/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_Volcano_EventScript_Diancie_3
AzureMountain_Volcano_EventScript_Diancie_1:
# 65 "data/maps/AzureMountain_Volcano/scripts.pory"
	release
	end

AzureMountain_Volcano_EventScript_Diancie_2:
# 58 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/AzureMountain_Volcano/scripts.pory"
	removeobject VAR_LAST_TALKED
# 60 "data/maps/AzureMountain_Volcano/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_Volcano_EventScript_Diancie_1

AzureMountain_Volcano_EventScript_Diancie_3:
# 63 "data/maps/AzureMountain_Volcano/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_Volcano_EventScript_Diancie_1

