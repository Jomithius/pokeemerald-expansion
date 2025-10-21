# 1 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts::
# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 7 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition:
# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call_if_set FLAG_HIDE_GYM_LEADERS, SootopolisCity_EventScript_RemoveGymLeaderPkmn
# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume:
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call_if_defeated TRAINER_JUAN_2, SootopolisCity_EventScript_RemoveGymLeaderPkmn
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad:
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_EventScript_RemoveGymLeaderPkmn:
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	removeobject 3
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_TEMP_7
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnFrame:
# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_JUAN_2, SootopolisCity_Gym_1F_EventScript_JuanDefeatedFinal2
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, SootopolisCity_Gym_1F_EventScript_Juan_FinalBattle
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	@ specialvar VAR_RESULT, ShouldTryRematchBattle
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	@ goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	@ goto_if_unset FLAG_RECEIVED_TM_FREEZE_DRY, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_BIKERS_ROUTE_123
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_EVER_GRANDE_CITY_STATE, 0
# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_FREEZE_DRY
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainFreezeDry, MSGBOX_DEFAULT
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_FREEZE_DRY
# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_FREEZE_DRY
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainFreezeDry, MSGBOX_DEFAULT
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_FREEZE_DRY
# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yo! How's it going, CHAMPION-\n"
# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS's GYM LEADER JOEY is\n"
# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a master of POKéMON.\p"
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, to get to him, an icy floor\n"
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "will hamper your progress…\p"
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Listen, I'm sorry, but that's all the\n"
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "advice that I have for you.\p"
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The rest of the way, you have to\n"
# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "go for it yourself!\p"
# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap is 60.$"
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yow! You've beaten even JOEY, who\n"
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "was supposedly the best in HOENN!\p"
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Okay! Check out your TRAINER CARD.\p"
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you've gotten all the BADGES, you're\n"
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "set for the POKéMON LEAGUE challenge!$"
# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro:
# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeaheheaaaaaaaaah!\n"
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I'm JOEY, the GYM LEADER of\l"
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY!$"
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat:
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeaaaaaaaaaaah…\n"
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You beat me.\p"
# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Take this RAIN BADGE!$"
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} received the RAIN BADGE\n"
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "from JOEY.$"
# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Having the RAIN BADGE makes it so\n"
# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "POKéMON up to LV.100 will listen\l"
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you. Yeaaah.\p"
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The RAIN BADGE also lets you use\n"
# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of the HM move WATERFALL outside\l"
# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of battle.\p"
# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Also take this.\n"
# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeet!$"
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainFreezeDry:
# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TECHNICAL MACHINE I yeeted you\n"
# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "contains FREEZE DRY.\p"
# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "It freezes everything, even WATER-\n"
# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "types. Yeheheheaaeaaah.\p"
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan:
# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER JOEY\n"
# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle:
# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeaheheaaaaaaaaaah…\n"
# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You got 8 GYM BADGES now.\l"
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Next is the POKéMON LEAGUE.\p"
# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Travel to the easternmost part\n"
# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of HOENN, to the island EVER GRANDE.\p"
# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There, you'll find the POKéMON\n"
# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "LEAGUE. Yeaaah.$"
# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "How did you miss the GYM in FORTREE?$"
# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue:
# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM$"
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified:
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\p"
# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JOEY'S CERTIFIED TRAINERS:\n"
# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JAMES\p"
# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch:
# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\p"
# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you\n"
# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "as often as you wish!$"
# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, you are the winner!\n"
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have defeated me again!$"
# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch:
# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: If I told you to become my\n"
# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "apprentice, you will refuse, I am sure.\p"
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I would like to make a gift of my coat\n"
# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you.\p"
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But again, you will refuse.\n"
# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I imagine that to be so.\p"
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And that, my friend, is a certain sign\n"
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of nobility!$"
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 294 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
# 295 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 296 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 297 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\n"
# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you…\p"
# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, no, no, no.\n"
# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have with you but one POKéMON.\p"
# 303 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I wish that you would return with\n"
# 304 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "two, perhaps more, POKéMON, please.$"

SootopolisCity_Gym_1F_EventScript_Mawile::
# 309 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 310 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playmoncry SPECIES_MAWILE, CRY_MODE_ENCOUNTER
# 312 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 24
# 313 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end


SootopolisCity_Gym_1F_EventScript_Juan_FinalBattle::
# 318 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 319 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_FinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 320 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 321 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_EventScript_Juan_FinalBattle_Text_1
# 322 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanDefeatedFinal
	end


SootopolisCity_Gym_1F_EventScript_JuanDefeatedFinal::
# 327 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 328 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_JuanDefeatedFinal_Text_0, MSGBOX_NPC
# 329 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
# 330 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end


SootopolisCity_Gym_1F_EventScript_JuanDefeatedFinal2::
# 335 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_JuanDefeatedFinal_Text_0, MSGBOX_NPC
	end


SootopolisCity_Gym_1F_EventScript_Juan_FinalBattle_Text_0:
# 319 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeheheheaaaaaaaaaah!$"

SootopolisCity_Gym_1F_EventScript_Juan_FinalBattle_Text_1:
# 321 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeeaaaahh…$"

SootopolisCity_Gym_1F_EventScript_JuanDefeatedFinal_Text_0:
# 328 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeeeheeeaaaaah…$"
