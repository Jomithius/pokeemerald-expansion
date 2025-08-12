# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemartlistend
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the HERB SHOP, home of\n"
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "effective and inexpensive medicine!$"
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at herbal medicine\n"
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "in LAVARIDGE?\p"
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That's rather commendable.\p"
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "I like you! Take this!$"
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That CHARCOAL I gave you, it's used\n"
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "for making herbal medicine.\p"
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It also does wonders when held by\n"
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a POKéMON.\p"
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It intensifies the power of FIRE-type\n"
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "moves.$"
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But your POKéMON will dislike you for it.\l"
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It must be horribly bitter!$"

LavaridgeTown_HerbShop_EventScript_XScissorTutor::
# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_XScissorTutor_Text_0, MSGBOX_YESNO
# 74 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_XScissorTeach
# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_TutorDecline
# 77 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
	end


MoveTutor_EventScript_XScissorTeach::
# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox MoveTutor_EventScript_XScissorTeach_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_0x8005, MOVE_X_SCISSOR
# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 85 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LavaridgeTown_HerbShop_EventScript_TutorDecline
# 86 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_XScissorTaught
	end


LavaridgeTown_HerbShop_EventScript_TutorDecline::
# 91 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 94 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
	end


LavaridgeTown_HerbShop_EventScript_XScissorTaught::
# 99 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_XScissorTaught_Text_0
# 101 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 102 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
	end


LavaridgeTown_HerbShop_EventScript_XScissorTutor_Text_0:
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Hello. I teach POKéMON\n how to harvest herbs properly.\p If you want, I could teach your\n POKéMON how to use X-SCISSOR.$"

MoveTutor_EventScript_XScissorTeach_Text_0:
# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Which POKéMON do you want me to\nteach X-SCISSOR?$"

LavaridgeTown_HerbShop_EventScript_TutorDecline_Text_0:
# 91 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Oh, okay.\n Come back if you change your mind.$"

LavaridgeTown_HerbShop_EventScript_XScissorTaught_Text_0:
# 99 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Let me know if you want to teach more\n POKéMON X-SCISSOR.$"
