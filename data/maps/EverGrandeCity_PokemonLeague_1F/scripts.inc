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
	.2byte ITEM_MAX_REVIVE
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_LURE
# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_PP_MAX
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_ELIXIR
# 56 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemartlistend
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ Its assumed the player has the remaining badges
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 62 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_SYS_BEFORE_ELITE_4_REMATCH, EverGrandeCity_PokemonLeague_1F_EventScript_TheEliteFourIsntHere
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 77 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 80 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_1
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_2
# 83 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 84 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 85 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
# 89 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 96 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 97 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
# 98 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 99 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 107 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 108 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 109 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ custom
# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_TheEliteFourIsntHere::
# 115 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 116 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_TheEliteFourIsntHere, MSGBOX_DEFAULT
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 122 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 123 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 128 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 129 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 134 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 135 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
# 137 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 138 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 139 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 140 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 141 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
# 142 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 143 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 145 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 146 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
# 147 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those TRAINERS\n"
# 148 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "who have collected all the GYM BADGES\l"
# 149 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "are permitted to enter.\p"
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER, let us confirm that you have\n"
# 151 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "all the GYM BADGES.$"
# 152 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 153 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
# 154 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the BADGES.\p"
# 155 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "If you're bound for the POKéMON\n"
# 156 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "LEAGUE, you must return with them.$"
# 157 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 158 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_GoForth:
# 159 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER! Believe in yourself and your\n"
# 160 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POKéMON, and go forth!$"
# 161 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 162 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_TheEliteFourIsntHere:
# 163 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "CHAMPION! The ELITE FOUR isn't here\n"
# 164 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "right now.\p"
# 165 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You'll have to come back later.$"

EverGrandeCity_PokemonLeague_1F_EventScript_Expert_M::
# 170 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 171 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 172 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_SYS_TALKED_TO_E4_TUTOR, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices
# 173 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Expert_M_Text_0, MSGBOX_YESNO
# 179 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 180 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_SYS_TALKED_TO_E4_TUTOR
# 181 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices
# 182 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 183 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline::
# 188 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 189 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 191 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 192 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices::
# 197 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_0, MSGBOX_DEFAULT
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_1, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_2, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_3, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_4, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_5, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_6, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_7, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_8, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_9, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_10, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_11, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_12, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_13, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_14, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_15, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_16, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_17, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_18, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_19, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_20, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_21, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_22, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_23, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_24, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_25
# 203 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	switch VAR_RESULT
# 204 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_3
# 206 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 1, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_4
# 208 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 2, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_5
# 210 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 3, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_6
# 212 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 4, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_7
# 214 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 5, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_8
# 216 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 6, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_9
# 218 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 7, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_10
# 220 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 8, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_11
# 222 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 9, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_12
# 224 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 10, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_13
# 226 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 11, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_14
# 228 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 12, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_15
# 230 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 13, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_16
# 232 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 14, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_17
# 234 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 15, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_18
# 236 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 16, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_19
# 238 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 17, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_20
# 240 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 18, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_21
# 242 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 19, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_22
# 244 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 20, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_23
# 246 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 21, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_24
# 248 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 22, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_25
# 250 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 23, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_26
# 252 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 24, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_27
# 254 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case MULTI_B_PRESSED, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_28
# 257 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1:
	end

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_3:
# 205 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PsychicNoiseTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_4:
# 207 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_ExpandingForceTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_5:
# 209 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_BreakingSwipeTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_6:
# 211 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_SludgeWaveTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_7:
# 213 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_ScorchingSandsTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_8:
# 215 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PollenPuffTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_9:
# 217 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_EnergyBallTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_10:
# 219 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_GunkShotTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_11:
# 221 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_MeteorBeamTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_12:
# 223 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_DragonPulseTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_13:
# 225 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_TeleportTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_14:
# 227 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_HeatWaveTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_15:
# 229 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_RisingVoltageTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_16:
# 231 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_GrassKnotTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_17:
# 233 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_HyperVoiceTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_18:
# 235 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_IronHeadTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_19:
# 237 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PoltergeistTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_20:
# 239 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_SwaggerTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_21:
# 241 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_FlatterTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_22:
# 243 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_TailwindTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_23:
# 245 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_MoonblastTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_24:
# 247 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_StickyWebTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_25:
# 249 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PowerGemTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_26:
# 251 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_GrassyGlideTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_27:
# 253 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_AirSlashTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_28:
# 255 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1


