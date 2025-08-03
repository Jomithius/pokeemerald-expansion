# 1 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MauvilleCity_Gym_OnResume
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_Gym_OnTransition
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/MauvilleCity_Gym/scripts.pory"

# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"

# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnResume:
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_defeated TRAINER_WATTSON_2, MauvilleCity_Gym_EventScript_RemoveGymLeaderPkmn
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"

# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnTransition:
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_set FLAG_HIDE_MAUVILLE_GYM_WATTSON, MauvilleCity_Gym_EventScript_RemoveGymLeaderPkmn
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"

# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RemoveGymLeaderPkmn:
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	removeobject 7
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"

# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"

# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"

# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"

# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"

# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"

# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"

# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"

# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_defeated TRAINER_WATTSON_2, MauvilleCity_Gym_EventScript_WattsonDefeatedFinal2
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, MauvilleCity_Gym_EventScript_Wattson_FinalBattle
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CHARGE_BEAM, MauvilleCity_Gym_EventScript_GiveShockWave2
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"

# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
    call MauvilleCity_Gym_EventScript_GiveVoltSwitch
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"

# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHARGE_BEAM
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"

# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHARGE_BEAM
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"

# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"

# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"

# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"

# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"

# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"

# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"

# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"

# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"

# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"

# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"

# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"

# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"

# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"

# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"

# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"

# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"

# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"

# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"

# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"

# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"

# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"

# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"

# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's up, dude?\n"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Thanks for bringing DACA back!$"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"

# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Dang, you didn't hold back\n"
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "at all, dude!$"
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"

# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA's been really worried about\n"
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "that poor HOUNDOUR.$"
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"

# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "PARTY! PARTY!\n"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "PARTY!$"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"

# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Party…$"
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"

# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Party.$"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"

# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"

# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"

# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA goes to the POKéMON\n"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DAYCARE alot.\l"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "She really cares about POKéMON.$"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"

# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Nerds can party too!$"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"

# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hungover…$"
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"

# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Even though I look like this,\n"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm an extrovert.$"
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"

# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Here at last!\n"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\l"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Let's party!$"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"

# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You really know how to party!\n"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"

# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from DACA.$"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"

# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"

# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains CHARGE BEAM.\p"
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that might\n"
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "also raise the user's SP. ATK!\p"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"

# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER DACA\n"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"

# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Let's party again soon!$"
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"

# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I wanna party!$"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"

# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"

# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA'S CERTIFIED TRAINERS:\n"
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "JAMES\p"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"

# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Ah-ha! Here at last!\n"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahahaha!\p"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"

# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"

# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: We'll have to recharge our\n"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"

# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Ah-ha! Here at last!\n"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"

MauvilleCity_Gym_EventScript_GiveVoltSwitch::
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_GiveVoltSwitch_Text_0, MSGBOX_AUTOCLOSE
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_VOLT_SWITCH
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainVoltSwitch, MSGBOX_AUTOCLOSE
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_VOLT_SWITCH
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 1
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MISA_STATE, 5
	return


MauvilleCity_Gym_EventScript_Jolteon::
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
	playmoncry SPECIES_JOLTEON, CRY_MODE_ENCOUNTER
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 20
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
	end


MauvilleCity_Gym_EventScript_Wattson_FinalBattle::
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_2, MauvilleCity_Gym_EventScript_Wattson_FinalBattle_Text_0, MauvilleCity_Gym_Text_DacaDefeat, MauvilleCity_Gym_EventScript_WattsonDefeatedFinal
	end


MauvilleCity_Gym_EventScript_WattsonDefeatedFinal::
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_WattsonDefeatedFinal_Text_0, MSGBOX_NPC
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


MauvilleCity_Gym_EventScript_WattsonDefeatedFinal2::
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_WattsonDefeatedFinal_Text_0, MSGBOX_NPC
	end


MauvilleCity_Gym_EventScript_GiveVoltSwitch_Text_0:
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "One more thing! Here!$"

MauvilleCity_Gym_EventScript_Wattson_FinalBattle_Text_0:
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}!\nHere at last!\pIt's time to party!$"

MauvilleCity_Gym_EventScript_WattsonDefeatedFinal_Text_0:
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n That was fun!\p But let's be honest.\n The only reason I lost was to fit a\l narrative.\p You're lucky you're destined to\n never lose.$"

MauvilleCity_Gym_Text_ExplainVoltSwitch::
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM56, VOLT SWITCH, is perfect for\n getting out of shocking situations!\l Hahaha!$"

MauvilleCity_Gym_Text_DacaDefeat::
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n Now THAT was a PARTY!$"
