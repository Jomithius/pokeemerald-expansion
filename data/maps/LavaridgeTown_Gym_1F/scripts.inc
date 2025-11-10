# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_COLE, 2
# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_GERALD, 3
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_AXLE, 4
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_DANIELLE, 5
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LavaridgeTown_Gym_1F_OnResume
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LavaridgeTown_Gym_1F_OnLoad
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_set FLAG_HIDE_GYM_LEADERS, LavaridgeTown_Gym_1F_EventScript_RemoveGymLeaderPkmn
# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnResume:
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_defeated TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_EventScript_RemoveGymLeaderPkmn
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnLoad:
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_set FLAG_SYS_FINAL_REMATCH, LavaridgeTown_Gym_1F_UpdateMetatiles
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RemoveGymLeaderPkmn::
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	removeobject 7
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_TEMP_7
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal2
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	@ specialvar VAR_RESULT, ShouldTryRematchBattle
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	@ goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	@ goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	@ closemessage
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    call LavaridgeTown_Gym_1F_EventScript_GiveMysticalFire
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    closemessage
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    delay 30
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_COLE, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_AXLE, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_KEEGAN, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_DANIELLE, TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_GERALD, TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JACE, TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JEFF, TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ELI, TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE's GYM LEADER KAI\n"
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses FIRE-type POKéMON.\p"
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Her passion for POKéMON burns stronger\n"
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "than the heat in a kitchen.\l"
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, go for it!\p"
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap is 34.$"
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was a scorching-hot battle!$"
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Owowowowow!\n"
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yikes, it's hot!$"
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm blinded by sweat in my eyes…$"
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Being buried in hot sand promotes\n"
# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "circulation.\p"
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's effective for healing pain in\n"
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your joints.$"
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't come along and stress me out!$"
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hope KAI flames you good!$"
# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you spend too much time buried in\n"
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot sand, it tuckers you out…$"
# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You must be getting tired by now.\n"
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You'd like to rest in the hot sand,\l"
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "wouldn't you?\p"
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But you should know that maintaining\n"
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your willpower is an important ability\l"
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "for all TRAINERS.$"
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But our LEADER KAI is strong.\p"
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you don't watch yourself, you'll be\n"
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "burned seriously.$"
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your POKéMON withstand\n"
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392-degree heat?$"
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392 degrees.\p"
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your POKéMON beat me, so they should\n"
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "easily survive in magma.$"
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, I'll battle with you.$"
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "TRAINER just like KAI.$"
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "clutched by ice…$"
# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our LEADER.$"
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "They flare in anticipation of my win!$"
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I can walk on hot coals barefoot!\p"
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "…Don't even think about trying it!$"
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I especially love volcanoes.$"
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of KAI's cooking.\p"
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hi!\p"
# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm KAI, LAVARIDGE TOWN's\n"
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "GYM LEADER!\p"
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Are you ready to battle?\n"
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'll roast you like a SLOWPOKE TAIL!$"
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh…\n"
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Looks like I'm cooked…\p"
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, you roasted me.\n"
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "For that, you deserve this.$"
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the HEAT BADGE\n"
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "from KAI.$"
# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you have a HEAT BADGE, all POKéMON\n"
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "up to Level 50, even those you get in\l"
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "trades from other people, will obey\l"
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "you completely.\p"
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And, it lets POKéMON use the HM move\n"
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "STRENGTH outside of battle.\p"
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "This is a token of my appreciation.\n"
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't be shy about taking it!$"
# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM50 contains OVERHEAT.\p"
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That move inflicts serious damage on\n"
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the opponent.\p"
# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But it also sharply cuts the SP. ATK\n"
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of the POKéMON using it. Be careful\l"
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "so you don't overcook your meal.\p"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    .string "You can have this too.\n"
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    .string "Compliments of the chef!$"
# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER KAI\n"
# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "All of this battling made me hungry…\n"
# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    .string "It's time for me to go make something.\l"
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Maybe I'll think up a new recipe too.$"
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM$"
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\p"
# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "KAIRYN'S CERTIFIED TRAINERS:\n"
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    .string "JAMES\p"
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "KAI: Losing a battle isn't going\n"
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love cooking.\n"
# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "KAI: I lost the match,\n"
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "KAI: Losing a battle isn't going\n"
# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one POKéMON\n"
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two POKéMON.$"

LavaridgeTown_Gym_1F_EventScript_GiveMysticalFire::
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_MYSTICAL_FIRE
# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 7
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_FALLARBOR
# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_JOEY_LAVARIDGE_TOWN
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainMysticalFire, MSGBOX_DEFAULT
	return


LavaridgeTown_Gym_1F_EventScript_Ninetales::
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmoncry
# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
	end


LavaridgeTown_Gym_1F_TryUpdateRatCaveState::
# 445 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_FALLARBOR
# 446 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 7
	return


LavaridgeTown_Gym_1F_UpdateMetatiles::
# 451 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setmetatile 13, 13, METATILE_LavaridgeGym_FloorTile, FALSE
	return


LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle::
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle_Text_0, LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle_Text_1, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal
	end


LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal::
# 461 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal_Text_0, MSGBOX_NPC
# 465 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal2::
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal_Text_0, MSGBOX_NPC
	end


LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle_Text_0:
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}!\nGet ready!\pI cooked up some new strategies!$"

LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle_Text_1:
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Looks like I'm cooked!$"

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal_Text_0:
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You cooked me again, {PLAYER}.\p Next time I'll come up with a\n winning recipe!$"

LavaridgeTown_Gym_1F_Text_ExplainMysticalFire::
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM61 contains MYSTICAL FIRE.\n Not only does it do damage, it also\l lowers the foes SP. ATK.\p It's great for cooking your opponents\n in a magical way!\p … … … … … …$"
