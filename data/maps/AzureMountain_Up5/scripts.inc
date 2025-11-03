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
# 49 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_RestStopSign_Text_0, MSGBOX_SIGN
# 51 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


AzureMountain_Up5_EventScript_Expert_M::
# 56 "data/maps/AzureMountain_Up5/scripts.pory"
	lock
# 57 "data/maps/AzureMountain_Up5/scripts.pory"
	faceplayer
# 58 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_Expert_M_Text_0, MSGBOX_YESNO
# 61 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 62 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_FutureSightTeach
# 63 "data/maps/AzureMountain_Up5/scripts.pory"
	goto AzureMountain_Up5_EventScript_TutorDecline
# 64 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


MoveTutor_EventScript_FutureSightTeach::
# 69 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox MoveTutor_EventScript_FutureSightTeach_Text_0, MSGBOX_DEFAULT
# 71 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_0x8005, MOVE_FUTURE_SIGHT
# 72 "data/maps/AzureMountain_Up5/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 73 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 74 "data/maps/AzureMountain_Up5/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


AzureMountain_Up5_EventScript_OldManDojo::
# 79 "data/maps/AzureMountain_Up5/scripts.pory"
	lock
# 80 "data/maps/AzureMountain_Up5/scripts.pory"
	faceplayer
# 81 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_OldManDojo_Text_0, MSGBOX_YESNO
# 84 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 85 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_UpperHandTeach
# 86 "data/maps/AzureMountain_Up5/scripts.pory"
	goto AzureMountain_Up5_EventScript_TutorDecline
# 87 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


MoveTutor_EventScript_UpperHandTeach::
# 92 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox MoveTutor_EventScript_UpperHandTeach_Text_0, MSGBOX_DEFAULT
# 94 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_0x8005, MOVE_UPPER_HAND
# 95 "data/maps/AzureMountain_Up5/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 96 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, 0, EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
# 97 "data/maps/AzureMountain_Up5/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_TutorDecline
	end


AzureMountain_Up5_EventScript_TutorDecline::
# 102 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/AzureMountain_Up5/scripts.pory"
	release
	end


AzureMountain_Up5_EventScript_RivalBattle::
# 109 "data/maps/AzureMountain_Up5/scripts.pory"
	lockall
# 110 "data/maps/AzureMountain_Up5/scripts.pory"
	checkplayergender
# 111 "data/maps/AzureMountain_Up5/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, AzureMountain_Up5_EventScript_MayBattle
# 112 "data/maps/AzureMountain_Up5/scripts.pory"
	delay 16
# 113 "data/maps/AzureMountain_Up5/scripts.pory"
	playse SE_PIN
# 114 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 115 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 116 "data/maps/AzureMountain_Up5/scripts.pory"
	waitse
# 117 "data/maps/AzureMountain_Up5/scripts.pory"
	call AzureMountain_Up5_EventScript_RivalMovementVar
# 118 "data/maps/AzureMountain_Up5/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 119 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_RivalBattle_Text_0, MSGBOX_AUTOCLOSE
# 126 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 127 "data/maps/AzureMountain_Up5/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 128 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_AZURE_MOUNTAIN, AzureMountain_Up5_EventScript_RivalBattle_Text_1
# 129 "data/maps/AzureMountain_Up5/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 130 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_RivalBattle_Text_2, MSGBOX_AUTOCLOSE
# 136 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 137 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 138 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 139 "data/maps/AzureMountain_Up5/scripts.pory"
	setfieldeffectargument 0, 1
# 140 "data/maps/AzureMountain_Up5/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 141 "data/maps/AzureMountain_Up5/scripts.pory"
	delay 15
# 142 "data/maps/AzureMountain_Up5/scripts.pory"
	removeobject 1
# 143 "data/maps/AzureMountain_Up5/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 144 "data/maps/AzureMountain_Up5/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 145 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_AZURE_MOUNTAIN_RIVAL_STATE, 2
# 146 "data/maps/AzureMountain_Up5/scripts.pory"
	savebgm MUS_DUMMY
# 147 "data/maps/AzureMountain_Up5/scripts.pory"
	fadedefaultbgm
# 148 "data/maps/AzureMountain_Up5/scripts.pory"
	releaseall
	end


AzureMountain_Up5_EventScript_MayBattle::
# 153 "data/maps/AzureMountain_Up5/scripts.pory"
	lockall
# 154 "data/maps/AzureMountain_Up5/scripts.pory"
	delay 16
# 155 "data/maps/AzureMountain_Up5/scripts.pory"
	playse SE_PIN
# 156 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 157 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 158 "data/maps/AzureMountain_Up5/scripts.pory"
	waitse
# 159 "data/maps/AzureMountain_Up5/scripts.pory"
	call AzureMountain_Up5_EventScript_RivalMovementVar
# 160 "data/maps/AzureMountain_Up5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 161 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 171 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 172 "data/maps/AzureMountain_Up5/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 173 "data/maps/AzureMountain_Up5/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_AZURE_MOUNTAIN, AzureMountain_Up5_EventScript_MayBattle_Text_1
# 174 "data/maps/AzureMountain_Up5/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 175 "data/maps/AzureMountain_Up5/scripts.pory"
	msgbox AzureMountain_Up5_EventScript_MayBattle_Text_2, MSGBOX_AUTOCLOSE
# 182 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmessage
# 183 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 184 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 185 "data/maps/AzureMountain_Up5/scripts.pory"
	setfieldeffectargument 0, 1
# 186 "data/maps/AzureMountain_Up5/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 187 "data/maps/AzureMountain_Up5/scripts.pory"
	delay 15
