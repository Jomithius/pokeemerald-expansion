# 1 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_MapScripts::
# 2 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
# 3 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.byte 0
# 4 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 5 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_OnTransition:
# 6 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
# 7 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 8 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 9 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
# 10 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	lock
# 11 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	faceplayer
# 12 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DIG, Route114_FossilManiacsHouse_EventScript_ReceivedDig
# 13 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
# 14 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	giveitem ITEM_TM_DIG
# 15 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 16 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_DIG
# 17 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
# 18 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 19 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 20 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_ReceivedDig::
# 21 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
# 22 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
# 23 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 24 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 25 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_RockDisplay::
# 26 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
# 27 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 28 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 29 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_Bookshelf::
# 30 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
# 31 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 32 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 33 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother:
# 34 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "My big brother's the FOSSIL MANIAC…\n"
# 35 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He's a nice guy who loves FOSSILS…\p"
# 36 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He loves digging holes, too…\n"
# 37 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He dug this hole by himself…\p"
# 38 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "You can have this, so you can DIG\n"
# 39 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "holes just like my big brother…$"
# 40 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 41 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance:
# 42 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "If you make a POKéMON DIG inside a\n"
# 43 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "cave, you're returned to the entrance…$"
# 44 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 45 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_RocksFillDisplayCase:
# 46 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Rocks in peculiar shapes fill\n"
# 47 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "the display case…$"
# 48 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 49 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_CrammedWithBooks:
# 50 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "THE COMPOSITION OF STRATA…\n"
# 51 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "HOW RAIN SHAPES THE LAND…\l"
# 52 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "STONES, SOIL, AND ROCK…\p"
# 53 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "It's crammed with books.$"

Route114_FossilManiacsHouse_EventScript_DrillRunTutor::
# 58 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	lock
# 59 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	faceplayer
# 60 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_EventScript_DrillRunTutor_Text_0, MSGBOX_YESNO
# 66 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	waitmessage
# 67 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_DrillRunTeach
# 68 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Route114_FossilManiacsHouse_EventScript_TutorDecline
# 69 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
	end


MoveTutor_EventScript_DrillRunTeach::
# 74 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox MoveTutor_EventScript_DrillRunTeach_Text_0, MSGBOX_DEFAULT
# 75 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_DRILL_RUN
# 76 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 77 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route114_FossilManiacsHouse_EventScript_TutorDecline
# 78 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Route114_FossilManiacsHouse_EventScript_DrillRunTaught
	end


Route114_FossilManiacsHouse_EventScript_TutorDecline::
# 83 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	waitmessage
# 86 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
	end


Route114_FossilManiacsHouse_EventScript_DrillRunTaught::
# 91 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_EventScript_DrillRunTaught_Text_0, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	waitmessage
# 94 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
	end


Route114_FossilManiacsHouse_EventScript_DrillRunTutor_Text_0:
# 60 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Digging is good and all, but\n drilling is even better!\p I wish we could drill here, but\n it's too dangerous.\p But if you want, I could teach your\n POKéMON how to drill.$"

MoveTutor_EventScript_DrillRunTeach_Text_0:
# 74 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Which POKéMON do you want me to\nteach DRILL RUN?$"

Route114_FossilManiacsHouse_EventScript_TutorDecline_Text_0:
# 83 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Oh, okay.\n Well, digging is the safer option.$"

Route114_FossilManiacsHouse_EventScript_DrillRunTaught_Text_0:
# 91 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Let me know if you want to teach more\n POKéMON how to drill!$"
