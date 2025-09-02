# 1 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 2 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 3 "data/maps/MtPyre_6F/scripts.pory"

# 4 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie::
# 5 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat
# 6 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 7 "data/maps/MtPyre_6F/scripts.pory"
	release
# 8 "data/maps/MtPyre_6F/scripts.pory"
	end
# 9 "data/maps/MtPyre_6F/scripts.pory"
@ Unused
# 10 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 11 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 12 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 13 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 14 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 15 "data/maps/MtPyre_6F/scripts.pory"
	release
# 16 "data/maps/MtPyre_6F/scripts.pory"
	end
# 17 "data/maps/MtPyre_6F/scripts.pory"
@ Unused
# 18 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 19 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 20 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 21 "data/maps/MtPyre_6F/scripts.pory"
	end
# 22 "data/maps/MtPyre_6F/scripts.pory"

# 23 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 24 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 25 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/MtPyre_6F/scripts.pory"
	end
# 27 "data/maps/MtPyre_6F/scripts.pory"

# 28 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro:
# 29 "data/maps/MtPyre_6F/scripts.pory"
	.string "When I'm here…\n"
# 30 "data/maps/MtPyre_6F/scripts.pory"
	.string "A curious power flows into me…$"
# 31 "data/maps/MtPyre_6F/scripts.pory"

# 32 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat:
# 33 "data/maps/MtPyre_6F/scripts.pory"
	.string "The power is ebbing away…$"
# 34 "data/maps/MtPyre_6F/scripts.pory"

# 35 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostBattle:
# 36 "data/maps/MtPyre_6F/scripts.pory"
	.string "Perhaps the power is from the spirits\n"
# 37 "data/maps/MtPyre_6F/scripts.pory"
	.string "of POKéMON in fitful sleep here…$"
# 38 "data/maps/MtPyre_6F/scripts.pory"

# 39 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 40 "data/maps/MtPyre_6F/scripts.pory"
	.string "Fufufu… I lost the match, but…\n"
# 41 "data/maps/MtPyre_6F/scripts.pory"
	.string "I have this little ability…\p"
# 42 "data/maps/MtPyre_6F/scripts.pory"
	.string "Without ever laying my hands on\n"
# 43 "data/maps/MtPyre_6F/scripts.pory"
	.string "your POKéNAV… Hiyah!$"
# 44 "data/maps/MtPyre_6F/scripts.pory"

# 45 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 46 "data/maps/MtPyre_6F/scripts.pory"
	.string "Behind you…\n"
# 47 "data/maps/MtPyre_6F/scripts.pory"
	.string "What is it…$"
# 48 "data/maps/MtPyre_6F/scripts.pory"

# 49 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 50 "data/maps/MtPyre_6F/scripts.pory"
	.string "Something faded away…$"
# 51 "data/maps/MtPyre_6F/scripts.pory"

# 52 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 53 "data/maps/MtPyre_6F/scripts.pory"
	.string "The POKéMON at rest here…\n"
# 54 "data/maps/MtPyre_6F/scripts.pory"
	.string "Sometimes, they play…$"
# 55 "data/maps/MtPyre_6F/scripts.pory"

# 56 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro:
# 57 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have you lost your bearings?\n"
# 58 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have no fear for I am here!$"
# 59 "data/maps/MtPyre_6F/scripts.pory"

# 60 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat:
# 61 "data/maps/MtPyre_6F/scripts.pory"
	.string "Weren't you lost?$"
# 62 "data/maps/MtPyre_6F/scripts.pory"

# 63 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle:
# 64 "data/maps/MtPyre_6F/scripts.pory"
	.string "I had this feeling that a lost TRAINER\n"
# 65 "data/maps/MtPyre_6F/scripts.pory"
	.string "would be panicked and easy to beat.\p"
# 66 "data/maps/MtPyre_6F/scripts.pory"
	.string "It's dirty and I won't try it again…$"

MtPyre_6F_EventScript_Nurse::
# 71 "data/maps/MtPyre_6F/scripts.pory"
	lock
# 72 "data/maps/MtPyre_6F/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 73 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 4
# 74 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_Nurse, MSGBOX_AUTOCLOSE
# 75 "data/maps/MtPyre_6F/scripts.pory"
	waitmessage
# 76 "data/maps/MtPyre_6F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 77 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_Nurse2, MSGBOX_AUTOCLOSE
# 78 "data/maps/MtPyre_6F/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 79 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 4
# 80 "data/maps/MtPyre_6F/scripts.pory"
	waitmessage
# 81 "data/maps/MtPyre_6F/scripts.pory"
	release
	end


MtPyre_6F_Text_Nurse::
# 85 "data/maps/MtPyre_6F/scripts.pory"
	.string "You and your POKéMON look tired…\n Please, take a quick break.$"

MtPyre_6F_Text_Nurse2::
# 90 "data/maps/MtPyre_6F/scripts.pory"
	.string "Please come again.$"
