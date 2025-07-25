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
	end
# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume:
# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad:
# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnFrame:
# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_BIKERS_ROUTE_123
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_SLATEPORT_MAE_BATTLE
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_FREEZE_DRY
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainFreezeDry, MSGBOX_DEFAULT
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_FREEZE_DRY
# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_FREEZE_DRY
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainFreezeDry, MSGBOX_DEFAULT
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_FREEZE_DRY
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yo! How's it going, CHAMPION-\n"
# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS's GYM LEADER JOEY is\n"
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a master of POKéMON.\p"
# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, to get to him, an icy floor\n"
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "will hamper your progress…\p"
# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Listen, I'm sorry, but that's all the\n"
# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "advice that I have for you.\p"
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The rest of the way, you have to\n"
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "go for it yourself!$"
# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yow! You've beaten even JOEY, who\n"
# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "was supposedly the best in all HOENN!\p"
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Okay! Check out your TRAINER CARD.\p"
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you've gotten all the BADGES, you're\n"
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "set for the POKéMON LEAGUE challenge!$"
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro:
# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeaheheaaaaaaaaah.\n"
# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I'm the GYM LEADER of SOOTOPOLIS\l"
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "CITY. Yeet!$"
# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat:
# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeaaaaaaaaaaah…\n"
# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You beat me.\p"
# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Take this RAIN BADGE! Yeet!$"
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} received the RAIN BADGE\n"
# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "from JOEY.$"
# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Having the RAIN BADGE makes it so\n"
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "POKéMON up to LV.100 will listen\l"
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you. Yeaaah.\p"
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The RAIN BADGE also lets you use\n"
# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of the HM move WATERFALL outside\l"
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of battle.\p"
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Also take this.\n"
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeet!$"
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainFreezeDry:
# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TECHNICAL MACHINE I yeeted you\n"
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "contains FREEZE DRY.\p"
# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "It freezes everything, even\n"
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "WATER types, yeaaah.\p"
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan:
# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER JOEY\n"
# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle:
# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yeaheheaaaaaaaaaah…\n"
# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You got 8 GYM BADGES now.\l"
# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Next is the POKéMON LEAGUE.\p"
# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Travel to the easternmost reaches\n"
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of HOENN, to the island EVER GRANDE.\p"
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There, you'll find the POKéMON\n"
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "LEAGUE. Yeaaah.$"
# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "How did you miss the GYM in FORTREE?$"
# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue:
# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM$"
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified:
# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\p"
# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JOEY'S CERTIFIED TRAINERS:\n"
# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JAMES\p"
# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch:
# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\p"
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you\n"
# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "as often as you wish!$"
# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, you are the winner!\n"
# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have defeated me again!$"
# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch:
# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: If I told you to become my\n"
# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "apprentice, you will refuse, I am sure.\p"
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I would like to make a gift of my coat\n"
# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you.\p"
# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But again, you will refuse.\n"
# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I imagine that to be so.\p"
# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And that, my friend, is a certain sign\n"
# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of nobility!$"
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\n"
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you…\p"
# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, no, no, no.\n"
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have with you but one POKéMON.\p"
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I wish that you would return with\n"
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "two, perhaps more, POKéMON, please.$"

SootopolisCity_Gym_1F_EventScript_Mawile::
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playmoncry SPECIES_MAWILE, CRY_MODE_ENCOUNTER
# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 24
# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end

