AreaZero_MapScripts::
# 4 "data/maps/AreaZero/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AreaZero_OnTransition
# 5 "data/maps/AreaZero/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_TryRemoveLegendaries
	.byte 0


AreaZero_OnTransition::
# 9 "data/maps/AreaZero/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 10 "data/maps/AreaZero/scripts.pory"
	call_if_eq VAR_ULTRA_SPACE_STATE, 5, AreaZero_FirstVisit
# 11 "data/maps/AreaZero/scripts.pory"
	setrespawn HEAL_LOCATION_AREA_ZERO
	end


AreaZero_FirstVisit::
# 16 "data/maps/AreaZero/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 6
	return


AreaZero_TryRemoveLegendaries::
# 21 "data/maps/AreaZero/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AreaZero_TryRemoveLegendaries_2
AreaZero_TryRemoveLegendaries_1:
	end

AreaZero_TryRemoveLegendaries_2:
# 22 "data/maps/AreaZero/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 23 "data/maps/AreaZero/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 24 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 25 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 26 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 27 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_LAST_TALKED, 1, Common_EventScript_NopReturn
# 28 "data/maps/AreaZero/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto AreaZero_TryRemoveLegendaries_1


Area_Zero_EventScript_ChienPao::
# 34 "data/maps/AreaZero/scripts.pory"
	lock
# 35 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 36 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 37 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHIEN_PAO, CRY_MODE_ENCOUNTER
# 38 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 39 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHIEN_PAO, 90
# 40 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 41 "data/maps/AreaZero/scripts.pory"
	waitstate
# 42 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_ChiYu::
# 47 "data/maps/AreaZero/scripts.pory"
	lock
# 48 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 49 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 50 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHI_YU, CRY_MODE_ENCOUNTER
# 51 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 52 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHI_YU, 90
# 53 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 54 "data/maps/AreaZero/scripts.pory"
	waitstate
# 55 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_WoChien::
# 60 "data/maps/AreaZero/scripts.pory"
	lock
# 61 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 62 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 64 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 65 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_WO_CHIEN, 90
# 66 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 67 "data/maps/AreaZero/scripts.pory"
	waitstate
# 68 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_TingLu::
# 73 "data/maps/AreaZero/scripts.pory"
	lock
# 74 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 75 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 76 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_TING_LU, CRY_MODE_ENCOUNTER
# 77 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 78 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_TING_LU, 90
# 79 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 80 "data/maps/AreaZero/scripts.pory"
	waitstate
# 81 "data/maps/AreaZero/scripts.pory"
	release
	end


AreaZero_EventScript_Cosmog::
# 86 "data/maps/AreaZero/scripts.pory"
	lock
# 87 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 88 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 89 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 90 "data/maps/AreaZero/scripts.pory"
	msgbox AreaZero_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 91 "data/maps/AreaZero/scripts.pory"
	waitmessage
# 92 "data/maps/AreaZero/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AreaZero_EventScript_Cosmog_2
# 99 "data/maps/AreaZero/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
AreaZero_EventScript_Cosmog_1:
# 101 "data/maps/AreaZero/scripts.pory"
	release
	end

AreaZero_EventScript_Cosmog_2:
# 93 "data/maps/AreaZero/scripts.pory"
	closemessage
# 94 "data/maps/AreaZero/scripts.pory"
	call Area_Zero_Shake
# 95 "data/maps/AreaZero/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 96 "data/maps/AreaZero/scripts.pory"
	waitstate
	goto AreaZero_EventScript_Cosmog_1


Area_Zero_Shake::
# 110 "data/maps/AreaZero/scripts.pory"
	delay 30
# 111 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8004, 2
# 112 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8005, 6
# 113 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8006, 8
# 114 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8007, 4
# 115 "data/maps/AreaZero/scripts.pory"
	special ShakeCamera
# 116 "data/maps/AreaZero/scripts.pory"
	waitstate
# 117 "data/maps/AreaZero/scripts.pory"
	delay 60
# 118 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 119 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 120 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 121 "data/maps/AreaZero/scripts.pory"
	delay 20
# 122 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 123 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 124 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 125 "data/maps/AreaZero/scripts.pory"
	delay 10
# 126 "data/maps/AreaZero/scripts.pory"
	waitse
# 127 "data/maps/AreaZero/scripts.pory"
	playse SE_INTRO_BLAST
# 128 "data/maps/AreaZero/scripts.pory"
	delay 20
	return


AreaZero_Text_WouldYouLikeToReturn::
# 105 "data/maps/AreaZero/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"
