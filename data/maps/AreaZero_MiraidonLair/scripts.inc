AreaZero_MiraidonLair_MapScripts::
# 2 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_MiraidonLair_RemoveMiraidon
	.byte 0


AreaZero_MiraidonLair_RemoveMiraidon::
# 6 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 7 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 8 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 9 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


AreaZero_MiraidonLair_EventScript_Miraidon::
# 15 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	lock
# 16 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	faceplayer
# 17 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	playmoncry SPECIES_MIRAIDON, CRY_MODE_ENCOUNTER
# 18 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	waitmoncry
# 19 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	setwildbattle SPECIES_MIRAIDON, 75
# 20 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 21 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	waitstate
# 22 "data/maps/AreaZero_MiraidonLair/scripts.pory"
	release
	end

