SnowdriftCity_House3_MapScripts::
# 2 "data/maps/SnowdriftCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SnowdriftCity_House3_OnTransition
# 3 "data/maps/SnowdriftCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SnowdriftCity_House3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SnowdriftCity_House3_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SnowdriftCity_House3/scripts.pory"
	map_script_2 VAR_CYNTHIA_STATE, 0, SnowdriftCity_House3_EventScript_CynthiaEncounter
# 5 "data/maps/SnowdriftCity_House3/scripts.pory"
	map_script_2 VAR_CYNTHIA_STATE, 1, SnowdriftCity_House3_EventScript_CynthiaReencounter
	.2byte 0


SnowdriftCity_House3_OnTransition::
# 10 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_TEMP_E
# 11 "data/maps/SnowdriftCity_House3/scripts.pory"
	call_if_not_defeated TRAINER_CYNTHIA, SnowdriftCity_House3_UpdateMusic
	end


SnowdriftCity_House3_UpdateMusic::
# 16 "data/maps/SnowdriftCity_House3/scripts.pory"
	playbgm MUS_ENCOUNTER_CYNTHIA, TRUE
	return


SnowdriftCity_House3_EventScript_CynthiaEncounter::
# 21 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 22 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_PIN
# 23 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 24 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 25 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 26 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 27 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 28 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 30 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaApproachesPlayer
# 31 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 32 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_1, MSGBOX_AUTOCLOSE
# 40 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 41 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 42 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 43 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 48 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 49 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 50 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_3, MSGBOX_DEFAULT
# 54 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 55 "data/maps/SnowdriftCity_House3/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_4, SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_5
# 56 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SnowdriftCity_House3_EventScript_PlayerFlees
# 57 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto SnowdriftCity_House3_EventScript_CynthiaBattle
	end


SnowdriftCity_House3_EventScript_CynthiaReencounter::
# 62 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 63 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_PIN
# 64 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 65 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 66 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 67 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 68 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 69 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 71 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaApproachesPlayer
# 72 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 73 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_1, MSGBOX_DEFAULT
# 75 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 76 "data/maps/SnowdriftCity_House3/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_2, SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_3
# 77 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SnowdriftCity_House3_EventScript_PlayerFlees
# 78 "data/maps/SnowdriftCity_House3/scripts.pory"
	goto SnowdriftCity_House3_EventScript_CynthiaBattle
	end


SnowdriftCity_House3_EventScript_PlayerFlees::
# 83 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 84 "data/maps/SnowdriftCity_House3/scripts.pory"
	closemessage
# 85 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_CYNTHIA_STATE, 1
# 86 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 0
# 88 "data/maps/SnowdriftCity_House3/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 89 "data/maps/SnowdriftCity_House3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/SnowdriftCity_House3/scripts.pory"
	playse SE_FLEE
# 91 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitse
# 92 "data/maps/SnowdriftCity_House3/scripts.pory"
	warpsilent MAP_SNOWDRIFT_CITY, 34, 28
# 93 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitstate
# 94 "data/maps/SnowdriftCity_House3/scripts.pory"
	releaseall
	end


SnowdriftCity_House3_EventScript_CynthiaBattle::
# 99 "data/maps/SnowdriftCity_House3/scripts.pory"
	lockall
# 100 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 101 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 102 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaBattle_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 110 "data/maps/SnowdriftCity_House3/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA, SnowdriftCity_House3_Text_CynthiaLoss
# 111 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_CynthiaBattle_Text_1, MSGBOX_AUTOCLOSE
# 118 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 119 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement 1, SnowdriftCity_House3_Movement_CynthiaReturnsToSeat
# 120 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 1
# 121 "data/maps/SnowdriftCity_House3/scripts.pory"
	setvar VAR_CYNTHIA_STATE, 2
# 122 "data/maps/SnowdriftCity_House3/scripts.pory"
	fadedefaultbgm
# 123 "data/maps/SnowdriftCity_House3/scripts.pory"
	releaseall
	end


SnowdriftCity_House3_EventScript_Cynthia::
# 128 "data/maps/SnowdriftCity_House3/scripts.pory"
	lock
# 129 "data/maps/SnowdriftCity_House3/scripts.pory"
	faceplayer
# 130 "data/maps/SnowdriftCity_House3/scripts.pory"
	msgbox SnowdriftCity_House3_EventScript_Cynthia_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmessage
# 141 "data/maps/SnowdriftCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 142 "data/maps/SnowdriftCity_House3/scripts.pory"
	waitmovement 0
# 143 "data/maps/SnowdriftCity_House3/scripts.pory"
	release
	end


# 153 "data/maps/SnowdriftCity_House3/scripts.pory"
SnowdriftCity_House3_Movement_CynthiaReturnsToSeat:
# 154 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_up
# 154 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_up
# 155 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_right
# 155 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_right
	step_end

# 158 "data/maps/SnowdriftCity_House3/scripts.pory"
SnowdriftCity_House3_Movement_CynthiaApproachesPlayer:
# 159 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_left
# 159 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_left
# 160 "data/maps/SnowdriftCity_House3/scripts.pory"
	walk_down
	step_end

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_0:
# 28 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "???: What's this?$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_1:
# 32 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "What's your name?\p …\p Okay. I'll remember that!\n {PLAYER}, nice to meet you.\p I'm CYNTHIA.\n I'm a POKéMON TRAINER too, like you.\p I have an insatiable curiosity for\n researching POKéMON myths.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_2:
# 43 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "I'm sure you know about HOENN's\n SEALED CHAMBERS, right?\p I'm staying here at my friend's villa\n so I can investigate them.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_3:
# 50 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "In order to get to know each other\n better as POKéMON TRAINERS, I would\l like our POKéMON to have a match.\p Would you care to be my opponent?$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_4:
# 55 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "I'd love to.$"

SnowdriftCity_House3_EventScript_CynthiaEncounter_Text_5:
# 55 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "OH, GOD. SOMEBODY SAVE ME!$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_0:
# 69 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "CYNTHIA: What's this?$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_1:
# 73 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You came back!\n Did you change your mind?$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_2:
# 76 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "… Yeah. Sorry about that.$"

SnowdriftCity_House3_EventScript_CynthiaReencounter_Text_3:
# 76 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "NO! I'M STILL SCARED!$"

SnowdriftCity_House3_EventScript_CynthiaBattle_Text_0:
# 102 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "Before I send out my POKéMON,\n my heart always begins to race…\p Interesting…\n My POKéMON in their POKé BALLS are\l radiating a happy feeling.\p Are you the reason?\n What are you?$"

SnowdriftCity_House3_EventScript_CynthiaBattle_Text_1:
# 111 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "That was beyond my expectation!\n What an exceptional battle!\l I love being visiting HOENN.\p I can't stay all year, because there's so\n much to investigate in SINNOH, as well.\p You're a great TRAINER, and it would\n make me happy to see you again sometime.$"

SnowdriftCity_House3_EventScript_Cynthia_Text_0:
# 130 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "You certainly bear a resemblance\n to that TRAINER who faced GIRATINA…\p Oh, pardon me.\n I was just thinking out loud.\p I love visiting HOENN.\p I can't stay all year, because there's so\n much to investigate in SINNOH, as well.\p Though I've heard in HOENN there's six\n legendary golems, compared to the four\l in SINNOH…$"

SnowdriftCity_House3_Text_CynthiaLoss::
# 147 "data/maps/SnowdriftCity_House3/scripts.pory"
	.string "My heart is pounding so hard because I\n had such a heated battle with you.\p You're a really great TRAINER!!$"
