Route139_MapScripts::
	.byte 0


Route139_LeftTrigger::
# 6 "data/maps/Route139/scripts.pory"
	lockall
# 7 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_5
# 8 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_RightTrigger::
# 13 "data/maps/Route139/scripts.pory"
	lockall
# 14 "data/maps/Route139/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_Momo
	end


Route139_EventScript_Momo::
# 20 "data/maps/Route139/scripts.pory"
	lockall
# 21 "data/maps/Route139/scripts.pory"
	playse SE_SHINY
# 22 "data/maps/Route139/scripts.pory"
	fadescreen FADE_TO_WHITE
# 23 "data/maps/Route139/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 24 "data/maps/Route139/scripts.pory"
	addobject 16
# 25 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_5, Route139_EventScript_Momo_2
# 28 "data/maps/Route139/scripts.pory"
	goto_if_set FLAG_TEMP_6, Route139_EventScript_Momo_3
# 32 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerTrigger
Route139_EventScript_Momo_1:
# 34 "data/maps/Route139/scripts.pory"
	delay 16
# 35 "data/maps/Route139/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 36 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 37 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route139/scripts.pory"
	waitmessage
# 40 "data/maps/Route139/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 41 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 42 "data/maps/Route139/scripts.pory"
	delay 24
# 43 "data/maps/Route139/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 44 "data/maps/Route139/scripts.pory"
	waitmovement 16
# 45 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Momo_Text_1, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route139/scripts.pory"
	waitmessage
# 49 "data/maps/Route139/scripts.pory"
	playse SE_M_PETAL_DANCE
# 50 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 51 "data/maps/Route139/scripts.pory"
	removeobject 16
# 52 "data/maps/Route139/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 53 "data/maps/Route139/scripts.pory"
	setflag FLAG_HIDE_ASAK_BALDESIA_MAIN_HOUSE
# 54 "data/maps/Route139/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 6
# 55 "data/maps/Route139/scripts.pory"
	releaseall
	end

Route139_EventScript_Momo_2:
# 26 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerLeftTrigger
	goto Route139_EventScript_Momo_1

Route139_EventScript_Momo_3:
# 29 "data/maps/Route139/scripts.pory"
	applymovement 16, Route139_Movement_MomoToPlayerRightTrigger
	goto Route139_EventScript_Momo_1


Route139_EventScript_KimonoOldWoman::
# 60 "data/maps/Route139/scripts.pory"
	lock
# 61 "data/maps/Route139/scripts.pory"
	faceplayer
# 62 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0 Route139_EventScript_StartSidequest
# 63 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 1 Route139_EventScript_RemindSidequest
# 64 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 2 Route139_EventScript_GiveResult
# 65 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 3 Route139_EventScript_GiveResult
# 66 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 4 Route139_EventScript_GiveResult
# 67 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 5 Route139_EventScript_GiveResult
# 68 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 6, Route139_EventScript_GiveSyrupyApple
# 69 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route139/scripts.pory"
	waitmessage
# 74 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_StartSidequest::
# 79 "data/maps/Route139/scripts.pory"
	lock
# 80 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_StartSidequest_Text_0
# 89 "data/maps/Route139/scripts.pory"
	waitmessage
# 90 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 1
# 91 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_RemindSidequest::
# 96 "data/maps/Route139/scripts.pory"
	lock
# 97 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_RemindSidequest_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route139/scripts.pory"
	waitmessage
# 101 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveResult::
# 106 "data/maps/Route139/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROUTE_139_TRAINER_COUNT
# 107 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route139/scripts.pory"
	waitmessage
# 111 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_GiveSyrupyApple::
# 116 "data/maps/Route139/scripts.pory"
	lock
# 117 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_0
# 120 "data/maps/Route139/scripts.pory"
	waitmessage
# 121 "data/maps/Route139/scripts.pory"
	checkitemspace ITEM_SYRUPY_APPLE
# 122 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_GiveSyrupyApple_2
# 132 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_GiveSyrupyApple_Text_1, MSGBOX_AUTOCLOSE
Route139_EventScript_GiveSyrupyApple_1:
# 135 "data/maps/Route139/scripts.pory"
	waitmessage
# 136 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_GiveSyrupyApple_2:
# 123 "data/maps/Route139/scripts.pory"
	giveitem ITEM_SYRUPY_APPLE
# 124 "data/maps/Route139/scripts.pory"
	waitmessage
# 125 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_KimonoOldWoman_Text_0, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route139/scripts.pory"
	setvar VAR_BALDESIA_ROUTE_139_STATE, 7
	goto Route139_EventScript_GiveSyrupyApple_1


Route139_EventScript_Morgan::
# 141 "data/maps/Route139/scripts.pory"
	lock
# 142 "data/maps/Route139/scripts.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 143 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 144 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_7
Route139_EventScript_Morgan_5:
# 157 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Morgan_4
Route139_EventScript_Morgan_1:
# 160 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Morgan_2:
# 145 "data/maps/Route139/scripts.pory"
	faceplayer
