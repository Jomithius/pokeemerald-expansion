AzureMountain_FromChasm_MapScripts::
	.byte 0


AzureMountain_FromChasm_EventScript_Magearna::
# 4 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 5 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_MAGEARNA, CRY_MODE_ENCOUNTER
# 6 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 7 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 8 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_MAGEARNA, 75
# 9 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 10 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 11 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_2
# 12 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_2
# 17 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_3
# 17 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_3
AzureMountain_FromChasm_EventScript_Magearna_1:
# 20 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Magearna_2:
# 13 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Magearna_1

AzureMountain_FromChasm_EventScript_Magearna_3:
# 18 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Magearna_1


AzureMountain_FromChasm_EventScript_Zygarde::
# 25 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 26 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_ZYGARDE, CRY_MODE_ENCOUNTER
# 27 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 28 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 29 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_ZYGARDE, 75
# 30 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 32 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_2
# 33 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_2
# 38 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_3
# 38 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_3
AzureMountain_FromChasm_EventScript_Zygarde_1:
# 41 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Zygarde_2:
# 34 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Zygarde_1

AzureMountain_FromChasm_EventScript_Zygarde_3:
# 39 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Zygarde_1


AzureMountain_FromChasm_EventScript_Yveltal::
# 46 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 47 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
# 48 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 49 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 50 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_YVELTAL, 75
# 51 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 52 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 53 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_2
# 54 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_2
# 59 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_3
# 59 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_3
AzureMountain_FromChasm_EventScript_Yveltal_1:
# 62 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Yveltal_2:
# 55 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 57 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Yveltal_1

AzureMountain_FromChasm_EventScript_Yveltal_3:
# 60 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Yveltal_1


AzureMountain_FromChasm_EventScript_Xerneas::
# 67 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 68 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER
# 69 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 70 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 71 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_XERNEAS, 75
# 72 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 73 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 74 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 75 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_2
# 75 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_2
# 80 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_3
# 80 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_3
AzureMountain_FromChasm_EventScript_Xerneas_1:
# 83 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Xerneas_2:
# 76 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 78 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Xerneas_1

AzureMountain_FromChasm_EventScript_Xerneas_3:
# 81 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Xerneas_1

