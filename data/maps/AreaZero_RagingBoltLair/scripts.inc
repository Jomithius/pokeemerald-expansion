AreaZero_RagingBoltLair_MapScripts::
# 2 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_RagingBoltLair_RemoveRagingBolt
	.byte 0


AreaZero_RagingBoltLair_RemoveRagingBolt::
# 6 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 7 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 8 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 9 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


AreaZero_RagingBoltLair_EventScript_RagingBolt::
# 15 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	lock
# 16 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	faceplayer
# 17 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	playmoncry SPECIES_RAGING_BOLT, CRY_MODE_ENCOUNTER
# 18 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	waitmoncry
# 19 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	setwildbattle SPECIES_RAGING_BOLT, 75
# 20 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	dowildbattle
# 21 "data/maps/AreaZero_RagingBoltLair/scripts.pory"
	release
	end

