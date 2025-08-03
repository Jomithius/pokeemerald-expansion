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
	end
# 14 "data/maps/DewfordTown_Gym/scripts.pory"

# 15 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RemoveGymLeaderPkmn:
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	removeobject 7
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 18 "data/maps/DewfordTown_Gym/scripts.pory"

# 19 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel5
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel4
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel3
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel2
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 30 "data/maps/DewfordTown_Gym/scripts.pory"

# 31 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 34 "data/maps/DewfordTown_Gym/scripts.pory"

# 35 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 39 "data/maps/DewfordTown_Gym/scripts.pory"

# 40 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 43 "data/maps/DewfordTown_Gym/scripts.pory"

# 44 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 47 "data/maps/DewfordTown_Gym/scripts.pory"

# 48 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 51 "data/maps/DewfordTown_Gym/scripts.pory"

# 52 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 59 "data/maps/DewfordTown_Gym/scripts.pory"

# 60 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 64 "data/maps/DewfordTown_Gym/scripts.pory"

# 65 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 76 "data/maps/DewfordTown_Gym/scripts.pory"

# 77 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 79 "data/maps/DewfordTown_Gym/scripts.pory"

# 80 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 86 "data/maps/DewfordTown_Gym/scripts.pory"

# 87 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 92 "data/maps/DewfordTown_Gym/scripts.pory"

# 93 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 98 "data/maps/DewfordTown_Gym/scripts.pory"

# 99 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 104 "data/maps/DewfordTown_Gym/scripts.pory"

# 105 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 110 "data/maps/DewfordTown_Gym/scripts.pory"

# 111 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 116 "data/maps/DewfordTown_Gym/scripts.pory"

# 117 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 122 "data/maps/DewfordTown_Gym/scripts.pory"

# 123 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckCristian
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_StopCountingTrainers
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 138 "data/maps/DewfordTown_Gym/scripts.pory"

# 139 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_2, DewfordTown_Gym_EventScript_BrawlyDefeatedFinal2
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, DewfordTown_Gym_EventScript_Brawly_FinalBattle
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 149 "data/maps/DewfordTown_Gym/scripts.pory"

# 150 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
    call DewfordTown_Gym_EventScript_GiveDazzlingGleam
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 176 "data/maps/DewfordTown_Gym/scripts.pory"

# 177 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 183 "data/maps/DewfordTown_Gym/scripts.pory"

# 184 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 191 "data/maps/DewfordTown_Gym/scripts.pory"

# 192 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 196 "data/maps/DewfordTown_Gym/scripts.pory"

# 197 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 201 "data/maps/DewfordTown_Gym/scripts.pory"

# 202 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 206 "data/maps/DewfordTown_Gym/scripts.pory"

# 207 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 211 "data/maps/DewfordTown_Gym/scripts.pory"

# 212 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 216 "data/maps/DewfordTown_Gym/scripts.pory"

# 217 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 221 "data/maps/DewfordTown_Gym/scripts.pory"

# 222 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 226 "data/maps/DewfordTown_Gym/scripts.pory"

# 227 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 231 "data/maps/DewfordTown_Gym/scripts.pory"

# 232 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 236 "data/maps/DewfordTown_Gym/scripts.pory"

# 237 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 244 "data/maps/DewfordTown_Gym/scripts.pory"

# 245 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 249 "data/maps/DewfordTown_Gym/scripts.pory"

# 250 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 255 "data/maps/DewfordTown_Gym/scripts.pory"

# 256 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 261 "data/maps/DewfordTown_Gym/scripts.pory"

# 262 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 266 "data/maps/DewfordTown_Gym/scripts.pory"

# 267 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 271 "data/maps/DewfordTown_Gym/scripts.pory"

# 272 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT's GYM LEADER LIAM loves\n"
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GRASS and GHOST-type POKéMON.\p"
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with WATER-type\n"
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "His POKéMON will lay a serious\n"
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on those POKéMON,\l"
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is so dark\n"
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you can barely see.\p"
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 287 "data/maps/DewfordTown_Gym/scripts.pory"

