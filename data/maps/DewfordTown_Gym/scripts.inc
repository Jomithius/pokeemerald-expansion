# 1 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 2 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DewfordTown_Gym_OnResume
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_Gym/scripts.pory"

# 6 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnResume:
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_defeated TRAINER_BRAWLY_2, DewfordTown_Gym_EventScript_RemoveGymLeaderPkmn
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_set FLAG_HIDE_GYM_LEADERS, DewfordTown_Gym_EventScript_RemoveGymLeaderPkmn
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetPooblesGfx
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 15 "data/maps/DewfordTown_Gym/scripts.pory"

# 16 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RemoveGymLeaderPkmn:
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	removeobject 7
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_TEMP_7
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 20 "data/maps/DewfordTown_Gym/scripts.pory"

# 21 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel5
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel4
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel3
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel2
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 32 "data/maps/DewfordTown_Gym/scripts.pory"

# 33 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 34 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 36 "data/maps/DewfordTown_Gym/scripts.pory"

# 37 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 41 "data/maps/DewfordTown_Gym/scripts.pory"

# 42 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 45 "data/maps/DewfordTown_Gym/scripts.pory"

# 46 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 49 "data/maps/DewfordTown_Gym/scripts.pory"

# 50 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 53 "data/maps/DewfordTown_Gym/scripts.pory"

# 54 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 57 "data/maps/DewfordTown_Gym/scripts.pory"

# 58 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 61 "data/maps/DewfordTown_Gym/scripts.pory"

# 62 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 66 "data/maps/DewfordTown_Gym/scripts.pory"

# 67 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 78 "data/maps/DewfordTown_Gym/scripts.pory"

# 79 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 81 "data/maps/DewfordTown_Gym/scripts.pory"

# 82 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 88 "data/maps/DewfordTown_Gym/scripts.pory"

# 89 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 94 "data/maps/DewfordTown_Gym/scripts.pory"

# 95 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 100 "data/maps/DewfordTown_Gym/scripts.pory"

# 101 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 106 "data/maps/DewfordTown_Gym/scripts.pory"

# 107 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 112 "data/maps/DewfordTown_Gym/scripts.pory"

# 113 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 118 "data/maps/DewfordTown_Gym/scripts.pory"

# 119 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 124 "data/maps/DewfordTown_Gym/scripts.pory"

# 125 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckCristian
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_StopCountingTrainers
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 140 "data/maps/DewfordTown_Gym/scripts.pory"

# 141 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_2, DewfordTown_Gym_EventScript_BrawlyDefeatedFinal2
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, DewfordTown_Gym_EventScript_Brawly_FinalBattle
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 151 "data/maps/DewfordTown_Gym/scripts.pory"

# 152 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
    call DewfordTown_Gym_EventScript_GiveDazzlingGleam
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 178 "data/maps/DewfordTown_Gym/scripts.pory"

# 179 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 185 "data/maps/DewfordTown_Gym/scripts.pory"

# 186 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 193 "data/maps/DewfordTown_Gym/scripts.pory"

# 194 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 198 "data/maps/DewfordTown_Gym/scripts.pory"

# 199 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 203 "data/maps/DewfordTown_Gym/scripts.pory"

# 204 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 208 "data/maps/DewfordTown_Gym/scripts.pory"

# 209 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 213 "data/maps/DewfordTown_Gym/scripts.pory"

# 214 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 218 "data/maps/DewfordTown_Gym/scripts.pory"

# 219 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 223 "data/maps/DewfordTown_Gym/scripts.pory"

# 224 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 228 "data/maps/DewfordTown_Gym/scripts.pory"

# 229 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 233 "data/maps/DewfordTown_Gym/scripts.pory"

# 234 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 238 "data/maps/DewfordTown_Gym/scripts.pory"

# 239 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 246 "data/maps/DewfordTown_Gym/scripts.pory"

# 247 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 251 "data/maps/DewfordTown_Gym/scripts.pory"

# 252 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 257 "data/maps/DewfordTown_Gym/scripts.pory"

# 258 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 263 "data/maps/DewfordTown_Gym/scripts.pory"

# 264 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 268 "data/maps/DewfordTown_Gym/scripts.pory"

# 269 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 273 "data/maps/DewfordTown_Gym/scripts.pory"

# 274 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT's GYM LEADER LIAM loves\n"
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GRASS and GHOST-type POKéMON.\p"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with WATER-type\n"
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "His POKéMON will lay a serious\n"
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on those POKéMON,\l"
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is so dark\n"
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you can barely see.\p"
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 289 "data/maps/DewfordTown_Gym/scripts.pory"

