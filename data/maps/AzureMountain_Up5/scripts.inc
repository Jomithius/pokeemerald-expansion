AzureMountain_Up5_MapScripts::
# 4 "data/maps/AzureMountain_Up5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AzureMountain_Up5_OnTransition
	.byte 0


AzureMountain_Up5_OnTransition::
# 8 "data/maps/AzureMountain_Up5/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end


AzureMountain_Up5_EventScript_Wiley::
# 13 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_single TRAINER_WILEY, AzureMountain_Up5_EventScript_Wiley_Text_0, AzureMountain_Up5_EventScript_Wiley_Text_1
# 14 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Wiley_Text_2, MSGBOX_NPC
	end


AzureMountain_Up5_EventScript_Shurley::
# 21 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_single TRAINER_SHURLEY, AzureMountain_Up5_EventScript_Shurley_Text_0, AzureMountain_Up5_EventScript_Shurley_Text_1
# 22 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Shurley_Text_2, MSGBOX_NPC
	end


AzureMountain_Up5_EventScript_Wilson::
# 28 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_single TRAINER_WILSON, AzureMountain_Up5_EventScript_Wilson_Text_0, AzureMountain_Up5_EventScript_Wilson_Text_1
# 29 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Wilson_Text_2, MSGBOX_NPC
	end


AzureMountain_Up5_EventScript_Itoshi::
# 35 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_single TRAINER_ITOSHI, AzureMountain_Up5_EventScript_Itoshi_Text_0, AzureMountain_Up5_EventScript_Itoshi_Text_1
# 36 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Itoshi_Text_2, MSGBOX_NPC
	end


AzureMountain_Up5_EventScript_Hiker::
# 41 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Hiker_Text_0, MSGBOX_NPC
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


AzureMountain_Up5_EventScript_RivalBattle::
# 108 "data/maps/AzureMountain_Up5/scripts.pory"
	lockall
# 109 "data/maps/AzureMountain_Up5/scripts.pory"
	checkplayergender
# 110 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, AzureMountain_Up5_EventScript_MayBattle
# 111 "data/maps/AzureMountain_Up5/scripts.pory"
	playse SE_PIN
# 112 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 113 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 114 "data/maps/AzureMountain_Up5/scripts.pory"
	waitse
# 115 "data/maps/AzureMountain_Up5/scripts.pory"
	call AzureMountain_Up5_EventScript_RivalMovementVar
# 116 "data/maps/AzureMountain_Up5/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 117 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_RivalBattle_Text_0, MSGBOX_AUTOCLOSE
# 124 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 125 "data/maps/AzureMountain_Up5/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 126 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_AZURE_MOUNTAIN, AzureMountain_Up5_EventScript_RivalBattle_Text_1
# 127 "data/maps/AzureMountain_Up5/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 128 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_RivalBattle_Text_2, MSGBOX_AUTOCLOSE
# 134 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 135 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 136 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 137 "data/maps/AzureMountain_Up5/scripts.pory"
	setfieldeffectargument 0, 1
# 138 "data/maps/AzureMountain_Up5/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 139 "data/maps/AzureMountain_Up5/scripts.pory"
	delay 15
# 140 "data/maps/AzureMountain_Up5/scripts.pory"
	removeobject 1
# 141 "data/maps/AzureMountain_Up5/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 142 "data/maps/AzureMountain_Up5/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 143 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_AZURE_MOUNTAIN_RIVAL_STATE, 2
# 144 "data/maps/AzureMountain_Up5/scripts.pory"
	savebgm MUS_DUMMY
# 145 "data/maps/AzureMountain_Up5/scripts.pory"
	fadedefaultbgm
# 146 "data/maps/AzureMountain_Up5/scripts.pory"
	releaseall
	end


AzureMountain_Up5_EventScript_MayBattle::
# 151 "data/maps/AzureMountain_Up5/scripts.pory"
	lockall
# 152 "data/maps/AzureMountain_Up5/scripts.pory"
	playse SE_PIN
# 153 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 154 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 155 "data/maps/AzureMountain_Up5/scripts.pory"
	waitse
# 156 "data/maps/AzureMountain_Up5/scripts.pory"
	call AzureMountain_Up5_EventScript_RivalMovementVar
# 157 "data/maps/AzureMountain_Up5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 158 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 168 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 169 "data/maps/AzureMountain_Up5/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 170 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_AZURE_MOUNTAIN, AzureMountain_Up5_EventScript_MayBattle_Text_1
# 171 "data/maps/AzureMountain_Up5/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 172 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_MayBattle_Text_2, MSGBOX_AUTOCLOSE
# 179 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 180 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 181 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 182 "data/maps/AzureMountain_Up5/scripts.pory"
	setfieldeffectargument 0, 1
# 183 "data/maps/AzureMountain_Up5/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 184 "data/maps/AzureMountain_Up5/scripts.pory"
	delay 15
# 185 "data/maps/AzureMountain_Up5/scripts.pory"
	removeobject 1
# 186 "data/maps/AzureMountain_Up5/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 187 "data/maps/AzureMountain_Up5/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 188 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_AZURE_MOUNTAIN_RIVAL_STATE, 2
# 189 "data/maps/AzureMountain_Up5/scripts.pory"
	savebgm MUS_DUMMY
# 190 "data/maps/AzureMountain_Up5/scripts.pory"
	fadedefaultbgm
# 191 "data/maps/AzureMountain_Up5/scripts.pory"
	releaseall
	end


