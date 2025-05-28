# 1 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 2 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 3 "data/maps/MtPyre_6F/scripts.pory"

# 4 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie::
# 5 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
# 6 "data/maps/MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 7 "data/maps/MtPyre_6F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
# 8 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 9 "data/maps/MtPyre_6F/scripts.pory"
	release
# 10 "data/maps/MtPyre_6F/scripts.pory"
	end
# 11 "data/maps/MtPyre_6F/scripts.pory"

# 12 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 13 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 14 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 15 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 16 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 17 "data/maps/MtPyre_6F/scripts.pory"
	release
# 18 "data/maps/MtPyre_6F/scripts.pory"
	end
# 19 "data/maps/MtPyre_6F/scripts.pory"

# 20 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 21 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 22 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 23 "data/maps/MtPyre_6F/scripts.pory"
	end
# 24 "data/maps/MtPyre_6F/scripts.pory"

# 25 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 26 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 27 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/MtPyre_6F/scripts.pory"
	end
# 29 "data/maps/MtPyre_6F/scripts.pory"

# 30 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro:
# 31 "data/maps/MtPyre_6F/scripts.pory"
	.string "When I'm here…\n"
# 32 "data/maps/MtPyre_6F/scripts.pory"
	.string "A curious power flows into me…$"
# 33 "data/maps/MtPyre_6F/scripts.pory"

# 34 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat:
# 35 "data/maps/MtPyre_6F/scripts.pory"
	.string "The power is ebbing away…$"
# 36 "data/maps/MtPyre_6F/scripts.pory"

# 37 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostBattle:
# 38 "data/maps/MtPyre_6F/scripts.pory"
	.string "Perhaps the power is from the spirits\n"
# 39 "data/maps/MtPyre_6F/scripts.pory"
	.string "of POKéMON in fitful sleep here…$"
# 40 "data/maps/MtPyre_6F/scripts.pory"

# 41 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 42 "data/maps/MtPyre_6F/scripts.pory"
	.string "Fufufu… I lost the match, but…\n"
# 43 "data/maps/MtPyre_6F/scripts.pory"
	.string "I have this little ability…\p"
# 44 "data/maps/MtPyre_6F/scripts.pory"
	.string "Without ever laying my hands on\n"
# 45 "data/maps/MtPyre_6F/scripts.pory"
	.string "your POKéNAV… Hiyah!$"
# 46 "data/maps/MtPyre_6F/scripts.pory"

# 47 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 48 "data/maps/MtPyre_6F/scripts.pory"
	.string "Behind you…\n"
# 49 "data/maps/MtPyre_6F/scripts.pory"
	.string "What is it…$"
# 50 "data/maps/MtPyre_6F/scripts.pory"

# 51 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 52 "data/maps/MtPyre_6F/scripts.pory"
	.string "Something faded away…$"
# 53 "data/maps/MtPyre_6F/scripts.pory"

# 54 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 55 "data/maps/MtPyre_6F/scripts.pory"
	.string "The POKéMON at rest here…\n"
# 56 "data/maps/MtPyre_6F/scripts.pory"
	.string "Sometimes, they play…$"
# 57 "data/maps/MtPyre_6F/scripts.pory"

# 58 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro:
# 59 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have you lost your bearings?\n"
# 60 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have no fear for I am here!$"
# 61 "data/maps/MtPyre_6F/scripts.pory"

# 62 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat:
# 63 "data/maps/MtPyre_6F/scripts.pory"
	.string "Weren't you lost?$"
# 64 "data/maps/MtPyre_6F/scripts.pory"

# 65 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle:
# 66 "data/maps/MtPyre_6F/scripts.pory"
	.string "I had this feeling that a lost TRAINER\n"
# 67 "data/maps/MtPyre_6F/scripts.pory"
	.string "would be panicked and easy to beat.\p"
# 68 "data/maps/MtPyre_6F/scripts.pory"
	.string "It's dirty and I won't try it again…$"

MtPyre_6F_EventScript_Nurse::
# 73 "data/maps/MtPyre_6F/scripts.pory"
	lock
# 74 "data/maps/MtPyre_6F/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 75 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 4
# 76 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_Nurse, MSGBOX_AUTOCLOSE
# 77 "data/maps/MtPyre_6F/scripts.pory"
	waitmessage
# 78 "data/maps/MtPyre_6F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 79 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_Nurse2, MSGBOX_AUTOCLOSE
# 80 "data/maps/MtPyre_6F/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 81 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 4
# 82 "data/maps/MtPyre_6F/scripts.pory"
	waitmessage
# 83 "data/maps/MtPyre_6F/scripts.pory"
	release
	end


MtPyre_6F_Text_Nurse::
# 87 "data/maps/MtPyre_6F/scripts.pory"
	.string "You and your POKéMON look tired.\n Please, take a quick break.$"

MtPyre_6F_Text_Nurse2::
# 92 "data/maps/MtPyre_6F/scripts.pory"
	.string "Please come again.$"
