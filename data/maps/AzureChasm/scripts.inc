AzureChasm_MapScripts::
	.byte 0


AzureChasm_EventScript_BlackBelt::
# 4 "data/maps/AzureChasm/scripts.pory"
	msgbox AzureChasm_EventScript_BlackBelt_Text_0, MSGBOX_SIGN
	end


AzureChasm_EventScript_Azelf::
# 10 "data/maps/AzureChasm/scripts.pory"
	lock
# 11 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 12 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 13 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 14 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 15 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_AZELF, 75
# 16 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 17 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 18 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 19 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Azelf_2
# 24 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Azelf_3
# 24 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Azelf_3
AzureChasm_EventScript_Azelf_1:
# 27 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Azelf_2:
# 20 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 21 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 22 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Azelf_1

AzureChasm_EventScript_Azelf_3:
# 25 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Azelf_1


AzureChasm_EventScript_Uxie::
# 32 "data/maps/AzureChasm/scripts.pory"
	lock
# 33 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 34 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 35 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 36 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 37 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_UXIE, 75
# 38 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 39 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 40 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 41 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Uxie_2
# 46 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Uxie_3
# 46 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Uxie_3
AzureChasm_EventScript_Uxie_1:
# 49 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Uxie_2:
# 42 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 44 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Uxie_1

AzureChasm_EventScript_Uxie_3:
# 47 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Uxie_1


AzureChasm_EventScript_Mesprit::
# 54 "data/maps/AzureChasm/scripts.pory"
	lock
# 55 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 56 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
# 57 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 58 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 59 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_MESPRIT, 75
# 60 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 61 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 62 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 63 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Mesprit_2
# 68 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Mesprit_3
# 68 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Mesprit_3
AzureChasm_EventScript_Mesprit_1:
# 71 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Mesprit_2:
# 64 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 66 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Mesprit_1

AzureChasm_EventScript_Mesprit_3:
# 69 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Mesprit_1


AzureChasm_EventScript_Glastrier::
# 76 "data/maps/AzureChasm/scripts.pory"
	lock
# 77 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 78 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_GLASTRIER, CRY_MODE_ENCOUNTER
# 79 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 80 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 81 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_GLASTRIER, 75
# 82 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 83 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 84 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 85 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Glastrier_2
# 90 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Glastrier_3
# 90 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Glastrier_3
AzureChasm_EventScript_Glastrier_1:
# 93 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Glastrier_2:
# 86 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 88 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Glastrier_1

AzureChasm_EventScript_Glastrier_3:
# 91 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Glastrier_1


AzureChasm_EventScript_Zacian::
# 98 "data/maps/AzureChasm/scripts.pory"
	lock
# 99 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 100 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZACIAN, CRY_MODE_ENCOUNTER
# 101 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 102 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 103 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZACIAN, 75, ITEM_RUSTED_SWORD
# 104 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 105 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 106 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 107 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 107 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zacian_2
# 112 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zacian_3
# 112 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zacian_3
AzureChasm_EventScript_Zacian_1:
# 115 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zacian_2:
# 108 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 110 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zacian_1

AzureChasm_EventScript_Zacian_3:
# 113 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zacian_1


AzureChasm_EventScript_Zamazenta::
# 120 "data/maps/AzureChasm/scripts.pory"
	lock
# 121 "data/maps/AzureChasm/scripts.pory"
	faceplayer
# 122 "data/maps/AzureChasm/scripts.pory"
	playmoncry SPECIES_ZAMAZENTA, CRY_MODE_ENCOUNTER
# 123 "data/maps/AzureChasm/scripts.pory"
	delay 40
# 124 "data/maps/AzureChasm/scripts.pory"
	waitmoncry
# 125 "data/maps/AzureChasm/scripts.pory"
	setwildbattle SPECIES_ZAMAZENTA, 75
# 126 "data/maps/AzureChasm/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 127 "data/maps/AzureChasm/scripts.pory"
	waitstate
# 128 "data/maps/AzureChasm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 129 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 129 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureChasm_EventScript_Zamazenta_2
# 134 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
# 134 "data/maps/AzureChasm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureChasm_EventScript_Zamazenta_3
AzureChasm_EventScript_Zamazenta_1:
# 137 "data/maps/AzureChasm/scripts.pory"
	release
	end

AzureChasm_EventScript_Zamazenta_2:
# 130 "data/maps/AzureChasm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 131 "data/maps/AzureChasm/scripts.pory"
	removeobject VAR_LAST_TALKED
# 132 "data/maps/AzureChasm/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureChasm_EventScript_Zamazenta_1

AzureChasm_EventScript_Zamazenta_3:
# 135 "data/maps/AzureChasm/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureChasm_EventScript_Zamazenta_1


AzureChasm_EventScript_BlackBelt_Text_0:
# 4 "data/maps/AzureChasm/scripts.pory"
	.string "It's so cold…\n I can barely train like this…$"
