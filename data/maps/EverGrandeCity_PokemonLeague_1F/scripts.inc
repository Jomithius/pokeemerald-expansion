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
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_1, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_2, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_3, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_4, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_5, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_6, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_7, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_8, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_9, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_10, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_11, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_12, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_13, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_14, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_15, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_16, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_17, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_18, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_19, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_20, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_21, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_Text_22
# 202 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	switch VAR_RESULT
# 203 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_3
# 205 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 1, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_4
# 207 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 2, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_5
# 209 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 3, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_6
# 211 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 4, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_7
# 213 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 5, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_8
# 215 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 6, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_9
# 217 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 7, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_10
# 219 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 8, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_11
# 221 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 9, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_12
# 223 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 10, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_13
# 225 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 11, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_14
# 227 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 12, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_15
# 229 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 13, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_16
# 231 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 14, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_17
# 233 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 15, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_18
# 235 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 16, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_19
# 237 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 17, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_20
# 239 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 18, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_21
# 241 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 19, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_22
# 243 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 20, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_23
# 245 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 21, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_24
# 247 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case MULTI_B_PRESSED, EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_25
# 250 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1:
	end

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_3:
# 204 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PsychicNoiseTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_4:
# 206 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_ExpandingForceTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_5:
# 208 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_BreakingSwipeTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_6:
# 210 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_SludgeWaveTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_7:
# 212 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_ScorchingSandsTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_8:
# 214 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PollenPuffTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_9:
# 216 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_EnergyBallTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_10:
# 218 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_GunkShotTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_11:
# 220 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_MeteorBeamTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_12:
# 222 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_DragonPulseTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_13:
# 224 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_TeleportTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_14:
# 226 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_HeatWaveTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_15:
# 228 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_RisingVoltageTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_16:
# 230 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_GrassKnotTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_17:
# 232 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_HyperVoiceTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_18:
# 234 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_IronHeadTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_19:
# 236 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_PoltergeistTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_20:
# 238 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_SwaggerTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_21:
# 240 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_FlatterTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_22:
# 242 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_TailwindTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_23:
# 244 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_MoonblastTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_24:
# 246 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto MoveTutor_EventScript_BodyPressTeach
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1

EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_25:
# 248 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorChoices_1


MoveTutor_EventScript_PsychicNoiseTeach::
# 256 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PsychicNoiseTeach_Text_0, MSGBOX_DEFAULT
# 257 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_NOISE
# 258 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 259 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 260 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_ExpandingForceTeach::
# 265 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_ExpandingForceTeach_Text_0, MSGBOX_DEFAULT
# 266 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPANDING_FORCE
# 267 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 268 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 269 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_BreakingSwipeTeach::
# 274 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_BreakingSwipeTeach_Text_0, MSGBOX_DEFAULT
# 275 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BREAKING_SWIPE
# 276 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 277 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 278 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_SludgeWaveTeach::
# 283 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_SludgeWaveTeach_Text_0, MSGBOX_DEFAULT
# 284 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SLUDGE_WAVE
# 285 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 286 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 287 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_ScorchingSandsTeach::
# 292 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_ScorchingSandsTeach_Text_0, MSGBOX_DEFAULT
# 293 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
# 294 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 295 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 296 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_PollenPuffTeach::
# 301 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PollenPuffTeach_Text_0, MSGBOX_DEFAULT
# 302 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
# 303 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 304 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 305 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_EnergyBallTeach::
# 310 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_EnergyBallTeach_Text_0, MSGBOX_DEFAULT
# 311 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ENERGY_BALL
# 312 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 313 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 314 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_GunkShotTeach::
# 319 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_GunkShotTeach_Text_0, MSGBOX_DEFAULT
# 320 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GUNK_SHOT
# 321 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 322 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 323 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_MeteorBeamTeach::
# 328 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_MeteorBeamTeach_Text_0, MSGBOX_DEFAULT
# 329 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
# 330 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 331 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 332 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_DragonPulseTeach::
# 337 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_DragonPulseTeach_Text_0, MSGBOX_DEFAULT
# 338 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_PULSE
# 339 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 340 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 341 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_TeleportTeach::
# 346 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_TeleportTeach_Text_0, MSGBOX_DEFAULT
# 347 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TELEPORT
# 348 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 349 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 350 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_HeatWaveTeach::
# 355 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_HeatWaveTeach_Text_0, MSGBOX_DEFAULT
# 356 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAT_WAVE
# 357 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 358 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 359 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_RisingVoltageTeach::
# 364 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_RisingVoltageTeach_Text_0, MSGBOX_DEFAULT
# 365 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_RISING_VOLTAGE
# 366 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 367 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 368 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_GrassKnotTeach::
# 373 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_GrassKnotTeach_Text_0, MSGBOX_DEFAULT
# 374 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
# 375 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 376 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 377 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_HyperVoiceTeach::
# 382 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_HyperVoiceTeach_Text_0, MSGBOX_DEFAULT
# 383 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
# 384 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 385 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 386 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_IronHeadTeach::
# 391 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_IronHeadTeach_Text_0, MSGBOX_DEFAULT
# 392 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_HEAD
# 393 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 394 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 395 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_PoltergeistTeach::
# 400 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PoltergeistTeach_Text_0, MSGBOX_DEFAULT
# 401 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POLTERGEIST
# 402 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 403 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 404 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_SwaggerTeach::
# 409 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_SwaggerTeach_Text_0, MSGBOX_DEFAULT
# 410 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 411 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 412 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 413 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_FlatterTeach::
# 418 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_FlatterTeach_Text_0, MSGBOX_DEFAULT
# 419 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FLATTER
# 420 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 421 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 422 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_TailwindTeach::
# 427 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_TailwindTeach_Text_0, MSGBOX_DEFAULT
# 428 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TAILWIND
# 429 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 430 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 431 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_MoonblastTeach::
# 436 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_MoonblastTeach_Text_0, MSGBOX_DEFAULT
# 437 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MOONBLAST
# 438 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 439 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 440 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


