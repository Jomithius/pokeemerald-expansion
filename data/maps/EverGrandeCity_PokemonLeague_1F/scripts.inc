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
	lock
# 170 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 171 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_SYS_TALKED_TO_E4_TUTOR, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices
# 172 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Expert_M_Text_0, MSGBOX_YESNO
# 178 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 179 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_SYS_TALKED_TO_E4_TUTOR
# 180 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices
# 181 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 182 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline::
# 187 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 188 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 191 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices::
# 196 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 197 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_0, MSGBOX_DEFAULT
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_1, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_2, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_3, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_4, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_5, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_6, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_7, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_8, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_9, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_10, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_11, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_12, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_13, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_14, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_15, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_16, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_17, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_18, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_19, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_20, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_21, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_22
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	switch VAR_RESULT
# 202 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_3
# 204 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 1, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_4
# 206 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 2, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_5
# 208 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 3, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_6
# 210 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 4, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_7
# 212 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 5, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_8
# 214 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 6, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_9
# 216 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 7, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_10
# 218 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 8, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_11
# 220 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 9, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_12
# 222 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 10, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_13
# 224 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 11, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_14
# 226 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 12, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_15
# 228 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 13, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_16
# 230 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 14, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_17
# 232 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 15, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_18
# 234 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 16, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_19
# 236 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 17, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_20
# 238 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 18, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_21
# 240 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 19, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_22
# 242 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 20, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_23
# 244 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 21, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_24
# 246 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case MULTI_B_PRESSED, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_25
# 249 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1:
	end

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_3:
# 203 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PsychicNoiseTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_4:
# 205 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_ExpandingForceTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_5:
# 207 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_BreakingSwipeTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_6:
# 209 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_SludgeWaveTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_7:
# 211 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_ScorchingSandsTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_8:
# 213 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PollenPuffTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_9:
# 215 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_EnergyBallTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_10:
# 217 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_GunkShotTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_11:
# 219 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_MeteorBeamTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_12:
# 221 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_DragonPulseTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_13:
# 223 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_TeleportTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_14:
# 225 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_HeatWaveTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_15:
# 227 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_RisingVoltageTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_16:
# 229 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_GrassKnotTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_17:
# 231 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_HyperVoiceTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_18:
# 233 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_IronHeadTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_19:
# 235 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PoltergeistTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_20:
# 237 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_SwaggerTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_21:
# 239 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_FlatterTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_22:
# 241 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_TailwindTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_23:
# 243 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_MoonblastTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_24:
# 245 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_BodyPressTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_25:
# 247 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1


