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
# 83 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 84 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 85 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 86 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 87 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 88 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 89 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 90 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 91 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 92 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 93 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 94 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 95 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 96 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 97 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 98 "data/maps/BennisDojo/scripts.pory"
	call BennisBattleStart
	return


Dojo_EarlierAnswerNO::
# 103 "data/maps/BennisDojo/scripts.pory"
	lock
# 104 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 105 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 106 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 107 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 108 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 109 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 110 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 111 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 112 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 113 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 114 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 115 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 116 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 117 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 118 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 119 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 120 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 121 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 122 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 123 "data/maps/BennisDojo/scripts.pory"
	call BennisBattleStart
	return


BennisBattleStart::
# 127 "data/maps/BennisDojo/scripts.pory"
	lock
# 128 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 129 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 137 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BennisBattleStart_4
	return

BennisBattleStart_2:
# 130 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 131 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_BennisBattle1
# 132 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 133 "data/maps/BennisDojo/scripts.pory"
	call BennisEnd
# 134 "data/maps/BennisDojo/scripts.pory"
	release
	end

BennisBattleStart_4:
# 138 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 139 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 140 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 141 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 142 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 143 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 144 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 145 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 146 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 147 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 148 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisEnd::
# 155 "data/maps/BennisDojo/scripts.pory"
	lock
# 156 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_AUTOCLOSE
# 157 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 158 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 159 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 160 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 161 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 162 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 163 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 164 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 165 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 166 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 167 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 168 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 169 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 170 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 171 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
	return


BennisDojo_EventScript_AsakBattle::
# 176 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 177 "data/maps/BennisDojo/scripts.pory"
	lock
	return


BennisDojo_EventScript_PaniniBattle::
# 182 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 183 "data/maps/BennisDojo/scripts.pory"
	lock
	return


BennisDojo_EventScript_BennisBattle1::
# 188 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 189 "data/maps/BennisDojo/scripts.pory"
	lock
	return


# 193 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 194 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 197 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 198 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 198 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 198 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 198 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 199 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 200 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 214 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 215 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 215 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 215 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 215 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 215 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 215 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 215 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 216 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 222 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 223 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 223 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 223 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 223 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 223 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 258 "data/maps/BennisDojo/scripts.pory"
faceup:
# 259 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_up
	step_end

# 262 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 263 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_left
	step_end

# 266 "data/maps/BennisDojo/scripts.pory"
faceright:
# 267 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_right
	step_end

# 269 "data/maps/BennisDojo/scripts.pory"
facedown:
# 270 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 273 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 274 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 274 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 274 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 277 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 278 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 278 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 279 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 282 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 283 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 284 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 284 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 285 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 288 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 289 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 291 "data/maps/BennisDojo/scripts.pory"
	walk_in_place_down
	step_end

# 294 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 295 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 295 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 295 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 295 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 295 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 295 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 295 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 298 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
# 299 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 299 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 299 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 299 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 299 "data/maps/BennisDojo/scripts.pory"
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
	.string "MASTER BENNIS: Hm.\n  I'll take you on.$"

DojoBattleTrigger_Text_8:
# 94 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 112 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 128 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 158 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini?!$"

Asak1::
# 203 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another goofball trainer?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 210 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus...$"

Panini_Outro::
# 212 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 219 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 226 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini...$"

Asak3::
# 230 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p ASAK: This trainer was intruding on\n our dojo.$"

Asak3_5::
# 235 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 238 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 241 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 244 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 249 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me...$"

Bennis2::
# 251 "data/maps/BennisDojo/scripts.pory"
	.string "MASTER BENNIS: Hm.. Beefy.$"

Asak5::
# 253 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be...\n Even MASTER BENNIS...\p ASAK: W-We won't forget this\n humiliation!$"