MoveTutor_EventScript_PsychicNoiseTeach::
# 263 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PsychicNoiseTeach_Text_0, MSGBOX_DEFAULT
# 264 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_NOISE
# 265 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 266 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 267 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_ExpandingForceTeach::
# 272 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_ExpandingForceTeach_Text_0, MSGBOX_DEFAULT
# 273 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPANDING_FORCE
# 274 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 275 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 276 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_BreakingSwipeTeach::
# 281 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_BreakingSwipeTeach_Text_0, MSGBOX_DEFAULT
# 282 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BREAKING_SWIPE
# 283 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 284 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 285 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_SludgeWaveTeach::
# 290 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_SludgeWaveTeach_Text_0, MSGBOX_DEFAULT
# 291 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SLUDGE_WAVE
# 292 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 293 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 294 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_ScorchingSandsTeach::
# 299 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_ScorchingSandsTeach_Text_0, MSGBOX_DEFAULT
# 300 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
# 301 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 302 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 303 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_PollenPuffTeach::
# 308 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PollenPuffTeach_Text_0, MSGBOX_DEFAULT
# 309 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
# 310 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 311 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 312 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_EnergyBallTeach::
# 317 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_EnergyBallTeach_Text_0, MSGBOX_DEFAULT
# 318 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ENERGY_BALL
# 319 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 320 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 321 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_GunkShotTeach::
# 326 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_GunkShotTeach_Text_0, MSGBOX_DEFAULT
# 327 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GUNK_SHOT
# 328 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 329 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 330 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_MeteorBeamTeach::
# 335 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_MeteorBeamTeach_Text_0, MSGBOX_DEFAULT
# 336 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
# 337 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 338 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 339 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_DragonPulseTeach::
# 344 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_DragonPulseTeach_Text_0, MSGBOX_DEFAULT
# 345 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_PULSE
# 346 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 347 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 348 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_TeleportTeach::
# 353 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_TeleportTeach_Text_0, MSGBOX_DEFAULT
# 354 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TELEPORT
# 355 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 356 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 357 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_HeatWaveTeach::
# 362 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_HeatWaveTeach_Text_0, MSGBOX_DEFAULT
# 363 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAT_WAVE
# 364 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 365 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 366 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_RisingVoltageTeach::
# 371 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_RisingVoltageTeach_Text_0, MSGBOX_DEFAULT
# 372 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_RISING_VOLTAGE
# 373 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 374 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 375 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_GrassKnotTeach::
# 380 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_GrassKnotTeach_Text_0, MSGBOX_DEFAULT
# 381 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
# 382 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 383 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 384 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_HyperVoiceTeach::
# 389 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_HyperVoiceTeach_Text_0, MSGBOX_DEFAULT
# 390 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
# 391 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 392 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 393 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_IronHeadTeach::
# 398 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_IronHeadTeach_Text_0, MSGBOX_DEFAULT
# 399 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_HEAD
# 400 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 401 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 402 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_PoltergeistTeach::
# 407 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PoltergeistTeach_Text_0, MSGBOX_DEFAULT
# 408 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POLTERGEIST
# 409 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 410 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 411 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_SwaggerTeach::
# 416 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_SwaggerTeach_Text_0, MSGBOX_DEFAULT
# 417 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 418 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 419 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 420 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_FlatterTeach::
# 425 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_FlatterTeach_Text_0, MSGBOX_DEFAULT
# 426 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FLATTER
# 427 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 428 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 429 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_TailwindTeach::
# 434 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_TailwindTeach_Text_0, MSGBOX_DEFAULT
# 435 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TAILWIND
# 436 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 437 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 438 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_MoonblastTeach::
# 443 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_MoonblastTeach_Text_0, MSGBOX_DEFAULT
# 444 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MOONBLAST
# 445 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 446 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 447 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_StickyWebTeach::
# 452 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_StickyWebTeach_Text_0, MSGBOX_DEFAULT
# 453 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_STICKY_WEB
# 454 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 455 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 456 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_PowerGemTeach::
# 461 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PowerGemTeach_Text_0, MSGBOX_DEFAULT
# 462 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_GEM
# 463 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 464 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 465 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_GrassyGlideTeach::
# 470 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_GrassyGlideTeach_Text_0, MSGBOX_DEFAULT
# 471 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASSY_GLIDE
# 472 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 473 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 474 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_AirSlashTeach::
# 479 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_AirSlashTeach_Text_0, MSGBOX_DEFAULT
# 480 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_AIR_SLASH
# 481 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 482 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 483 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Youngster::
# 489 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Woman::
# 497 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Woman_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_MegaStoneClerk2::
# 508 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 509 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 510 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 511 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 512 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_MegaStonePokemart2
# 513 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 514 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 518 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MegaStonePokemart2:
# 519 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 520 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 521 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 522 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 523 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SABLENITE
# 524 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAWILITE
# 525 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AGGRONITE
# 526 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 527 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MANECTITE
# 528 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 529 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 530 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 531 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BANETTITE
# 532 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABSOLITE
# 533 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GLALITITE
# 534 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 535 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 536 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 537 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 538 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 539 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABOMASITE
# 540 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GALLADITE
# 541 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AUDINITE
# 542 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 543 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 544 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 545 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 546 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 547 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 548 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 549 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 550 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GENGARITE
# 551 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 552 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PINSIRITE
# 553 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 554 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 555 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 556 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEELIXITE
# 557 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCIZORITE
# 558 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HERACRONITE
# 559 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 560 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 561 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HAWLUCHITE
# 562 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_VICTREEBITE
# 563 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MALAMITE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk::
# 567 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 568 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 569 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0
# 571 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 572 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_PlatesPokemart
# 573 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 574 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 578 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_PlatesPokemart:
# 579 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 580 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 581 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 582 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 583 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 584 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 585 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 586 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 587 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 588 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 589 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 590 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 591 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 592 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 593 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 594 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 595 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_DrivesClerk::
# 599 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 600 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 601 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0
# 603 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 604 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_DrivesPokemart
# 605 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 606 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 610 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_DrivesPokemart:
# 611 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 612 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 613 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 614 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 615 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 616 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 617 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 618 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 619 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 620 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 621 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 622 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 623 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 624 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 625 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 626 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 627 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 628 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 629 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 630 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 631 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning::
# 635 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 636 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning_Text_0, MSGBOX_AUTOCLOSE
# 640 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 641 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 7
# 642 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Expert_M_Text_0:
# 173 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I still remember my GYM CHALLENGE,\n all those years ago…\l You did well to get this far.\p If you want, I can teach your\n POKéMON some moves to help you\l with the ELITE FOUR.$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline_Text_0:
# 189 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Okay.\n Good luck on your journey.$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_0:
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "What move do you want me\nto teach?$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_1:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "PSYCHIC NOISE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_2:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "EXPANDING FORCE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_3:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "BREAKING SWIPE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_4:
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "SLUDGE WAVE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_5:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "SCORCHING SANDS$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_6:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POLLEN PUFF$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_7:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "ENERGY BALL$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_8:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "GUNK SHOT$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_9:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "METEOR BEAM$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_10:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "DRAGON PULSE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_11:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TELEPORT$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_12:
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "HEAT WAVE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_13:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "RISING VOLTAGE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_14:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "GRASS KNOT$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_15:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "HYPER VOICE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_16:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "IRON HEAD$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_17:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POLTERGEIST$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_18:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "SWAGGER$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_19:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "FLATTER$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_20:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TAILWIND$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_21:
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "MOONBLAST$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_22:
# 202 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "STICKY WEB$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_23:
# 202 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POWER GEM$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_24:
# 202 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "GRASSY GLIDE$"

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_25:
# 202 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "AIR SLASH$"

