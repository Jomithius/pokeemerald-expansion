BennisDojo_MapScripts::
	.byte 0


BennisDojo_ExpertBelt::
# 4 "data/maps/BennisDojo/scripts.pory"
	lock
# 5 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_EXPERT_BELT
# 6 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_EXPERT_BELT, 1
# 7 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 8 "data/maps/BennisDojo/scripts.pory"
	releaseall
	return


BennisDojo_FocusSash::
# 12 "data/maps/BennisDojo/scripts.pory"
	lock
# 13 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_ITEM_BENNIS_DOJO_FOCUS_SASH
# 14 "data/maps/BennisDojo/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 15 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 16 "data/maps/BennisDojo/scripts.pory"
	releaseall
	return


DojoBattleTrigger::
# 20 "data/maps/BennisDojo/scripts.pory"
	lock
# 21 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 22 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 23 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 24 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 25 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 27 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 28 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 29 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 30 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 31 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak1, MSGBOX_AUTOCLOSE
# 32 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 33 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_AsakBattle
# 34 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_1, MSGBOX_AUTOCLOSE
# 35 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 36 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 37 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_2, MSGBOX_AUTOCLOSE
# 38 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 39 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 40 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 41 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 42 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 43 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 44 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 45 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceleft
# 46 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 47 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 48 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 49 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak2, MSGBOX_AUTOCLOSE
# 50 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 51 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_4, MSGBOX_AUTOCLOSE
# 52 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 53 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_PaniniBattle
# 54 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_5, MSGBOX_AUTOCLOSE
# 55 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 56 "data/maps/BennisDojo/scripts.pory"
	msgbox AsakPaniniLoss, MSGBOX_AUTOCLOSE
# 57 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 58 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_6, MSGBOX_AUTOCLOSE
# 59 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 60 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 61 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 62 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 63 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, faceup
# 64 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 65 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 66 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 67 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceup
# 68 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 69 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 70 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 71 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove2
# 72 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 73 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3, MSGBOX_AUTOCLOSE
# 74 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 75 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, facedown
# 76 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 77 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak3_5, MSGBOX_AUTOCLOSE
# 78 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 79 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_7, MSGBOX_AUTOCLOSE
# 80 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 81 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove3
# 82 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 83 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak4, MSGBOX_AUTOCLOSE
# 84 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 85 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 86 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 87 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, faceright
# 88 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 89 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_8, MSGBOX_AUTOCLOSE
# 90 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 1
# 91 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 92 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 93 "data/maps/BennisDojo/scripts.pory"
	call BennisBattleStart
	return


Dojo_EarlierAnswerNO::
# 98 "data/maps/BennisDojo/scripts.pory"
	lock
# 99 "data/maps/BennisDojo/scripts.pory"
	playse SE_PIN
# 100 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, exclaim
# 101 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 102 "data/maps/BennisDojo/scripts.pory"
	delay 10
# 103 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakMove1
# 104 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 105 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 106 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 107 "data/maps/BennisDojo/scripts.pory"
	msgbox Dojo_EarlierAnswerNO_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniMove1
# 109 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 110 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 111 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 112 "data/maps/BennisDojo/scripts.pory"
	msgbox DojoBattleTrigger_Text_3, MSGBOX_AUTOCLOSE
# 113 "data/maps/BennisDojo/scripts.pory"
	delay 20
# 114 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisMove1
# 115 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 116 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceup
# 117 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 118 "data/maps/BennisDojo/scripts.pory"
	call BennisBattleStart
	return


BennisBattleStart::
# 122 "data/maps/BennisDojo/scripts.pory"
	lock
# 123 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisBattleStart_Text_0, MSGBOX_YESNO
# 124 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BennisBattleStart_2
# 132 "data/maps/BennisDojo/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BennisBattleStart_4
	return

BennisBattleStart_2:
# 125 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis_Intro, MSGBOX_AUTOCLOSE
# 126 "data/maps/BennisDojo/scripts.pory"
	call BennisDojo_EventScript_BennisBattle1
# 127 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 128 "data/maps/BennisDojo/scripts.pory"
	call BennisEnd
# 129 "data/maps/BennisDojo/scripts.pory"
	release
	end

