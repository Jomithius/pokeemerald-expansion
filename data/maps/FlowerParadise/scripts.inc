FlowerParadise_MapScripts::
	.byte 0


FlowerParadise_EventScript_Shaymin::
# 4 "data/maps/FlowerParadise/scripts.pory"
	lock
# 5 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
# 6 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 7 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 8 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_SHAYMIN, 75, ITEM_GRACIDEA
# 9 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 10 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 11 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_Shaymin_2
# 12 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_Shaymin_2
# 17 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_Shaymin_3
# 17 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_Shaymin_3
FlowerParadise_EventScript_Shaymin_1:
# 20 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_Shaymin_2:
# 13 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_Shaymin_1

FlowerParadise_EventScript_Shaymin_3:
# 18 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_Shaymin_1


FlowerParadise_EventScript_Meloetta::
# 25 "data/maps/FlowerParadise/scripts.pory"
	lock
# 26 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_MELOETTA, CRY_MODE_ENCOUNTER
# 27 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 28 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 29 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_MELOETTA, 75
# 30 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 32 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_Meloetta_2
# 33 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_Meloetta_2
# 38 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_Meloetta_3
# 38 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_Meloetta_3
FlowerParadise_EventScript_Meloetta_1:
# 41 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_Meloetta_2:
# 34 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_Meloetta_1

FlowerParadise_EventScript_Meloetta_3:
# 39 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_Meloetta_1


FlowerParadise_EventScript_Victini::
# 46 "data/maps/FlowerParadise/scripts.pory"
	lock
# 47 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_VICTINI, CRY_MODE_ENCOUNTER
# 48 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 49 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 50 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_VICTINI, 75
# 51 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 52 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 53 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_Victini_2
# 54 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_Victini_2
# 59 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_Victini_3
# 59 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_Victini_3
FlowerParadise_EventScript_Victini_1:
# 62 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_Victini_2:
# 55 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 57 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_Victini_1

FlowerParadise_EventScript_Victini_3:
# 60 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_Victini_1


FlowerParadise_EventScript_TapuBulu::
# 67 "data/maps/FlowerParadise/scripts.pory"
	lock
# 68 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_TAPU_BULU, CRY_MODE_ENCOUNTER
# 69 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 70 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 71 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_TAPU_BULU, 75
# 72 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 73 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 74 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 75 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_TapuBulu_2
# 75 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_TapuBulu_2
# 80 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_TapuBulu_3
# 80 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_TapuBulu_3
FlowerParadise_EventScript_TapuBulu_1:
# 83 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_TapuBulu_2:
# 76 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 78 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_TapuBulu_1

FlowerParadise_EventScript_TapuBulu_3:
# 81 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_TapuBulu_1


FlowerParadise_EventScript_TapuKoko::
# 88 "data/maps/FlowerParadise/scripts.pory"
	lock
# 89 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_TAPU_KOKO, CRY_MODE_ENCOUNTER
# 90 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 91 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 92 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_TAPU_KOKO, 75
# 93 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 94 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 95 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 96 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_TapuKoko_2
# 96 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_TapuKoko_2
# 101 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_TapuKoko_3
# 101 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_TapuKoko_3
FlowerParadise_EventScript_TapuKoko_1:
# 104 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_TapuKoko_2:
# 97 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 99 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_TapuKoko_1

FlowerParadise_EventScript_TapuKoko_3:
# 102 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_TapuKoko_1


FlowerParadise_EventScript_TapuLele::
# 109 "data/maps/FlowerParadise/scripts.pory"
	lock
# 110 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_TAPU_LELE, CRY_MODE_ENCOUNTER
# 111 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 112 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 113 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_TAPU_LELE, 75
# 114 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 115 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 116 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 117 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_TapuLele_2
# 117 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_TapuLele_2
# 122 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_TapuLele_3
# 122 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_TapuLele_3
FlowerParadise_EventScript_TapuLele_1:
# 125 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_TapuLele_2:
# 118 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 119 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 120 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_TapuLele_1

FlowerParadise_EventScript_TapuLele_3:
# 123 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_TapuLele_1

