AreaZero_Futuristic_MapScripts::
# 2 "data/maps/AreaZero_Futuristic/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_Futuristic_TryRemoveParadoxMons
	.byte 0


AreaZero_Futuristic_TryRemoveParadoxMons::
# 6 "data/maps/AreaZero_Futuristic/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 7 "data/maps/AreaZero_Futuristic/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 8 "data/maps/AreaZero_Futuristic/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 9 "data/maps/AreaZero_Futuristic/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero_Futuristic/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


AreaZero_Futuristic_EventScript_IronValiant::
# 15 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 16 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 17 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_VALIANT, CRY_MODE_ENCOUNTER
# 18 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 19 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_VALIANT, 75
# 20 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 21 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronHands::
# 26 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 27 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 28 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_HANDS, CRY_MODE_ENCOUNTER
# 29 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 30 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_HANDS, 75
# 31 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 32 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronBundle::
# 37 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 38 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 39 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_BUNDLE, CRY_MODE_ENCOUNTER
# 40 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 41 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_BUNDLE, 75
# 42 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 43 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronTreads::
# 48 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 49 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 50 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_TREADS, CRY_MODE_ENCOUNTER
# 51 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 52 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_TREADS, 75
# 53 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 54 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronLeaves::
# 59 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 60 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 61 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_LEAVES, CRY_MODE_ENCOUNTER
# 62 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 63 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_LEAVES, 75
# 64 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 65 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronBoulder::
# 70 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 71 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 72 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_BOULDER, CRY_MODE_ENCOUNTER
# 73 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 74 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_BOULDER, 75
# 75 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 76 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end


AreaZero_Futuristic_EventScript_IronCrown::
# 81 "data/maps/AreaZero_Futuristic/scripts.pory"
	lock
# 82 "data/maps/AreaZero_Futuristic/scripts.pory"
	faceplayer
# 83 "data/maps/AreaZero_Futuristic/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, CRY_MODE_ENCOUNTER
# 84 "data/maps/AreaZero_Futuristic/scripts.pory"
	waitmoncry
# 85 "data/maps/AreaZero_Futuristic/scripts.pory"
	setwildbattle SPECIES_IRON_CROWN, 75
# 86 "data/maps/AreaZero_Futuristic/scripts.pory"
	dowildbattle
# 87 "data/maps/AreaZero_Futuristic/scripts.pory"
	release
	end

