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
	return
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal2
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    call LavaridgeTown_Gym_1F_EventScript_GiveMysticalFire
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    closemessage
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    delay 30
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
    clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_COLE, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_AXLE, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_KEEGAN, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_DANIELLE, TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_GERALD, TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JACE, TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JEFF, TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ELI, TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE's GYM LEADER KAI\n"
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses FIRE-type POKéMON.\p"
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Her passion for POKéMON burns stronger\n"
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "than the heat in a kitchen.\p"
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't get too close to her--you'll burn!\n"
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hose her down with water and then\l"
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "go for it!$"
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
	call_if_unset FLAG_RATDUARDO_RAT_CAVE_FALLARBOR, LavaridgeTown_Gym_1F_TryUpdateRatCaveState
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainMysticalFire, MSGBOX_DEFAULT
	return


LavaridgeTown_Gym_1F_EventScript_Ninetales::
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 24
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
	end


LavaridgeTown_Gym_1F_TryUpdateRatCaveState::
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_FALLARBOR
# 444 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 7
	return


LavaridgeTown_Gym_1F_UpdateMetatiles::
# 449 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setmetatile 13, 13, METATILE_LavaridgeGym_FloorTile, FALSE
	return


LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle::
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle_Text_0, LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle_Text_1, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal
	end


LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal::
# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal_Text_0, MSGBOX_NPC
# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal2::
# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal_Text_0, MSGBOX_NPC
	end


LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle_Text_0:
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}!\nGet ready!\pI cooked up some new strategies!$"

LavaridgeTown_Gym_1F_EventScript_Flannery_FinalBattle_Text_1:
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Looks like I'm cooked!$"

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeatedFinal_Text_0:
# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You cooked me again, {PLAYER}.\p Next time I'll come up with a\n winning recipe!$"

LavaridgeTown_Gym_1F_Text_ExplainMysticalFire::
# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM61 contains MYSTICAL FIRE.\n Not only does it do damage, it also\l lowers the foes Sp. Atk.\p It's great for cooking your opponents\n in a magical way!\p … … … … … …$"