# 288 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 291 "data/maps/DewfordTown_Gym/scripts.pory"

# 292 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"

# 296 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"

# 299 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES is my inspiration!$"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"

# 302 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for LIAM to be\n"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"

# 311 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"

# 318 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"

# 322 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 325 "data/maps/DewfordTown_Gym/scripts.pory"

# 326 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see POOBLES…$"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"

# 332 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"

# 336 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 339 "data/maps/DewfordTown_Gym/scripts.pory"

# 340 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"

# 344 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hello, I'm LIAM.\n"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT's GYM LEADER.\p"
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I might be small, but don't\n"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "underestimate me!\p"
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Me and POOBLES are a lot\n"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger than you think!$"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"

# 352 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Aw, man.\n"
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "My poor POOBLES…\p"
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE.$"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"

# 358 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from LIAM.$"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"

# 362 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 370 "data/maps/DewfordTown_Gym/scripts.pory"

# 371 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"

# 377 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER LIAM\n"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"

# 381 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Next time, POOBLES and I\n"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "won't hold back!$"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT CITY POKéMON GYM$"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"

# 388 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT CITY POKéMON GYM\p"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "LIAM'S CERTIFIED TRAINERS:\n"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
    .string "JAMES\p"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"

# 394 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"

# 402 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"

# 406 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"

# 411 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

DewfordTown_Gym_EventScript_GiveDazzlingGleam::
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_GiveDazzlingGleam_Text_0, MSGBOX_AUTOCLOSE
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_DAZZLING_GLEAM
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox ExplainDazzlingGleam, MSGBOX_AUTOCLOSE
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_DAZZLING_GLEAM
	return


DewfordTown_Gym_EventScript_Poobles::
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_DIGLETT_ALOLA, CRY_MODE_ENCOUNTER
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Poobles_Text_0, MSGBOX_AUTOCLOSE
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end


DewfordTown_Gym_EventScript_PooblesDugtrio::
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_ENCOUNTER
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_PooblesDugtrio_Text_0, MSGBOX_AUTOCLOSE
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end


DewfordTown_Gym_EventScript_Brawly_FinalBattle::
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_2, DewfordTown_Gym_EventScript_Brawly_FinalBattle_Text_0, DewfordTown_Gym_EventScript_Brawly_FinalBattle_Text_1, DewfordTown_Gym_EventScript_BrawlyDefeatedFinal
	end


DewfordTown_Gym_EventScript_BrawlyDefeatedFinal::
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_BrawlyDefeatedFinal_Text_0, MSGBOX_NPC
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


DewfordTown_Gym_EventScript_BrawlyDefeatedFinal2::
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_BrawlyDefeatedFinal_Text_0, MSGBOX_NPC
	end


DewfordTown_Gym_EventScript_GiveDazzlingGleam_Text_0:
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Please take this, too.$"

DewfordTown_Gym_EventScript_Poobles_Text_0:
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES: Poooobs!$"

DewfordTown_Gym_EventScript_PooblesDugtrio_Text_0:
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES: POOOOOBS!$"

DewfordTown_Gym_EventScript_Brawly_FinalBattle_Text_0:
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hello, {PLAYER}.\nCongratulations on becoming CHAMPION.\pAlright! It's time to show you how strong\n POOBLES and I have gotten!$"

DewfordTown_Gym_EventScript_Brawly_FinalBattle_Text_1:
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could you do that to POOBLES…$"

DewfordTown_Gym_EventScript_BrawlyDefeatedFinal_Text_0:
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow.\n That was impressive, {PLAYER}!\p You even beat POOBLES at\n full power!$"

ExplainDazzlingGleam::
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "TM54, DAZZLING GLEAM, hits adjacent\n foes with a flash of light.$"