MoveTutor_EventScript_PsychicNoiseTeach_Text_0:
# 263 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach PSYCHIC NOISE to?$"

MoveTutor_EventScript_ExpandingForceTeach_Text_0:
# 272 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach EXPANDING FORCE to?$"

MoveTutor_EventScript_BreakingSwipeTeach_Text_0:
# 281 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach BREAKING SWIPE to?$"

MoveTutor_EventScript_SludgeWaveTeach_Text_0:
# 290 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SLUDGE WAVE to?$"

MoveTutor_EventScript_ScorchingSandsTeach_Text_0:
# 299 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SCORCHING SANDS to?$"

MoveTutor_EventScript_PollenPuffTeach_Text_0:
# 308 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach POLLEN PUFF to?$"

MoveTutor_EventScript_EnergyBallTeach_Text_0:
# 317 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach ENERGY BALL to?$"

MoveTutor_EventScript_GunkShotTeach_Text_0:
# 326 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach GUNK SHOT to?$"

MoveTutor_EventScript_MeteorBeamTeach_Text_0:
# 335 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach METEOR BEAM to?$"

MoveTutor_EventScript_DragonPulseTeach_Text_0:
# 344 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach DRAGON PULSE to?$"

MoveTutor_EventScript_TeleportTeach_Text_0:
# 353 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach TELEPORT to?$"

