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
	end


Ratduardo1_BattleTrigger::
# 13 "data/maps/RatCave_B2F/scripts.pory"
	lockall
# 14 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 5
# 15 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave1
# 16 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 17 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 18 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave2
# 19 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 21 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave3
# 22 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 24 "data/maps/RatCave_B2F/scripts.pory"
	applymovement 7, RattataRun
# 25 "data/maps/RatCave_B2F/scripts.pory"
	delay 15
# 26 "data/maps/RatCave_B2F/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 27 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave4
# 28 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/RatCave_B2F/scripts.pory"
	delay 120
# 30 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave5
# 31 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 32 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 33 "data/maps/RatCave_B2F/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 34 "data/maps/RatCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRatCave4
# 35 "data/maps/RatCave_B2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 37 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 7
# 38 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 39 "data/maps/RatCave_B2F/scripts.pory"
	delay 10
# 40 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 41 "data/maps/RatCave_B2F/scripts.pory"
	addobject 5
# 42 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 43 "data/maps/RatCave_B2F/scripts.pory"
	call RatCave_B2F_EventScript_RatduardoBattle
# 44 "data/maps/RatCave_B2F/scripts.pory"
	call Ratduardo1_BattleOver
# 45 "data/maps/RatCave_B2F/scripts.pory"
	call RatCaveShake
# 46 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 4
# 47 "data/maps/RatCave_B2F/scripts.pory"
	releaseall
	end


# 51 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave1:
# 52 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 52 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 52 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 52 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 53 "data/maps/RatCave_B2F/scripts.pory"
	face_left
	step_end

# 56 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave2:
# 57 "data/maps/RatCave_B2F/scripts.pory"
	face_right
	step_end

# 60 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave3:
# 61 "data/maps/RatCave_B2F/scripts.pory"
	face_up
	step_end

# 64 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave4:
# 65 "data/maps/RatCave_B2F/scripts.pory"
	emote_exclamation_mark
# 66 "data/maps/RatCave_B2F/scripts.pory"
	face_down
	step_end

# 69 "data/maps/RatCave_B2F/scripts.pory"
PlayerRatCave5:
# 70 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 70 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
# 70 "data/maps/RatCave_B2F/scripts.pory"
	walk_up
	step_end

# 73 "data/maps/RatCave_B2F/scripts.pory"
RattataRun:
# 74 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 74 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 74 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 74 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 74 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
# 74 "data/maps/RatCave_B2F/scripts.pory"
	walk_fast_left
	step_end

RatCave_B2F_EventScript_RatduardoBattle::
# 78 "data/maps/RatCave_B2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RATDUARDO_1, Ratduardo_Outro
# 79 "data/maps/RatCave_B2F/scripts.pory"
	lockall
	return


Ratduardo1_BattleOver::
# 88 "data/maps/RatCave_B2F/scripts.pory"
	lockall
# 89 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 90 "data/maps/RatCave_B2F/scripts.pory"
	removeobject 5
# 91 "data/maps/RatCave_B2F/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 92 "data/maps/RatCave_B2F/scripts.pory"
	msgbox Ratduardo1_BattleOver_Text_0, MSGBOX_AUTOCLOSE
# 94 "data/maps/RatCave_B2F/scripts.pory"
	waitmessage
# 95 "data/maps/RatCave_B2F/scripts.pory"
	setflag FLAG_RATDUARDO_RAT_CAVE_1
	return


RatCaveShake::
# 100 "data/maps/RatCave_B2F/scripts.pory"
	delay 30
# 101 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8004, 2
# 102 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8005, 6
# 103 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8006, 8
# 104 "data/maps/RatCave_B2F/scripts.pory"
	setvar VAR_0x8007, 4
# 105 "data/maps/RatCave_B2F/scripts.pory"
	special ShakeCamera
# 106 "data/maps/RatCave_B2F/scripts.pory"
	waitstate
# 107 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
# 108 "data/maps/RatCave_B2F/scripts.pory"
	special ShakeCamera
# 109 "data/maps/RatCave_B2F/scripts.pory"
	waitstate
# 110 "data/maps/RatCave_B2F/scripts.pory"
	delay 60
	return


Petalburg_RatCave_Rock_Text_0:
# 5 "data/maps/RatCave_B2F/scripts.pory"
	.string "Doesn't look like the cave in \n can be cleared anytime soon.$"

Ratduardo1_BattleOver_Text_0:
# 92 "data/maps/RatCave_B2F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE} RATDUARDO's voice echoes:\p {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Don't... try.. to follow...$"

Ratduardo_Outro::
# 83 "data/maps/RatCave_B2F/scripts.pory"
	.string "...$"
