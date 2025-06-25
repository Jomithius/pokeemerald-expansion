AzureChasm_MapScripts::
	.byte 0


AzureChasm_EventScript_Azelf::
# 4 "data/maps/AzureChasm/scripts.pory"
	lock
# 5 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 6 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 7 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 8 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_AZELF, 75
# 9 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 10 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 11 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 12 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 17 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Azelf_3
# 17 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Azelf_3
AzureChasm_EventScript_Azelf_1:
# 20 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Azelf_2:
# 13 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Azelf_1

AzureChasm_EventScript_Azelf_3:
# 18 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Azelf_1


AzureChasm_EventScript_Uxie::
# 25 "data/maps/AzureChasm/scripts.pory"
	lock
# 26 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 27 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 28 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 29 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_UXIE, 75
# 30 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 32 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 33 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 38 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Uxie_3
# 38 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Uxie_3
AzureChasm_EventScript_Uxie_1:
# 41 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Uxie_2:
# 34 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Uxie_1

AzureChasm_EventScript_Uxie_3:
# 39 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Uxie_1


AzureChasm_EventScript_Mesprit::
# 46 "data/maps/AzureChasm/scripts.pory"
	lock
# 47 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
# 48 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 49 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 50 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_MESPRIT, 75
# 51 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 52 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 53 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 54 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 59 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Mesprit_3
# 59 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Mesprit_3
AzureChasm_EventScript_Mesprit_1:
# 62 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Mesprit_2:
# 55 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 57 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Mesprit_1

AzureChasm_EventScript_Mesprit_3:
# 60 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Mesprit_1


AzureChasm_EventScript_Glastrier::
# 67 "data/maps/AzureChasm/scripts.pory"
	lock
# 68 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_GLASTRIER, CRY_MODE_ENCOUNTER
# 69 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 70 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 71 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_GLASTRIER, 75
# 72 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 73 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 74 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 75 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 75 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 80 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Glastrier_3
# 80 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Glastrier_3
AzureChasm_EventScript_Glastrier_1:
# 83 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Glastrier_2:
# 76 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 78 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Glastrier_1

AzureChasm_EventScript_Glastrier_3:
# 81 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Glastrier_1


AzureChasm_EventScript_Zacian::
# 88 "data/maps/AzureChasm/scripts.pory"
	lock
# 89 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZACIAN, CRY_MODE_ENCOUNTER
# 90 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 91 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 92 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZACIAN, 75, ITEM_RUSTED_SWORD
# 93 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 94 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 95 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 96 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 96 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 101 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zacian_3
# 101 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zacian_3
AzureChasm_EventScript_Zacian_1:
# 104 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zacian_2:
# 97 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 99 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zacian_1

AzureChasm_EventScript_Zacian_3:
# 102 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zacian_1


AzureChasm_EventScript_Zamazenta::
# 109 "data/maps/AzureChasm/scripts.pory"
	lock
# 110 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZAMAZENTA, CRY_MODE_ENCOUNTER
# 111 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 112 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 113 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZAMAZENTA, 75
# 114 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 115 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 116 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 117 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 117 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 122 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
# 122 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
AzureChasm_EventScript_Zamazenta_1:
# 125 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zamazenta_2:
# 118 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 119 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 120 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zamazenta_1

AzureChasm_EventScript_Zamazenta_3:
# 123 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zamazenta_1

