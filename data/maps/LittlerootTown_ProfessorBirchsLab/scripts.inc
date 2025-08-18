# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE, 1
# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_RIVAL, 3
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CYNDAQUIL, 4
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_TOTODILE, 5
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CHIKORITA, 6
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received Shiny Charm, changed from Nat Dex
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving Shiny Charm, changed from Nat Dex
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ playfanfare MUS_OBTAIN_ITEM
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ waitfanfare
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ setflag FLAG_SYS_NATIONAL_DEX
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ special EnableNationalPokedex
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIllBeCountingOnYou, MSGBOX_DEFAULT
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_RivalImExcitedForNewDiscoveries, MSGBOX_DEFAULT
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_AZURE_MOUNTAIN_RIVAL_STATE, 1
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_QUICK_BALL, 20
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_QUICK_BALL, 20
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    @ goto_if_set FLAG_DEFEATED_RIVAL_BIRCH_LAB, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ goto_if_set FLAG_SYS_FINAL_REMATCH, LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_AZURE_MOUNTAIN_RIVAL_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_IHaveToPrepare
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your mother.\p"
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own POKéMON yet.\p"
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have a TRAINER's blood\n"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the POKéMON you\l"
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\n"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON while helping me out.\p"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a TRAINER.$"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, don't be that way.\n"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your POKéMON get tired,\n"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a TRAINER already.\p"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéDEX.$"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare POKéMON\n"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON\n"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON!\p"
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for POKéMON next?$"
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different POKéMON.\p"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON next…$"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF must use this for research.$"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on POKéMON.$"
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON that can\l"
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "look different from usual.\p"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've come to call these colored\n"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "variants SHINY POKéMON.\p"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "make SHINY POKéMON more likely\l"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to appear.\l"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting upgraded!\p"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for finding out\n"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "about SHINIES.\p"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with a SHINY CHARM!$"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1017 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1018 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch::
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_2
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_Text_2, MSGBOX_YESNO
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanBattle
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_Text_1, MSGBOX_AUTOCLOSE
LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_1:
# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadedefaultbgm
# 1048 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_2:
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_Text_0, MSGBOX_YESNO
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1031 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_MayBattle
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_Text_1, MSGBOX_AUTOCLOSE
	goto LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_1


LittlerootTown_ProfessorBirchsLab_EventScript_MayBattle::
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 1056 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1057 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_PLACEHOLDER, LittlerootTown_ProfessorBirchsLab_EventScript_MayBattle_Text_1
# 1058 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_BIRCH_LAB
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_MayPostBattle
	end


LittlerootTown_ProfessorBirchsLab_EventScript_BrendanBattle::
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_BrendanBattle_Text_0, MSGBOX_AUTOCLOSE
# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_PLACEHOLDER, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanBattle_Text_1
# 1069 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_BIRCH_LAB
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPostBattle
	end


LittlerootTown_ProfessorBirchsLab_EventScript_MayPostBattle::
# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_MayPostBattle_Text_0, MSGBOX_DEFAULT
	end


LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPostBattle::
# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPostBattle_Text_0, MSGBOX_DEFAULT
	end


LittlerootTown_ProfessorBirchsLab_EventScript_IHaveToPrepare::
# 1092 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_IHaveToPrepare_2
# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanIHaveToPrepare, MSGBOX_NPC
LittlerootTown_ProfessorBirchsLab_EventScript_IHaveToPrepare_1:
	end

LittlerootTown_ProfessorBirchsLab_EventScript_IHaveToPrepare_2:
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayIHaveToPrepare, MSGBOX_NPC
	goto LittlerootTown_ProfessorBirchsLab_EventScript_IHaveToPrepare_1


LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_Text_0:
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n You look like you've gotten stronger…\p You know, I've been training too.\n How about a rematch?$"

LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_Text_1:
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aw, you're no fun.\n Let me know if you change your mind!$"

LittlerootTown_ProfessorBirchsLab_EventScript_RivalRematch_Text_2:
# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n You look like you've gotten stronger…\p You know, I've been training too.\n How about a rematch?$"

LittlerootTown_ProfessorBirchsLab_EventScript_MayBattle_Text_0:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Great!\n I might not be great at battling,\l but don't underestimate me!$"

LittlerootTown_ProfessorBirchsLab_EventScript_MayBattle_Text_1:
# 1057 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Wow, {PLAYER}.\nYou've gotten this strong!$"

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanBattle_Text_0:
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Great!\n I'm not going to lose just because\l you're the CHAMPION!$"

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanBattle_Text_1:
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Wow, {PLAYER}.\nYou've gotten this strong?$"

LittlerootTown_ProfessorBirchsLab_EventScript_MayPostBattle_Text_0:
# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I can see why you're the CHAMPION,\n {PLAYER}.\p I think I'll stick to what I'm good at…\n catching POKéMON!$"

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPostBattle_Text_0:
# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I can see why you're the CHAMPION,\n {PLAYER}.\p I think I'll stick to what I'm good at…\n raising POKéMON!$"

LittlerootTown_ProfessorBirchsLab_Text_RivalImExcitedForNewDiscoveries::
# 1102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}: {PLAYER}, you didn't hear\n the news yet, right?\p Well, you'll probably find out\n soon enough.\p Either way, I'm excited to go and\n catch more rare POKéMON!$"

LittlerootTown_ProfessorBirchsLab_Text_MayIHaveToPrepare::
# 1111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I'm so excited!\n I have to go get prepared to head out…\p Huh? What am I hyped for?\n Heheh, it's a secret!$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanIHaveToPrepare::
# 1118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: All right!\n I have to go get prepared to head out…\p Huh? What am I hyped for?\n You'll find out soon enough.$"

LittlerootTown_ProfessorBirchsLab_Text_BirchIllBeCountingOnYou::
# 1125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Now, if the reports I've recieved\n are true, we're going to be very\l busy for a while.\p I'll be counting on you, {RIVAL}.$"
