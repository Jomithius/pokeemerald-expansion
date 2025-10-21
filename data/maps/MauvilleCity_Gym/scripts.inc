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
	setflag FLAG_TEMP_7
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"

# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"

# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"

# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"

# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"

# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"

# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"

# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"

# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_defeated TRAINER_WATTSON_2, MauvilleCity_Gym_EventScript_WattsonDefeatedFinal2
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, MauvilleCity_Gym_EventScript_Wattson_FinalBattle
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	@ specialvar VAR_RESULT, ShouldTryRematchBattle
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	@ goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	@ goto_if_unset FLAG_RECEIVED_TM_CHARGE_BEAM, MauvilleCity_Gym_EventScript_GiveShockWave2
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"

# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
    call MauvilleCity_Gym_EventScript_GiveVoltSwitch
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"

# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHARGE_BEAM
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"

# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHARGE_BEAM
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"

# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"

# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"

# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"

# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"

# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"

# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"

# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"

# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"

# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"

# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"

# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"

# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"

# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"

# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"

# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"

# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"

# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"

# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"

# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"

# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"

# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA, the LEADER of MAUVILLE\n"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, loves to party.\p"
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I don't really have any idea what\n"
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON she'll use! Hahaha!\p"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, she's put in switch-controlled\n"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over her GYM! Eccentric!\p"
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!\p"
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap is 25.$"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"

# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've really partied!$"
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"

# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's up, dude?\n"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Thanks for bringing DACA back!$"
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"

# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Dang, you didn't hold back\n"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "at all, dude!$"
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"

# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA's been really worried about\n"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "that poor HOUNDOUR.$"
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"

# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "PARTY! PARTY!\n"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "PARTY!$"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"

# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Party…$"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"

# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Party.$"
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"

# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"

# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"

# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA goes to the POKéMON\n"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DAYCARE alot.\l"
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "She really cares about POKéMON.$"
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"

# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Nerds can party too!$"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"

# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hungover…$"
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"

# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Even though I look like this,\n"
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm an extrovert.$"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"

# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Here at last!\n"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\l"
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Let's party!$"
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"

# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You really know how to party!\n"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"

# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from DACA.$"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"

# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"

# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains CHARGE BEAM.\p"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that might\n"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "also raise the user's SP. ATK!\p"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"

# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER DACA\n"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"

# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Let's party again soon!$"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"

# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I wanna party!$"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"

# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"

# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA'S CERTIFIED TRAINERS:\n"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "JAMES\p"
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"

# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Ah-ha! Here at last!\n"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahahaha!\p"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"

# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"

# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: We'll have to recharge our\n"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"

# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Ah-ha! Here at last!\n"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"

MauvilleCity_Gym_EventScript_GiveVoltSwitch::
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_GiveVoltSwitch_Text_0, MSGBOX_DEFAULT
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_VOLT_SWITCH
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainVoltSwitch, MSGBOX_AUTOCLOSE
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 1
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MISA_STATE, 5
	return


MauvilleCity_Gym_EventScript_Jolteon::
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	playmoncry SPECIES_JOLTEON, CRY_MODE_ENCOUNTER
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmoncry
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
	end


MauvilleCity_Gym_EventScript_Wattson_FinalBattle::
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_2, MauvilleCity_Gym_EventScript_Wattson_FinalBattle_Text_0, MauvilleCity_Gym_Text_DacaDefeat, MauvilleCity_Gym_EventScript_WattsonDefeatedFinal
	end


MauvilleCity_Gym_EventScript_WattsonDefeatedFinal::
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_WattsonDefeatedFinal_Text_0, MSGBOX_NPC
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


MauvilleCity_Gym_EventScript_WattsonDefeatedFinal2::
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_WattsonDefeatedFinal_Text_0, MSGBOX_NPC
	end


MauvilleCity_Gym_EventScript_GiveVoltSwitch_Text_0:
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "One more thing! Here!$"

MauvilleCity_Gym_EventScript_Wattson_FinalBattle_Text_0:
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}!\nHere at last!\pIt's time to party!$"

MauvilleCity_Gym_EventScript_WattsonDefeatedFinal_Text_0:
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n That was fun!\p But let's be honest.\p The only reason I lost was to fit a\n narrative.\p You're lucky you're destined to\n never lose.$"

MauvilleCity_Gym_Text_ExplainVoltSwitch::
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM56, VOLT SWITCH, is perfect for\n getting out of shocking situations!\l Hahaha!$"

MauvilleCity_Gym_Text_DacaDefeat::
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n Now THAT was a PARTY!$"
