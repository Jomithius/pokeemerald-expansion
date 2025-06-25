FlowerParadise_MapScripts::
	.byte 0


FlowerParadise_EventScript_Shaymin::
# 4 "data/maps/FlowerParadise/scripts.pory"
	lock
# 5 "data/maps/FlowerParadise/scripts.pory"
	faceplayer
# 6 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
# 7 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 8 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 9 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_SHAYMIN, 75, ITEM_GRACIDEA
# 10 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 12 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_Shaymin_2
# 13 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_Shaymin_2
# 18 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_Shaymin_3
# 18 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_Shaymin_3
FlowerParadise_EventScript_Shaymin_1:
# 21 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_Shaymin_2:
# 14 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_Shaymin_1

FlowerParadise_EventScript_Shaymin_3:
# 19 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_Shaymin_1


FlowerParadise_EventScript_Meloetta::
# 26 "data/maps/FlowerParadise/scripts.pory"
	lock
# 27 "data/maps/FlowerParadise/scripts.pory"
	faceplayer
# 28 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_MELOETTA, CRY_MODE_ENCOUNTER
# 29 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 30 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 31 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_MELOETTA, 75
# 32 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 34 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_Meloetta_2
# 35 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_Meloetta_2
# 40 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_Meloetta_3
# 40 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_Meloetta_3
FlowerParadise_EventScript_Meloetta_1:
# 43 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_Meloetta_2:
# 36 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_Meloetta_1

FlowerParadise_EventScript_Meloetta_3:
# 41 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_Meloetta_1


FlowerParadise_EventScript_Victini::
# 48 "data/maps/FlowerParadise/scripts.pory"
	lock
# 49 "data/maps/FlowerParadise/scripts.pory"
	faceplayer
# 50 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_VICTINI, CRY_MODE_ENCOUNTER
# 51 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 52 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 53 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_VICTINI, 75
# 54 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 56 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_Victini_2
# 57 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_Victini_2
# 62 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_Victini_3
# 62 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_Victini_3
FlowerParadise_EventScript_Victini_1:
# 65 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_Victini_2:
# 58 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 60 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_Victini_1

FlowerParadise_EventScript_Victini_3:
# 63 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_Victini_1


FlowerParadise_EventScript_TapuBulu::
# 70 "data/maps/FlowerParadise/scripts.pory"
	lock
# 71 "data/maps/FlowerParadise/scripts.pory"
	faceplayer
# 72 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_TAPU_BULU, CRY_MODE_ENCOUNTER
# 73 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 74 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 75 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_TAPU_BULU, 75
# 76 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 77 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 78 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_TapuBulu_2
# 79 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_TapuBulu_2
# 84 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_TapuBulu_3
# 84 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_TapuBulu_3
FlowerParadise_EventScript_TapuBulu_1:
# 87 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_TapuBulu_2:
# 80 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 82 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_TapuBulu_1

FlowerParadise_EventScript_TapuBulu_3:
# 85 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_TapuBulu_1


FlowerParadise_EventScript_TapuKoko::
# 92 "data/maps/FlowerParadise/scripts.pory"
	lock
# 93 "data/maps/FlowerParadise/scripts.pory"
	faceplayer
# 94 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_TAPU_KOKO, CRY_MODE_ENCOUNTER
# 95 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 96 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 97 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_TAPU_KOKO, 75
# 98 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 99 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 100 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 101 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_TapuKoko_2
# 101 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_TapuKoko_2
# 106 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_TapuKoko_3
# 106 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_TapuKoko_3
FlowerParadise_EventScript_TapuKoko_1:
# 109 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_TapuKoko_2:
# 102 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 104 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_TapuKoko_1

FlowerParadise_EventScript_TapuKoko_3:
# 107 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_TapuKoko_1


FlowerParadise_EventScript_TapuLele::
# 114 "data/maps/FlowerParadise/scripts.pory"
	lock
# 115 "data/maps/FlowerParadise/scripts.pory"
	faceplayer
# 116 "data/maps/FlowerParadise/scripts.pory"
	playmoncry SPECIES_TAPU_LELE, CRY_MODE_ENCOUNTER
# 117 "data/maps/FlowerParadise/scripts.pory"
	delay 40
# 118 "data/maps/FlowerParadise/scripts.pory"
	waitmoncry
# 119 "data/maps/FlowerParadise/scripts.pory"
	setwildbattle SPECIES_TAPU_LELE, 75
# 120 "data/maps/FlowerParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 121 "data/maps/FlowerParadise/scripts.pory"
	waitstate
# 122 "data/maps/FlowerParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 123 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FlowerParadise_EventScript_TapuLele_2
# 123 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FlowerParadise_EventScript_TapuLele_2
# 128 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FlowerParadise_EventScript_TapuLele_3
# 128 "data/maps/FlowerParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FlowerParadise_EventScript_TapuLele_3
FlowerParadise_EventScript_TapuLele_1:
# 131 "data/maps/FlowerParadise/scripts.pory"
	release
	end

FlowerParadise_EventScript_TapuLele_2:
# 124 "data/maps/FlowerParadise/scripts.pory"
	fadescreen FADE_TO_BLACK
# 125 "data/maps/FlowerParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
# 126 "data/maps/FlowerParadise/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto FlowerParadise_EventScript_TapuLele_1

FlowerParadise_EventScript_TapuLele_3:
# 129 "data/maps/FlowerParadise/scripts.pory"
	goto Common_EventScript_NopReturn
	goto FlowerParadise_EventScript_TapuLele_1