# 146 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 147 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route139/scripts.pory"
	waitmessage
# 150 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_MORGAN, Route139_Text_WorkerDefeat
# 151 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 153 "data/maps/Route139/scripts.pory"
	waitmessage
# 154 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 155 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_3:
# 158 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_4:
# 157 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_Morgan_3
	goto Route139_EventScript_Morgan_1

Route139_EventScript_Morgan_7:
# 144 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route139_EventScript_Morgan_2
	goto Route139_EventScript_Morgan_5


Route139_EventScript_Dinwiddle::
# 165 "data/maps/Route139/scripts.pory"
	lock
# 166 "data/maps/Route139/scripts.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 167 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 168 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_7
Route139_EventScript_Dinwiddle_5:
# 181 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Dinwiddle_4
Route139_EventScript_Dinwiddle_1:
# 184 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Dinwiddle_2:
# 169 "data/maps/Route139/scripts.pory"
	faceplayer
# 170 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 171 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route139/scripts.pory"
	waitmessage
# 174 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_DINWIDDLE, Route139_Text_WorkerDefeat
# 175 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route139/scripts.pory"
	waitmessage
# 178 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 179 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_3:
# 182 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_4:
# 181 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_Dinwiddle_3
	goto Route139_EventScript_Dinwiddle_1

Route139_EventScript_Dinwiddle_7:
# 168 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route139_EventScript_Dinwiddle_2
	goto Route139_EventScript_Dinwiddle_5


Route139_EventScript_Widdledin::
# 189 "data/maps/Route139/scripts.pory"
	lock
# 190 "data/maps/Route139/scripts.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 191 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 192 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_7
Route139_EventScript_Widdledin_5:
# 205 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Widdledin_4
Route139_EventScript_Widdledin_1:
# 208 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Widdledin_2:
# 193 "data/maps/Route139/scripts.pory"
	faceplayer
# 194 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 195 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route139/scripts.pory"
	waitmessage
# 198 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_WIDDLEDIN, Route139_Text_WorkerDefeat
# 199 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route139/scripts.pory"
	waitmessage
# 202 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 203 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_3:
# 206 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_4:
# 205 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_Widdledin_3
	goto Route139_EventScript_Widdledin_1

Route139_EventScript_Widdledin_7:
# 192 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route139_EventScript_Widdledin_2
	goto Route139_EventScript_Widdledin_5


Route139_EventScript_Johnald::
# 213 "data/maps/Route139/scripts.pory"
	lock
# 214 "data/maps/Route139/scripts.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 215 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 216 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_7
Route139_EventScript_Johnald_5:
# 229 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Johnald_4
Route139_EventScript_Johnald_1:
# 232 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Johnald_2:
# 217 "data/maps/Route139/scripts.pory"
	faceplayer
# 218 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 219 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route139/scripts.pory"
	waitmessage
# 222 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_JOHNALD, Route139_Text_WorkerDefeat
# 223 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route139/scripts.pory"
	waitmessage
# 226 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 227 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_3:
# 230 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_4:
# 229 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_Johnald_3
	goto Route139_EventScript_Johnald_1

Route139_EventScript_Johnald_7:
# 216 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route139_EventScript_Johnald_2
	goto Route139_EventScript_Johnald_5


Route139_EventScript_Fredward::
# 237 "data/maps/Route139/scripts.pory"
	lock
# 238 "data/maps/Route139/scripts.pory"
	specialvar VAR_RESULT, GetTrainerFlag
# 239 "data/maps/Route139/scripts.pory"
	goto_if_eq VAR_BALDESIA_ROUTE_139_STATE, 0, Route139_EventScript_WorkerBored
# 240 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_7
Route139_EventScript_Fredward_5:
# 255 "data/maps/Route139/scripts.pory"
	compare VAR_BALDESIA_ROUTE_139_STATE, 1
	goto_if_ge Route139_EventScript_Fredward_4
Route139_EventScript_Fredward_1:
# 258 "data/maps/Route139/scripts.pory"
	release
	end

Route139_EventScript_Fredward_2:
# 241 "data/maps/Route139/scripts.pory"
	faceplayer
# 242 "data/maps/Route139/scripts.pory"
	playbgm MUS_ENCOUNTER_INTENSE, FALSE
# 243 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Fredward_Text_0, MSGBOX_AUTOCLOSE
# 247 "data/maps/Route139/scripts.pory"
	waitmessage
# 248 "data/maps/Route139/scripts.pory"
	trainerbattle_no_intro TRAINER_FREDWARD, Route139_Text_WorkerDefeat
# 249 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_Morgan_Text_1, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route139/scripts.pory"
	waitmessage
# 252 "data/maps/Route139/scripts.pory"
	addvar VAR_ROUTE_139_TRAINER_COUNT, 1
# 253 "data/maps/Route139/scripts.pory"
	addvar VAR_BALDESIA_ROUTE_139_STATE, 1
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_3:
# 256 "data/maps/Route139/scripts.pory"
	goto Route139_EventScript_WorkerFiredUp
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_4:
# 255 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route139_EventScript_Fredward_3
	goto Route139_EventScript_Fredward_1