AzureMountain_Up5_EventScript_RivalMovementVar::
# 196 "data/maps/AzureMountain_Up5/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 197 "data/maps/AzureMountain_Up5/scripts.pory"
	switch VAR_TEMP_0
# 198 "data/maps/AzureMountain_Up5/scripts.pory"
	case 40, AzureMountain_Up5_EventScript_RivalMovementVar_3
# 200 "data/maps/AzureMountain_Up5/scripts.pory"
	case 41, AzureMountain_Up5_EventScript_RivalMovementVar_4
# 202 "data/maps/AzureMountain_Up5/scripts.pory"
	case 42, AzureMountain_Up5_EventScript_RivalMovementVar_5
# 205 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
AzureMountain_Up5_EventScript_RivalMovementVar_1:
# 207 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
	return

AzureMountain_Up5_EventScript_RivalMovementVar_3:
# 199 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, AzureMountain_Up5_MovementRivalLeftDown
	goto AzureMountain_Up5_EventScript_RivalMovementVar_1

AzureMountain_Up5_EventScript_RivalMovementVar_4:
# 201 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
	goto AzureMountain_Up5_EventScript_RivalMovementVar_1

AzureMountain_Up5_EventScript_RivalMovementVar_5:
# 203 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, AzureMountain_Up5_MovementRivalRightDown
	goto AzureMountain_Up5_EventScript_RivalMovementVar_1


# 211 "data/maps/AzureMountain_Up5/scripts.pory"
AzureMountain_Up5_MovementRivalLeftDown:
# 212 "data/maps/AzureMountain_Up5/scripts.pory"
	walk_left
# 213 "data/maps/AzureMountain_Up5/scripts.pory"
	walk_down
	step_end

# 216 "data/maps/AzureMountain_Up5/scripts.pory"
AzureMountain_Up5_MovementRivalRightDown:
# 217 "data/maps/AzureMountain_Up5/scripts.pory"
	walk_right
# 218 "data/maps/AzureMountain_Up5/scripts.pory"
	walk_down
	step_end

AzureMountain_Up5_EventScript_Wiley_Text_0:
# 13 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "Nothing like a good runner's high\nup in the mountains!$"

AzureMountain_Up5_EventScript_Wiley_Text_1:
# 13 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "You killed my high…$"

AzureMountain_Up5_EventScript_Wiley_Text_2:
# 14 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I came here using the CORVIKNIGHT\n SERVICE.\p I have to preserve my strength!$"

AzureMountain_Up5_EventScript_Shurley_Text_0:
# 21 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "This is a great spot for cardio\ntraining!$"

AzureMountain_Up5_EventScript_Shurley_Text_1:
# 21 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "All out of breath…$"

AzureMountain_Up5_EventScript_Shurley_Text_2:
# 22 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "SNOWDRIFT CITY is just ahead!\p Head to the right when you reach\nthe fork.$"

AzureMountain_Up5_EventScript_Wilson_Text_0:
# 28 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "What happened to the ice lake?$"

AzureMountain_Up5_EventScript_Wilson_Text_1:
# 28 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I wanted to go ice skating!$"

AzureMountain_Up5_EventScript_Wilson_Text_2:
# 29 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "It was hard getting up here.\n There's so many strong TRAINERS!$"

AzureMountain_Up5_EventScript_Itoshi_Text_0:
# 35 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "It's not cold if you keep\nmoving! HI-YAH!$"

AzureMountain_Up5_EventScript_Itoshi_Text_1:
# 35 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I-I s-stopped m-m-moving…$"

AzureMountain_Up5_EventScript_Itoshi_Text_2:
# 36 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "My muscles will keep me warm!$"

AzureMountain_Up5_EventScript_Hiker_Text_0:
# 41 "data/maps/AzureMountain_Up5/scripts.pory"
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

AzureMountain_Up5_EventScript_RivalBattle_Text_0:
# 117 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n So you came all the way out here, too.\p How's it going?\n There's so many cool new POKéMON\l I've never seen before.\p Have you been raising any new POKéMON?\n I'll check for you.$"

AzureMountain_Up5_EventScript_RivalBattle_Text_1:
# 126 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "Wow, {PLAYER}.\nYou've gotten this strong?$"

AzureMountain_Up5_EventScript_RivalBattle_Text_2:
# 128 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "BRENDAN: I can see why you're the\n CHAMPION, {PLAYER}.\p I think I'll stick to what I'm good at…\n raising POKéMON.\p Okay, I'm going to head back to lab to\n give a report.$"

AzureMountain_Up5_EventScript_MayBattle_Text_0:
# 158 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "MAY: Hi, {PLAYER}!\n So you came all the way out here, too!\p How's it going?\n There's so many cool new POKéMON\l I've never seen before!\p Anyways, while I've been out here\n searching for new POKéMON, mine have\l grown way stronger.\p So…\n How about a little battle?$"

AzureMountain_Up5_EventScript_MayBattle_Text_1:
# 170 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "Wow, {PLAYER}!\nYou've gotten this strong!$"

AzureMountain_Up5_EventScript_MayBattle_Text_2:
# 172 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "MAY: I can see why you're the CHAMPION,\n {PLAYER}.\p I think I'll stick to what I'm good at…\n catching POKéMON!\p Well, I should probably head back to the\n lab and share my findings with my dad.\p Okay, {PLAYER}{KUN}, let's meet again!$"
