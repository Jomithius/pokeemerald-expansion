BeachsideCave_InteriorRoom_MapScripts::
	.byte 0


BeachsideCave_InteriorRoom_EventScript_TapuFini::
# 4 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	lock
# 5 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	faceplayer
# 6 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	playmoncry SPECIES_TAPU_FINI, CRY_MODE_ENCOUNTER
# 7 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	delay 40
# 8 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	waitmoncry
# 9 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	setwildbattle SPECIES_TAPU_FINI, 75
# 10 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 11 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	waitstate
# 12 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BeachsideCave_InteriorRoom_EventScript_TapuFini_2
# 13 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BeachsideCave_InteriorRoom_EventScript_TapuFini_2
# 18 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BeachsideCave_InteriorRoom_EventScript_TapuFini_3
# 18 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BeachsideCave_InteriorRoom_EventScript_TapuFini_3
BeachsideCave_InteriorRoom_EventScript_TapuFini_1:
# 21 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	release
	end

BeachsideCave_InteriorRoom_EventScript_TapuFini_2:
# 14 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto BeachsideCave_InteriorRoom_EventScript_TapuFini_1

BeachsideCave_InteriorRoom_EventScript_TapuFini_3:
# 19 "data/maps/BeachsideCave_InteriorRoom/scripts.pory"
	goto Common_EventScript_NopReturn
	goto BeachsideCave_InteriorRoom_EventScript_TapuFini_1

