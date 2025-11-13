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
	setwildbattle SPECIES_IRON_VALIANT, 90
# 24 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 25 "data/maps/AreaZero_Futuristic/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 26 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronHands::
# 31 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 32 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 33 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 34 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_HANDS, CRY_MODE_ENCOUNTER
# 35 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 36 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_HANDS, 90
# 37 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 38 "data/maps/AreaZero_Futuristic/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronBundle::
# 44 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 45 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 46 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_BUNDLE, CRY_MODE_ENCOUNTER
# 48 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 49 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_BUNDLE, 90
# 50 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 51 "data/maps/AreaZero_Futuristic/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 52 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronTreads::
# 57 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 58 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 59 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_TREADS, CRY_MODE_ENCOUNTER
# 61 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 62 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_TREADS, 90
# 63 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 64 "data/maps/AreaZero_Futuristic/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronLeaves::
# 70 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 71 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 72 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 73 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_LEAVES, CRY_MODE_ENCOUNTER
# 74 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 75 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_LEAVES, 90
# 76 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 77 "data/maps/AreaZero_Futuristic/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 78 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronBoulder::
# 83 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 84 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 85 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_BOULDER, CRY_MODE_ENCOUNTER
# 87 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 88 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_BOULDER, 90
# 89 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 90 "data/maps/AreaZero_Futuristic/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 91 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronCrown::
# 96 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 97 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 98 "data/maps/AreaZero_Futuristic/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 99 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, CRY_MODE_ENCOUNTER
# 100 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 101 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_CROWN, 90
# 102 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 103 "data/maps/AreaZero_Futuristic/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end

