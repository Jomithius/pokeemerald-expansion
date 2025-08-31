AreaZero_MapScripts::
# 4 "data/maps/AreaZero/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AreaZero_OnTransition
# 5 "data/maps/AreaZero/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_TryRemoveLegendaries
	.byte 0


AreaZero_OnTransition::
# 9 "data/maps/AreaZero/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	end


AreaZero_TryRemoveLegendaries::
# 14 "data/maps/AreaZero/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AreaZero_TryRemoveLegendaries_2
AreaZero_TryRemoveLegendaries_1:
	end

AreaZero_TryRemoveLegendaries_2:
# 15 "data/maps/AreaZero/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 16 "data/maps/AreaZero/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 18 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 19 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 20 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_LAST_TALKED, 1, Common_EventScript_NopReturn
# 21 "data/maps/AreaZero/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto AreaZero_TryRemoveLegendaries_1


Area_Zero_EventScript_ChienPao::
# 27 "data/maps/AreaZero/scripts.pory"
	lock
# 28 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 29 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHIEN_PAO, CRY_MODE_ENCOUNTER
# 31 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 32 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHIEN_PAO, 75
# 33 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 34 "data/maps/AreaZero/scripts.pory"
	waitstate
# 35 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_ChiYu::
# 40 "data/maps/AreaZero/scripts.pory"
	lock
# 41 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 42 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHI_YU, CRY_MODE_ENCOUNTER
# 44 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 45 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHI_YU, 75
# 46 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 47 "data/maps/AreaZero/scripts.pory"
	waitstate
# 48 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_WoChien::
# 53 "data/maps/AreaZero/scripts.pory"
	lock
# 54 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 55 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 56 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 57 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 58 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_WO_CHIEN, 75
# 59 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 60 "data/maps/AreaZero/scripts.pory"
	waitstate
# 61 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_TingLu::
# 66 "data/maps/AreaZero/scripts.pory"
	lock
# 67 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 68 "data/maps/AreaZero/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_TING_LU, CRY_MODE_ENCOUNTER
# 70 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 71 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_TING_LU, 75
# 72 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 73 "data/maps/AreaZero/scripts.pory"
	waitstate
# 74 "data/maps/AreaZero/scripts.pory"
	release
	end


AreaZero_EventScript_Cosmog::
# 79 "data/maps/AreaZero/scripts.pory"
	lock
# 80 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 81 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 82 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 83 "data/maps/AreaZero/scripts.pory"
	msgbox AreaZero_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 84 "data/maps/AreaZero/scripts.pory"
	waitmessage
# 85 "data/maps/AreaZero/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AreaZero_EventScript_Cosmog_2
# 92 "data/maps/AreaZero/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
AreaZero_EventScript_Cosmog_1:
# 94 "data/maps/AreaZero/scripts.pory"
	release
	end

AreaZero_EventScript_Cosmog_2:
# 86 "data/maps/AreaZero/scripts.pory"
	closemessage
# 87 "data/maps/AreaZero/scripts.pory"
	call Area_Zero_Shake
# 88 "data/maps/AreaZero/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 89 "data/maps/AreaZero/scripts.pory"
	waitstate
	goto AreaZero_EventScript_Cosmog_1


Area_Zero_Shake::
# 103 "data/maps/AreaZero/scripts.pory"
	delay 30
# 104 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8004, 2
# 105 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8005, 6
# 106 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8006, 8
# 107 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8007, 4
# 108 "data/maps/AreaZero/scripts.pory"
	special ShakeCamera
# 109 "data/maps/AreaZero/scripts.pory"
	waitstate
# 110 "data/maps/AreaZero/scripts.pory"
	delay 60
# 111 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 112 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 113 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 114 "data/maps/AreaZero/scripts.pory"
	delay 20
# 115 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 116 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 117 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 118 "data/maps/AreaZero/scripts.pory"
	delay 10
# 119 "data/maps/AreaZero/scripts.pory"
	waitse
# 120 "data/maps/AreaZero/scripts.pory"
	playse SE_INTRO_BLAST
# 121 "data/maps/AreaZero/scripts.pory"
	delay 20
	return


AreaZero_Text_WouldYouLikeToReturn::
# 98 "data/maps/AreaZero/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"
