RatCave_B2F_MapScripts::
	.byte 0


Petalburg_RatCave_Rock::
# 4 "data/maps/RatCave_B2F/scripts.pory"
	lock
# 5 "data/maps/RatCave_B2F/scripts.pory"
	msgbox Petalburg_RatCave_Rock_Text_0
# 7 "data/maps/RatCave_B2F/scripts.pory"
	waitmessage
# 8 "data/maps/RatCave_B2F/scripts.pory"
	release
	return


RatCave_B2F_EscapeRope::
# 13 "data/maps/RatCave_B2F/scripts.pory"
	lockall
# 14 "data/maps/RatCave_B2F/scripts.pory"
	setflag FLAG_ITEM_RAT_CAVE_B2F_ESCAPE_ROPE
# 15 "data/maps/RatCave_B2F/scripts.pory"
	finditem ITEM_ESCAPE_ROPE, 1
# 16 "data/maps/RatCave_B2F/scripts.pory"
	waitmessage
# 17 "data/maps/RatCave_B2F/scripts.pory"
	releaseall
	return


Ratduardo1_BattleTrigger::
# 21 "data/maps/RatCave_B2F/scripts.pory"
	lockall
# 22 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 5
# 23 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave1
# 24 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 26 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave2
# 27 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 29 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave3
# 30 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 32 "data/maps/RatCave_B2F/scripts.pory"
	applymovement 7, RattataRun
# 33 "data/maps/RatCave_B2F/scripts.pory"
	delay 15
# 34 "data/maps/RatCave_B2F/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 35 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave4
# 36 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/RatCave_B2F/scripts.pory"
	delay 120
# 38 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave5
# 39 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 41 "data/maps/RatCave_B2F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 42 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave4
# 43 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 45 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 7
# 46 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 47 "data/maps/RatCave_B2F/scripts.pory"
	delay 10
# 48 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 49 "data/maps/RatCave_B2F/scripts.pory"
	addobject 5
# 50 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 51 "data/maps/RatCave_B2F/scripts.pory"
	call RatCave_B2F_EventScript_RatduardoBattle
# 52 "data/maps/RatCave_B2F/scripts.pory"
	call Ratduardo1_BattleOver
# 53 "data/maps/RatCave_B2F/scripts.pory"
	call RatCaveShake
# 54 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 1
# 55 "data/maps/RatCave_B2F/scripts.pory"
	releaseall
	return


# 59 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave1:
# 60 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 60 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 60 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 60 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 61 "data/maps/RatCave_B2F/scripts.pory"
	face_left
	step_end

# 64 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave2:
# 65 "data/maps/RatCave_B2F/scripts.pory"
	face_right
	step_end

# 68 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave3:
# 69 "data/maps/RatCave_B2F/scripts.pory"
	face_up
	step_end

# 72 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave4:
# 73 "data/maps/RatCave_B2F/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/RatCave_B2F/scripts.pory"
	face_down
	step_end

# 77 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave5:
# 78 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 78 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 78 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
	step_end

# 81 "data/maps/RatCave_B2F/scripts.pory"
RattataRun:
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 82 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
	step_end

RatCave_B2F_EventScript_RatduardoBattle::
# 86 "data/maps/RatCave_B2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_1, Ratduardo_Outro
# 87 "data/maps/RatCave_B2F/scripts.pory"
	lockall
	return


Ratduardo1_BattleOver::
# 96 "data/maps/RatCave_B2F/scripts.pory"
	lockall
# 97 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 98 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 5
# 99 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 100 "data/maps/RatCave_B2F/scripts.pory"
	msgbox Ratduardo1_BattleOver_Text_0, MSGBOX_AUTOCLOSE
# 102 "data/maps/RatCave_B2F/scripts.pory"
	waitmessage
# 103 "data/maps/RatCave_B2F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_1
	return


RatCaveShake::
# 108 "data/maps/RatCave_B2F/scripts.pory"
	delay 30
# 109 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8004, 2
# 110 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8005, 6
# 111 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8006, 8
# 112 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8007, 4
# 113 "data/maps/RatCave_B2F/scripts.pory"
	special ShakeCamera
# 114 "data/maps/RatCave_B2F/scripts.pory"
	waitstate
# 115 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 116 "data/maps/RatCave_B2F/scripts.pory"
	special ShakeCamera
# 117 "data/maps/RatCave_B2F/scripts.pory"
	waitstate
# 118 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
	return


Petalburg_RatCave_Rock_Text_0:
# 5 "data/maps/RatCave_B2F/scripts.pory"
	.string "Doesn't look like the cave in \n can be cleared anytime soon.$"

Ratduardo1_BattleOver_Text_0:
# 100 "data/maps/RatCave_B2F/scripts.pory"
	.string "RATDUARDO's voice echoes:\p Don't... try.. to follow...$"

Ratduardo_Outro::
# 91 "data/maps/RatCave_B2F/scripts.pory"
	.string "...$"
