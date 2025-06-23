AreaZero_MapScripts::
# 2 "data/maps/AreaZero/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AreaZero_TryRemoveLegendaries
	.byte 0


AreaZero_TryRemoveLegendaries::
# 6 "data/maps/AreaZero/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 7 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 8 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 9 "data/maps/AreaZero/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 10 "data/maps/AreaZero/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


Area_Zero_EventScript_ChienPao::
# 15 "data/maps/AreaZero/scripts.pory"
	lock
# 16 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 17 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHIEN_PAO, CRY_MODE_ENCOUNTER
# 18 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 19 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHIEN_PAO, 75
# 20 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 21 "data/maps/AreaZero/scripts.pory"
	waitstate
# 22 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_ChiYu::
# 27 "data/maps/AreaZero/scripts.pory"
	lock
# 28 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 29 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHI_YU, CRY_MODE_ENCOUNTER
# 30 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 31 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHI_YU, 75
# 32 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 33 "data/maps/AreaZero/scripts.pory"
	waitstate
# 34 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_WoChien::
# 39 "data/maps/AreaZero/scripts.pory"
	lock
# 40 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 41 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 42 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 43 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_WO_CHIEN, 75
# 44 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 45 "data/maps/AreaZero/scripts.pory"
	waitstate
# 46 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_TingLu::
# 51 "data/maps/AreaZero/scripts.pory"
	lock
# 52 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 53 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_TING_LU, CRY_MODE_ENCOUNTER
# 54 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 55 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_TING_LU, 75
# 56 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 57 "data/maps/AreaZero/scripts.pory"
	waitstate
# 58 "data/maps/AreaZero/scripts.pory"
	release
	end


AreaZero_EventScript_Cosmog::
# 63 "data/maps/AreaZero/scripts.pory"
	lock
# 64 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 65 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 66 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 67 "data/maps/AreaZero/scripts.pory"
	msgbox AreaZero_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 68 "data/maps/AreaZero/scripts.pory"
	waitmessage
# 69 "data/maps/AreaZero/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AreaZero_EventScript_Cosmog_2
# 75 "data/maps/AreaZero/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
AreaZero_EventScript_Cosmog_1:
# 77 "data/maps/AreaZero/scripts.pory"
	release
	end

AreaZero_EventScript_Cosmog_2:
# 70 "data/maps/AreaZero/scripts.pory"
	call Area_Zero_Shake
# 71 "data/maps/AreaZero/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 72 "data/maps/AreaZero/scripts.pory"
	waitstate
	goto AreaZero_EventScript_Cosmog_1


Area_Zero_Shake::
# 86 "data/maps/AreaZero/scripts.pory"
	delay 30
# 87 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8004, 2
# 88 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8005, 6
# 89 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8006, 8
# 90 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8007, 4
# 91 "data/maps/AreaZero/scripts.pory"
	special ShakeCamera
# 92 "data/maps/AreaZero/scripts.pory"
	waitstate
# 93 "data/maps/AreaZero/scripts.pory"
	delay 60
# 94 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 95 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 96 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 97 "data/maps/AreaZero/scripts.pory"
	delay 20
# 98 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 99 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 100 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 101 "data/maps/AreaZero/scripts.pory"
	delay 10
# 102 "data/maps/AreaZero/scripts.pory"
	waitse
# 103 "data/maps/AreaZero/scripts.pory"
	playse SE_INTRO_BLAST
# 104 "data/maps/AreaZero/scripts.pory"
	delay 20
	return


AreaZero_Text_WouldYouLikeToReturn::
# 81 "data/maps/AreaZero/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"