# 188 "data/maps/AzureMountain_Up5/scripts.pory"
	removeobject 1
# 189 "data/maps/AzureMountain_Up5/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 190 "data/maps/AzureMountain_Up5/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 191 "data/maps/AzureMountain_Up5/scripts.pory"
	setvar VAR_AZURE_MOUNTAIN_RIVAL_STATE, 2
# 192 "data/maps/AzureMountain_Up5/scripts.pory"
	savebgm MUS_DUMMY
# 193 "data/maps/AzureMountain_Up5/scripts.pory"
	fadedefaultbgm
# 194 "data/maps/AzureMountain_Up5/scripts.pory"
	releaseall
	end


AzureMountain_Up5_EventScript_RivalMovementVar::
# 199 "data/maps/AzureMountain_Up5/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 200 "data/maps/AzureMountain_Up5/scripts.pory"
	switch VAR_TEMP_0
# 201 "data/maps/AzureMountain_Up5/scripts.pory"
	case 39, AzureMountain_Up5_EventScript_RivalMovementVar_3
# 203 "data/maps/AzureMountain_Up5/scripts.pory"
	case 40, AzureMountain_Up5_EventScript_RivalMovementVar_4
# 205 "data/maps/AzureMountain_Up5/scripts.pory"
	case 41, AzureMountain_Up5_EventScript_RivalMovementVar_5
# 208 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
AzureMountain_Up5_EventScript_RivalMovementVar_1:
# 210 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
# 211 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 212 "data/maps/AzureMountain_Up5/scripts.pory"
	waitmovement 0
	return

AzureMountain_Up5_EventScript_RivalMovementVar_3:
# 202 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, AzureMountain_Up5_MovementRivalLeftDown
	goto AzureMountain_Up5_EventScript_RivalMovementVar_1

AzureMountain_Up5_EventScript_RivalMovementVar_4:
# 204 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
	goto AzureMountain_Up5_EventScript_RivalMovementVar_1

AzureMountain_Up5_EventScript_RivalMovementVar_5:
# 206 "data/maps/AzureMountain_Up5/scripts.pory"
	applymovement 1, AzureMountain_Up5_MovementRivalRightDown
	goto AzureMountain_Up5_EventScript_RivalMovementVar_1


# 216 "data/maps/AzureMountain_Up5/scripts.pory"
AzureMountain_Up5_MovementRivalLeftDown:
# 217 "data/maps/AzureMountain_Up5/scripts.pory"
	walk_left
# 218 "data/maps/AzureMountain_Up5/scripts.pory"
	walk_down
	step_end

# 221 "data/maps/AzureMountain_Up5/scripts.pory"
AzureMountain_Up5_MovementRivalRightDown:
# 222 "data/maps/AzureMountain_Up5/scripts.pory"
	walk_right
# 223 "data/maps/AzureMountain_Up5/scripts.pory"
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
	.string "It was hard getting up here,\n and the lake is ruined!$"

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
	.string "This rest stop is really a\n blessing!\p I heard it was warm up here so\n I barely packed anything.$"

AzureMountain_Up5_EventScript_RestStopSign_Text_0:
# 49 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "REST STOP\p “Stop in and warm up!”$"

AzureMountain_Up5_EventScript_Expert_M_Text_0:
# 58 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "The best way to outplay your\n opponent is to predict them!\p Don't you agree?$"

MoveTutor_EventScript_FutureSightTeach_Text_0:
# 69 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I knew you would say that.\p Which POKéMON do you want to\nteach FUTURE SIGHT to?$"

AzureMountain_Up5_EventScript_OldManDojo_Text_0:
# 81 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "The best way to outplay your\n opponent is to get the upper hand!\p Don't you agree?$"

MoveTutor_EventScript_UpperHandTeach_Text_0:
# 92 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I thought you would!\p Let me teach one of your\nPOKéMON UPPER HAND!$"

AzureMountain_Up5_EventScript_TutorDecline_Text_0:
# 102 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "I see.\n You still have much to learn.$"

AzureMountain_Up5_EventScript_RivalBattle_Text_0:
# 119 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n So you came all the way out here, too.\p How's it going?\n There's so many cool new POKéMON\l I've never seen before.\p Have you been raising any new POKéMON?\n I'll check for you.$"

AzureMountain_Up5_EventScript_RivalBattle_Text_1:
# 128 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "Wow, {PLAYER}.\nYou've gotten this strong?$"

AzureMountain_Up5_EventScript_RivalBattle_Text_2:
# 130 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "BRENDAN: I can see why you're the\n CHAMPION, {PLAYER}.\p I think I'll stick to what I'm good at…\n raising POKéMON.\p Okay, I'm going to head back to the lab\n to give a report.$"

AzureMountain_Up5_EventScript_MayBattle_Text_0:
# 161 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "MAY: Hi, {PLAYER}!\n So you came all the way out here, too!\p How's it going?\n There's so many cool new POKéMON\l I've never seen before!\p Anyways, while I've been out here\n searching for new POKéMON, mine have\l grown way stronger.\p So…\n How about a little battle?$"

AzureMountain_Up5_EventScript_MayBattle_Text_1:
# 173 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "Wow, {PLAYER}!\nYou've gotten this strong!$"

AzureMountain_Up5_EventScript_MayBattle_Text_2:
# 175 "data/maps/AzureMountain_Up5/scripts.pory"
	.string "MAY: I can see why you're the CHAMPION,\n {PLAYER}.\p I think I'll stick to what I'm good at…\n catching POKéMON!\p Well, I should probably head back to the\n lab and share my findings with my dad.\p Okay, {PLAYER}{KUN}, let's meet again!$"
