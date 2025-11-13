AreaZero_Prehistoric_MapScripts::
# 2 "data/maps/AreaZero_Prehistoric/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_Prehistoric_TryRemoveParadoxMons
	.byte 0


AreaZero_Prehistoric_TryRemoveParadoxMons::
# 6 "data/maps/AreaZero_Prehistoric/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AreaZero_Prehistoric_TryRemoveParadoxMons_2
AreaZero_Prehistoric_TryRemoveParadoxMons_1:
	end

AreaZero_Prehistoric_TryRemoveParadoxMons_2:
# 7 "data/maps/AreaZero_Prehistoric/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 8 "data/maps/AreaZero_Prehistoric/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 9 "data/maps/AreaZero_Prehistoric/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero_Prehistoric/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 11 "data/maps/AreaZero_Prehistoric/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 12 "data/maps/AreaZero_Prehistoric/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto AreaZero_Prehistoric_TryRemoveParadoxMons_1


AreaZero_Prehistoric_EventScript_GreatTusk::
# 18 "data/maps/AreaZero_Prehistoric/scripts.pory"
	lock
# 19 "data/maps/AreaZero_Prehistoric/scripts.pory"
	faceplayer
# 20 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 21 "data/maps/AreaZero_Prehistoric/scripts.pory"
	playmoncry SPECIES_GREAT_TUSK, CRY_MODE_ENCOUNTER
# 22 "data/maps/AreaZero_Prehistoric/scripts.pory"
	waitmoncry
# 23 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setwildbattle SPECIES_GREAT_TUSK, 90
# 24 "data/maps/AreaZero_Prehistoric/scripts.pory"
	dowildbattle
# 25 "data/maps/AreaZero_Prehistoric/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 26 "data/maps/AreaZero_Prehistoric/scripts.pory"
	release
	end


AreaZero_Prehistoric_EventScript_RoaringMoon::
# 31 "data/maps/AreaZero_Prehistoric/scripts.pory"
	lock
# 32 "data/maps/AreaZero_Prehistoric/scripts.pory"
	faceplayer
# 33 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 34 "data/maps/AreaZero_Prehistoric/scripts.pory"
	playmoncry SPECIES_ROARING_MOON, CRY_MODE_ENCOUNTER
# 35 "data/maps/AreaZero_Prehistoric/scripts.pory"
	waitmoncry
# 36 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setwildbattle SPECIES_ROARING_MOON, 90
# 37 "data/maps/AreaZero_Prehistoric/scripts.pory"
	dowildbattle
# 38 "data/maps/AreaZero_Prehistoric/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/AreaZero_Prehistoric/scripts.pory"
	release
	end


AreaZero_Prehistoric_EventScript_GougingFire::
# 44 "data/maps/AreaZero_Prehistoric/scripts.pory"
	lock
# 45 "data/maps/AreaZero_Prehistoric/scripts.pory"
	faceplayer
# 46 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/AreaZero_Prehistoric/scripts.pory"
	playmoncry SPECIES_GOUGING_FIRE, CRY_MODE_ENCOUNTER
# 48 "data/maps/AreaZero_Prehistoric/scripts.pory"
	waitmoncry
# 49 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setwildbattle SPECIES_GOUGING_FIRE, 90
# 50 "data/maps/AreaZero_Prehistoric/scripts.pory"
	dowildbattle
# 51 "data/maps/AreaZero_Prehistoric/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 52 "data/maps/AreaZero_Prehistoric/scripts.pory"
	release
	end


AreaZero_Prehistoric_EventScript_FlutterMane::
# 57 "data/maps/AreaZero_Prehistoric/scripts.pory"
	lock
# 58 "data/maps/AreaZero_Prehistoric/scripts.pory"
	faceplayer
# 59 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/AreaZero_Prehistoric/scripts.pory"
	playmoncry SPECIES_FLUTTER_MANE, CRY_MODE_ENCOUNTER
# 61 "data/maps/AreaZero_Prehistoric/scripts.pory"
	waitmoncry
# 62 "data/maps/AreaZero_Prehistoric/scripts.pory"
	setwildbattle SPECIES_FLUTTER_MANE, 90
# 63 "data/maps/AreaZero_Prehistoric/scripts.pory"
	dowildbattle
# 64 "data/maps/AreaZero_Prehistoric/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/AreaZero_Prehistoric/scripts.pory"
	release
	end

