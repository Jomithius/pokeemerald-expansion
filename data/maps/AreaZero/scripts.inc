AreaZero_MapScripts::
# 4 "data/maps/AreaZero/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_TryRemoveLegendaries
	.byte 0


AreaZero_TryRemoveLegendaries::
# 8 "data/maps/AreaZero/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 9 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 11 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 12 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_LAST_TALKED, 1, Common_EventScript_NopReturn
# 13 "data/maps/AreaZero/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


Area_Zero_EventScript_ChienPao::
# 18 "data/maps/AreaZero/scripts.pory"
	lock
# 19 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 20 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHIEN_PAO, CRY_MODE_ENCOUNTER
# 21 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 22 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHIEN_PAO, 75
# 23 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 24 "data/maps/AreaZero/scripts.pory"
	waitstate
# 25 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_ChiYu::
# 30 "data/maps/AreaZero/scripts.pory"
	lock
# 31 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 32 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHI_YU, CRY_MODE_ENCOUNTER
# 33 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 34 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHI_YU, 75
# 35 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 36 "data/maps/AreaZero/scripts.pory"
	waitstate
# 37 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_WoChien::
# 42 "data/maps/AreaZero/scripts.pory"
	lock
# 43 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 44 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 45 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 46 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_WO_CHIEN, 75
# 47 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 48 "data/maps/AreaZero/scripts.pory"
	waitstate
# 49 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_TingLu::
# 54 "data/maps/AreaZero/scripts.pory"
	lock
# 55 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 56 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_TING_LU, CRY_MODE_ENCOUNTER
# 57 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 58 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_TING_LU, 75
# 59 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 60 "data/maps/AreaZero/scripts.pory"
	waitstate
# 61 "data/maps/AreaZero/scripts.pory"
	release
	end


AreaZero_EventScript_Cosmog::
# 66 "data/maps/AreaZero/scripts.pory"
	lock
# 67 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 68 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 69 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 70 "data/maps/AreaZero/scripts.pory"
	msgbox AreaZero_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 71 "data/maps/AreaZero/scripts.pory"
	waitmessage
# 72 "data/maps/AreaZero/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AreaZero_EventScript_Cosmog_2
# 79 "data/maps/AreaZero/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
AreaZero_EventScript_Cosmog_1:
# 81 "data/maps/AreaZero/scripts.pory"
	release
	end

AreaZero_EventScript_Cosmog_2:
# 73 "data/maps/AreaZero/scripts.pory"
	closemessage
# 74 "data/maps/AreaZero/scripts.pory"
	call Area_Zero_Shake
# 75 "data/maps/AreaZero/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 76 "data/maps/AreaZero/scripts.pory"
	waitstate
	goto AreaZero_EventScript_Cosmog_1


Area_Zero_Shake::
# 90 "data/maps/AreaZero/scripts.pory"
	delay 30
# 91 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8004, 2
# 92 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8005, 6
# 93 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8006, 8
# 94 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8007, 4
# 95 "data/maps/AreaZero/scripts.pory"
	special ShakeCamera
# 96 "data/maps/AreaZero/scripts.pory"
	waitstate
# 97 "data/maps/AreaZero/scripts.pory"
	delay 60
# 98 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 99 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 100 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 101 "data/maps/AreaZero/scripts.pory"
	delay 20
# 102 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 103 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 104 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 105 "data/maps/AreaZero/scripts.pory"
	delay 10
# 106 "data/maps/AreaZero/scripts.pory"
	waitse
# 107 "data/maps/AreaZero/scripts.pory"
	playse SE_INTRO_BLAST
# 108 "data/maps/AreaZero/scripts.pory"
	delay 20
	return


AreaZero_Text_WouldYouLikeToReturn::
# 85 "data/maps/AreaZero/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"
