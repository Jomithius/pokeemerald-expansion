# 1 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_MapScripts::
# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.byte 0
# 4 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 5 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition:
# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 7 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 8 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner::
# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 15 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 18 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 21 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 26 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP, 6
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BagFull
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BagFull::
# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop::
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkmoney 300
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
	removemoney 300
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
.else
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
.endif
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughMoney::
# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughSpace::
# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Simon::
# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SeashoreHouseIntro:
# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm the owner of the SEASHORE HOUSE.\n"
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "But you can call me MR. SEA!\p"
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "What I love above all is to see hot\n"
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON battles.\p"
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Let me see that your heart burns hot!\p"
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you can defeat all the TRAINERS\n"
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "here, I'll reward your efforts.$"
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 113 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\p"
# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I run this SEASHORE HOUSE just for\n"
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "that reason alone!$"
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You're scorching hot!\n"
# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Those battles blazed!\l"
# 121 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm more than just satisfied!\p"
# 122 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "As thanks for showing me your hot\n"
# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "streak, I want you to take these.\p"
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "It's half a dozen bottles of MTN DEW!$"
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BagFull:
# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Oh, but hey, your BAG's jammed full.\n"
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'll hang on to these for you.$"
# 129 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 130 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_WantToBuySodaPop:
# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Want to buy some MTN DEW?\n"
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON love it!\p"
# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Just ¥300 a bottle!\n"
# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Buy some!$"
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_HereYouGo:
# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Here you go!$"
# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_NotEnoughMoney:
# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You don't have the money.$"
# 141 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ThatsTooBad:
# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "No?\n"
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's too bad.$"
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 147 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you're looking for a battle in the\n"
# 148 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "SEASHORE HOUSE, you'll find no\l"
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hotter TRAINER than me, matey!$"
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\n"
# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I can accept that loss, matey!$"
# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whenever I'm in SLATEPORT, I enjoy\n"
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hot battles and ice-cold MTN DEW!$"
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren't worth the effort.\p"
# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Fiery hot battles are what toughen up\n"
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "TRAINERS and POKéMON!$"
# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 164 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's hot!$"
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 167 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whew, I'm all thirsty.\n"
# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Maybe I'll have a MTN DEW.$"
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonIntro:
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm going to show you how great\n"
# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "my POKéMON are, but don't cry!$"
# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 175 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonDefeated:
# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "…I lost, but I won't cry…$"
# 177 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonPostBattle:
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If one of my POKéMON knew the move\n"
# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "for carrying me across water on its\l"
# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "back, I could get rid of this inner tube.$"

Route109_SeashoreHouse_EventScript_IcicleSpearTutor::
# 186 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 187 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 188 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_EventScript_IcicleSpearTutor_Text_0, MSGBOX_YESNO
# 192 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmessage
# 193 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MoveTutor_EventScript_IcicleSpearTeach
# 194 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_TutorDecline
# 195 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


MoveTutor_EventScript_IcicleSpearTeach::
# 200 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox MoveTutor_EventScript_IcicleSpearTeach_Text_0, MSGBOX_DEFAULT
# 201 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
# 202 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 203 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route109_SeashoreHouse_EventScript_TutorDecline
# 204 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_IcicleSpearTaught
	end


Route109_SeashoreHouse_EventScript_TutorDecline::
# 209 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_EventScript_TutorDecline_Text_0, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmessage
# 212 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_IcicleSpearTaught::
# 217 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_EventScript_IcicleSpearTaught_Text_0
# 219 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmessage
# 220 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_IcicleSpearTutor_Text_0:
# 188 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "God, it's so hot…\n Luckily, I know a move to cool down.\p If you want, I could teach it to your\n POKéMON, too.$"

MoveTutor_EventScript_IcicleSpearTeach_Text_0:
# 200 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Which POKéMON do you want me to\nteach ICICLE SPEAR?$"

Route109_SeashoreHouse_EventScript_TutorDecline_Text_0:
# 209 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Oh, okay.\n Come back if you change your mind.$"

Route109_SeashoreHouse_EventScript_IcicleSpearTaught_Text_0:
# 217 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Come back if you want to cool\n down some more.$"
