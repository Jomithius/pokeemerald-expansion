FallarborTown_House_MapScripts::
	.byte 0


FallarborTown_House_EventScript_Old_Man::
# 5 "data/maps/FallarborTown_House/scripts.pory"
	lock
# 6 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 7 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 1
# 8 "data/maps/FallarborTown_House/scripts.pory"
	compare VAR_RAT_CAVE_STATE, 5
	goto_if_eq FallarborTown_House_EventScript_Old_Man_2
# 12 "data/maps/FallarborTown_House/scripts.pory"
	compare VAR_RAT_CAVE_STATE, 6
	goto_if_eq FallarborTown_House_EventScript_Old_Man_3
# 18 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_EventScript_Old_Man_Text_0, MSGBOX_NPC
# 20 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
FallarborTown_House_EventScript_Old_Man_1:
# 22 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 23 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 1
# 24 "data/maps/FallarborTown_House/scripts.pory"
	release
	end

FallarborTown_House_EventScript_Old_Man_2:
# 9 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_Old_Man_RatCaveHint, MSGBOX_NPC
# 10 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
	goto FallarborTown_House_EventScript_Old_Man_1

FallarborTown_House_EventScript_Old_Man_3:
# 13 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_Old_Man_RatCavePost, MSGBOX_NPC
# 14 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
# 15 "data/maps/FallarborTown_House/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 7
	goto FallarborTown_House_EventScript_Old_Man_1


FallarborTown_House_EventScript_Old_Lady::
# 52 "data/maps/FallarborTown_House/scripts.pory"
	lock
# 53 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 54 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 2
# 55 "data/maps/FallarborTown_House/scripts.pory"
	msgbox FallarborTown_House_Text_Old_Lady, MSGBOX_NPC
# 56 "data/maps/FallarborTown_House/scripts.pory"
	waitmessage
# 57 "data/maps/FallarborTown_House/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 58 "data/maps/FallarborTown_House/scripts.pory"
	waitmovement 2
# 59 "data/maps/FallarborTown_House/scripts.pory"
	release
	end


FallarborTown_House_EventScript_Old_Man_Text_0:
# 18 "data/maps/FallarborTown_House/scripts.pory"
	.string "Huh? What?\n Speak up, youngster.$"

FallarborTown_House_Old_Man_RatCaveHint::
# 28 "data/maps/FallarborTown_House/scripts.pory"
	.string "Huh?\p What?\p Oh, finally you're here!\p We've still been hearing RATTATA noises\n in the basement lately.\p It's been so hard to sleep because\n of it.\p Be a good grandchild and go take\n care of it for me, will you?$"

FallarborTown_House_Old_Man_RatCavePost::
# 40 "data/maps/FallarborTown_House/scripts.pory"
	.string "Huh?\p What?\p Did you take care of it?\p ...\p What?\n There was a giant rat?\p Your eyes must be worse than mine,\n youngster.$"

FallarborTown_House_Text_Old_Lady::
# 63 "data/maps/FallarborTown_House/scripts.pory"
	.string "Lately, some of the folks have\n said they've been having a lot\l of nightmares.\p I wonder if it's something in\n the water.$"
