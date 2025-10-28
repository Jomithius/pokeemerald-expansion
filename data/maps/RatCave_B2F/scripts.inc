RatCave_B2F_MapScripts::
# 2 "data/maps/RatCave_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RatCave_B2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RatCave_B2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/RatCave_B2F/scripts.pory"
	map_script_2 VAR_RAT_CAVE_STATE, 3, Ratduardo1_BattleTrigger
	.2byte 0


Petalburg_RatCave_Rock::
# 8 "data/maps/RatCave_B2F/scripts.pory"
	lock
# 9 "data/maps/RatCave_B2F/scripts.pory"
	msgbox Petalburg_RatCave_Rock_Text_0
# 11 "data/maps/RatCave_B2F/scripts.pory"
	waitmessage
# 12 "data/maps/RatCave_B2F/scripts.pory"
	release
	end


Ratduardo1_BattleTrigger::
# 17 "data/maps/RatCave_B2F/scripts.pory"
	lockall
# 18 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 5
# 19 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave1
# 20 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 21 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 22 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave2
# 23 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 24 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 25 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave3
# 26 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 27 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 28 "data/maps/RatCave_B2F/scripts.pory"
	addobject 7
# 29 "data/maps/RatCave_B2F/scripts.pory"
	applymovement 7, RattataRun
# 30 "data/maps/RatCave_B2F/scripts.pory"
	delay 15
# 31 "data/maps/RatCave_B2F/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 32 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave4
# 33 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 34 "data/maps/RatCave_B2F/scripts.pory"
	delay 120
# 35 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave5
# 36 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 38 "data/maps/RatCave_B2F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 39 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave4
# 40 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/RatCave_B2F/scripts.pory"
	waitmoncry
# 42 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 43 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 7
# 44 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 45 "data/maps/RatCave_B2F/scripts.pory"
	delay 10
# 46 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 47 "data/maps/RatCave_B2F/scripts.pory"
	addobject 5
# 48 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 49 "data/maps/RatCave_B2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_1, Ratduardo_Outro
# 50 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 51 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 5
# 52 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 53 "data/maps/RatCave_B2F/scripts.pory"
	msgbox Ratduardo1_BattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/maps/RatCave_B2F/scripts.pory"
	waitmessage
# 56 "data/maps/RatCave_B2F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_1
# 57 "data/maps/RatCave_B2F/scripts.pory"
	call RatCaveShake
# 58 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 4
# 59 "data/maps/RatCave_B2F/scripts.pory"
	releaseall
	end


# 63 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave1:
# 64 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 64 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 64 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 64 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 65 "data/maps/RatCave_B2F/scripts.pory"
	walk_in_place_fast_left
	step_end

# 68 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave2:
# 69 "data/maps/RatCave_B2F/scripts.pory"
	walk_in_place_fast_right
	step_end

# 72 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave3:
# 73 "data/maps/RatCave_B2F/scripts.pory"
	walk_in_place_up
	step_end

# 76 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave4:
# 77 "data/maps/RatCave_B2F/scripts.pory"
	emote_exclamation_mark
# 78 "data/maps/RatCave_B2F/scripts.pory"
	face_down
	step_end

# 81 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave5:
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
	step_end

# 85 "data/maps/RatCave_B2F/scripts.pory"
RattataRun:
# 86 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 86 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 86 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 86 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 86 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 86 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
	step_end

RatCaveShake::
# 94 "data/maps/RatCave_B2F/scripts.pory"
	delay 30
# 95 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8004, 2
# 96 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8005, 6
# 97 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8006, 8
# 98 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8007, 4
# 99 "data/maps/RatCave_B2F/scripts.pory"
	special ShakeCamera
# 100 "data/maps/RatCave_B2F/scripts.pory"
	waitstate
# 101 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 102 "data/maps/RatCave_B2F/scripts.pory"
	special ShakeCamera
# 103 "data/maps/RatCave_B2F/scripts.pory"
	waitstate
# 104 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
	return


Petalburg_RatCave_Rock_Text_0:
# 9 "data/maps/RatCave_B2F/scripts.pory"
	.string "Doesn't look like the cave in \n can be cleared anytime soon.$"

Ratduardo1_BattleTrigger_Text_0:
# 53 "data/maps/RatCave_B2F/scripts.pory"
	.string "RATDUARDO's voice echoes:\p Don't… try… to follow…$"

Ratduardo_Outro::
# 89 "data/maps/RatCave_B2F/scripts.pory"
	.string "…$"
