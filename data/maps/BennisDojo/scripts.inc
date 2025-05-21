BennisDojo_MapScripts::
	.byte 0


BennisDojo_ExpertBelt::
# 4 "data/maps/BennisDojo/scripts.pory"
	lockall
# 5 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_EXPERT_BELT
# 6 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_EXPERT_BELT, 1
# 7 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 8 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


BennisDojo_FocusSash::
# 13 "data/maps/BennisDojo/scripts.pory"
	lockall
# 14 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_FOCUS_SASH
# 15 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 16 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 17 "data/maps/BennisDojo/scripts.pory"
	releaseall
	end


DojoBattleTrigger::
# 22 "data/maps/BennisDojo/scripts.pory"
	lock
# 23 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 24 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 25 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 26 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 27 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 29 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 30 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 31 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 32 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 33 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 34 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 35 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_AsakBattle
# 36 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 37 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 38 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 39 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 41 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 42 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 43 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 44 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 45 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 46 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 47 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 48 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 49 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 50 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 51 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_AUTOCLOSE
# 52 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 53 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 54 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 55 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_PaniniBattle
# 56 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_AUTOCLOSE
# 57 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 58 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_AUTOCLOSE
# 59 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 60 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 61 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 62 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 63 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 64 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 65 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 66 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 67 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 68 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 69 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 70 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 71 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 72 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 73 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 74 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 75 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 76 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 77 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 78 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 79 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_AUTOCLOSE
# 80 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 81 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 82 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 83 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 84 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 85 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 86 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 87 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 88 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 89 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 90 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 91 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 92 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 93 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 94 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 95 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 96 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 97 "data/maps/BennisDojo/scripts.pory"
	call BennisBattleStart
	return


Dojo_EarlierAnswerNO::
# 102 "data/maps/BennisDojo/scripts.pory"
	lock
# 103 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 104 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 105 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 106 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 107 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 108 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 109 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 110 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 111 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 112 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 113 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 114 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 115 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 116 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 117 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 118 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 119 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 120 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 121 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 122 "data/maps/BennisDojo/scripts.pory"
	call BennisBattleStart
	return


BennisBattleStart::
# 126 "data/maps/BennisDojo/scripts.pory"
	lock
# 127 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 128 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 136 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BennisBattleStart_4
	return

BennisBattleStart_2:
# 129 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 130 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_BennisBattle1
# 131 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 132 "data/maps/BennisDojo/scripts.pory"
	call BennisEnd
# 133 "data/maps/BennisDojo/scripts.pory"
	release
	end

BennisBattleStart_4:
# 137 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 138 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 139 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 140 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 141 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 142 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 143 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 144 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 145 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 146 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 147 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisEnd::
# 154 "data/maps/BennisDojo/scripts.pory"
	lock
# 155 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_AUTOCLOSE
# 156 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 157 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 158 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 159 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 160 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 161 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 162 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 163 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 164 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 165 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 166 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 167 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 168 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 169 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 170 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
	return


BennisDojo_EventScript_AsakBattle::
# 175 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 176 "data/maps/BennisDojo/scripts.pory"
	lock
	return


BennisDojo_EventScript_PaniniBattle::
# 181 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 182 "data/maps/BennisDojo/scripts.pory"
	lock
	return


BennisDojo_EventScript_BennisBattle1::
# 187 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 188 "data/maps/BennisDojo/scripts.pory"
	lock
	return


# 192 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 193 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 196 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 197 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 197 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 197 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 197 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 198 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 199 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 213 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 214 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 214 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 214 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 214 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 214 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 214 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 214 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 215 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 221 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 222 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 222 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 222 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 222 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 222 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 257 "data/maps/BennisDojo/scripts.pory"
faceup:
# 258 "data/maps/BennisDojo/scripts.pory"
	face_up
	step_end

# 261 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 262 "data/maps/BennisDojo/scripts.pory"
	face_left
	step_end

# 265 "data/maps/BennisDojo/scripts.pory"
faceright:
# 266 "data/maps/BennisDojo/scripts.pory"
	face_right
	step_end

# 268 "data/maps/BennisDojo/scripts.pory"
facedown:
# 269 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 272 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 273 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 273 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 273 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 276 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 277 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 277 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 278 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 281 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 282 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 283 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 283 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 284 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 287 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 288 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 289 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 289 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 289 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 289 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 290 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 293 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 294 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 294 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 294 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 294 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 294 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 294 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 294 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 297 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
# 298 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 298 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 298 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 298 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 298 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

DojoBattleTrigger_Text_0:
# 27 "data/maps/BennisDojo/scripts.pory"
	.string "Hey!$"

DojoBattleTrigger_Text_1:
# 36 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible...$"

DojoBattleTrigger_Text_2:
# 39 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 49 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 53 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 56 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini...$"

DojoBattleTrigger_Text_6:
# 60 "data/maps/BennisDojo/scripts.pory"
	.string "What's all this noise?$"

DojoBattleTrigger_Text_7:
# 81 "data/maps/BennisDojo/scripts.pory"
	.string "BENNIS: Hm. I'll take you on.$"

DojoBattleTrigger_Text_8:
# 93 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 111 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 127 "data/maps/BennisDojo/scripts.pory"
	.string "BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 157 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 202 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball trainer?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 209 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus...$"

Panini_Outro::
# 211 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 218 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 225 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini...$"

Asak3::
# 229 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p ASAK: This trainer was intruding on\n our dojo.$"

Asak3_5::
# 234 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 237 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 240 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 243 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 248 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me...$"

Bennis2::
# 250 "data/maps/BennisDojo/scripts.pory"
	.string "BENNIS: Hm.. Beefy.$"

Asak5::
# 252 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be...\n Even MASTER BENNIS...\p ASAK: W-We won't forget this\n humiliation!$"