# 290 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 293 "data/maps/DewfordTown_Gym/scripts.pory"

# 294 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 297 "data/maps/DewfordTown_Gym/scripts.pory"

# 298 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 300 "data/maps/DewfordTown_Gym/scripts.pory"

# 301 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES is my inspiration!$"
# 303 "data/maps/DewfordTown_Gym/scripts.pory"

# 304 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for LIAM to be\n"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 308 "data/maps/DewfordTown_Gym/scripts.pory"

# 309 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 312 "data/maps/DewfordTown_Gym/scripts.pory"

# 313 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"

# 320 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 323 "data/maps/DewfordTown_Gym/scripts.pory"

# 324 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 327 "data/maps/DewfordTown_Gym/scripts.pory"

# 328 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see POOBLES…$"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"

# 334 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"

# 338 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"

# 342 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"

# 346 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hello, I'm LIAM.\n"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT's GYM LEADER.\p"
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I might be small, but don't\n"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "underestimate me!\p"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Me and POOBLES are a lot\n"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger than you think!$"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"

# 354 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Aw, man.\n"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "My poor POOBLES…\p"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE.$"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"

# 360 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from LIAM.$"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"

# 364 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"

# 373 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 378 "data/maps/DewfordTown_Gym/scripts.pory"

# 379 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER LIAM\n"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 382 "data/maps/DewfordTown_Gym/scripts.pory"

# 383 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Next time, POOBLES and I\n"
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "won't hold back!$"
# 386 "data/maps/DewfordTown_Gym/scripts.pory"

# 387 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT CITY POKéMON GYM$"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"

# 390 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT CITY POKéMON GYM\p"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "LIAM'S CERTIFIED TRAINERS:\n"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
    .string "JAMES\p"
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 395 "data/maps/DewfordTown_Gym/scripts.pory"

# 396 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"

# 404 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"

# 408 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"

# 413 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

DewfordTown_Gym_EventScript_GiveDazzlingGleam::
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_GiveDazzlingGleam_Text_0, MSGBOX_AUTOCLOSE
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_DAZZLING_GLEAM
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox ExplainDazzlingGleam, MSGBOX_AUTOCLOSE
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
	return


DewfordTown_Gym_EventScript_Poobles::
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_DIGLETT_ALOLA, CRY_MODE_ENCOUNTER
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Poobles_Text_0, MSGBOX_AUTOCLOSE
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end


DewfordTown_Gym_EventScript_PooblesDugtrio::
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_ENCOUNTER
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_PooblesDugtrio_Text_0, MSGBOX_AUTOCLOSE
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end


DewfordTown_Gym_EventScript_Brawly_FinalBattle::
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_2, DewfordTown_Gym_EventScript_Brawly_FinalBattle_Text_0, DewfordTown_Gym_EventScript_Brawly_FinalBattle_Text_1, DewfordTown_Gym_EventScript_BrawlyDefeatedFinal
	end


DewfordTown_Gym_EventScript_BrawlyDefeatedFinal::
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_BrawlyDefeatedFinal_Text_0, MSGBOX_NPC
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


DewfordTown_Gym_EventScript_BrawlyDefeatedFinal2::
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_BrawlyDefeatedFinal_Text_0, MSGBOX_NPC
	end


Common_EventScript_SetPooblesGfx::
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_SYS_HARD_MODE, Common_EventScript_SetPooblesGfx_2
# 484 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES_SHINY ( DIGLETT_ALOLA )
Common_EventScript_SetPooblesGfx_1:
	return

Common_EventScript_SetPooblesGfx_2:
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( DIGLETT_ALOLA )
	goto Common_EventScript_SetPooblesGfx_1


DewfordTown_Gym_EventScript_GiveDazzlingGleam_Text_0:
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Please take this, too.$"

DewfordTown_Gym_EventScript_Poobles_Text_0:
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES: Poooobs!$"

DewfordTown_Gym_EventScript_PooblesDugtrio_Text_0:
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES: POOOOOBS!$"

DewfordTown_Gym_EventScript_Brawly_FinalBattle_Text_0:
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "All right, {PLAYER}! It's time to show\nyou how strong POOBLES has gotten!$"

DewfordTown_Gym_EventScript_Brawly_FinalBattle_Text_1:
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could you do that to POOBLES…$"

DewfordTown_Gym_EventScript_BrawlyDefeatedFinal_Text_0:
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow.\n That was impressive, {PLAYER}!\p You even beat POOBLES at\n full power!$"

ExplainDazzlingGleam::
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "TM54, DAZZLING GLEAM, hits adjacent\n foes with a flash of light.$"