BennisBattleStart_4:
# 133 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisIfNo, MSGBOX_AUTOCLOSE
# 134 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 135 "data/maps/BennisDojo/scripts.pory"
	applymovement 1, AsakLeave
# 136 "data/maps/BennisDojo/scripts.pory"
	waitmovement 1
# 137 "data/maps/BennisDojo/scripts.pory"
	applymovement 2, PaniniLeave
# 138 "data/maps/BennisDojo/scripts.pory"
	waitmovement 2
# 139 "data/maps/BennisDojo/scripts.pory"
	applymovement 3, BennisLeave
# 140 "data/maps/BennisDojo/scripts.pory"
	waitmovement 3
# 141 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeaves
# 142 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 143 "data/maps/BennisDojo/scripts.pory"
	release
	end


BennisEnd::
# 150 "data/maps/BennisDojo/scripts.pory"
	lock
# 151 "data/maps/BennisDojo/scripts.pory"
	msgbox Bennis2, MSGBOX_AUTOCLOSE
# 152 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 153 "data/maps/BennisDojo/scripts.pory"
	msgbox BennisEnd_Text_0, MSGBOX_AUTOCLOSE
# 154 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 155 "data/maps/BennisDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 156 "data/maps/BennisDojo/scripts.pory"
	waitmovement 0
# 157 "data/maps/BennisDojo/scripts.pory"
	msgbox Asak5, MSGBOX_AUTOCLOSE
# 158 "data/maps/BennisDojo/scripts.pory"
	waitmessage
# 159 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 160 "data/maps/BennisDojo/scripts.pory"
	playse SE_FLEE
# 161 "data/maps/BennisDojo/scripts.pory"
	setflag FLAG_BENNIS_DOJO_1
# 162 "data/maps/BennisDojo/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 2
# 163 "data/maps/BennisDojo/scripts.pory"
	removeobject 1
# 164 "data/maps/BennisDojo/scripts.pory"
	removeobject 2
# 165 "data/maps/BennisDojo/scripts.pory"
	removeobject 3
# 166 "data/maps/BennisDojo/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
	return


BennisDojo_EventScript_AsakBattle::
# 171 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_ASAK, Asak_Outro
# 172 "data/maps/BennisDojo/scripts.pory"
	lock
	return


BennisDojo_EventScript_PaniniBattle::
# 177 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_PANINI, Panini_Outro
# 178 "data/maps/BennisDojo/scripts.pory"
	lock
	return


BennisDojo_EventScript_BennisBattle1::
# 183 "data/maps/BennisDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_1, Bennis_Outro
# 184 "data/maps/BennisDojo/scripts.pory"
	lock
	return


# 188 "data/maps/BennisDojo/scripts.pory"
exclaim:
# 189 "data/maps/BennisDojo/scripts.pory"
	emote_exclamation_mark
	step_end

# 192 "data/maps/BennisDojo/scripts.pory"
AsakMove1:
# 193 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 193 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 193 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 193 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
# 194 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 195 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 209 "data/maps/BennisDojo/scripts.pory"
PaniniMove1:
# 210 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 210 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 210 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 210 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 210 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 210 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 210 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 211 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 217 "data/maps/BennisDojo/scripts.pory"
BennisMove1:
# 218 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 218 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 218 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 218 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 218 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 253 "data/maps/BennisDojo/scripts.pory"
faceup:
# 254 "data/maps/BennisDojo/scripts.pory"
	face_up
	step_end

# 257 "data/maps/BennisDojo/scripts.pory"
faceleft:
# 258 "data/maps/BennisDojo/scripts.pory"
	face_left
	step_end

# 261 "data/maps/BennisDojo/scripts.pory"
faceright:
# 262 "data/maps/BennisDojo/scripts.pory"
	face_right
	step_end

# 264 "data/maps/BennisDojo/scripts.pory"
facedown:
# 265 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 268 "data/maps/BennisDojo/scripts.pory"
PlayerLeaves:
# 269 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 269 "data/maps/BennisDojo/scripts.pory"
	walk_down
# 269 "data/maps/BennisDojo/scripts.pory"
	walk_down
	step_end

# 272 "data/maps/BennisDojo/scripts.pory"
AsakMove2:
# 273 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 273 "data/maps/BennisDojo/scripts.pory"
	walk_fast_up
