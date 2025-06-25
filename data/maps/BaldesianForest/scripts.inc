BaldesianForest_MapScripts::
	.byte 0


BaldesianForest_EventScript_Zarude::
# 4 "data/maps/BaldesianForest/scripts.pory"
	lock
# 5 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_ZARUDE, CRY_MODE_ENCOUNTER
# 6 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 7 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 8 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_ZARUDE, 75
# 9 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 10 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 11 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Zarude_2
# 12 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Zarude_2
# 17 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Zarude_3
# 17 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Zarude_3
BaldesianForest_EventScript_Zarude_1:
# 20 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Zarude_2:
# 13 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Zarude_1

BaldesianForest_EventScript_Zarude_3:
# 18 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Zarude_1


BaldesianForest_EventScript_Landorus::
# 25 "data/maps/BaldesianForest/scripts.pory"
	lock
# 26 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
# 27 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 28 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 29 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_LANDORUS, 75
# 30 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 32 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Landorus_2
# 33 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Landorus_2
# 38 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Landorus_3
# 38 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Landorus_3
BaldesianForest_EventScript_Landorus_1:
# 41 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Landorus_2:
# 34 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Landorus_1

BaldesianForest_EventScript_Landorus_3:
# 39 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Landorus_1


BaldesianForest_EventScript_Thundurus::
# 46 "data/maps/BaldesianForest/scripts.pory"
	lock
# 47 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
# 48 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 49 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 50 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_THUNDURUS, 75
# 51 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 52 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 53 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Thundurus_2
# 54 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Thundurus_2
# 59 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Thundurus_3
# 59 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Thundurus_3
BaldesianForest_EventScript_Thundurus_1:
# 62 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Thundurus_2:
# 55 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 57 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Thundurus_1

BaldesianForest_EventScript_Thundurus_3:
# 60 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Thundurus_1


BaldesianForest_EventScript_Tornadus::
# 67 "data/maps/BaldesianForest/scripts.pory"
	lock
# 68 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
# 69 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 70 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 71 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_TORNADUS, 75
# 72 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 73 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 74 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 75 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Tornadus_2
# 75 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Tornadus_2
# 80 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Tornadus_3
# 80 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Tornadus_3
BaldesianForest_EventScript_Tornadus_1:
# 83 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Tornadus_2:
# 76 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 78 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Tornadus_1

BaldesianForest_EventScript_Tornadus_3:
# 81 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Tornadus_1


BaldesianForest_EventScript_Enamorus::
# 88 "data/maps/BaldesianForest/scripts.pory"
	lock
# 89 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_ENAMORUS, CRY_MODE_ENCOUNTER
# 90 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 91 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 92 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_ENAMORUS, 75
# 93 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 94 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 95 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 96 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Enamorus_2
# 96 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Enamorus_2
# 101 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Enamorus_3
# 101 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Enamorus_3
BaldesianForest_EventScript_Enamorus_1:
# 104 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Enamorus_2:
# 97 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 99 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Enamorus_1

BaldesianForest_EventScript_Enamorus_3:
# 102 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Enamorus_1

