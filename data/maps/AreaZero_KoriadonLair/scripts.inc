AreaZero_KoriadonLair_MapScripts::
# 2 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_KoriadonLair_RemoveKoraidon
	.byte 0


AreaZero_KoriadonLair_RemoveKoraidon::
# 6 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 7 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 8 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 9 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


AreaZero_KoriadonLair_EventScript_Koraidon::
# 15 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	lock
# 16 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	faceplayer
# 17 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_ENCOUNTER
# 18 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	waitmoncry
# 19 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	setwildbattle SPECIES_KORAIDON, 75
# 20 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 21 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	waitstate
# 22 "data/maps/AreaZero_KoriadonLair/scripts.pory"
	release
	end

