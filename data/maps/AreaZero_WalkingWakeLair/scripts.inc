AreaZero_WalkingWakeLair_MapScripts::
# 2 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_WalkingWakeLair_RemoveWalkingWake
	.byte 0


AreaZero_WalkingWakeLair_RemoveWalkingWake::
# 6 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 7 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 8 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 9 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


AreaZero_WalkingWakeLair_EventScript_WalkingWake::
# 15 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	lock
# 16 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	faceplayer
# 17 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_ENCOUNTER
# 18 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	waitmoncry
# 19 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	setwildbattle SPECIES_WALKING_WAKE, 75
# 20 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	dowildbattle
# 21 "data/maps/AreaZero_WalkingWakeLair/scripts.pory"
	release
	end

