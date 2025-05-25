# 1 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 2 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_Gym/scripts.pory"

# 5 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 6 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
    call DewfordTown_Gym_EventScript_HidePoobles
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel5
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel4
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel3
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel2
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 21 "data/maps/DewfordTown_Gym/scripts.pory"

# 22 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 25 "data/maps/DewfordTown_Gym/scripts.pory"

# 26 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 30 "data/maps/DewfordTown_Gym/scripts.pory"

# 31 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 34 "data/maps/DewfordTown_Gym/scripts.pory"

# 35 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 38 "data/maps/DewfordTown_Gym/scripts.pory"

# 39 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 42 "data/maps/DewfordTown_Gym/scripts.pory"

# 43 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 46 "data/maps/DewfordTown_Gym/scripts.pory"

# 47 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 50 "data/maps/DewfordTown_Gym/scripts.pory"

# 51 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 67 "data/maps/DewfordTown_Gym/scripts.pory"

# 68 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 70 "data/maps/DewfordTown_Gym/scripts.pory"

# 71 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 77 "data/maps/DewfordTown_Gym/scripts.pory"

# 78 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 83 "data/maps/DewfordTown_Gym/scripts.pory"

# 84 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 89 "data/maps/DewfordTown_Gym/scripts.pory"

# 90 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 95 "data/maps/DewfordTown_Gym/scripts.pory"

# 96 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 101 "data/maps/DewfordTown_Gym/scripts.pory"

# 102 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 107 "data/maps/DewfordTown_Gym/scripts.pory"

# 108 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 113 "data/maps/DewfordTown_Gym/scripts.pory"

# 114 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckCristian
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_StopCountingTrainers
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 129 "data/maps/DewfordTown_Gym/scripts.pory"

# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 138 "data/maps/DewfordTown_Gym/scripts.pory"

# 139 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
    call DewfordTown_Gym_EventScript_GiveDazzlingGleam
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 165 "data/maps/DewfordTown_Gym/scripts.pory"

# 166 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 172 "data/maps/DewfordTown_Gym/scripts.pory"

# 173 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 180 "data/maps/DewfordTown_Gym/scripts.pory"

# 181 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 185 "data/maps/DewfordTown_Gym/scripts.pory"

# 186 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 190 "data/maps/DewfordTown_Gym/scripts.pory"

# 191 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 195 "data/maps/DewfordTown_Gym/scripts.pory"

# 196 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 200 "data/maps/DewfordTown_Gym/scripts.pory"

# 201 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 205 "data/maps/DewfordTown_Gym/scripts.pory"

# 206 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 210 "data/maps/DewfordTown_Gym/scripts.pory"

# 211 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 215 "data/maps/DewfordTown_Gym/scripts.pory"

# 216 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 220 "data/maps/DewfordTown_Gym/scripts.pory"

# 221 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 225 "data/maps/DewfordTown_Gym/scripts.pory"

# 226 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 233 "data/maps/DewfordTown_Gym/scripts.pory"

# 234 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 238 "data/maps/DewfordTown_Gym/scripts.pory"

# 239 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 244 "data/maps/DewfordTown_Gym/scripts.pory"

# 245 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 250 "data/maps/DewfordTown_Gym/scripts.pory"

# 251 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 255 "data/maps/DewfordTown_Gym/scripts.pory"

# 256 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 260 "data/maps/DewfordTown_Gym/scripts.pory"

# 261 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT's GYM LEADER LIAM loves\n"
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GRASS and GHOST-type POKéMON.\p"
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with WATER-type\n"
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "His POKéMON will lay a serious\n"
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on those POKéMON,\l"
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is so dark\n"
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you can barely see.\p"
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 276 "data/maps/DewfordTown_Gym/scripts.pory"

# 277 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 280 "data/maps/DewfordTown_Gym/scripts.pory"

# 281 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 284 "data/maps/DewfordTown_Gym/scripts.pory"

# 285 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 287 "data/maps/DewfordTown_Gym/scripts.pory"

# 288 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES is my inspiration!$"
# 290 "data/maps/DewfordTown_Gym/scripts.pory"

# 291 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for LIAM to be\n"
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"

# 296 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 299 "data/maps/DewfordTown_Gym/scripts.pory"

# 300 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"

# 311 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 314 "data/maps/DewfordTown_Gym/scripts.pory"

# 315 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see POOBLES…$"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"

# 321 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 324 "data/maps/DewfordTown_Gym/scripts.pory"

# 325 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 328 "data/maps/DewfordTown_Gym/scripts.pory"

# 329 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 332 "data/maps/DewfordTown_Gym/scripts.pory"

# 333 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hello, I'm LIAM.\n"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT's GYM LEADER.\p"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I might be small, but don't\n"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "underestimate me!\p"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Me and POOBLES are a lot\n"
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger than you think!$"
# 340 "data/maps/DewfordTown_Gym/scripts.pory"

# 341 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Aw, man.\n"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "My poor POOBLES...\p"
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE.$"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"

# 347 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from LIAM.$"
# 350 "data/maps/DewfordTown_Gym/scripts.pory"

# 351 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"

# 360 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"

# 366 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER LIAM\n"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"

# 370 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Next time, POOBLES and I\n"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "won't hold back!$"
# 373 "data/maps/DewfordTown_Gym/scripts.pory"

# 374 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT TOWN POKéMON GYM$"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"

# 377 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT TOWN POKéMON GYM\p"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "LIAM'S CERTIFIED TRAINERS:\n"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
    .string "JAMES\p"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 382 "data/maps/DewfordTown_Gym/scripts.pory"

# 383 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"

# 391 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 394 "data/maps/DewfordTown_Gym/scripts.pory"

# 395 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"

# 400 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

DewfordTown_Gym_EventScript_GiveDazzlingGleam::
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_GiveDazzlingGleam_Text_0, MSGBOX_AUTOCLOSE
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_DAZZLING_GLEAM
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox ExplainDazzlingGleam, MSGBOX_AUTOCLOSE
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_DAZZLING_GLEAM
	return


DewfordTown_Gym_EventScript_Poobles::
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_DIGLETT_ALOLA, CRY_MODE_ENCOUNTER
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Poobles_Text_0, MSGBOX_AUTOCLOSE
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end


DewfordTown_Gym_EventScript_PooblesDugtrio::
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_ENCOUNTER
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_PooblesDugtrio_Text_0, MSGBOX_AUTOCLOSE
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end


DewfordTown_Gym_EventScript_HidePoobles::
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_HidePoobles_2
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_HIDE_DUGTRIO_POOBLES
DewfordTown_Gym_EventScript_HidePoobles_1:
	return

DewfordTown_Gym_EventScript_HidePoobles_2:
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_HIDE_DUGTRIO_POOBLES
	goto DewfordTown_Gym_EventScript_HidePoobles_1


DewfordTown_Gym_EventScript_GiveDazzlingGleam_Text_0:
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Please take this, too.$"

DewfordTown_Gym_EventScript_Poobles_Text_0:
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES: Poooobs!$"

DewfordTown_Gym_EventScript_PooblesDugtrio_Text_0:
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES: POOOOOBS!$"

ExplainDazzlingGleam::
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "TM54, DAZZLING GLEAM, hits adjacent\n foes with a flash of light.$"
