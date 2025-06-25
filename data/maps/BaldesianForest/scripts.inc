BaldesianForest_MapScripts::
	.byte 0


BaldesianForest_EventScript_Zarude::
# 4 "data/maps/BaldesianForest/scripts.pory"
	lock
# 5 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 6 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_ZARUDE, CRY_MODE_ENCOUNTER
# 7 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 8 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 9 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_ZARUDE, 75
# 10 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 12 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Zarude_2
# 13 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Zarude_2
# 18 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Zarude_3
# 18 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Zarude_3
BaldesianForest_EventScript_Zarude_1:
# 21 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Zarude_2:
# 14 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Zarude_1

BaldesianForest_EventScript_Zarude_3:
# 19 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Zarude_1


BaldesianForest_EventScript_Landorus::
# 26 "data/maps/BaldesianForest/scripts.pory"
	lock
# 27 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 28 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
# 29 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 30 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 31 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_LANDORUS, 75
# 32 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 34 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Landorus_2
# 35 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Landorus_2
# 40 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Landorus_3
# 40 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Landorus_3
BaldesianForest_EventScript_Landorus_1:
# 43 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Landorus_2:
# 36 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Landorus_1

BaldesianForest_EventScript_Landorus_3:
# 41 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Landorus_1


BaldesianForest_EventScript_Thundurus::
# 48 "data/maps/BaldesianForest/scripts.pory"
	lock
# 49 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 50 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
# 51 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 52 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 53 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_THUNDURUS, 75
# 54 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 56 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Thundurus_2
# 57 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Thundurus_2
# 62 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Thundurus_3
# 62 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Thundurus_3
BaldesianForest_EventScript_Thundurus_1:
# 65 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Thundurus_2:
# 58 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 60 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Thundurus_1

BaldesianForest_EventScript_Thundurus_3:
# 63 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Thundurus_1


BaldesianForest_EventScript_Tornadus::
# 70 "data/maps/BaldesianForest/scripts.pory"
	lock
# 71 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 72 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
# 73 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 74 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 75 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_TORNADUS, 75
# 76 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 77 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 78 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Tornadus_2
# 79 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Tornadus_2
# 84 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Tornadus_3
# 84 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Tornadus_3
BaldesianForest_EventScript_Tornadus_1:
# 87 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Tornadus_2:
# 80 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 82 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Tornadus_1

BaldesianForest_EventScript_Tornadus_3:
# 85 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Tornadus_1


BaldesianForest_EventScript_Enamorus::
# 92 "data/maps/BaldesianForest/scripts.pory"
	lock
# 93 "data/maps/BaldesianForest/scripts.pory"
	faceplayer
# 94 "data/maps/BaldesianForest/scripts.pory"
	playmoncry SPECIES_ENAMORUS, CRY_MODE_ENCOUNTER
# 95 "data/maps/BaldesianForest/scripts.pory"
	delay 40
# 96 "data/maps/BaldesianForest/scripts.pory"
	waitmoncry
# 97 "data/maps/BaldesianForest/scripts.pory"
	setwildbattle SPECIES_ENAMORUS, 75
# 98 "data/maps/BaldesianForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 99 "data/maps/BaldesianForest/scripts.pory"
	waitstate
# 100 "data/maps/BaldesianForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 101 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BaldesianForest_EventScript_Enamorus_2
# 101 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BaldesianForest_EventScript_Enamorus_2
# 106 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BaldesianForest_EventScript_Enamorus_3
# 106 "data/maps/BaldesianForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BaldesianForest_EventScript_Enamorus_3
BaldesianForest_EventScript_Enamorus_1:
# 109 "data/maps/BaldesianForest/scripts.pory"
	release
	end

BaldesianForest_EventScript_Enamorus_2:
# 102 "data/maps/BaldesianForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/BaldesianForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 104 "data/maps/BaldesianForest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BaldesianForest_EventScript_Enamorus_1

BaldesianForest_EventScript_Enamorus_3:
# 107 "data/maps/BaldesianForest/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BaldesianForest_EventScript_Enamorus_1