MoveTutor_EventScript_BodyPressTeach::
# 445 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox MoveTutor_EventScript_BodyPressTeach_Text_0, MSGBOX_DEFAULT
# 446 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_PRESS
# 447 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 448 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 449 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Youngster::
# 454 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Woman::
# 462 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Woman_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_MegaStoneClerk::
# 473 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 474 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 475 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 476 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 477 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_MegaStonePokemart
# 478 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 479 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 483 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MegaStonePokemart:
# 484 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 485 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 486 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 487 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 488 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 489 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 490 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 491 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 492 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GENGARITE
# 493 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 494 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PINSIRITE
# 495 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 496 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 497 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 498 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEELIXITE
# 499 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCIZORITE
# 500 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HERACRONITE
# 501 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 502 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TYRANITARITE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_MegaStoneClerk2::
# 506 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 507 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 508 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 509 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 510 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_MegaStonePokemart2
# 511 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 512 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 516 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MegaStonePokemart2:
# 517 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 518 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 519 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 520 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 521 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SABLENITE
# 522 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAWILITE
# 523 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AGGRONITE
# 524 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 525 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MANECTITE
# 526 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 527 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 528 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 529 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BANETTITE
# 530 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABSOLITE
# 531 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GLALITITE
# 532 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 533 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 534 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 535 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 536 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 537 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABOMASITE
# 538 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GALLADITE
# 539 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AUDINITE
# 540 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 541 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 542 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 543 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 544 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 545 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 546 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 547 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 548 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GENGARITE
# 549 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 550 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PINSIRITE
# 551 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 552 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 553 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 554 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEELIXITE
# 555 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SCIZORITE
# 556 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HERACRONITE
# 557 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 558 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TYRANITARITE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk::
# 562 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 563 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 564 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0
# 566 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 567 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_PlatesPokemart
# 568 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 569 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 573 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_PlatesPokemart:
# 574 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 575 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 576 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 577 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 578 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 579 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 580 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 581 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 582 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 583 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 584 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 585 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 586 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 587 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 588 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 589 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 590 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_DrivesClerk::
# 594 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 595 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 596 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0
# 598 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 599 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_DrivesPokemart
# 600 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 601 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


	.align 2
