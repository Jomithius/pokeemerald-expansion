VerdanturfTown_House_MapScripts::
	.byte 0


VerdanturfTown_House_EventScript_Xion::
# 4 "data/maps/VerdanturfTown_House/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SCARF_XION, VerdanturfTown_House_EventScript_GiveChoiceScarf
# 5 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_Xion3, MSGBOX_NPC
	end


VerdanturfTown_House_EventScript_GiveChoiceScarf::
# 10 "data/maps/VerdanturfTown_House/scripts.pory"
	lock
# 11 "data/maps/VerdanturfTown_House/scripts.pory"
	faceplayer
# 12 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_Xion, MSGBOX_DEFAULT
# 13 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
# 14 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_CHOICE_SCARF
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
# 16 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_Text_Xion3, MSGBOX_AUTOCLOSE
# 17 "data/maps/VerdanturfTown_House/scripts.pory"
	waitmessage
# 18 "data/maps/VerdanturfTown_House/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SCARF_XION
# 19 "data/maps/VerdanturfTown_House/scripts.pory"
	release
	end


VerdanturfTown_House_Text_Xion::
# 23 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Oh, hello.\n Who are you?\p … … … …\p Oh, {PLAYER}!\n It's nice to meet you!\p I'm XION.\p That's funny! MISA was telling\n me about you before she left.\p She's so happy her son finally\n made a friend.\p So?\n What are you up to now?\p … … … …\p Oh, MAUVILLE's GYM?\n The LEADER there's pretty strong.\p Here, maybe this'll help you.$"

VerdanturfTown_House_Text_Xion3::
# 42 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "MISA also said you're\n a promising TRAINER!\l I'm sure we'll meet again.$"