# 274 "data/maps/BennisDojo/scripts.pory"
	walk_fast_left
	step_end

# 277 "data/maps/BennisDojo/scripts.pory"
AsakMove3:
# 278 "data/maps/BennisDojo/scripts.pory"
	walk_fast_right
# 279 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 279 "data/maps/BennisDojo/scripts.pory"
	walk_fast_down
# 280 "data/maps/BennisDojo/scripts.pory"
	face_player
	step_end

# 283 "data/maps/BennisDojo/scripts.pory"
AsakLeave:
# 284 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 285 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 285 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 285 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 285 "data/maps/BennisDojo/scripts.pory"
	walk_right
# 286 "data/maps/BennisDojo/scripts.pory"
	face_down
	step_end

# 289 "data/maps/BennisDojo/scripts.pory"
PaniniLeave:
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_up
# 290 "data/maps/BennisDojo/scripts.pory"
	walk_up
	step_end

# 293 "data/maps/BennisDojo/scripts.pory"
BennisLeave:
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

DojoBattleTrigger_Text_0:
# 25 "data/maps/BennisDojo/scripts.pory"
	.string "Hey!$"

DojoBattleTrigger_Text_1:
# 34 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Impossible...$"

DojoBattleTrigger_Text_2:
# 37 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI!$"

DojoBattleTrigger_Text_3:
# 47 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini?$"

DojoBattleTrigger_Text_4:
# 51 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Panini!$"

DojoBattleTrigger_Text_5:
# 54 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-Panini...$"

DojoBattleTrigger_Text_6:
# 58 "data/maps/BennisDojo/scripts.pory"
	.string "What's all this noise?$"

DojoBattleTrigger_Text_7:
# 79 "data/maps/BennisDojo/scripts.pory"
	.string "BENNIS: Hm. I'll take you on.$"

DojoBattleTrigger_Text_8:
# 89 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: Pani!$"

Dojo_EarlierAnswerNO_Text_0:
# 107 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Back again?!$"

BennisBattleStart_Text_0:
# 123 "data/maps/BennisDojo/scripts.pory"
	.string "BENNIS: Are you ready now?$"

BennisEnd_Text_0:
# 153 "data/maps/BennisDojo/scripts.pory"
	.string "PANINI: P-panini?!$"

Asak1::
# 198 "data/maps/BennisDojo/scripts.pory"
	.string "Who are you? Another disciple?\n Didn't you see the sign?\p How rude of you to barge into our dojo\n when MASTER BENNIS is meditating.\p I guess I'll have to teach you a lesson!$"

Asak_Outro::
# 205 "data/maps/BennisDojo/scripts.pory"
	.string "I lost my focus...$"

Panini_Outro::
# 207 "data/maps/BennisDojo/scripts.pory"
	.string "Panini?!$"

Asak2::
# 214 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Show this hooligan what happens\n when you challenge our dojo!$"

AsakPaniniLoss::
# 221 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: WHAT?! Even though I'VE never\n even beaten Panini...$"

Asak3::
# 225 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: MASTER BENNIS! I'm sorry for\n disturbing you.\p ASAK: This trainer was intruding on\n our dojo.$"

Asak3_5::
# 230 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: We tried to get rid of them, but\n I'm ashamed to say we were no match.$"

Asak4::
# 233 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: Ha! It's over for you now.\n MASTER BENNIS has NEVER lost!$"

BennisIfNo::
# 236 "data/maps/BennisDojo/scripts.pory"
	.string "Hm.\n Don't keep me waiting too long.$"

Bennis_Intro::
# 239 "data/maps/BennisDojo/scripts.pory"
	.string "Oho. I'm gettin' good vibrations from\n this place.$"

Bennis_Outro::
# 244 "data/maps/BennisDojo/scripts.pory"
	.string "Everyone's so mean to me...$"

Bennis2::
# 246 "data/maps/BennisDojo/scripts.pory"
	.string "BENNIS: Hm.. Beefy.$"

Asak5::
# 248 "data/maps/BennisDojo/scripts.pory"
	.string "ASAK: This can't be...\n Even MASTER BENNIS...\p ASAK: W-We won't forget this\n humiliation!$"
