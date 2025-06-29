TheUnder_House_MapScripts::
# 2 "data/maps/TheUnder_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TheUnder_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TheUnder_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/TheUnder_House/scripts.pory"
	map_script_2 VAR_RAT_CAVE_STATE, 10, TheUnder_House_PlayerAwakens
	.2byte 0


TheUnder_House_Eventscript_BedLeft::
# 6 "data/maps/TheUnder_House/scripts.pory"
	lock
# 7 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Text_TakeARest, MSGBOX_YESNO
# 8 "data/maps/TheUnder_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_House_Eventscript_BedLeft_2
# 18 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Eventscript_BedLeft_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 20 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 21 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
TheUnder_House_Eventscript_BedLeft_1:
# 23 "data/maps/TheUnder_House/scripts.pory"
	release
	end

TheUnder_House_Eventscript_BedLeft_2:
# 9 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheUnder_House_Movement_LayInBedLeft
# 10 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
# 11 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Movement_FallIntoSlumber, MSGBOX_DEFAULT
# 12 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 13 "data/maps/TheUnder_House/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 14 "data/maps/TheUnder_House/scripts.pory"
	call TheUnder_House_OutOfCenterPartyHeal
# 15 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 2
	goto TheUnder_House_Eventscript_BedLeft_1


TheUnder_House_Eventscript_BedRight::
# 28 "data/maps/TheUnder_House/scripts.pory"
	lock
# 29 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Text_TakeARest, MSGBOX_YESNO
# 30 "data/maps/TheUnder_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheUnder_House_Eventscript_BedRight_2
# 40 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Eventscript_BedLeft_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 42 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 43 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
TheUnder_House_Eventscript_BedRight_1:
# 45 "data/maps/TheUnder_House/scripts.pory"
	release
	end

TheUnder_House_Eventscript_BedRight_2:
# 31 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheUnder_House_Movement_LayInBedRight
# 32 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
# 33 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Movement_FallIntoSlumber, MSGBOX_DEFAULT
# 34 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 35 "data/maps/TheUnder_House/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 36 "data/maps/TheUnder_House/scripts.pory"
	call TheUnder_House_OutOfCenterPartyHeal
# 37 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_NEWMOON_ISLAND_STATE, 2
	goto TheUnder_House_Eventscript_BedRight_1


TheUnder_House_OutOfCenterPartyHeal::
# 51 "data/maps/TheUnder_House/scripts.pory"
	fadenewbgm MUS_DUMMY
# 52 "data/maps/TheUnder_House/scripts.pory"
	delay 30
# 53 "data/maps/TheUnder_House/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 54 "data/maps/TheUnder_House/scripts.pory"
	delay 30
# 55 "data/maps/TheUnder_House/scripts.pory"
	playfanfare MUS_HEAL
# 56 "data/maps/TheUnder_House/scripts.pory"
	waitfanfare
# 57 "data/maps/TheUnder_House/scripts.pory"
	special HealPlayerParty
# 58 "data/maps/TheUnder_House/scripts.pory"
	callnative UpdateFollowingPokemon
# 59 "data/maps/TheUnder_House/scripts.pory"
	delay 60
# 60 "data/maps/TheUnder_House/scripts.pory"
	warpsilent MAP_THE_UNDER_SHADY_HOUSE, 11, 2
# 61 "data/maps/TheUnder_House/scripts.pory"
	waitstate
	return


TheUnder_House_PlayerAwakens::
# 66 "data/maps/TheUnder_House/scripts.pory"
	lockall
# 67 "data/maps/TheUnder_House/scripts.pory"
	playse SE_PIN
# 68 "data/maps/TheUnder_House/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 69 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 1
# 70 "data/maps/TheUnder_House/scripts.pory"
	waitse
# 71 "data/maps/TheUnder_House/scripts.pory"
	delay 16
# 72 "data/maps/TheUnder_House/scripts.pory"
	applymovement 1, TheUnder_House_Movement_RatduardoApproachesPlayer
# 73 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 1
# 74 "data/maps/TheUnder_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 75 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 0
# 76 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Text_Ratduardo, MSGBOX_AUTOCLOSE
# 77 "data/maps/TheUnder_House/scripts.pory"
	waitmessage
