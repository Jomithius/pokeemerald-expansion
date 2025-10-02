# 1 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_MapScripts::
# 2 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.byte 0
# 3 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 4 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
# 5 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 6 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 7 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 9 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_NONE, VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou
# 11 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_1_TO_49, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary
# 12 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_50_TO_99, VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou
# 13 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_100_TO_149, VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou
# 14 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_150_TO_199, VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
# 15 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_200_TO_254, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy
# 16 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_MAX, VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou
# 17 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 18 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 19 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 20 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou::
# 21 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
# 22 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 23 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 24 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 25 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary::
# 26 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
# 27 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 28 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 29 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 30 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou::
# 31 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
# 32 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 33 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 34 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 35 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou::
# 36 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
# 37 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 38 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 39 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 40 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
# 41 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
# 42 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 43 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 44 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 45 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy::
# 46 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
# 47 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 48 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 49 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 50 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou::
# 51 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
# 52 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 53 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 54 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 55 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
# 56 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 57 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 58 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitse
# 59 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 60 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
# 61 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmoncry
# 62 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 63 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 64 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 65 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou:
# 66 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Let me see your POKéMON.\n"
# 67 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "I'll check to see how much it likes you.\p"
# 68 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Oh.\n"
# 69 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Your POKéMON…$"
# 70 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 71 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou:
# 72 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It adores you.\n"
# 73 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It can't possibly love you any more.\l"
# 74 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "I even feel happy seeing it.$"
# 75 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 76 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy:
# 77 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to be very happy.\n"
# 78 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It obviously likes you a whole lot.$"
# 79 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 80 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot:
# 81 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It likes you quite a lot.\n"
# 82 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to want to be babied a little.$"
# 83 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 84 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou:
# 85 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's getting used to you.\n"
# 86 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to believe in you.$"
# 87 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 88 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou:
# 89 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's not very used to you yet.\n"
# 90 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It neither loves nor hates you.$"
# 91 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 92 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_VeryWary:
# 93 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's very wary.\n"
# 94 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It has scary viciousness in its eyes.\l"
# 95 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It doesn't like you much at all.$"
# 96 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 97 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou:
# 98 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "This is a little hard for me to say…\p"
# 99 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Your POKéMON simply detests you.\n"
# 100 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Doesn't that make you uncomfortable?$"
# 101 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 102 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_Pikachu:
# 103 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "PIKACHU: Pika pika!$"

VerdanturfTown_FriendshipRatersHouse_EventScript_TrickTutor::
# 108 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 109 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 110 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_TrickTutor_Text_0, MSGBOX_YESNO
# 114 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmessage
# 115 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_TrickTeach
# 116 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_TutorDecline
# 117 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
	end


MoveTutor_EventScript_TrickTeach::
# 122 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox MoveTutor_EventScript_TrickTeach_Text_0, MSGBOX_DEFAULT
# 123 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK
# 124 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 125 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VerdanturfTown_FriendshipRatersHouse_EventScript_TutorDecline
# 126 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_TrickTaught
	end


VerdanturfTown_FriendshipRatersHouse_EventScript_TutorDecline::
# 131 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 135 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmessage
# 136 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
	end


VerdanturfTown_FriendshipRatersHouse_EventScript_TrickTaught::
# 141 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_TrickTaught_Text_0, MSGBOX_AUTOCLOSE
# 143 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmessage
# 144 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
	end


VerdanturfTown_FriendshipRatersHouse_EventScript_TrickTutor_Text_0:
# 110 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Earlier I tricked Mom and\n she got really mad at me!\p If you want, I could teach your\n POKéMON how to trick too.$"

MoveTutor_EventScript_TrickTeach_Text_0:
# 122 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Which POKéMON do you want me to\nteach how to TRICK?$"

VerdanturfTown_FriendshipRatersHouse_EventScript_TutorDecline_Text_0:
# 131 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Oh, okay.\n It's probably bettter you don't know.\p That way your mom won't get\n mad at you.$"

VerdanturfTown_FriendshipRatersHouse_EventScript_TrickTaught_Text_0:
# 141 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Let me know if you want to teach more\n POKéMON how to trick!$"
