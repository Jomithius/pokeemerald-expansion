AzureMountain_FromChasm_MapScripts::
	.byte 0


AzureMountain_FromChasm_EventScript_Magearna::
# 4 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 5 "data/maps/AzureMountain_FromChasm/scripts.pory"
	faceplayer
# 6 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_MAGEARNA, CRY_MODE_ENCOUNTER
# 7 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 8 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 9 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_MAGEARNA, 75
# 10 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 12 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_2
# 13 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_2
# 18 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_3
# 18 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Magearna_3
AzureMountain_FromChasm_EventScript_Magearna_1:
# 21 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Magearna_2:
# 14 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Magearna_1

AzureMountain_FromChasm_EventScript_Magearna_3:
# 19 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Magearna_1


AzureMountain_FromChasm_EventScript_Zygarde::
# 26 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 27 "data/maps/AzureMountain_FromChasm/scripts.pory"
	faceplayer
# 28 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_ZYGARDE, CRY_MODE_ENCOUNTER
# 29 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 30 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 31 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_ZYGARDE, 75
# 32 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 34 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_2
# 35 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_2
# 40 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_3
# 40 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Zygarde_3
AzureMountain_FromChasm_EventScript_Zygarde_1:
# 43 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Zygarde_2:
# 36 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Zygarde_1

AzureMountain_FromChasm_EventScript_Zygarde_3:
# 41 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Zygarde_1


AzureMountain_FromChasm_EventScript_Yveltal::
# 48 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 49 "data/maps/AzureMountain_FromChasm/scripts.pory"
	faceplayer
# 50 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
# 51 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 52 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 53 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_YVELTAL, 75
# 54 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 56 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_2
# 57 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_2
# 62 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_3
# 62 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Yveltal_3
AzureMountain_FromChasm_EventScript_Yveltal_1:
# 65 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Yveltal_2:
# 58 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 60 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Yveltal_1

AzureMountain_FromChasm_EventScript_Yveltal_3:
# 63 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Yveltal_1


AzureMountain_FromChasm_EventScript_Xerneas::
# 70 "data/maps/AzureMountain_FromChasm/scripts.pory"
	lock
# 71 "data/maps/AzureMountain_FromChasm/scripts.pory"
	faceplayer
# 72 "data/maps/AzureMountain_FromChasm/scripts.pory"
	playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER
# 73 "data/maps/AzureMountain_FromChasm/scripts.pory"
	delay 40
# 74 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitmoncry
# 75 "data/maps/AzureMountain_FromChasm/scripts.pory"
	setwildbattle SPECIES_XERNEAS, 75
# 76 "data/maps/AzureMountain_FromChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 77 "data/maps/AzureMountain_FromChasm/scripts.pory"
	waitstate
# 78 "data/maps/AzureMountain_FromChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_2
# 79 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_2
# 84 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_3
# 84 "data/maps/AzureMountain_FromChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_FromChasm_EventScript_Xerneas_3
AzureMountain_FromChasm_EventScript_Xerneas_1:
# 87 "data/maps/AzureMountain_FromChasm/scripts.pory"
	release
	end

AzureMountain_FromChasm_EventScript_Xerneas_2:
# 80 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/AzureMountain_FromChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 82 "data/maps/AzureMountain_FromChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_FromChasm_EventScript_Xerneas_1

AzureMountain_FromChasm_EventScript_Xerneas_3:
# 85 "data/maps/AzureMountain_FromChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_FromChasm_EventScript_Xerneas_1