# 78 "data/maps/TheUnder_House/scripts.pory"
	applymovement 1, TheUnder_House_Movement_RatduardoReturnsToSeat
# 79 "data/maps/TheUnder_House/scripts.pory"
	waitmovement 1
# 80 "data/maps/TheUnder_House/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 11
# 81 "data/maps/TheUnder_House/scripts.pory"
	releaseall
	end


TheUnder_House_EventScript_Ratduardo::
# 86 "data/maps/TheUnder_House/scripts.pory"
	msgbox TheUnder_House_Ratduardo2, MSGBOX_NPC
	end


TheUnder_House_EventScript_Raticate::
# 91 "data/maps/TheUnder_House/scripts.pory"
	lock
# 92 "data/maps/TheUnder_House/scripts.pory"
	faceplayer
# 93 "data/maps/TheUnder_House/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_ENCOUNTER
# 94 "data/maps/TheUnder_House/scripts.pory"
	waitmoncry
# 95 "data/maps/TheUnder_House/scripts.pory"
	release
	end


TheUnder_House_EventScript_RaticateAlola::
# 100 "data/maps/TheUnder_House/scripts.pory"
	lock
# 101 "data/maps/TheUnder_House/scripts.pory"
	faceplayer
# 102 "data/maps/TheUnder_House/scripts.pory"
	playmoncry SPECIES_RATICATE_ALOLA, CRY_MODE_ENCOUNTER
# 103 "data/maps/TheUnder_House/scripts.pory"
	waitmoncry
# 104 "data/maps/TheUnder_House/scripts.pory"
	release
	end


# 135 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_LayInBedLeft:
# 136 "data/maps/TheUnder_House/scripts.pory"
	walk_right
# 137 "data/maps/TheUnder_House/scripts.pory"
	walk_in_place_down
	step_end

# 140 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_LayInBedRight:
# 141 "data/maps/TheUnder_House/scripts.pory"
	walk_left
# 142 "data/maps/TheUnder_House/scripts.pory"
	walk_in_place_down
	step_end

# 145 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_RatduardoApproachesPlayer:
# 146 "data/maps/TheUnder_House/scripts.pory"
	walk_up
# 146 "data/maps/TheUnder_House/scripts.pory"
	walk_up
# 147 "data/maps/TheUnder_House/scripts.pory"
	walk_right
# 147 "data/maps/TheUnder_House/scripts.pory"
	walk_right
	step_end

# 150 "data/maps/TheUnder_House/scripts.pory"
TheUnder_House_Movement_RatduardoReturnsToSeat:
# 151 "data/maps/TheUnder_House/scripts.pory"
	walk_down
# 151 "data/maps/TheUnder_House/scripts.pory"
	walk_down
# 152 "data/maps/TheUnder_House/scripts.pory"
	walk_left
# 152 "data/maps/TheUnder_House/scripts.pory"
	walk_left
	step_end

TheUnder_House_Eventscript_BedLeft_Text_0:
# 18 "data/maps/TheUnder_House/scripts.pory"
	.string "Maybe another time.$"

TheUnder_House_Text_TakeARest::
# 108 "data/maps/TheUnder_House/scripts.pory"
	.string "There's a bed…\n Take a rest?$"

TheUnder_House_Movement_FallIntoSlumber::
# 113 "data/maps/TheUnder_House/scripts.pory"
	.string "Your eyes feel heavy as you\n fall into a deep slumber…$"

TheUnder_House_Text_Ratduardo::
# 118 "data/maps/TheUnder_House/scripts.pory"
	.string "You've been asleep for a long, long\n time… What happened to you?\p And what were you doing here?\n Nobody's been living here for years.\p Well, make sure you're okay before\n you get up.$"

TheUnder_House_Ratduardo2::
# 127 "data/maps/TheUnder_House/scripts.pory"
	.string "I haven't been home in a long time.\p But suddenly, it was like I had been\n woken up from a really long dream…\p Did you have something to do with it?\n If you did… Thank you.$"