# 605 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_DrivesPokemart:
# 606 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 607 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 608 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 609 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 610 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 611 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 612 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 613 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 614 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 615 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 616 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 617 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 618 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 619 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 620 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 621 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 622 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 623 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 624 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 625 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 626 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning::
# 630 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 631 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning_Text_0, MSGBOX_AUTOCLOSE
# 635 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 636 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 7
# 637 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
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
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "BODY PRESS$"

MoveTutor_EventScript_PsychicNoiseTeach_Text_0:
# 256 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach PSYCHIC NOISE to?$"

MoveTutor_EventScript_ExpandingForceTeach_Text_0:
# 265 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach EXPANDING FORCE to?$"

MoveTutor_EventScript_BreakingSwipeTeach_Text_0:
# 274 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach BREAKING SWIPE to?$"

MoveTutor_EventScript_SludgeWaveTeach_Text_0:
# 283 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SLUDGE WAVE to?$"

MoveTutor_EventScript_ScorchingSandsTeach_Text_0:
# 292 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SCORCHING SANDS to?$"

MoveTutor_EventScript_PollenPuffTeach_Text_0:
# 301 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach POLLEN PUFF to?$"

MoveTutor_EventScript_EnergyBallTeach_Text_0:
# 310 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach ENERGY BALL to?$"

MoveTutor_EventScript_GunkShotTeach_Text_0:
# 319 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach GUNK SHOT to?$"

MoveTutor_EventScript_MeteorBeamTeach_Text_0:
# 328 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach METEOR BEAM to?$"

MoveTutor_EventScript_DragonPulseTeach_Text_0:
# 337 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach DRAGON PULSE to?$"

MoveTutor_EventScript_TeleportTeach_Text_0:
# 346 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach TELEPORT to?$"

MoveTutor_EventScript_HeatWaveTeach_Text_0:
# 355 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach BRAVE BIRD to?$"

MoveTutor_EventScript_RisingVoltageTeach_Text_0:
# 364 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach RISING VOLTAGE to?$"

MoveTutor_EventScript_GrassKnotTeach_Text_0:
# 373 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach GRASS KNOT to?$"

MoveTutor_EventScript_HyperVoiceTeach_Text_0:
# 382 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach HYPER VOICE to?$"

MoveTutor_EventScript_IronHeadTeach_Text_0:
# 391 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach IRON HEAD to?$"

MoveTutor_EventScript_PoltergeistTeach_Text_0:
# 400 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach POLTERGEIST to?$"

MoveTutor_EventScript_SwaggerTeach_Text_0:
# 409 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach SWAGGER to?$"

MoveTutor_EventScript_FlatterTeach_Text_0:
# 418 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach FLATTER to?$"

MoveTutor_EventScript_TailwindTeach_Text_0:
# 427 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach TAILWIND to?$"

MoveTutor_EventScript_MoonblastTeach_Text_0:
# 436 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach MOONBLAST to?$"

MoveTutor_EventScript_BodyPressTeach_Text_0:
# 445 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach BODY PRESS to?$"

EverGrandeCity_PokemonLeague_1F_EventScript_Youngster_Text_0:
# 454 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I made it here, but the\n ELITE FOUR is way too strong!\p At least the first one is always\n really nice to me.$"

EverGrandeCity_PokemonLeague_1F_EventScript_Woman_Text_0:
# 462 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I've only made it past MISA.\n The second ELITE FOUR member just\l ignores me!\p She's always playing a game or\n reading a stupid book.\p I don't know how she beats me\n while being distracted like that…$"

EverGrandeCity_PokemonLeague_1F_EventScript_PlatesClerk_Text_0:
# 564 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "I sell unique items.\n Take a look!$"

EverGrandeCity_PokemonLeague_1F_EventScript_FinalWarning_Text_0:
# 631 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}WARNING\p {COLOR BLUE}{SHADOW LIGHT_BLUE}Once you enter, there's no\n going back.\p Make sure you're ready.$"

EverGrandeCity_PokemonLeague_1F_Text_WhichPkmnDoYouWantToTeach::
# 641 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach {STR_VAR_1} to?$"
