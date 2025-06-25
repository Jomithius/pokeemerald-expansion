AzureChasm_MapScripts::
	.byte 0


AzureChasm_EventScript_Azelf::
# 4 "data/maps/AzureChasm/scripts.pory"
	lock
# 5 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 6 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 7 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 8 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 9 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_AZELF, 75
# 10 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 12 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 13 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 18 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Azelf_3
# 18 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Azelf_3
AzureChasm_EventScript_Azelf_1:
# 21 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Azelf_2:
# 14 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Azelf_1

AzureChasm_EventScript_Azelf_3:
# 19 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Azelf_1


AzureChasm_EventScript_Uxie::
# 26 "data/maps/AzureChasm/scripts.pory"
	lock
# 27 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 28 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 29 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 30 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 31 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_UXIE, 75
# 32 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 34 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 35 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 40 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Uxie_3
# 40 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Uxie_3
AzureChasm_EventScript_Uxie_1:
# 43 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Uxie_2:
# 36 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Uxie_1

AzureChasm_EventScript_Uxie_3:
# 41 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Uxie_1


AzureChasm_EventScript_Mesprit::
# 48 "data/maps/AzureChasm/scripts.pory"
	lock
# 49 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 50 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
# 51 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 52 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 53 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_MESPRIT, 75
# 54 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 56 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 57 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 62 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Mesprit_3
# 62 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Mesprit_3
AzureChasm_EventScript_Mesprit_1:
# 65 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Mesprit_2:
# 58 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 60 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Mesprit_1

AzureChasm_EventScript_Mesprit_3:
# 63 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Mesprit_1


AzureChasm_EventScript_Glastrier::
# 70 "data/maps/AzureChasm/scripts.pory"
	lock
# 71 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 72 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_GLASTRIER, CRY_MODE_ENCOUNTER
# 73 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 74 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 75 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_GLASTRIER, 75
# 76 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 77 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 78 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 79 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 84 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Glastrier_3
# 84 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Glastrier_3
AzureChasm_EventScript_Glastrier_1:
# 87 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Glastrier_2:
# 80 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 82 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Glastrier_1

AzureChasm_EventScript_Glastrier_3:
# 85 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Glastrier_1


AzureChasm_EventScript_Zacian::
# 92 "data/maps/AzureChasm/scripts.pory"
	lock
# 93 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 94 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZACIAN, CRY_MODE_ENCOUNTER
# 95 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 96 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 97 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZACIAN, 75, ITEM_RUSTED_SWORD
# 98 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 99 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 100 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 101 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 101 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 106 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zacian_3
# 106 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zacian_3
AzureChasm_EventScript_Zacian_1:
# 109 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zacian_2:
# 102 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 104 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zacian_1

AzureChasm_EventScript_Zacian_3:
# 107 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zacian_1


AzureChasm_EventScript_Zamazenta::
# 114 "data/maps/AzureChasm/scripts.pory"
	lock
# 115 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 116 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZAMAZENTA, CRY_MODE_ENCOUNTER
# 117 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 118 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 119 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZAMAZENTA, 75
# 120 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 121 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 122 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 123 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 123 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 128 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
# 128 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
AzureChasm_EventScript_Zamazenta_1:
# 131 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zamazenta_2:
# 124 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 125 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 126 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zamazenta_1

AzureChasm_EventScript_Zamazenta_3:
# 129 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zamazenta_1

