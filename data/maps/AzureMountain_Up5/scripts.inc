AzureMountain_Up5_MapScripts::
# 2 "data/maps/AzureMountain_Up5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AzureMountain_Up5_OnTransition
	.byte 0


AzureMountain_Up5_OnTransition::
# 6 "data/maps/AzureMountain_Up5/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end


AzureMountain_Up5_EventScript_Expert_M::
# 11 "data/maps/AzureMountain_Up5/scripts.pory"
	lock
# 12 "data/maps/AzureMountain_Up5/scripts.pory"
	faceplayer
# 13 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Expert_M_Text_0, MSGBOX_YESNO
# 16 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 17 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_FutureSightTeach
# 18 "data/maps/AzureMountain_Up5/scripts.pory"
	goto AzureMountain_Up5_EventScript_TutorDecline
# 19 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


MoveTutor_EventScript_FutureSightTeach::
# 24 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox MoveTutor_EventScript_FutureSightTeach_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_0x8005, MOVE_FUTURE_SIGHT
# 27 "data/maps/AzureMountain_Up5/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 28 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 29 "data/maps/AzureMountain_Up5/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


AzureMountain_Up5_EventScript_OldManDojo::
# 34 "data/maps/AzureMountain_Up5/scripts.pory"
	lock
# 35 "data/maps/AzureMountain_Up5/scripts.pory"
	faceplayer
# 36 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_OldManDojo_Text_0, MSGBOX_YESNO
# 39 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 40 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_UpperHandTeach
# 41 "data/maps/AzureMountain_Up5/scripts.pory"
	goto AzureMountain_Up5_EventScript_TutorDecline
# 42 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


MoveTutor_EventScript_UpperHandTeach::
# 47 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox MoveTutor_EventScript_UpperHandTeach_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_0x8005, MOVE_UPPER_HAND
# 50 "data/maps/AzureMountain_Up5/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 51 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 52 "data/maps/AzureMountain_Up5/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


AzureMountain_Up5_EventScript_TutorDecline::
# 57 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


AzureMountain_Up5_EventScript_Expert_M_Text_0:
# 13 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "The best way to outplay your\n opponent is to predict them!\p Don't you agree?$"

MoveTutor_EventScript_FutureSightTeach_Text_0:
# 24 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I knew you would say that.\p Which POKéMON do you want to\nteach FUTURE SIGHT to?$"

AzureMountain_Up5_EventScript_OldManDojo_Text_0:
# 36 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "The best way to outplay your\n opponent is to get the upper hand!\p Don't you agree?$"

MoveTutor_EventScript_UpperHandTeach_Text_0:
# 47 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I knew you would say that.\p Which POKéMON do you want to\nteach UPPER HAND to?$"

AzureMountain_Up5_EventScript_TutorDecline_Text_0:
# 57 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I see.\n You still have much to learn.$"
