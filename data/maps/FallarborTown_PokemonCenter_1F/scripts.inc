# 1 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_LANETTE, 4
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 23 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
# 28 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette::
# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 35 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_FACING
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
# 41 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
# 42 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 44 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
# 47 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
# 48 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 49 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 50 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 51 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
# 53 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 54 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_LANETTE
# 55 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
# 56 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 57 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 58 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
# 60 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_right
# 61 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 62 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 63 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 64 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 65 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 66 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 67 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 68 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 69 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 70 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 71 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 72 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 73 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 74 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
# 75 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 76 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 77 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 78 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 79 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 80 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 81 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 82 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 83 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 84 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 85 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 86 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 87 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
# 88 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, hello.\n"
# 89 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You are?\p"
# 90 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Okay, your name's {PLAYER}{KUN}.\n"
# 91 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I can see that you're a TRAINER.\p"
# 92 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "So that means you use the POKéMON\n"
# 93 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Storage System I developed.\p"
# 94 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "How I arrived at that conclusion is\n"
# 95 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "a simple deductive process.\p"
# 96 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You spoke to me because you wanted\n"
# 97 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "to access something on this PC.\p"
# 98 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, I'm sorry. I'm LANETTE.\p"
# 99 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Honestly, I'm glad to meet you--it's\n"
# 100 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "great you're using the Storage System.\p"
# 101 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "If you could, please visit me at home.\n"
# 102 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "My house is on ROUTE 114.$"
# 103 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 104 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
# 105 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what POKéMON looked like\n"
# 106 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "long, long ago?\p"
# 107 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe the FOSSIL MANIAC at the edge\n"
# 108 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "of town will know.$"
# 109 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 110 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
# 111 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "In the fields of FALLARBOR, we plant\n"
# 112 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "seedlings of hardy trees that thrive\l"
# 113 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "even in volcanic ash.$"

FallarborTown_PokemonCenter_1F_EventScript_RetaliateTutor::
# 118 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock
# 119 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 120 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_EventScript_RetaliateTutor_Text_0, MSGBOX_YESNO
# 126 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 127 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_RetaliateTeach
# 128 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_TutorDecline
# 129 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
	end


MoveTutor_EventScript_RetaliateTeach::
# 134 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_EventScript_RetaliateTeach_Text_0, MSGBOX_DEFAULT
# 135 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_RETALIATE
# 136 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 137 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FallarborTown_PokemonCenter_1F_EventScript_TutorDecline
# 138 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_RetaliateTaught
	end


FallarborTown_PokemonCenter_1F_EventScript_TutorDecline::
# 143 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 145 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
	end


FallarborTown_PokemonCenter_1F_EventScript_RetaliateTaught::
# 150 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_EventScript_RetaliateTaught_Text_0, MSGBOX_AUTOCLOSE
# 152 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 153 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
	end


FallarborTown_PokemonCenter_1F_EventScript_RetaliateTutor_Text_0:
# 120 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I have spent years training in\n METEOR FALLS.\p I have finally unlocked the secret\n of retaliation.\p If you want, I can teach your POKéMON\n how to RETALIATE as well.$"

MoveTutor_EventScript_RetaliateTeach_Text_0:
# 134 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON do you want me to\nteach RETALIATE?$"

FallarborTown_PokemonCenter_1F_EventScript_TutorDecline_Text_0:
# 143 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Come back if you change your mind.$"

FallarborTown_PokemonCenter_1F_EventScript_RetaliateTaught_Text_0:
# 150 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Now you too can RETALIATE\n against your enemies.$"
