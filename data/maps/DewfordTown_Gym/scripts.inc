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
	end
# 8 "data/maps/DewfordTown_Gym/scripts.pory"

# 9 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel5
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel4
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel3
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel2
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 20 "data/maps/DewfordTown_Gym/scripts.pory"

# 21 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 24 "data/maps/DewfordTown_Gym/scripts.pory"

# 25 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 29 "data/maps/DewfordTown_Gym/scripts.pory"

# 30 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 33 "data/maps/DewfordTown_Gym/scripts.pory"

# 34 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 37 "data/maps/DewfordTown_Gym/scripts.pory"

# 38 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 41 "data/maps/DewfordTown_Gym/scripts.pory"

# 42 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 45 "data/maps/DewfordTown_Gym/scripts.pory"

# 46 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 49 "data/maps/DewfordTown_Gym/scripts.pory"

# 50 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 54 "data/maps/DewfordTown_Gym/scripts.pory"

# 55 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 66 "data/maps/DewfordTown_Gym/scripts.pory"

# 67 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 69 "data/maps/DewfordTown_Gym/scripts.pory"

# 70 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 76 "data/maps/DewfordTown_Gym/scripts.pory"

# 77 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 82 "data/maps/DewfordTown_Gym/scripts.pory"

# 83 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 88 "data/maps/DewfordTown_Gym/scripts.pory"

# 89 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 94 "data/maps/DewfordTown_Gym/scripts.pory"

# 95 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 100 "data/maps/DewfordTown_Gym/scripts.pory"

# 101 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 106 "data/maps/DewfordTown_Gym/scripts.pory"

# 107 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 112 "data/maps/DewfordTown_Gym/scripts.pory"

# 113 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckCristian
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_StopCountingTrainers
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 128 "data/maps/DewfordTown_Gym/scripts.pory"

# 129 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 137 "data/maps/DewfordTown_Gym/scripts.pory"

# 138 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
    call DewfordTown_Gym_EventScript_GiveDazzlingGleam
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 164 "data/maps/DewfordTown_Gym/scripts.pory"

# 165 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 171 "data/maps/DewfordTown_Gym/scripts.pory"

# 172 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 179 "data/maps/DewfordTown_Gym/scripts.pory"

# 180 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 184 "data/maps/DewfordTown_Gym/scripts.pory"

# 185 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 189 "data/maps/DewfordTown_Gym/scripts.pory"

# 190 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 194 "data/maps/DewfordTown_Gym/scripts.pory"

# 195 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 199 "data/maps/DewfordTown_Gym/scripts.pory"

# 200 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 204 "data/maps/DewfordTown_Gym/scripts.pory"

# 205 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 209 "data/maps/DewfordTown_Gym/scripts.pory"

# 210 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 214 "data/maps/DewfordTown_Gym/scripts.pory"

# 215 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 219 "data/maps/DewfordTown_Gym/scripts.pory"

# 220 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 224 "data/maps/DewfordTown_Gym/scripts.pory"

# 225 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 232 "data/maps/DewfordTown_Gym/scripts.pory"

# 233 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 237 "data/maps/DewfordTown_Gym/scripts.pory"

# 238 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 243 "data/maps/DewfordTown_Gym/scripts.pory"

# 244 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 249 "data/maps/DewfordTown_Gym/scripts.pory"

# 250 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 254 "data/maps/DewfordTown_Gym/scripts.pory"

# 255 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 259 "data/maps/DewfordTown_Gym/scripts.pory"

# 260 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT's GYM LEADER LIAM loves\n"
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GRASS and GHOST-type POKéMON.\p"
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with WATER-type\n"
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "His POKéMON will lay a serious\n"
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on those POKéMON,\l"
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is so dark\n"
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you can barely see.\p"
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 275 "data/maps/DewfordTown_Gym/scripts.pory"

# 276 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"

# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 283 "data/maps/DewfordTown_Gym/scripts.pory"

# 284 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 286 "data/maps/DewfordTown_Gym/scripts.pory"

# 287 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES is my inspiration!$"
# 289 "data/maps/DewfordTown_Gym/scripts.pory"

# 290 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for LIAM to be\n"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"

# 295 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"

# 299 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 305 "data/maps/DewfordTown_Gym/scripts.pory"

# 306 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"

# 310 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"

# 314 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see POOBLES…$"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"

# 320 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 323 "data/maps/DewfordTown_Gym/scripts.pory"

# 324 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 327 "data/maps/DewfordTown_Gym/scripts.pory"

# 328 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"

# 332 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hello, I'm LIAM.\n"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT's GYM LEADER.\p"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I might be small, but don't\n"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "underestimate me!\p"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Me and POOBLES are a lot\n"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger than you think!$"
# 339 "data/maps/DewfordTown_Gym/scripts.pory"

# 340 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Aw, man.\n"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "My poor POOBLES...\p"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE.$"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"

# 346 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from LIAM.$"
# 349 "data/maps/DewfordTown_Gym/scripts.pory"

# 350 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 358 "data/maps/DewfordTown_Gym/scripts.pory"

# 359 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"

# 365 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER LIAM\n"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"

# 369 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Next time, POOBLES and I\n"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "won't hold back!$"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"

# 373 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT TOWN POKéMON GYM$"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"

# 376 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "SLATEPORT TOWN POKéMON GYM\p"
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "LIAM'S CERTIFIED TRAINERS:\n"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
    .string "JAMES\p"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"

# 382 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"

# 390 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"

# 394 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"

# 399 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

DewfordTown_Gym_EventScript_GiveDazzlingGleam::
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_GiveDazzlingGleam_Text_0, MSGBOX_AUTOCLOSE
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_DAZZLING_GLEAM
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox ExplainDazzlingGleam, MSGBOX_AUTOCLOSE
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_DAZZLING_GLEAM
	return


DewfordTown_Gym_EventScript_Poobles::
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_DIGLETT_ALOLA, CRY_MODE_ENCOUNTER
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Poobles_Text_0, MSGBOX_AUTOCLOSE
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end


DewfordTown_Gym_EventScript_PooblesDugtrio::
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	playmoncry SPECIES_DUGTRIO_ALOLA, CRY_MODE_ENCOUNTER
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_PooblesDugtrio_Text_0, MSGBOX_AUTOCLOSE
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end


DewfordTown_Gym_EventScript_GiveDazzlingGleam_Text_0:
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Please take this, too.$"

DewfordTown_Gym_EventScript_Poobles_Text_0:
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES: Poooobs!$"

DewfordTown_Gym_EventScript_PooblesDugtrio_Text_0:
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POOBLES: POOOOOBS!$"

ExplainDazzlingGleam::
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "TM54, DAZZLING GLEAM, hits adjacent\n foes with a flash of light.$"
