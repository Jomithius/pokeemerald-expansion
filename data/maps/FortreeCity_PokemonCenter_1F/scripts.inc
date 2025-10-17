# 1 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_OnTransition:
# 9 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 10 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
# 22 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Man::
# 25 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Boy::
# 29 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 30 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
# 33 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Listen, kid, are you working\n"
# 34 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "on a POKéDEX?\p"
# 35 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm… Go to the SAFARI ZONE.\n"
# 36 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "That's my suggestion.$"
# 37 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
# 39 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Have you done anything at\n"
# 40 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the RECORD CORNER?\p"
# 41 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's pretty neat. It mixes and matches\n"
# 42 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "the records of TRAINERS.\p"
# 43 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know quite how it works,\n"
# 44 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "but it's cool. It's exciting, even!$"
# 45 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
# 47 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Oh, wow, you have a POKéNAV!\n"
# 48 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "And it's just like mine!\p"
# 49 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Do you know about POKéNAV's\n"
# 50 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "MATCH CALL system?\p"
# 51 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Access it, and you can chat with\n"
# 52 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "registered TRAINERS anytime.\p"
# 53 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It also shows you which TRAINERS\n"
# 54 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "want a rematch with you.\p"
# 55 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's really nifty! Those DEVON guys\n"
# 56 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "sure know what they're doing!$"

FortreeCity_PokemonCenter_1F_EventScript_RoostTutor::
# 61 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	lock
# 62 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 63 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_RoostTeach, MSGBOX_YESNO
# 64 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 65 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RoostDeclined
# 66 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_EventScript_RoostTutor_Text_0, MSGBOX_DEFAULT
# 67 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ROOST
# 68 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 69 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RoostDeclined
# 70 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto MoveTutor_EventScript_RoostTaught
	end


MoveTutor_EventScript_RoostDeclined::
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_EventScript_RoostDeclined_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 78 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end


MoveTutor_EventScript_RoostTaught::
# 83 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_EventScript_RoostTaught_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 86 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end


FortreeCity_PokemonCenter_1F_EventScript_FangsTutor::
# 98 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	lock
# 99 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 100 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_EventScript_FangsTutor_Text_0, MSGBOX_YESNO
# 103 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 104 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices
# 105 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline
# 106 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end


FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices::
# 111 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	lock
# 112 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_0, MSGBOX_DEFAULT
# 113 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_1, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_2, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_3, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_4, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_5
# 114 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 0, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_3
# 117 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 1, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_4
# 119 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 2, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_5
# 121 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 3, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_6
# 123 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case 4, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_7
# 125 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	case MULTI_B_PRESSED, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_8
# 128 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline
FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_1:
	end

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_3:
# 116 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto MoveTutor_EventScript_FireFangTeach
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_1

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_4:
# 118 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto MoveTutor_EventScript_IceFangTeach
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_1

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_5:
# 120 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto MoveTutor_EventScript_ThunderFangTeach
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_1

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_6:
# 122 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto MoveTutor_EventScript_PoisonFangTeach
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_1

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_7:
# 124 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto MoveTutor_EventScript_PsychicFangsTeach
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_1

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_8:
# 126 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_1


MoveTutor_EventScript_FireFangTeach::
# 134 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_EventScript_FireFangTeach_Text_0, MSGBOX_DEFAULT
# 135 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 136 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 137 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline
# 138 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorTaught
	end


MoveTutor_EventScript_IceFangTeach::
# 143 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_EventScript_IceFangTeach_Text_0, MSGBOX_DEFAULT
# 144 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 145 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 146 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline
# 147 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorTaught
	end


MoveTutor_EventScript_ThunderFangTeach::
# 152 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_EventScript_ThunderFangTeach_Text_0, MSGBOX_DEFAULT
# 153 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 154 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 155 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline
# 156 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorTaught
	end


MoveTutor_EventScript_PoisonFangTeach::
# 161 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PoisonFangTeach_Text_0, MSGBOX_DEFAULT
# 162 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_FANG
# 163 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 164 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline
# 165 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorTaught
	end


MoveTutor_EventScript_PsychicFangsTeach::
# 170 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox MoveTutor_EventScript_PsychicFangsTeach_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
# 172 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 173 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline
# 174 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	goto FortreeCity_PokemonCenter_1F_EventScript_FangsTutorTaught
	end


FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline::
# 179 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	lock
# 180 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 181 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 182 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end


FortreeCity_PokemonCenter_1F_EventScript_FangsTutorTaught::
# 187 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	lock
# 188 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_EventScript_FangsTutorTaught_Text_0, MSGBOX_AUTOCLOSE
# 191 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 192 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
	end


FortreeCity_PokemonCenter_1F_EventScript_RoostTutor_Text_0:
# 66 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which POKéMON do you want to\nteach ROOST to?$"

MoveTutor_EventScript_RoostDeclined_Text_0:
# 75 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Well, alright.\n Come back if you have more birds.$"

MoveTutor_EventScript_RoostTaught_Text_0:
# 83 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "All right!\p Come back if you have more birds!$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutor_Text_0:
# 100 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "They call me the MAD DOG!\p If you want, I can teach your\n dogs how to get MAD!$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_0:
# 112 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "What move do you want me\nto teach?$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_1:
# 113 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "FIRE FANG$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_2:
# 113 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "ICE FANG$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_3:
# 113 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "THUNDER FANG$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_4:
# 113 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "POISON FANG$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorChoices_Text_5:
# 113 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "PSYCHIC FANGS$"

MoveTutor_EventScript_FireFangTeach_Text_0:
# 134 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which dog do you want to\nteach FIRE FANG to?$"

MoveTutor_EventScript_IceFangTeach_Text_0:
# 143 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which dog do you want to\nteach ICE FANG to?$"

MoveTutor_EventScript_ThunderFangTeach_Text_0:
# 152 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which dog do you want to\nteach THUNDER FANG to?$"

MoveTutor_EventScript_PoisonFangTeach_Text_0:
# 161 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which dog do you want to\nteach POISON FANG to?$"

MoveTutor_EventScript_PsychicFangsTeach_Text_0:
# 170 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Which dog do you want to\nteach PSYCHIC FANGS to?$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorDecline_Text_0:
# 180 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Grrr…$"

FortreeCity_PokemonCenter_1F_EventScript_FangsTutorTaught_Text_0:
# 188 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Awooohooo!\p Come back if you\n have more MAD DOGS!$"

FortreeCity_PokemonCenter_1F_Text_RoostTeach::
# 90 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "It's important for birds to be able to\n rest properly!\p If you have a BIRD POKéMON, I can teach\n it how to ROOST.$"
