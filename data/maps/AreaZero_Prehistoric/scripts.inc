AreaZero_Prehistoric_MapScripts::
# 2 "data/maps/AreaZero_Prehistoric/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_Prehistoric_TryRemoveParadoxMons
	.byte 0


AreaZero_Prehistoric_TryRemoveParadoxMons::
# 6 "data/maps/AreaZero_Prehistoric/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 7 "data/maps/AreaZero_Prehistoric/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 8 "data/maps/AreaZero_Prehistoric/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 9 "data/maps/AreaZero_Prehistoric/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero_Prehistoric/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


AreaZero_Prehistoric_EventScript_GreatTusk::
# 15 "data/maps/AreaZero_Prehistoric/scripts.pory"
	lock
# 16 "data/maps/AreaZero_Prehistoric/scripts.pory"
	faceplayer
# 17 "data/maps/AreaZero_Prehistoric/scripts.pory"
	playmoncry SPECIES_GREAT_TUSK, CRY_MODE_ENCOUNTER
# 18 "data/maps/AreaZero_Prehistoric/scripts.pory"
	waitmoncry
# 19 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setwildbattle SPECIES_GREAT_TUSK, 75
# 20 "data/maps/AreaZero_Prehistoric/scripts.pory"
	dowildbattle
# 21 "data/maps/AreaZero_Prehistoric/scripts.pory"
	release
	end


AreaZero_Prehistoric_EventScript_RoaringMoon::
# 26 "data/maps/AreaZero_Prehistoric/scripts.pory"
	lock
# 27 "data/maps/AreaZero_Prehistoric/scripts.pory"
	faceplayer
# 28 "data/maps/AreaZero_Prehistoric/scripts.pory"
	playmoncry SPECIES_ROARING_MOON, CRY_MODE_ENCOUNTER
# 29 "data/maps/AreaZero_Prehistoric/scripts.pory"
	waitmoncry
# 30 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setwildbattle SPECIES_ROARING_MOON, 75
# 31 "data/maps/AreaZero_Prehistoric/scripts.pory"
	dowildbattle
# 32 "data/maps/AreaZero_Prehistoric/scripts.pory"
	release
	end


AreaZero_Prehistoric_EventScript_GougingFire::
# 37 "data/maps/AreaZero_Prehistoric/scripts.pory"
	lock
# 38 "data/maps/AreaZero_Prehistoric/scripts.pory"
	faceplayer
# 39 "data/maps/AreaZero_Prehistoric/scripts.pory"
	playmoncry SPECIES_GOUGING_FIRE, CRY_MODE_ENCOUNTER
# 40 "data/maps/AreaZero_Prehistoric/scripts.pory"
	waitmoncry
# 41 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setwildbattle SPECIES_GOUGING_FIRE, 75
# 42 "data/maps/AreaZero_Prehistoric/scripts.pory"
	dowildbattle
# 43 "data/maps/AreaZero_Prehistoric/scripts.pory"
	release
	end


AreaZero_Prehistoric_EventScript_FlutterMane::
# 48 "data/maps/AreaZero_Prehistoric/scripts.pory"
	lock
# 49 "data/maps/AreaZero_Prehistoric/scripts.pory"
	faceplayer
# 50 "data/maps/AreaZero_Prehistoric/scripts.pory"
	playmoncry SPECIES_FLUTTER_MANE, CRY_MODE_ENCOUNTER
# 51 "data/maps/AreaZero_Prehistoric/scripts.pory"
	waitmoncry
# 52 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setwildbattle SPECIES_FLUTTER_MANE, 75
# 53 "data/maps/AreaZero_Prehistoric/scripts.pory"
	dowildbattle
# 54 "data/maps/AreaZero_Prehistoric/scripts.pory"
	release
	end

