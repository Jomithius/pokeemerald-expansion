AreaZero_Futuristic_MapScripts::
# 2 "data/maps/AreaZero_Futuristic/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_Futuristic_TryRemoveParadoxMons
	.byte 0


AreaZero_Futuristic_TryRemoveParadoxMons::
# 6 "data/maps/AreaZero_Futuristic/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AreaZero_Futuristic_TryRemoveParadoxMons_2
AreaZero_Futuristic_TryRemoveParadoxMons_1:
	end

AreaZero_Futuristic_TryRemoveParadoxMons_2:
# 7 "data/maps/AreaZero_Futuristic/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 8 "data/maps/AreaZero_Futuristic/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 9 "data/maps/AreaZero_Futuristic/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero_Futuristic/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 11 "data/maps/AreaZero_Futuristic/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 12 "data/maps/AreaZero_Futuristic/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto AreaZero_Futuristic_TryRemoveParadoxMons_1


AreaZero_Futuristic_EventScript_IronValiant::
# 18 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 19 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 20 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 21 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_VALIANT, CRY_MODE_ENCOUNTER
# 22 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 23 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_VALIANT, 75
# 24 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 25 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronHands::
# 30 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 31 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 32 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 33 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_HANDS, CRY_MODE_ENCOUNTER
# 34 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 35 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_HANDS, 75
# 36 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 37 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronBundle::
# 42 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 43 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 44 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_BUNDLE, CRY_MODE_ENCOUNTER
# 46 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 47 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_BUNDLE, 75
# 48 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 49 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronTreads::
# 54 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 55 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 56 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 57 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_TREADS, CRY_MODE_ENCOUNTER
# 58 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 59 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_TREADS, 75
# 60 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 61 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronLeaves::
# 66 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 67 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 68 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_LEAVES, CRY_MODE_ENCOUNTER
# 70 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 71 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_LEAVES, 75
# 72 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 73 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronBoulder::
# 78 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 79 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 80 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 81 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_BOULDER, CRY_MODE_ENCOUNTER
# 82 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 83 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_BOULDER, 75
# 84 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 85 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronCrown::
# 90 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 91 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 92 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 93 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, CRY_MODE_ENCOUNTER
# 94 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 95 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_CROWN, 75
# 96 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 97 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end

