AzureMountain_Up5_MapScripts::
# 2 "data/maps/AzureMountain_Up5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AzureMountain_Up5_OnTransition
	.byte 0


AzureMountain_Up5_OnTransition::
# 6 "data/maps/AzureMountain_Up5/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end


AzureMountain_Up5_EventScript_Wiley::
# 11 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_single TRAINER_WILEY, AzureMountain_Up5_EventScript_Wiley_Text_0, AzureMountain_Up5_EventScript_Wiley_Text_1
# 12 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Wiley_Text_2, MSGBOX_NPC
	end


AzureMountain_Up5_EventScript_Shurley::
# 19 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_single TRAINER_SHURLEY, AzureMountain_Up5_EventScript_Shurley_Text_0, AzureMountain_Up5_EventScript_Shurley_Text_1
# 20 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Shurley_Text_2, MSGBOX_NPC
	end


AzureMountain_Up5_EventScript_Wilson::
# 26 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_single TRAINER_WILSON, AzureMountain_Up5_EventScript_Wilson_Text_0, AzureMountain_Up5_EventScript_Wilson_Text_1
# 27 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Wilson_Text_2, MSGBOX_NPC
	end


AzureMountain_Up5_EventScript_Itoshi::
# 34 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_single TRAINER_ITOSHI, AzureMountain_Up5_EventScript_Itoshi_Text_0, AzureMountain_Up5_EventScript_Itoshi_Text_1
# 35 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Itoshi_Text_2, MSGBOX_NPC
	end


AzureMountain_Up5_EventScript_Hiker::
# 40 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Hiker_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


AzureMountain_Up5_EventScript_RestStopSign::
# 48 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_RestStopSign_Text_0, MSGBOX_SIGN
# 50 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


AzureMountain_Up5_EventScript_Expert_M::
# 55 "data/maps/AzureMountain_Up5/scripts.pory"
	lock
# 56 "data/maps/AzureMountain_Up5/scripts.pory"
	faceplayer
# 57 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Expert_M_Text_0, MSGBOX_YESNO
# 60 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 61 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_FutureSightTeach
# 62 "data/maps/AzureMountain_Up5/scripts.pory"
	goto AzureMountain_Up5_EventScript_TutorDecline
# 63 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


MoveTutor_EventScript_FutureSightTeach::
# 68 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox MoveTutor_EventScript_FutureSightTeach_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_0x8005, MOVE_FUTURE_SIGHT
# 71 "data/maps/AzureMountain_Up5/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 72 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 73 "data/maps/AzureMountain_Up5/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


AzureMountain_Up5_EventScript_OldManDojo::
# 78 "data/maps/AzureMountain_Up5/scripts.pory"
	lock
# 79 "data/maps/AzureMountain_Up5/scripts.pory"
	faceplayer
# 80 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_OldManDojo_Text_0, MSGBOX_YESNO
# 83 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 84 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_UpperHandTeach
# 85 "data/maps/AzureMountain_Up5/scripts.pory"
	goto AzureMountain_Up5_EventScript_TutorDecline
# 86 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


MoveTutor_EventScript_UpperHandTeach::
# 91 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox MoveTutor_EventScript_UpperHandTeach_Text_0, MSGBOX_DEFAULT
# 93 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_0x8005, MOVE_UPPER_HAND
# 94 "data/maps/AzureMountain_Up5/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 95 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 96 "data/maps/AzureMountain_Up5/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


AzureMountain_Up5_EventScript_TutorDecline::
# 101 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 103 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


AzureMountain_Up5_EventScript_Wiley_Text_0:
# 11 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "Nothing like a good runner's high\nup in the mountains!$"

AzureMountain_Up5_EventScript_Wiley_Text_1:
# 11 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "You killed my high…$"

AzureMountain_Up5_EventScript_Wiley_Text_2:
# 12 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I came here using the CORVIKNIGHT\n SERVICE.\p I have to preserve my strength!$"

AzureMountain_Up5_EventScript_Shurley_Text_0:
# 19 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "This is a great spot for cardio\ntraining!$"

AzureMountain_Up5_EventScript_Shurley_Text_1:
# 19 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "All out of breath…$"

AzureMountain_Up5_EventScript_Shurley_Text_2:
# 20 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "SNOWDRIFT CITY is just ahead!\p Head to the right when you reach\nthe fork.$"

AzureMountain_Up5_EventScript_Wilson_Text_0:
# 26 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "What happened to the ice lake?$"

AzureMountain_Up5_EventScript_Wilson_Text_1:
# 26 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I wanted to go ice skating!$"

AzureMountain_Up5_EventScript_Wilson_Text_2:
# 27 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "Who put all these ice blocks\n here in a such a specific layout?\p They ruined the lake!$"

AzureMountain_Up5_EventScript_Itoshi_Text_0:
# 34 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "It's not cold if you keep\nmoving! HI-YAH!$"

AzureMountain_Up5_EventScript_Itoshi_Text_1:
# 34 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I-I s-stopped m-m-moving…$"

AzureMountain_Up5_EventScript_Itoshi_Text_2:
# 35 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "My muscles will keep me warm!$"

AzureMountain_Up5_EventScript_Hiker_Text_0:
# 40 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "It's way colder over here!\p I guess the geothermal heat doesn't\n reach this side of the mountain.$"

AzureMountain_Up5_EventScript_RestStopSign_Text_0:
# 48 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "REST STOP\p Stop in and warm up!$"

AzureMountain_Up5_EventScript_Expert_M_Text_0:
# 57 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "The best way to outplay your\n opponent is to predict them!\p Don't you agree?$"

MoveTutor_EventScript_FutureSightTeach_Text_0:
# 68 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I knew you would say that.\p Which POKéMON do you want to\nteach FUTURE SIGHT to?$"

AzureMountain_Up5_EventScript_OldManDojo_Text_0:
# 80 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "The best way to outplay your\n opponent is to get the upper hand!\p Don't you agree?$"

MoveTutor_EventScript_UpperHandTeach_Text_0:
# 91 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I thought you would!\p Let me teach one of your\nPOKéMON UPPER HAND!$"

AzureMountain_Up5_EventScript_TutorDecline_Text_0:
# 101 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I see.\n You still have much to learn.$"
