# 1 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_MapScripts::
# 2 "data/maps/ArtisanCave_B1F/scripts.pory"
	.byte 0

AzureMountain_EventScript_Keldeo::
# 6 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 7 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_KELDEO, CRY_MODE_ENCOUNTER
# 8 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 9 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 10 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_KELDEO, 75
# 11 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 12 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 13 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Keldeo_2
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Keldeo_2
# 19 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Keldeo_3
# 19 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Keldeo_3
AzureMountain_EventScript_Keldeo_1:
# 22 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Keldeo_2:
# 15 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Keldeo_1

AzureMountain_EventScript_Keldeo_3:
# 20 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Keldeo_1


AzureMountain_EventScript_Cobalion::
# 27 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 28 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_COBALION, CRY_MODE_ENCOUNTER
# 29 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 30 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 31 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_COBALION, 75
# 32 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 34 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Cobalion_2
# 35 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Cobalion_2
# 40 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Cobalion_3
# 40 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Cobalion_3
AzureMountain_EventScript_Cobalion_1:
# 43 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Cobalion_2:
# 36 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Cobalion_1

AzureMountain_EventScript_Cobalion_3:
# 41 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Cobalion_1


AzureMountain_EventScript_Virizion::
# 48 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 49 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_VIRIZION, CRY_MODE_ENCOUNTER
# 50 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 51 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 52 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_VIRIZION, 75
# 53 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 54 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 55 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 56 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Virizion_2
# 56 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Virizion_2
# 61 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Virizion_3
# 61 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Virizion_3
AzureMountain_EventScript_Virizion_1:
# 64 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Virizion_2:
# 57 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 59 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Virizion_1

AzureMountain_EventScript_Virizion_3:
# 62 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Virizion_1


AzureMountain_EventScript_Terrakion::
# 69 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 70 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_TERRAKION, CRY_MODE_ENCOUNTER
# 71 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 72 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 73 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_TERRAKION, 75
# 74 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 75 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 76 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 77 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Terrakion_2
# 77 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Terrakion_2
# 82 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Terrakion_3
# 82 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Terrakion_3
AzureMountain_EventScript_Terrakion_1:
# 85 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Terrakion_2:
# 78 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 80 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Terrakion_1

AzureMountain_EventScript_Terrakion_3:
# 83 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Terrakion_1


AzureMountain_EventScript_Hoopa::
# 90 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 91 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_ENCOUNTER
# 92 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 93 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 94 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattle SPECIES_HOOPA, 75
# 95 "data/maps/ArtisanCave_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 96 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitstate
# 97 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 98 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AzureMountain_EventScript_Hoopa_2
# 98 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AzureMountain_EventScript_Hoopa_2
# 103 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AzureMountain_EventScript_Hoopa_3
# 103 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AzureMountain_EventScript_Hoopa_3
AzureMountain_EventScript_Hoopa_1:
# 106 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
	end

AzureMountain_EventScript_Hoopa_2:
# 99 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 101 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto AzureMountain_EventScript_Hoopa_1

AzureMountain_EventScript_Hoopa_3:
# 104 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AzureMountain_EventScript_Hoopa_1