MoveTutor_EventScript_PsychicNoiseTeach::
# 255 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PsychicNoiseTeach_Text_0, MSGBOX_DEFAULT
# 256 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_NOISE
# 257 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 258 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 259 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_ExpandingForceTeach::
# 264 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_ExpandingForceTeach_Text_0, MSGBOX_DEFAULT
# 265 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPANDING_FORCE
# 266 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 267 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 268 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_BreakingSwipeTeach::
# 273 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_BreakingSwipeTeach_Text_0, MSGBOX_DEFAULT
# 274 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BREAKING_SWIPE
# 275 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 276 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 277 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_SludgeWaveTeach::
# 282 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_SludgeWaveTeach_Text_0, MSGBOX_DEFAULT
# 283 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SLUDGE_WAVE
# 284 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 285 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 286 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_ScorchingSandsTeach::
# 291 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_ScorchingSandsTeach_Text_0, MSGBOX_DEFAULT
# 292 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
# 293 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 294 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 295 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_PollenPuffTeach::
# 300 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PollenPuffTeach_Text_0, MSGBOX_DEFAULT
# 301 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
# 302 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 303 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 304 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_EnergyBallTeach::
# 309 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_EnergyBallTeach_Text_0, MSGBOX_DEFAULT
# 310 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ENERGY_BALL
# 311 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 312 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 313 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_GunkShotTeach::
# 318 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_GunkShotTeach_Text_0, MSGBOX_DEFAULT
# 319 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GUNK_SHOT
# 320 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 321 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 322 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_MeteorBeamTeach::
# 327 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_MeteorBeamTeach_Text_0, MSGBOX_DEFAULT
# 328 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
# 329 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 330 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 331 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_DragonPulseTeach::
# 336 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_DragonPulseTeach_Text_0, MSGBOX_DEFAULT
# 337 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_PULSE
# 338 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 339 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 340 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_TeleportTeach::
# 345 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_TeleportTeach_Text_0, MSGBOX_DEFAULT
# 346 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TELEPORT
# 347 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 348 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 349 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_HeatWaveTeach::
# 354 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_HeatWaveTeach_Text_0, MSGBOX_DEFAULT
# 355 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAT_WAVE
# 356 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 357 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 358 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_RisingVoltageTeach::
# 363 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_RisingVoltageTeach_Text_0, MSGBOX_DEFAULT
# 364 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_RISING_VOLTAGE
# 365 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 366 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 367 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_GrassKnotTeach::
# 372 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_GrassKnotTeach_Text_0, MSGBOX_DEFAULT
# 373 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
# 374 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 375 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 376 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_HyperVoiceTeach::
# 381 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_HyperVoiceTeach_Text_0, MSGBOX_DEFAULT
# 382 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
# 383 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 384 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 385 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_IronHeadTeach::
# 390 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_IronHeadTeach_Text_0, MSGBOX_DEFAULT
# 391 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_HEAD
# 392 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 393 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 394 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_PoltergeistTeach::
# 399 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PoltergeistTeach_Text_0, MSGBOX_DEFAULT
# 400 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POLTERGEIST
# 401 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 402 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 403 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_SwaggerTeach::
# 408 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_SwaggerTeach_Text_0, MSGBOX_DEFAULT
# 409 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 410 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 411 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 412 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_FlatterTeach::
# 417 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_FlatterTeach_Text_0, MSGBOX_DEFAULT
# 418 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FLATTER
# 419 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 420 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 421 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_TailwindTeach::
# 426 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_TailwindTeach_Text_0, MSGBOX_DEFAULT
# 427 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TAILWIND
# 428 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 429 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 430 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_MoonblastTeach::
# 435 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_MoonblastTeach_Text_0, MSGBOX_DEFAULT
# 436 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MOONBLAST
# 437 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 438 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 439 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_BodyPressTeach::
# 444 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_BodyPressTeach_Text_0, MSGBOX_DEFAULT
# 445 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_PRESS
# 446 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 447 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 448 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Youngster::
# 453 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Woman::
# 461 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Woman_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_MegaStoneClerk::
# 472 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 473 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 474 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 475 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 476 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_MegaStonePokemart
# 477 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 478 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 482 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MegaStonePokemart:
# 483 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 484 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 485 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 486 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 487 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 488 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 489 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 490 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 491 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GENGARITE
# 492 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 493 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PINSIRITE
# 494 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 495 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 496 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 497 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEELIXITE
# 498 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCIZORITE
# 499 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HERACRONITE
# 500 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 501 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TYRANITARITE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_MegaStoneClerk2::
# 505 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 506 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 507 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 508 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 509 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_MegaStonePokemart2
# 510 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 511 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 515 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MegaStonePokemart2:
# 516 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 517 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 518 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 519 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 520 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SABLENITE
# 521 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAWILITE
# 522 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AGGRONITE
# 523 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 524 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MANECTITE
# 525 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 526 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 527 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 528 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BANETTITE
# 529 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABSOLITE
# 530 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GLALITITE
# 531 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 532 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 533 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 534 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 535 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 536 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABOMASITE
# 537 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GALLADITE
# 538 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AUDINITE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk::
# 542 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 543 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 544 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0
# 546 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 547 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_PlatesPokemart
# 548 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 549 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 553 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_PlatesPokemart:
# 554 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 555 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 556 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 557 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 558 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 559 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 560 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 561 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 562 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 563 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 564 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 565 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 566 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 567 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 568 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 569 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 570 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_DrivesClerk::
# 574 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 575 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 576 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0
# 578 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 579 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_DrivesPokemart
# 580 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 581 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 585 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_DrivesPokemart:
# 586 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 587 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 588 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 589 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 590 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 591 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 592 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 593 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 594 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 595 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 596 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 597 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 598 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 599 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 600 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 601 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 602 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 603 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 604 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 605 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 606 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning::
# 610 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 611 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning_Text_0, MSGBOX_AUTOCLOSE
# 615 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 616 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 7
# 617 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Expert_M_Text_0:
# 172 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I still remember my GYM CHALLENGE,\n all those years ago…\l You did well to get this far.\p If you want, I can teach your\n POKéMON some moves to help you\l with the ELITE FOUR.$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline_Text_0:
# 188 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Okay.\n Good luck on your journey.$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_0:
# 197 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "What move do you want me\nto teach?$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_1:
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "PSYCHIC NOISE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_2:
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "EXPANDING FORCE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_3:
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "BREAKING SWIPE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_4:
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "SLUDGE WAVE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_5:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "SCORCHING SANDS$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_6:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POLLEN PUFF$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_7:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "ENERGY BALL$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_8:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "GUNK SHOT$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_9:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "METEOR BEAM$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_10:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "DRAGON PULSE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_11:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TELEPORT$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_12:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "HEAT WAVE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_13:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "RISING VOLTAGE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_14:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "GRASS KNOT$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_15:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "HYPER VOICE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_16:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "IRON HEAD$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_17:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POLTERGEIST$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_18:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "SWAGGER$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_19:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "FLATTER$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_20:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TAILWIND$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_21:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "MOONBLAST$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_22:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "BODY PRESS$"

