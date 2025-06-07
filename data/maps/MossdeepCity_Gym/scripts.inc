# 1 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"

# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"

# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"

# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"

# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"

# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"

# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"

# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"

# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"

# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"

# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"

# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"

# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
    call MossdeepCity_Gym_EventScript_GiveNastyPlot
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"

# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"

# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"

# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"

# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"

# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"

# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"

# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"

# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"

# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"

# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"

# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"

# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"

# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"

# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"

# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"

# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"

# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"

# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"

# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"

# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"

# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"

# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"

# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"

# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"

# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"

# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"

# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"

# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"

# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"

# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"

# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"

# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"

# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"

# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"

# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"

# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"

# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"

# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON. Go for it!$"
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"

# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"

# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "So you were able to brave SHOAL CAVE…\n"
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me witness such strength!$"
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"

# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"

# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"

# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"

# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"

# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I heard the GYM LEADER MOMO\n"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "came here from far away.$"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"

# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… We meet again.\n"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "This time I won't lose!\p"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Excelsior!$"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"

# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "E-Excelsior…$"
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"

# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must train more!$"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"

# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get ready! MOMO taught me everything\n"
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I know!$"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"

# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"

# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I heard there's a dojo in DEWFORD\n"
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TOWN with a super strong mentor.\p"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "I'm think about training there.$"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"

# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All I wanna do is PUNCH!$"
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"

# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"

# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I learned how to fight from MOMO.\p"
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "She's a great mentor.$"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"

# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"

# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"

# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"

# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"

# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"

# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"

# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We meet'th again.\p"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "On thy honor as a knight, I shan't\n"
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "lose'th twice'th'nt!$"
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"

# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Impossible'th'nt!\n"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Thoust'th haveth true power'th'nt'nst!$"
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"

# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Thoust'th shall'th movest fowardst,\n"
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "to'th challenge'th ourst commander.$"
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"

# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"

# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"

# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"

# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO's fisting technique…\n"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's unrivaled.$"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"

# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Punching! I mean punching!$"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"

# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm training to finally defeat MOMO.$"
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"

# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"

# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"

# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for my fighting style!\p"
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"

# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON hard-battling power!$"
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"

# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"

# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible POKéMON power next.$"
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"

# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: Greetings, challenger.\n"
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "I'm the knight of this land, ARIA.\l"
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "And this is…\p"
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "…\n"
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "…\p"
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: MOMO, you have to introduce\n"
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "yourself properly.\p"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: … Beef.\p"
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: We're the GYM LEADERS of\n"
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY\p."
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: …\p"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: We might not look like it, but\n"
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we have really good teamwork.\p"
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: …\p"
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: …\n"
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "ARIA: Prepare yourself, challenger!\n"
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "By the power of my SACRED BLADE, I shall-\p"
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "MOMO: … Can you stop talking so we\n"
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "MOMO: can battle already?$"
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"

# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: Ah… I-Impossible…\p"
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: …\p"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: Your… P-Power was too much for me…\n"
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: Can you stop talking? Here.$"
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"

# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from MOMO and ARIA.$"
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"

# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: You have to tell them what\n"
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the badge does.\p"
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: … No. Take this too.$"
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"

# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: W-Wow! That TM04 contains\n"
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "CALM MIND! It raises SP. ATK and\l"
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. DEF! As expected of the mentor!\p"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: … Can you stop? Here.$"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"

# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS MOMO & ARIA\n"
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"

# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: Looks like the bond between you\n"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your POKéMON is far stronger than\l"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond I share with my blade.\p"
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: …\n"
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Beefy.$"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"

# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ARIA: Only one POKéMON?\n"
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "A weak challenge for a knight such\l"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "as myself!$"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"

# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"

# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO AND ARIA'S CERTIFIED TRAINERS:\n"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
    .string "JAMES\p"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"

# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON…\p"
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"

# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"

# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"

# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one POKéMON!\n"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one POKéMON!\p"
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two POKéMON when you come back.$"

MossdeepCity_Gym_EventScript_GiveNastyPlot::
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_NASTY_PLOT
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainNastyPlot, MSGBOX_DEFAULT
	return


MossdeepCity_Gym_Text_ExplainNastyPlot::
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOMO: … Use your brain.\n … … … … … …$"
