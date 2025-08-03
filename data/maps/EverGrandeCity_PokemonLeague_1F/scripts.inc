# 1 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_1, 3
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_2, 4
# 4 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 5 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MapScripts::
# 6 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
# 7 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.byte 0
# 9 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 10 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ custom
# 11 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_OnTransition:
# 12 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 13 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_TEMP_E
# 14 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 15 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_set FLAG_SYS_BEFORE_ELITE_4_REMATCH, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 19 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 20 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
# 21 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_1, 9, 2
# 22 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_2, 10, 2
# 23 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 24 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 27 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 28 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 29 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitbuttonpress
# 30 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 38 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
# 39 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 40 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 41 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 43 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.align 2
# 44 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Pokemart:
# 45 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 49 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_LURE
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_PP_MAX
# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_ELIXIR
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemartlistend
# 56 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ Its assumed the player has the remaining badges
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_SYS_BEFORE_ELITE_4_REMATCH, EverGrandeCity_PokemonLeague_1F_EventScript_TheEliteFourIsntHere
# 62 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 77 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 80 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_1
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_2
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 83 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 84 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 85 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 90 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 96 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
# 97 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 98 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 99 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 107 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 108 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 109 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ custom
# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_TheEliteFourIsntHere::
# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 115 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 116 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_TheEliteFourIsntHere, MSGBOX_DEFAULT
# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 122 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 123 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 128 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 129 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 134 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 135 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 137 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 138 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 139 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 140 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
# 141 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 142 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 143 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 145 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
# 146 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those TRAINERS\n"
# 147 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "who have collected all the GYM BADGES\l"
# 148 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "are permitted to enter.\p"
# 149 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER, let us confirm that you have\n"
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "all the GYM BADGES.$"
# 151 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 152 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
# 153 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the BADGES.\p"
# 154 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "If you're bound for the POKéMON\n"
# 155 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "LEAGUE, you must return with them.$"
# 156 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 157 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_GoForth:
# 158 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER! Believe in yourself and your\n"
# 159 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POKéMON, and go forth!$"
# 160 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 161 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_TheEliteFourIsntHere:
# 162 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "CHAMPION! The ELITE FOUR isn't here\n"
# 163 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "right now.\p"
# 164 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You'll have to come back later.$"

EverGrandeCity_PokemonLeague_1F_EventScript_Expert_M::
# 169 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Expert_M_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Youngster::
# 176 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Woman::
# 182 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Woman_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_MegaStoneClerk::
# 193 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 194 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 195 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 196 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 197 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_MegaStonePokemart
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 203 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MegaStonePokemart:
# 204 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 205 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 206 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 207 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 208 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 209 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 210 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 211 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 212 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GENGARITE
# 213 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 214 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PINSIRITE
# 215 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 216 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 217 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 218 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEELIXITE
# 219 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCIZORITE
# 220 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HERACRONITE
# 221 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 222 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TYRANITARITE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_MegaStoneClerk2::
# 226 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 227 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 228 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 229 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 230 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_MegaStonePokemart2
# 231 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 232 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 236 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MegaStonePokemart2:
# 237 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 238 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 239 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 240 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 241 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SABLENITE
# 242 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAWILITE
# 243 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AGGRONITE
# 244 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 245 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MANECTITE
# 246 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 247 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 248 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 249 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BANETTITE
# 250 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABSOLITE
# 251 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GLALITITE
# 252 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 253 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 254 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 255 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 256 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 257 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABOMASITE
# 258 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GALLADITE
# 259 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AUDINITE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk::
# 263 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 264 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 265 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0
# 267 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 268 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_PlatesPokemart
# 269 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 270 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 274 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_PlatesPokemart:
# 275 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 276 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 277 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 278 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 279 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 280 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 281 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 282 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 283 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 284 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 285 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 286 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 287 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 288 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 289 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 290 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 291 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_DrivesClerk::
# 295 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 296 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 297 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0
# 299 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 300 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_DrivesPokemart
# 301 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 302 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 306 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_DrivesPokemart:
# 307 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 308 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 309 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 310 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 311 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 312 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 313 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 314 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 315 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 316 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 317 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 318 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 319 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 320 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 321 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 322 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 323 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 324 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 325 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 326 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 327 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning::
# 331 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 332 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning_Text_0, MSGBOX_AUTOCLOSE
# 336 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 337 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 6
# 338 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Expert_M_Text_0:
# 169 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I still remember my GYM CHALLENGE,\n all those years ago…\p You did well to get this far!$"

EverGrandeCity_PokemonLeague_1F_EventScript_Youngster_Text_0:
# 176 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I made it here, but the\n ELITE FOUR is way too strong!$"

EverGrandeCity_PokemonLeague_1F_EventScript_Woman_Text_0:
# 182 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I've only made it past MISA.\n The second ELITE FOUR member just\l ignores me!\p She's always playing a game or\n reading a stupid book.\p I don't know how she beats me\n while being distracted like that.$"

EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0:
# 265 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I sell unique items.\n Take a look!$"

EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning_Text_0:
# 332 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}WARNING\p {COLOR BLUE}{SHADOW LIGHT_BLUE}Once you enter, there's no\n going back.\p Make sure you're ready.$"
