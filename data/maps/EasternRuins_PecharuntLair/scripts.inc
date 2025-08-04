EasternRuins_PecharuntLair_MapScripts::
# 2 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EasternRuins_PecharuntLair_OnTransition
# 3 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, EasternRuins_PecharuntLair_OnResume
	.byte 0


EasternRuins_PecharuntLair_OnResume::
# 7 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 8 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 9 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 10 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 11 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


EasternRuins_PecharuntLair_OnTransition::
# 16 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	call_if_eq VAR_PECHARUNT_STATE, 3, EasternRuins_PecharuntLair_TrySpawnOgerpon
	end


EasternRuins_PecharuntLair_TrySpawnOgerpon::
# 21 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	clearflag FLAG_DEFEATED_OGERPON
# 22 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	setvar VAR_PECHARUNT_STATE, 4
	return


EasternRuins_PecharuntLair_EventScript_Fezandipiti::
# 27 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	lock
# 28 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	faceplayer
# 29 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	playmoncry SPECIES_FEZANDIPITI, CRY_MODE_ENCOUNTER
# 30 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	waitmoncry
# 31 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	setwildbattle SPECIES_FEZANDIPITI, 75, ITEM_CORNERSTONE_MASK
# 32 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	waitstate
# 34 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EasternRuins_PecharuntLair_EventScript_Fezandipiti_2
# 35 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EasternRuins_PecharuntLair_EventScript_Fezandipiti_2
EasternRuins_PecharuntLair_EventScript_Fezandipiti_1:
# 38 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	release
	end

EasternRuins_PecharuntLair_EventScript_Fezandipiti_2:
# 36 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	addvar VAR_PECHARUNT_STATE, 1
	goto EasternRuins_PecharuntLair_EventScript_Fezandipiti_1


EasternRuins_PecharuntLair_EventScript_Munkidori::
# 43 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	lock
# 44 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	faceplayer
# 45 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	playmoncry SPECIES_MUNKIDORI, CRY_MODE_ENCOUNTER
# 46 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	waitmoncry
# 47 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	setwildbattle SPECIES_MUNKIDORI, 75, ITEM_WELLSPRING_MASK
# 48 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 49 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	waitstate
# 50 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EasternRuins_PecharuntLair_EventScript_Munkidori_2
# 50 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EasternRuins_PecharuntLair_EventScript_Munkidori_2
EasternRuins_PecharuntLair_EventScript_Munkidori_1:
# 53 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	release
	end

EasternRuins_PecharuntLair_EventScript_Munkidori_2:
# 51 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	addvar VAR_PECHARUNT_STATE, 1
	goto EasternRuins_PecharuntLair_EventScript_Munkidori_1


EasternRuins_PecharuntLair_EventScript_Pecharunt::
# 58 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	lock
# 59 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	faceplayer
# 60 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 61 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	waitmoncry
# 62 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 75, ITEM_HEARTHFLAME_MASK
# 63 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 64 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	waitstate
# 65 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EasternRuins_PecharuntLair_EventScript_Pecharunt_2
# 65 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EasternRuins_PecharuntLair_EventScript_Pecharunt_2
EasternRuins_PecharuntLair_EventScript_Pecharunt_1:
# 68 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	release
	end

EasternRuins_PecharuntLair_EventScript_Pecharunt_2:
# 66 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	addvar VAR_PECHARUNT_STATE, 1
	goto EasternRuins_PecharuntLair_EventScript_Pecharunt_1


EasternRuins_PecharuntLair_EventScript_Ogerpon::
# 73 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	lock
# 74 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	faceplayer
# 75 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	playmoncry SPECIES_OGERPON, CRY_MODE_ENCOUNTER
# 76 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	waitmoncry
# 77 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	setwildbattle SPECIES_OGERPON, 75
# 78 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 79 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	waitstate
# 80 "data/maps/EasternRuins_PecharuntLair/scripts.pory"
	release
	end