Route139_EventScript_Fredward_7:
# 240 "data/maps/Route139/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route139_EventScript_Fredward_2
	goto Route139_EventScript_Fredward_5


Route139_EventScript_WorkerFiredUp::
# 263 "data/maps/Route139/scripts.pory"
	lock
# 264 "data/maps/Route139/scripts.pory"
	faceplayer
# 265 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerFiredUp_Text_0, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route139/scripts.pory"
	waitmessage
# 269 "data/maps/Route139/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 270 "data/maps/Route139/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route139/scripts.pory"
	release
	end


Route139_EventScript_WorkerBored::
# 276 "data/maps/Route139/scripts.pory"
	lock
# 277 "data/maps/Route139/scripts.pory"
	msgbox Route139_EventScript_WorkerBored_Text_0, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route139/scripts.pory"
	waitmessage
# 279 "data/maps/Route139/scripts.pory"
	release
	end


# 287 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerLeftTrigger:
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
# 288 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 291 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerTrigger:
# 292 "data/maps/Route139/scripts.pory"
	walk_left
# 292 "data/maps/Route139/scripts.pory"
	walk_left
# 292 "data/maps/Route139/scripts.pory"
	walk_left
# 292 "data/maps/Route139/scripts.pory"
	walk_left
# 292 "data/maps/Route139/scripts.pory"
	walk_left
# 292 "data/maps/Route139/scripts.pory"
	walk_left
# 292 "data/maps/Route139/scripts.pory"
	walk_left
# 292 "data/maps/Route139/scripts.pory"
	walk_left
# 292 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

# 295 "data/maps/Route139/scripts.pory"
Route139_Movement_MomoToPlayerRightTrigger:
# 296 "data/maps/Route139/scripts.pory"
	walk_left
# 296 "data/maps/Route139/scripts.pory"
	walk_left
# 296 "data/maps/Route139/scripts.pory"
	walk_left
# 296 "data/maps/Route139/scripts.pory"
	walk_left
# 296 "data/maps/Route139/scripts.pory"
	walk_left
# 296 "data/maps/Route139/scripts.pory"
	walk_left
# 296 "data/maps/Route139/scripts.pory"
	walk_left
# 296 "data/maps/Route139/scripts.pory"
	walk_left
	step_end

Route139_EventScript_Momo_Text_0:
# 37 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n The altar is up ahead through the cave.$"

Route139_EventScript_Momo_Text_1:
# 45 "data/maps/Route139/scripts.pory"
	.string "MOMO: … … …\n Be careful.\l I'll meet you there.$"

Route139_EventScript_KimonoOldWoman_Text_0:
# 69 "data/maps/Route139/scripts.pory"
	.string "This dessert has been a staple food\n in our village for a few years now.\p The apples required to make them only grow\n in this area.$"

Route139_EventScript_StartSidequest_Text_0:
# 80 "data/maps/Route139/scripts.pory"
	.string "Hm… I sense strength in you, young one.\n Would you mind helping out an old lady?\p These meat heads only think about\n battling, and they're all bored of\l battling each other.\p Do you mind battling them?\n I want them to get fired up.\p I'll give you a reward if you can\n get all 5 of them fired up.$"

Route139_EventScript_RemindSidequest_Text_0:
# 97 "data/maps/Route139/scripts.pory"
	.string "I need to get my workers fired up.\p If you can defeat all 5 of them in\n a battle, I'll give you a reward.$"

Route139_EventScript_GiveResult_Text_0:
# 107 "data/maps/Route139/scripts.pory"
	.string "So far you've defeat {STR_VAR_1} out of\n my 5 workers.\p Keep up the good work.$"

Route139_EventScript_GiveSyrupyApple_Text_0:
# 117 "data/maps/Route139/scripts.pory"
	.string "Thank you, young one.\p My workers are all fired up.\n As promised, here's your reward.$"

Route139_EventScript_GiveSyrupyApple_Text_1:
# 132 "data/maps/Route139/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Route139_EventScript_Morgan_Text_0:
# 147 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n Alright, sounds fun!$"

Route139_EventScript_Morgan_Text_1:
# 151 "data/maps/Route139/scripts.pory"
	.string "Okay!\n I feel like I can focus on my work now!$"

Route139_EventScript_Fredward_Text_0:
# 243 "data/maps/Route139/scripts.pory"
	.string "Huh? The boss said we should battle?\n Alright!\p Just warning you, I'm the strongest out\n of all of us!$"

Route139_EventScript_WorkerFiredUp_Text_0:
# 265 "data/maps/Route139/scripts.pory"
	.string "Thanks!\n I lost, but that was a great battle!\p I feel like I can focus on my work now!$"

Route139_EventScript_WorkerBored_Text_0:
# 277 "data/maps/Route139/scripts.pory"
	.string "So bored…$"

Route139_Text_WorkerDefeat::
# 283 "data/maps/Route139/scripts.pory"
	.string "That was a great battle!$"
