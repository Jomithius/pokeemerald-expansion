AreaZero_MapScripts::
# 4 "data/maps/AreaZero/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AreaZero_OnTransition
# 5 "data/maps/AreaZero/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_OnResume
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


AreaZero_OnResume::
# 21 "data/maps/AreaZero/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AreaZero_TryRemoveLegendaries
	end


AreaZero_TryRemoveLegendaries::
# 26 "data/maps/AreaZero/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 27 "data/maps/AreaZero/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 29 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 30 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 31 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_LAST_TALKED, 1, Common_EventScript_NopReturn
# 32 "data/maps/AreaZero/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


Area_Zero_EventScript_ChienPao::
# 37 "data/maps/AreaZero/scripts.pory"
	lock
# 38 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 39 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHIEN_PAO, CRY_MODE_ENCOUNTER
# 41 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 42 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHIEN_PAO, 90
# 43 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 44 "data/maps/AreaZero/scripts.pory"
	waitstate
# 45 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_ChiYu::
# 50 "data/maps/AreaZero/scripts.pory"
	lock
# 51 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 52 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 53 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHI_YU, CRY_MODE_ENCOUNTER
# 54 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 55 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHI_YU, 90
# 56 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 57 "data/maps/AreaZero/scripts.pory"
	waitstate
# 58 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_WoChien::
# 63 "data/maps/AreaZero/scripts.pory"
	lock
# 64 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 65 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 66 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 67 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 68 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_WO_CHIEN, 90
# 69 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 70 "data/maps/AreaZero/scripts.pory"
	waitstate
# 71 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_TingLu::
# 76 "data/maps/AreaZero/scripts.pory"
	lock
# 77 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 78 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 79 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_TING_LU, CRY_MODE_ENCOUNTER
# 80 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 81 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_TING_LU, 90
# 82 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 83 "data/maps/AreaZero/scripts.pory"
	waitstate
# 84 "data/maps/AreaZero/scripts.pory"
	release
	end


AreaZero_EventScript_Cosmog::
# 89 "data/maps/AreaZero/scripts.pory"
	lock
# 90 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 91 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 92 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 93 "data/maps/AreaZero/scripts.pory"
	msgbox AreaZero_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 94 "data/maps/AreaZero/scripts.pory"
	waitmessage
# 95 "data/maps/AreaZero/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AreaZero_EventScript_Cosmog_2
# 102 "data/maps/AreaZero/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
AreaZero_EventScript_Cosmog_1:
# 104 "data/maps/AreaZero/scripts.pory"
	release
	end

AreaZero_EventScript_Cosmog_2:
# 96 "data/maps/AreaZero/scripts.pory"
	closemessage
# 97 "data/maps/AreaZero/scripts.pory"
	call Area_Zero_Shake
# 98 "data/maps/AreaZero/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 99 "data/maps/AreaZero/scripts.pory"
	waitstate
	goto AreaZero_EventScript_Cosmog_1


Area_Zero_Shake::
# 113 "data/maps/AreaZero/scripts.pory"
	delay 30
# 114 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8004, 2
# 115 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8005, 6
# 116 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8006, 8
# 117 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8007, 4
# 118 "data/maps/AreaZero/scripts.pory"
	special ShakeCamera
# 119 "data/maps/AreaZero/scripts.pory"
	waitstate
# 120 "data/maps/AreaZero/scripts.pory"
	delay 60
# 121 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 122 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 123 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 124 "data/maps/AreaZero/scripts.pory"
	delay 20
# 125 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 126 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 127 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 128 "data/maps/AreaZero/scripts.pory"
	delay 10
# 129 "data/maps/AreaZero/scripts.pory"
	waitse
# 130 "data/maps/AreaZero/scripts.pory"
	playse SE_INTRO_BLAST
# 131 "data/maps/AreaZero/scripts.pory"
	delay 20
	return


AreaZero_Text_WouldYouLikeToReturn::
# 108 "data/maps/AreaZero/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"