MoveTutor_EventScript_PsychicNoiseTeach_Text_0:
# 255 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach PSYCHIC NOISE to?$"

MoveTutor_EventScript_ExpandingForceTeach_Text_0:
# 264 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach EXPANDING FORCE to?$"

MoveTutor_EventScript_BreakingSwipeTeach_Text_0:
# 273 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach BREAKING SWIPE to?$"

MoveTutor_EventScript_SludgeWaveTeach_Text_0:
# 282 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SLUDGE WAVE to?$"

MoveTutor_EventScript_ScorchingSandsTeach_Text_0:
# 291 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SCORCHING SANDS to?$"

MoveTutor_EventScript_PollenPuffTeach_Text_0:
# 300 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach POLLEN PUFF to?$"

MoveTutor_EventScript_EnergyBallTeach_Text_0:
# 309 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach ENERGY BALL to?$"

MoveTutor_EventScript_GunkShotTeach_Text_0:
# 318 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach GUNK SHOT to?$"

MoveTutor_EventScript_MeteorBeamTeach_Text_0:
# 327 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach METEOR BEAM to?$"

MoveTutor_EventScript_DragonPulseTeach_Text_0:
# 336 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach DRAGON PULSE to?$"

MoveTutor_EventScript_TeleportTeach_Text_0:
# 345 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach TELEPORT to?$"

MoveTutor_EventScript_HeatWaveTeach_Text_0:
# 354 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach BRAVE BIRD to?$"

MoveTutor_EventScript_RisingVoltageTeach_Text_0:
# 363 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach RISING VOLTAGE to?$"

MoveTutor_EventScript_GrassKnotTeach_Text_0:
# 372 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach GRASS KNOT to?$"

MoveTutor_EventScript_HyperVoiceTeach_Text_0:
# 381 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach HYPER VOICE to?$"

MoveTutor_EventScript_IronHeadTeach_Text_0:
# 390 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach IRON HEAD to?$"

MoveTutor_EventScript_PoltergeistTeach_Text_0:
# 399 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach POLTERGEIST to?$"

MoveTutor_EventScript_SwaggerTeach_Text_0:
# 408 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SWAGGER to?$"

MoveTutor_EventScript_FlatterTeach_Text_0:
# 417 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach FLATTER to?$"

MoveTutor_EventScript_TailwindTeach_Text_0:
# 426 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach TAILWIND to?$"

MoveTutor_EventScript_MoonblastTeach_Text_0:
# 435 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach MOONBLAST to?$"

MoveTutor_EventScript_BodyPressTeach_Text_0:
# 444 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach BODY PRESS to?$"

EverGrandeCity_PokemonLeague_1F_EventScript_Youngster_Text_0:
# 453 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I made it here, but the\n ELITE FOUR is way too strong!\p At least the first one is always\n really nice to me.$"

EverGrandeCity_PokemonLeague_1F_EventScript_Woman_Text_0:
# 461 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I've only made it past MISA.\n The second ELITE FOUR member just\l ignores me!\p She's always playing a game or\n reading a stupid book.\p I don't know how she beats me\n while being distracted like that…$"

EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0:
# 544 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I sell unique items.\n Take a look!$"

EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning_Text_0:
# 611 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}WARNING\p {COLOR BLUE}{SHADOW LIGHT_BLUE}Once you enter, there's no\n going back.\p Make sure you're ready.$"

EverGrandeCity_PokemonLeague_1F_Text_WhichPkmnDoYouWantToTeach::
# 621 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach {STR_VAR_1} to?$"
