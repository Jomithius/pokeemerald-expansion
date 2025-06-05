# 1 "data/maps/VerdanturfTown_House/scripts.pory"
VerdanturfTown_House_MapScripts::
# 2 "data/maps/VerdanturfTown_House/scripts.pory"
	.byte 0

VerdanturfTown_House_Xion::
# 6 "data/maps/VerdanturfTown_House/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_House/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 8 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmovement 1
# 9 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_set FLAG_RECIEVED_CHOICE_SCARF_XION, VerdanturfTown_House_Xion_2
# 14 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_Xion, MSGBOX_NPC
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
# 16 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
# 17 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
# 18 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_Xion3, MSGBOX_AUTOCLOSE
# 19 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
# 20 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_RECIEVED_CHOICE_SCARF_XION
VerdanturfTown_House_Xion_1:
# 22 "data/maps/VerdanturfTown_House/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 23 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmovement 1
# 24 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end

VerdanturfTown_House_Xion_2:
# 10 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_Xion3, MSGBOX_AUTOCLOSE
# 11 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
	goto VerdanturfTown_House_Xion_1


VerdanturfTown_House_Text_Xion::
# 28 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Oh, hello.\n Who are you?\p ...\p Oh, {PLAYER}!\n It's nice to meet you!\p I'm XION.\p XION: That's funny! MISA was telling\n me about you before she left.\p She's so happy her son finally\n made a friend.\p So?\n What are you up to now?\p ...\p Oh, MAUVILLE's GYM?\n The LEADER there's pretty strong.\p Here, maybe this'll help you.$"

VerdanturfTown_House_Text_Xion3::
# 47 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "MISA also said you're a\n promising TRAINER!\l I'm sure we'll meet again.$"
