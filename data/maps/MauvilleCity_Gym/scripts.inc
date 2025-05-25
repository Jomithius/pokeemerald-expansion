# 1 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"

# 5 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"

# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"

# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"

# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"

# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"

# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"

# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"

# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"

# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CHARGE_BEAM, MauvilleCity_Gym_EventScript_GiveShockWave2
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"

# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
    call MauvilleCity_Gym_EventScript_GiveVoltSwitch
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"

# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHARGE_BEAM
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"

# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHARGE_BEAM
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"

# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"

# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"

# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"

# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"

# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"

# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"

# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"

# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"

# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"

# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"

# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"

# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"

# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"

# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"

# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"

# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"

# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"

# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"

# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"

# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"

# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"

# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"

# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's up, dude?\n"
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Thanks for bringing DACA back!$"
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"

# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Dang, you didn't hold back\n"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "at all, dude!$"
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"

# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA's been really worried about\n"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "that poor HOUNDOUR.$"
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"

# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "PARTY! PARTY!\n"
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "PARTY!$"
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"

# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Party…$"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"

# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Party.$"
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"

# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"

# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"

# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA goes to the POKéMON\n"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DAYCARE alot.\l"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "She really cares about POKéMON.$"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"

# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Nerds can party too!$"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"

# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hungover…$"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"

# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Even though I look like this,\n"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm an extrovert.$"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"

# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Here at last!\n"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\l"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Let's party!$"
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"

# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You really know how to party!\n"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"

# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from DACA.$"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"

# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"

# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains CHARGE BEAM.\p"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that might\n"
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "also raise the user's SP. ATK!\p"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"

# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER DACA\n"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"

# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Let's party again soon!$"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"

# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahaha!\n"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I wanna party!$"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"

# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"

# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA'S CERTIFIED TRAINERS:\n"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "JAMES\p"
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"

# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Ah-ha! Here at last!\n"
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahahaha!\p"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"

# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"

# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: We'll have to recharge our\n"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"

# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "DACA: Ah-ha! Here at last!\n"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"

MauvilleCity_Gym_EventScript_GiveVoltSwitch::
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_GiveVoltSwitch_Text_0, MSGBOX_AUTOCLOSE
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_VOLT_SWITCH
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainVoltSwitch, MSGBOX_AUTOCLOSE
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_VOLT_SWITCH
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 1
	return


MauvilleCity_Gym_EventScript_Jolteon::
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	playmoncry SPECIES_JOLTEON, CRY_MODE_ENCOUNTER
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 20
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
	end


MauvilleCity_Gym_EventScript_GiveVoltSwitch_Text_0:
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "One more thing! Here!$"

MauvilleCity_Gym_Text_ExplainVoltSwitch::
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM56, VOLT SWITCH, is\n perfect for getting out of\l shocking situations! Hahaha!$"
