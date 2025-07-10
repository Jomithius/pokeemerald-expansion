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
	compare VAR_LAST_TALKED, 1
	goto_if_eq AreaZero_TryRemoveLegendaries_2
# 16 "data/maps/AreaZero/scripts.pory"
	removeobject VAR_LAST_TALKED
AreaZero_TryRemoveLegendaries_1:
	end

AreaZero_TryRemoveLegendaries_2:
# 13 "data/maps/AreaZero/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AreaZero_TryRemoveLegendaries_1


Area_Zero_EventScript_ChienPao::
# 22 "data/maps/AreaZero/scripts.pory"
	lock
# 23 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 24 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHIEN_PAO, CRY_MODE_ENCOUNTER
# 25 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 26 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHIEN_PAO, 75
# 27 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 28 "data/maps/AreaZero/scripts.pory"
	waitstate
# 29 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_ChiYu::
# 34 "data/maps/AreaZero/scripts.pory"
	lock
# 35 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 36 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_CHI_YU, CRY_MODE_ENCOUNTER
# 37 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 38 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_CHI_YU, 75
# 39 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 40 "data/maps/AreaZero/scripts.pory"
	waitstate
# 41 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_WoChien::
# 46 "data/maps/AreaZero/scripts.pory"
	lock
# 47 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 48 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 49 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 50 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_WO_CHIEN, 75
# 51 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 52 "data/maps/AreaZero/scripts.pory"
	waitstate
# 53 "data/maps/AreaZero/scripts.pory"
	release
	end


Area_Zero_EventScript_TingLu::
# 58 "data/maps/AreaZero/scripts.pory"
	lock
# 59 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 60 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_TING_LU, CRY_MODE_ENCOUNTER
# 61 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 62 "data/maps/AreaZero/scripts.pory"
	setwildbattle SPECIES_TING_LU, 75
# 63 "data/maps/AreaZero/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 64 "data/maps/AreaZero/scripts.pory"
	waitstate
# 65 "data/maps/AreaZero/scripts.pory"
	release
	end


AreaZero_EventScript_Cosmog::
# 70 "data/maps/AreaZero/scripts.pory"
	lock
# 71 "data/maps/AreaZero/scripts.pory"
	faceplayer
# 72 "data/maps/AreaZero/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 73 "data/maps/AreaZero/scripts.pory"
	waitmoncry
# 74 "data/maps/AreaZero/scripts.pory"
	msgbox AreaZero_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 75 "data/maps/AreaZero/scripts.pory"
	waitmessage
# 76 "data/maps/AreaZero/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AreaZero_EventScript_Cosmog_2
# 83 "data/maps/AreaZero/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
AreaZero_EventScript_Cosmog_1:
# 85 "data/maps/AreaZero/scripts.pory"
	release
	end

AreaZero_EventScript_Cosmog_2:
# 77 "data/maps/AreaZero/scripts.pory"
	closemessage
# 78 "data/maps/AreaZero/scripts.pory"
	call Area_Zero_Shake
# 79 "data/maps/AreaZero/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 80 "data/maps/AreaZero/scripts.pory"
	waitstate
	goto AreaZero_EventScript_Cosmog_1


Area_Zero_Shake::
# 94 "data/maps/AreaZero/scripts.pory"
	delay 30
# 95 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8004, 2
# 96 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8005, 6
# 97 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8006, 8
# 98 "data/maps/AreaZero/scripts.pory"
	setvar VAR_0x8007, 4
# 99 "data/maps/AreaZero/scripts.pory"
	special ShakeCamera
# 100 "data/maps/AreaZero/scripts.pory"
	waitstate
# 101 "data/maps/AreaZero/scripts.pory"
	delay 60
# 102 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 103 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 104 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 105 "data/maps/AreaZero/scripts.pory"
	delay 20
# 106 "data/maps/AreaZero/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 107 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_TO_WHITE
# 108 "data/maps/AreaZero/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 109 "data/maps/AreaZero/scripts.pory"
	delay 10
# 110 "data/maps/AreaZero/scripts.pory"
	waitse
# 111 "data/maps/AreaZero/scripts.pory"
	playse SE_INTRO_BLAST
# 112 "data/maps/AreaZero/scripts.pory"
	delay 20
	return


AreaZero_Text_WouldYouLikeToReturn::
# 89 "data/maps/AreaZero/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"