MoveTutor_EventScript_HeatWaveTeach_Text_0:
# 362 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach HEAT WAVE to?$"

MoveTutor_EventScript_RisingVoltageTeach_Text_0:
# 371 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach RISING VOLTAGE to?$"

MoveTutor_EventScript_GrassKnotTeach_Text_0:
# 380 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach GRASS KNOT to?$"

MoveTutor_EventScript_HyperVoiceTeach_Text_0:
# 389 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach HYPER VOICE to?$"

MoveTutor_EventScript_IronHeadTeach_Text_0:
# 398 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach IRON HEAD to?$"

MoveTutor_EventScript_PoltergeistTeach_Text_0:
# 407 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach POLTERGEIST to?$"

MoveTutor_EventScript_SwaggerTeach_Text_0:
# 416 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SWAGGER to?$"

MoveTutor_EventScript_FlatterTeach_Text_0:
# 425 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach FLATTER to?$"

MoveTutor_EventScript_TailwindTeach_Text_0:
# 434 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach TAILWIND to?$"

MoveTutor_EventScript_MoonblastTeach_Text_0:
# 443 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach MOONBLAST to?$"

MoveTutor_EventScript_StickyWebTeach_Text_0:
# 452 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach STICKY WEB to?$"

MoveTutor_EventScript_PowerGemTeach_Text_0:
# 461 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach POWER GEM to?$"

MoveTutor_EventScript_GrassyGlideTeach_Text_0:
# 470 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach GRASSY GLIDE to?$"

MoveTutor_EventScript_AirSlashTeach_Text_0:
# 479 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach AIR SLASH to?$"

EverGrandeCity_PokemonLeague_1F_EventScript_Youngster_Text_0:
# 489 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I made it here, but the\n ELITE FOUR is way too strong!\p At least the first one is always\n really nice to me.$"

EverGrandeCity_PokemonLeague_1F_EventScript_Woman_Text_0:
# 497 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I've only made it past MISA.\n The second ELITE FOUR member just\l ignores me!\p She's always playing a game or\n reading a stupid book.\p I don't know how she beats me\n while being distracted like that…$"

EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0:
# 569 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I sell unique items.\n Take a look!$"

EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning_Text_0:
# 636 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}WARNING\p {COLOR BLUE}{SHADOW LIGHT_BLUE}Once you enter, there's no\n going back.\p Make sure you're ready.$"

EverGrandeCity_PokemonLeague_1F_Text_WhichPkmnDoYouWantToTeach::
# 646 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach {STR_VAR_1} to?$"
