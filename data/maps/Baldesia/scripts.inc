Baldesia_MapScripts::
# 15 "data/maps/Baldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Baldesia_OnTransition
# 16 "data/maps/Baldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Baldesia_OnResume
	.byte 0


Baldesia_OnTransition::
# 20 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 21 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_1_BALDESIA, Baldesia_UpdateNinjaBoy1Location
# 22 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_2_BALDESIA, Baldesia_UpdateNinjaBoy2Location
# 23 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_3_BALDESIA, Baldesia_UpdateNinjaBoy3Location
# 24 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_4_BALDESIA, Baldesia_UpdateNinjaBoy4Location
# 25 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_5_BALDESIA, Baldesia_UpdateNinjaBoy5Location
# 26 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_6_BALDESIA, Baldesia_UpdateNinjaBoy6Location
	end


Baldesia_OnResume::
# 31 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HISUIAN_ZORUA, Baldesia_RemoveHisuianZorua
	end


Baldesia_RemoveHisuianZorua::
# 36 "data/maps/Baldesia/scripts.pory"
	removeobject 24
	return


Baldesia_UpdateNinjaBoy1Location::
# 41 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 7, 21, 24
# 42 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_UpdateNinjaBoy2Location::
# 47 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 19, 21, 23
# 48 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_UpdateNinjaBoy3Location::
# 53 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 17, 23, 23
# 54 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_MOUNTAIN_DISGUISE
	return


Baldesia_UpdateNinjaBoy4Location::
# 59 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 18, 25, 27
# 60 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_WANDER_AROUND
	return


Baldesia_UpdateNinjaBoy5Location::
# 65 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 16, 21, 26
# 66 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	return


Baldesia_UpdateNinjaBoy6Location::
# 71 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 20, 23, 24
	return


Baldesia_EventScript_OldManMiniGame::
# 76 "data/maps/Baldesia/scripts.pory"
	lock
# 77 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 78 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 0 Baldesia_EventScript_StartMiniGame
# 79 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 1 Baldesia_EventScript_RemindMiniGame
# 80 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 2 Baldesia_EventScript_GiveResult
# 81 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 3 Baldesia_EventScript_GiveResult
# 82 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 4 Baldesia_EventScript_GiveResult
# 83 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 5 Baldesia_EventScript_GiveResult
# 84 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 6 Baldesia_EventScript_GiveResult
# 85 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 7, Baldesia_EventScript_GiveLeadersCrest
# 86 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 91 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_StartMiniGame::
# 96 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_StartMiniGame_Text_0
# 101 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 102 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 103 "data/maps/Baldesia/scripts.pory"
	setvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 104 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_RemindMiniGame::
# 109 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_RemindMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 112 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 113 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_GiveResult::
# 118 "data/maps/Baldesia/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_BALDESIA_NINJA_BOY_COUNTER
# 119 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 123 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_GiveLeadersCrest::
# 128 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveLeadersCrest_Text_0
# 131 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 132 "data/maps/Baldesia/scripts.pory"
	checkitemspace ITEM_LEADERS_CREST
# 133 "data/maps/Baldesia/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_EventScript_GiveLeadersCrest_2
# 144 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveLeadersCrest_Text_2, MSGBOX_AUTOCLOSE
Baldesia_EventScript_GiveLeadersCrest_1:
# 147 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 148 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_GiveLeadersCrest_2:
# 134 "data/maps/Baldesia/scripts.pory"
	giveitem ITEM_LEADERS_CREST
# 135 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 136 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveLeadersCrest_Text_1, MSGBOX_AUTOCLOSE
# 141 "data/maps/Baldesia/scripts.pory"
	setvar VAR_BALDESIA_MINI_GAME_STATE, 8
	goto Baldesia_EventScript_GiveLeadersCrest_1


Baldesia_EventScript_NinjaBoy1::
# 153 "data/maps/Baldesia/scripts.pory"
	lock
# 154 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_1_BALDESIA, Baldesia_EventScript_NinjaBoy1_4
Baldesia_EventScript_NinjaBoy1_3:
# 177 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 178 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_1, MSGBOX_AUTOCLOSE
# 180 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy1_1:
# 182 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy1_2:
# 155 "data/maps/Baldesia/scripts.pory"
	delay 16
# 156 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 157 "data/maps/Baldesia/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 158 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 159 "data/maps/Baldesia/scripts.pory"
	waitse
# 160 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 161 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_0, MSGBOX_AUTOCLOSE
# 163 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 164 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 165 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 166 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 167 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 168 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy1Location
# 169 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 170 "data/maps/Baldesia/scripts.pory"
	waitse
# 171 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 172 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 173 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 174 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_1_BALDESIA
	goto Baldesia_EventScript_NinjaBoy1_1

Baldesia_EventScript_NinjaBoy1_4:
# 154 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy1_2
	goto Baldesia_EventScript_NinjaBoy1_3


Baldesia_EventScript_NinjaBoy2::
# 187 "data/maps/Baldesia/scripts.pory"
	lock
# 188 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_2_BALDESIA, Baldesia_EventScript_NinjaBoy2_4
Baldesia_EventScript_NinjaBoy2_3:
# 211 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 212 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy2_Text_0, MSGBOX_AUTOCLOSE
# 214 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy2_1:
# 216 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy2_2:
# 189 "data/maps/Baldesia/scripts.pory"
	delay 16
# 190 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 191 "data/maps/Baldesia/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 192 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 193 "data/maps/Baldesia/scripts.pory"
	waitse
# 194 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 195 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_0, MSGBOX_AUTOCLOSE
# 197 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 198 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 200 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 201 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 202 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy2Location
# 203 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 204 "data/maps/Baldesia/scripts.pory"
	waitse
# 205 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 206 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 207 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 208 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_2_BALDESIA
	goto Baldesia_EventScript_NinjaBoy2_1

Baldesia_EventScript_NinjaBoy2_4:
# 188 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy2_2
	goto Baldesia_EventScript_NinjaBoy2_3


Baldesia_EventScript_NinjaBoy3::
# 221 "data/maps/Baldesia/scripts.pory"
	lock
# 222 "data/maps/Baldesia/scripts.pory"
	call EventScript_RevealTrainer
# 223 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_3_BALDESIA, Baldesia_EventScript_NinjaBoy3_4
Baldesia_EventScript_NinjaBoy3_3:
# 246 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 247 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy3_Text_1, MSGBOX_AUTOCLOSE
# 248 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy3_1:
# 250 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy3_2:
# 224 "data/maps/Baldesia/scripts.pory"
	delay 16
# 225 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 226 "data/maps/Baldesia/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 227 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 228 "data/maps/Baldesia/scripts.pory"
	waitse
# 229 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 230 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy3_Text_0, MSGBOX_AUTOCLOSE
# 232 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 233 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 234 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 235 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 236 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 237 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy3Location
# 238 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 239 "data/maps/Baldesia/scripts.pory"
	waitse
# 240 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 241 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 242 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 243 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_3_BALDESIA
	goto Baldesia_EventScript_NinjaBoy3_1

Baldesia_EventScript_NinjaBoy3_4:
# 223 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy3_2
	goto Baldesia_EventScript_NinjaBoy3_3


Baldesia_EventScript_NinjaBoy4::
# 255 "data/maps/Baldesia/scripts.pory"
	lock
# 256 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_4_BALDESIA, Baldesia_EventScript_NinjaBoy4_4
Baldesia_EventScript_NinjaBoy4_3:
# 279 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 280 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy4_Text_1, MSGBOX_AUTOCLOSE
# 282 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy4_1:
# 284 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy4_2:
# 257 "data/maps/Baldesia/scripts.pory"
	delay 16
# 258 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 259 "data/maps/Baldesia/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 260 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 261 "data/maps/Baldesia/scripts.pory"
	waitse
# 262 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 263 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy4_Text_0, MSGBOX_AUTOCLOSE
# 265 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 266 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 267 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 268 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 269 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 270 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy4Location
# 271 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 272 "data/maps/Baldesia/scripts.pory"
	waitse
# 273 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 274 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 275 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 276 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_4_BALDESIA
	goto Baldesia_EventScript_NinjaBoy4_1

Baldesia_EventScript_NinjaBoy4_4:
# 256 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy4_2
	goto Baldesia_EventScript_NinjaBoy4_3


Baldesia_EventScript_NinjaBoy5::
# 289 "data/maps/Baldesia/scripts.pory"
	lock
# 290 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_5_BALDESIA, Baldesia_EventScript_NinjaBoy5_4
Baldesia_EventScript_NinjaBoy5_3:
# 313 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 314 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy5_Text_1, MSGBOX_AUTOCLOSE
# 318 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy5_1:
# 320 "data/maps/Baldesia/scripts.pory"
	applymovement 16, Common_Movement_FaceOriginalDirection
# 321 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 322 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy5_2:
# 291 "data/maps/Baldesia/scripts.pory"
	delay 16
# 292 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 293 "data/maps/Baldesia/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 294 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 295 "data/maps/Baldesia/scripts.pory"
	waitse
# 296 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 297 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy5_Text_0, MSGBOX_AUTOCLOSE
# 299 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 300 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 301 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 302 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 303 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 304 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy5Location
# 305 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 306 "data/maps/Baldesia/scripts.pory"
	waitse
# 307 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 308 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 309 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 310 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_5_BALDESIA
	goto Baldesia_EventScript_NinjaBoy5_1

Baldesia_EventScript_NinjaBoy5_4:
# 290 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy5_2
	goto Baldesia_EventScript_NinjaBoy5_3


Baldesia_EventScript_NinjaBoy6::
# 327 "data/maps/Baldesia/scripts.pory"
	lock
# 328 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_6_BALDESIA, Baldesia_EventScript_NinjaBoy6_4
Baldesia_EventScript_NinjaBoy6_3:
# 350 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 351 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy6_Text_1, MSGBOX_AUTOCLOSE
# 356 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy6_1:
# 358 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy6_2:
# 329 "data/maps/Baldesia/scripts.pory"
	delay 16
# 330 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 331 "data/maps/Baldesia/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 332 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 333 "data/maps/Baldesia/scripts.pory"
	waitse
# 334 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 335 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy6_Text_0, MSGBOX_AUTOCLOSE
# 336 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 337 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 338 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 339 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 340 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 341 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy6Location
# 342 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 343 "data/maps/Baldesia/scripts.pory"
	waitse
# 344 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 345 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 346 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 347 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_6_BALDESIA
	goto Baldesia_EventScript_NinjaBoy6_1

Baldesia_EventScript_NinjaBoy6_4:
# 328 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy6_2
	goto Baldesia_EventScript_NinjaBoy6_3


Baldesia_EventScript_LittleGirl::
# 363 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_OldWoman::
# 370 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_OldManBridge::
# 378 "data/maps/Baldesia/scripts.pory"
	lock
# 379 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 380 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManBridge_Text_0, MSGBOX_AUTOCLOSE
# 383 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 384 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 385 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
	end


Baldesia_EventScript_KimonoLady1::
# 390 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_KimonoLady1_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_KimonoLady2::
# 398 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_KimonoLady2_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_Ninja::
# 405 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_Ninja_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_EntranceGuard::
# 411 "data/maps/Baldesia/scripts.pory"
	lock
# 412 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 413 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_EntranceGuard_Text_0, MSGBOX_AUTOCLOSE
# 414 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 415 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 416 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 417 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_Sawk::
# 422 "data/maps/Baldesia/scripts.pory"
	lock
# 423 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 424 "data/maps/Baldesia/scripts.pory"
	playmoncry SPECIES_SAWK, CRY_MODE_ENCOUNTER
# 425 "data/maps/Baldesia/scripts.pory"
	waitmoncry
# 426 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 427 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 428 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_Entrance_TriggerLeft::
# 433 "data/maps/Baldesia/scripts.pory"
	lockall
# 434 "data/maps/Baldesia/scripts.pory"
	setvar VAR_TEMP_B, 1
# 435 "data/maps/Baldesia/scripts.pory"
	goto Baldesia_EventScript_HisuianZoruaTrigger
	end


Baldesia_Entrance_TriggerRight::
# 440 "data/maps/Baldesia/scripts.pory"
	lockall
# 441 "data/maps/Baldesia/scripts.pory"
	setvar VAR_TEMP_B, 2
# 442 "data/maps/Baldesia/scripts.pory"
	goto Baldesia_EventScript_HisuianZoruaTrigger
	end


Baldesia_EventScript_HisuianZoruaTrigger::
# 447 "data/maps/Baldesia/scripts.pory"
	lockall
# 448 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 449 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 450 "data/maps/Baldesia/scripts.pory"
	delay 8
# 451 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 452 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 453 "data/maps/Baldesia/scripts.pory"
	waitse
# 454 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Baldesa_Movement_BlockTrainerLeftGuard
# 455 "data/maps/Baldesia/scripts.pory"
	delay 16
# 456 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Baldesa_Movement_BlockTrainerRightGuard
# 457 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 458 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 459 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 460 "data/maps/Baldesia/scripts.pory"
	delay 10
# 461 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_0, MSGBOX_AUTOCLOSE
# 465 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 466 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_BALDESIA
# 467 "data/maps/Baldesia/scripts.pory"
	addobject 1
# 468 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 469 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 470 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 471 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 472 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 473 "data/maps/Baldesia/scripts.pory"
	waitse
# 474 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_1, MSGBOX_AUTOCLOSE
# 476 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 477 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 478 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 479 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 480 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_2, MSGBOX_AUTOCLOSE
# 483 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 484 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 485 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 486 "data/maps/Baldesia/scripts.pory"
	delay 8
# 487 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 488 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 489 "data/maps/Baldesia/scripts.pory"
	waitse
# 490 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_3, MSGBOX_AUTOCLOSE
# 491 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 492 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 493 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 494 "data/maps/Baldesia/scripts.pory"
	waitmovement 11
# 495 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_4, MSGBOX_AUTOCLOSE
# 499 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 500 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 501 "data/maps/Baldesia/scripts.pory"
	delay 8
# 502 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 503 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 504 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 505 "data/maps/Baldesia/scripts.pory"
	delay 8
# 506 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 507 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 508 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkUp6
# 509 "data/maps/Baldesia/scripts.pory"
	delay 8
# 510 "data/maps/Baldesia/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq Baldesia_EventScript_HisuianZoruaTrigger_2
# 513 "data/maps/Baldesia/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq Baldesia_EventScript_HisuianZoruaTrigger_3
# 517 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesia
Baldesia_EventScript_HisuianZoruaTrigger_1:
# 519 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 520 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 521 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 522 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_5, MSGBOX_AUTOCLOSE
# 525 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 526 "data/maps/Baldesia/scripts.pory"
	addobject 2
# 527 "data/maps/Baldesia/scripts.pory"
	addobject 4
# 528 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 529 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 530 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 531 "data/maps/Baldesia/scripts.pory"
	waitse
# 532 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 533 "data/maps/Baldesia/scripts.pory"
	delay 8
# 534 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 535 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 536 "data/maps/Baldesia/scripts.pory"
	fadenewbgm MUS_BENNIS_DOJO
# 537 "data/maps/Baldesia/scripts.pory"
	savebgm MUS_BENNIS_DOJO
# 538 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkRight7
# 539 "data/maps/Baldesia/scripts.pory"
	delay 16
# 540 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkRight7
# 541 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 542 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis1, MSGBOX_AUTOCLOSE
# 543 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 544 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 545 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 546 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_6, MSGBOX_AUTOCLOSE
# 548 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 549 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 550 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 551 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_7, MSGBOX_AUTOCLOSE
# 554 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 555 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 556 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 557 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_8, MSGBOX_AUTOCLOSE
# 558 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 559 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 560 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 561 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 562 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 563 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 564 "data/maps/Baldesia/scripts.pory"
	waitse
# 565 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_9, MSGBOX_AUTOCLOSE
# 566 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 567 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 568 "data/maps/Baldesia/scripts.pory"
	delay 16
# 569 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 570 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 571 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_10, MSGBOX_AUTOCLOSE
# 572 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 573 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua1
# 574 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 575 "data/maps/Baldesia/scripts.pory"
	delay 16
# 576 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua2
# 577 "data/maps/Baldesia/scripts.pory"
	delay 8
# 578 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 579 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 580 "data/maps/Baldesia/scripts.pory"
	delay 16
# 581 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua3
# 582 "data/maps/Baldesia/scripts.pory"
	delay 8
# 583 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 584 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 585 "data/maps/Baldesia/scripts.pory"
	delay 16
# 586 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakWalkToBennis
# 587 "data/maps/Baldesia/scripts.pory"
	delay 8
# 588 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 589 "data/maps/Baldesia/scripts.pory"
	delay 8
# 590 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 591 "data/maps/Baldesia/scripts.pory"
	waitmovement 4
# 592 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_11, MSGBOX_AUTOCLOSE
# 593 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 594 "data/maps/Baldesia/scripts.pory"
	addobject 3
# 595 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkRight7
# 596 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 597 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 598 "data/maps/Baldesia/scripts.pory"
	delay 8
# 599 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 600 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 601 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 602 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 603 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 604 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 605 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 606 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 607 "data/maps/Baldesia/scripts.pory"
	waitse
# 608 "data/maps/Baldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 609 "data/maps/Baldesia/scripts.pory"
	delay 45
# 610 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 611 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 612 "data/maps/Baldesia/scripts.pory"
	delay 6
# 613 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 614 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 615 "data/maps/Baldesia/scripts.pory"
	waitse
# 616 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_12, MSGBOX_AUTOCLOSE
# 618 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 619 "data/maps/Baldesia/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 620 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror
# 621 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror
# 622 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 623 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_13, MSGBOX_AUTOCLOSE
# 625 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 626 "data/maps/Baldesia/scripts.pory"
	playse SE_RG_HELP_OPEN
# 627 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror2
# 628 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror2Reverse
# 629 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 630 "data/maps/Baldesia/scripts.pory"
	delay 20
# 631 "data/maps/Baldesia/scripts.pory"
	playse SE_RG_HELP_CLOSE
# 632 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror4
# 633 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror4Reverse
# 634 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 635 "data/maps/Baldesia/scripts.pory"
	delay 60
# 636 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 637 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror3
# 638 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror3Reverse
# 639 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 640 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_14, MSGBOX_AUTOCLOSE
# 641 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 642 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterRight
# 643 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 644 "data/maps/Baldesia/scripts.pory"
	playse SE_EFFECTIVE
# 645 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 646 "data/maps/Baldesia/scripts.pory"
	removeobject 4
# 647 "data/maps/Baldesia/scripts.pory"
	addobject 24
# 648 "data/maps/Baldesia/scripts.pory"
	waitse
# 649 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 650 "data/maps/Baldesia/scripts.pory"
	delay 60
# 651 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 652 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 653 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 654 "data/maps/Baldesia/scripts.pory"
	delay 8
# 655 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 656 "data/maps/Baldesia/scripts.pory"
	delay 8
# 657 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 658 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 659 "data/maps/Baldesia/scripts.pory"
	waitse
# 660 "data/maps/Baldesia/scripts.pory"
	delay 30
# 661 "data/maps/Baldesia/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceRight
# 662 "data/maps/Baldesia/scripts.pory"
	waitmovement 24
# 663 "data/maps/Baldesia/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUI, CRY_MODE_ENCOUNTER
# 664 "data/maps/Baldesia/scripts.pory"
	waitmoncry
# 665 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_15, MSGBOX_AUTOCLOSE
# 666 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 667 "data/maps/Baldesia/scripts.pory"
	applymovement 24, Common_Movement_WalkRight
# 668 "data/maps/Baldesia/scripts.pory"
	waitmovement 24
# 669 "data/maps/Baldesia/scripts.pory"
	setwildbattle SPECIES_ZORUA_HISUI, 80
# 670 "data/maps/Baldesia/scripts.pory"
	dowildbattle
# 671 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniFaceBennis
# 672 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 673 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_16, MSGBOX_AUTOCLOSE
# 675 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 676 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_WalkFastLeft7
# 677 "data/maps/Baldesia/scripts.pory"
	delay 24
# 678 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 679 "data/maps/Baldesia/scripts.pory"
	delay 8
# 680 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 681 "data/maps/Baldesia/scripts.pory"
	waitmovement 3
# 682 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis2, MSGBOX_AUTOCLOSE
# 683 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 684 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 685 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 686 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_17, MSGBOX_AUTOCLOSE
# 688 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 689 "data/maps/Baldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 690 "data/maps/Baldesia/scripts.pory"
	playse SE_SHINY
# 691 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 692 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 693 "data/maps/Baldesia/scripts.pory"
	waitse
# 694 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 695 "data/maps/Baldesia/scripts.pory"
	delay 4
# 696 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 697 "data/maps/Baldesia/scripts.pory"
	delay 4
# 698 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 699 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 700 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_18, MSGBOX_AUTOCLOSE
# 702 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 703 "data/maps/Baldesia/scripts.pory"
	playse SE_SHINY
# 704 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 705 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 706 "data/maps/Baldesia/scripts.pory"
	waitse
# 707 "data/maps/Baldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 708 "data/maps/Baldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 709 "data/maps/Baldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 710 "data/maps/Baldesia/scripts.pory"
	waitse
# 711 "data/maps/Baldesia/scripts.pory"
	addobject 22
# 712 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Baldesia_Movement_MomoEnters
# 713 "data/maps/Baldesia/scripts.pory"
	waitmovement 22
# 714 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 715 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 716 "data/maps/Baldesia/scripts.pory"
	delay 8
# 717 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 718 "data/maps/Baldesia/scripts.pory"
	delay 8
# 719 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 720 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 721 "data/maps/Baldesia/scripts.pory"
	waitse
# 722 "data/maps/Baldesia/scripts.pory"
	fadedefaultbgm
# 723 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis3, MSGBOX_AUTOCLOSE
# 724 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 725 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceRight
# 726 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 727 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_19, MSGBOX_AUTOCLOSE
# 728 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 729 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 730 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 731 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 732 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis4, MSGBOX_AUTOCLOSE
# 733 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 734 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 735 "data/maps/Baldesia/scripts.pory"
	delay 8
# 736 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 737 "data/maps/Baldesia/scripts.pory"
	delay 8
# 738 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceUp
# 739 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 740 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis5, MSGBOX_AUTOCLOSE
# 741 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 742 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Baldesia_Movement_MomoGoesToMainHouse
# 743 "data/maps/Baldesia/scripts.pory"
	delay 30
# 744 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 745 "data/maps/Baldesia/scripts.pory"
	delay 8
# 746 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 747 "data/maps/Baldesia/scripts.pory"
	delay 8
# 748 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 749 "data/maps/Baldesia/scripts.pory"
	waitmovement 22
# 750 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 751 "data/maps/Baldesia/scripts.pory"
	removeobject 22
# 752 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 753 "data/maps/Baldesia/scripts.pory"
	delay 8
# 754 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 755 "data/maps/Baldesia/scripts.pory"
	delay 8
# 756 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 757 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 758 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_20, MSGBOX_AUTOCLOSE
# 759 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 760 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp5
# 761 "data/maps/Baldesia/scripts.pory"
	delay 8
# 762 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 763 "data/maps/Baldesia/scripts.pory"
	delay 8
# 764 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 765 "data/maps/Baldesia/scripts.pory"
	waitmovement 2
# 766 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 767 "data/maps/Baldesia/scripts.pory"
	waitse
# 768 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakApproachesPlayer
# 769 "data/maps/Baldesia/scripts.pory"
	delay 8
# 770 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 771 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 772 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_21, MSGBOX_AUTOCLOSE
# 775 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 776 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 777 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 778 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_22, MSGBOX_AUTOCLOSE
# 779 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 780 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakGoesToMainHouse
# 781 "data/maps/Baldesia/scripts.pory"
	delay 8
# 782 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 783 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 784 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 785 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 786 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 787 "data/maps/Baldesia/scripts.pory"
	waitse
# 788 "data/maps/Baldesia/scripts.pory"
	removeobject 1
# 789 "data/maps/Baldesia/scripts.pory"
	removeobject 2
# 790 "data/maps/Baldesia/scripts.pory"
	removeobject 3
# 791 "data/maps/Baldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 2
# 792 "data/maps/Baldesia/scripts.pory"
	releaseall
	end

Baldesia_EventScript_HisuianZoruaTrigger_2:
# 511 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesiaLeftTrigger
	goto Baldesia_EventScript_HisuianZoruaTrigger_1

Baldesia_EventScript_HisuianZoruaTrigger_3:
# 514 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesiaRightTrigger
	goto Baldesia_EventScript_HisuianZoruaTrigger_1


Baldesia_EventScript_INeedToGoGetPanini::
# 797 "data/maps/Baldesia/scripts.pory"
	lockall
# 798 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_INeedToGoGetPanini_Text_0, MSGBOX_AUTOCLOSE
# 799 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 800 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 801 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 802 "data/maps/Baldesia/scripts.pory"
	releaseall
	end


Baldesia_EventScript_YouNeedPermission::
# 807 "data/maps/Baldesia/scripts.pory"
	lockall
# 808 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 809 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 810 "data/maps/Baldesia/scripts.pory"
	waitmovement 9
# 811 "data/maps/Baldesia/scripts.pory"
	waitse
# 812 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceRight
# 813 "data/maps/Baldesia/scripts.pory"
	delay 8
# 814 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 815 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 816 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_YouNeedPermission_Text_0, MSGBOX_AUTOCLOSE
# 818 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 819 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 820 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 821 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 822 "data/maps/Baldesia/scripts.pory"
	waitmovement 9
# 823 "data/maps/Baldesia/scripts.pory"
	releaseall
	end


# 862 "data/maps/Baldesia/scripts.pory"
Baldesa_Movement_BlockTrainerLeftGuard:
# 863 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
# 864 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_down
	step_end

# 867 "data/maps/Baldesia/scripts.pory"
Baldesa_Movement_BlockTrainerRightGuard:
# 868 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 869 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_down
	step_end

# 872 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesia:
# 873 "data/maps/Baldesia/scripts.pory"
	walk_up
# 873 "data/maps/Baldesia/scripts.pory"
	walk_up
# 873 "data/maps/Baldesia/scripts.pory"
	walk_up
# 873 "data/maps/Baldesia/scripts.pory"
	walk_up
# 873 "data/maps/Baldesia/scripts.pory"
	walk_up
# 873 "data/maps/Baldesia/scripts.pory"
	walk_up
# 873 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 876 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesiaLeftTrigger:
# 877 "data/maps/Baldesia/scripts.pory"
	walk_right
# 878 "data/maps/Baldesia/scripts.pory"
	walk_up
# 878 "data/maps/Baldesia/scripts.pory"
	walk_up
# 878 "data/maps/Baldesia/scripts.pory"
	walk_up
# 878 "data/maps/Baldesia/scripts.pory"
	walk_up
# 878 "data/maps/Baldesia/scripts.pory"
	walk_up
# 878 "data/maps/Baldesia/scripts.pory"
	walk_up
# 878 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 881 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesiaRightTrigger:
# 882 "data/maps/Baldesia/scripts.pory"
	walk_left
# 883 "data/maps/Baldesia/scripts.pory"
	walk_up
# 883 "data/maps/Baldesia/scripts.pory"
	walk_up
# 883 "data/maps/Baldesia/scripts.pory"
	walk_up
# 883 "data/maps/Baldesia/scripts.pory"
	walk_up
# 883 "data/maps/Baldesia/scripts.pory"
	walk_up
# 883 "data/maps/Baldesia/scripts.pory"
	walk_up
# 883 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 886 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua1:
# 887 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 888 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 889 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_left
	step_end

# 892 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua2:
# 893 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 894 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 895 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_up
	step_end

# 898 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua3:
# 899 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 900 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 901 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 904 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakWalkToBennis:
# 905 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 906 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 909 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror:
# 910 "data/maps/Baldesia/scripts.pory"
	lock_facing_direction
# 911 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 911 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 912 "data/maps/Baldesia/scripts.pory"
	delay_16
# 913 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 913 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 914 "data/maps/Baldesia/scripts.pory"
	delay_16
# 915 "data/maps/Baldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 918 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror2:
# 919 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 920 "data/maps/Baldesia/scripts.pory"
	delay_4
# 921 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
# 922 "data/maps/Baldesia/scripts.pory"
	delay_4
# 923 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 924 "data/maps/Baldesia/scripts.pory"
	delay_4
# 925 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
	step_end

# 928 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror4Reverse:
# 929 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 930 "data/maps/Baldesia/scripts.pory"
	delay_4
# 931 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
# 932 "data/maps/Baldesia/scripts.pory"
	delay_4
# 933 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 934 "data/maps/Baldesia/scripts.pory"
	delay_4
# 935 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
	step_end

# 938 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror3:
# 939 "data/maps/Baldesia/scripts.pory"
	jump_in_place_left_right
	step_end

# 942 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror3Reverse:
# 943 "data/maps/Baldesia/scripts.pory"
	jump_in_place_right_left
	step_end

# 946 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror4:
# 947 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 948 "data/maps/Baldesia/scripts.pory"
	delay_4
# 949 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
# 950 "data/maps/Baldesia/scripts.pory"
	delay_4
# 951 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 952 "data/maps/Baldesia/scripts.pory"
	delay_4
# 953 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
	step_end

# 956 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror2Reverse:
# 957 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 958 "data/maps/Baldesia/scripts.pory"
	delay_4
# 959 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
# 960 "data/maps/Baldesia/scripts.pory"
	delay_4
# 961 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 962 "data/maps/Baldesia/scripts.pory"
	delay_4
# 963 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
	step_end

# 966 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniFaceBennis:
# 967 "data/maps/Baldesia/scripts.pory"
	walk_right
# 968 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
	step_end

# 971 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_WalkFastLeft7:
# 972 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 972 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 972 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 972 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 972 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 972 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 972 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
	step_end

# 975 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_MomoEnters:
# 976 "data/maps/Baldesia/scripts.pory"
	walk_up
# 976 "data/maps/Baldesia/scripts.pory"
	walk_up
# 976 "data/maps/Baldesia/scripts.pory"
	walk_up
# 976 "data/maps/Baldesia/scripts.pory"
	walk_up
# 977 "data/maps/Baldesia/scripts.pory"
	walk_left
# 978 "data/maps/Baldesia/scripts.pory"
	walk_up
# 978 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 981 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_MomoGoesToMainHouse:
# 982 "data/maps/Baldesia/scripts.pory"
	walk_right
# 983 "data/maps/Baldesia/scripts.pory"
	walk_up
# 983 "data/maps/Baldesia/scripts.pory"
	walk_up
# 983 "data/maps/Baldesia/scripts.pory"
	walk_up
# 984 "data/maps/Baldesia/scripts.pory"
	walk_left
# 985 "data/maps/Baldesia/scripts.pory"
	walk_up
# 985 "data/maps/Baldesia/scripts.pory"
	walk_up
# 985 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 988 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakGoesToMainHouse:
# 989 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 990 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 990 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 990 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 990 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 990 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 990 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 990 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
	step_end

# 993 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakApproachesPlayer:
# 994 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 995 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
# 995 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
	step_end

Baldesia_EventScript_OldManMiniGame_Text_0:
# 86 "data/maps/Baldesia/scripts.pory"
	.string "That crest is demanding of respect\n in our culture.\p It proves you have the qualities to\n become a powerful leader.$"

Baldesia_EventScript_StartMiniGame_Text_0:
# 96 "data/maps/Baldesia/scripts.pory"
	.string "Hm… I sense potential in you, young one.\n How about a little challenge?\p If you can find my 6 disciples that are\n hidden around the village, I'll give\l you a reward.$"

Baldesia_EventScript_RemindMiniGame_Text_0:
# 109 "data/maps/Baldesia/scripts.pory"
	.string "If you can find my 6 disciples that are\n hidden outside around the village, I'll\l give you a reward.$"

Baldesia_EventScript_GiveResult_Text_0:
# 119 "data/maps/Baldesia/scripts.pory"
	.string "So far you've found {STR_VAR_1} out of\n 6 disciples.\p Keep searching, young one.$"

Baldesia_EventScript_GiveLeadersCrest_Text_0:
# 128 "data/maps/Baldesia/scripts.pory"
	.string "Hm… So you were able to find all\n of my disciples… Impressive.\p As promised, here's your reward.$"

Baldesia_EventScript_GiveLeadersCrest_Text_1:
# 136 "data/maps/Baldesia/scripts.pory"
	.string "That crest is demanding of respect\n in our culture.\p It proves you have the qualities to\n become a powerful leader.\p Try using it on a BISHARP.$"

Baldesia_EventScript_GiveLeadersCrest_Text_2:
# 144 "data/maps/Baldesia/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Baldesia_EventScript_NinjaBoy1_Text_0:
# 161 "data/maps/Baldesia/scripts.pory"
	.string "Uh oh!\n  You found me!$"

Baldesia_EventScript_NinjaBoy1_Text_1:
# 178 "data/maps/Baldesia/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

Baldesia_EventScript_NinjaBoy2_Text_0:
# 212 "data/maps/Baldesia/scripts.pory"
	.string "Is it hot, or is it cold?\n I don't know, 'cause I'm not bald!$"

Baldesia_EventScript_NinjaBoy3_Text_0:
# 230 "data/maps/Baldesia/scripts.pory"
	.string "W-What?!\n  My disguise was perfect!$"

Baldesia_EventScript_NinjaBoy3_Text_1:
# 247 "data/maps/Baldesia/scripts.pory"
	.string "I'm practicing my disguises!$"

Baldesia_EventScript_NinjaBoy4_Text_0:
# 263 "data/maps/Baldesia/scripts.pory"
	.string "Aw!\n  You found me!$"

Baldesia_EventScript_NinjaBoy4_Text_1:
# 280 "data/maps/Baldesia/scripts.pory"
	.string "I thought hiding in plain sight was\n a good idea.$"

Baldesia_EventScript_NinjaBoy5_Text_0:
# 297 "data/maps/Baldesia/scripts.pory"
	.string "Dang!\n  You found me!$"

Baldesia_EventScript_NinjaBoy5_Text_1:
# 314 "data/maps/Baldesia/scripts.pory"
	.string "I'm training to be a great NINJA\n like MASTER BENNIS!\p It's not fair that only PANINI gets to\n be his disciple!$"

Baldesia_EventScript_NinjaBoy6_Text_0:
# 335 "data/maps/Baldesia/scripts.pory"
	.string "…!$"

Baldesia_EventScript_NinjaBoy6_Text_1:
# 351 "data/maps/Baldesia/scripts.pory"
	.string "…\n …\l …\p … I wanna grow up to be bald like my\n Auntie MOMO.$"

Baldesia_EventScript_LittleGirl_Text_0:
# 363 "data/maps/Baldesia/scripts.pory"
	.string "My mom said the ASAKURA family has\n a gene that makes the women bald!\p Hahaha!$"

Baldesia_EventScript_OldWoman_Text_0:
# 370 "data/maps/Baldesia/scripts.pory"
	.string "There's a DOJO in the woods renowned\n for the strength of its members.\p I heard the MASTER there is looking\n for a successor.$"

Baldesia_EventScript_OldManBridge_Text_0:
# 380 "data/maps/Baldesia/scripts.pory"
	.string "I helped dig this moat about\n fifty years ago.\p Time really flies.$"

Baldesia_EventScript_KimonoLady1_Text_0:
# 390 "data/maps/Baldesia/scripts.pory"
	.string "There's a new flavor of mochi that\n was recently brought to the village.\p The Chief and his wife seem to enjoy it\n the most.$"

Baldesia_EventScript_KimonoLady2_Text_0:
# 398 "data/maps/Baldesia/scripts.pory"
	.string "I heard the Young Lady left the village\n because she met somebody.\p Oh, to be in love…$"

Baldesia_EventScript_Ninja_Text_0:
# 405 "data/maps/Baldesia/scripts.pory"
	.string "This land has been home to\n NINJAS for many generations.$"

Baldesia_EventScript_EntranceGuard_Text_0:
# 413 "data/maps/Baldesia/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_0:
# 461 "data/maps/Baldesia/scripts.pory"
	.string "Halt!\n I've never seen you before.\p I'm sorry, but we can't just let\n you enter.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_1:
# 474 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Huh?!\n What are YOU doing here?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_2:
# 480 "data/maps/Baldesia/scripts.pory"
	.string "ASAK, you know this person?\p ASAK: … Yes.\n They're a… friend… of MASTER BENNIS.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_3:
# 490 "data/maps/Baldesia/scripts.pory"
	.string "I see! My deepest apologies.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_4:
# 495 "data/maps/Baldesia/scripts.pory"
	.string "We will allow you entry out of respect\n for MASTER BENNIS.\p But if you cause any trouble, you'll be\n dealt with accordingly.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_5:
# 522 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: You're lucky that MASTER BENNIS\n has acknowledged your strength.\p If it was up to me, I'd-$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_6:
# 546 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Yes. I caught them trying to enter\n the village.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_7:
# 551 "data/maps/Baldesia/scripts.pory"
	.string "…By the way, who is that next\n to you?\p MASTER BENNIS: Hm? It's PANINI.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_8:
# 557 "data/maps/Baldesia/scripts.pory"
	.string "Right, PANINI?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_9:
# 565 "data/maps/Baldesia/scripts.pory"
	.string "PANINI?: Paneenee?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_10:
# 571 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: See?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_11:
# 592 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Sir, I'm not sure if that's PANINI…$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_12:
# 616 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini?\n PANINI?: Paneenee?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_13:
# 623 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini!\n PANINI?: Paneenee!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_14:
# 640 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_15:
# 665 "data/maps/Baldesia/scripts.pory"
	.string "ZORUA: Paneenee!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_16:
# 673 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini?! Panini panini?!\n Panini!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_17:
# 686 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: N-No, sir! W-Well, not in\n your overworld sprite, at least…$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_18:
# 700 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Ah! My eyes! Now what?!\n What was that flash?!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_19:
# 727 "data/maps/Baldesia/scripts.pory"
	.string "… Hi, {PLAYER}.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_20:
# 758 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: I'm going too.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_21:
# 772 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Sorry, {PLAYER}.\n Could I ask you to go get PANINI and\l then come to the MAIN HOUSE?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_22:
# 778 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS! Wait for me!$"

Baldesia_EventScript_INeedToGoGetPanini_Text_0:
# 798 "data/maps/Baldesia/scripts.pory"
	.string "I need to go get PANINI first.$"

Baldesia_EventScript_YouNeedPermission_Text_0:
# 816 "data/maps/Baldesia/scripts.pory"
	.string "Sorry, you need permission from the\n Village Chief to travel to the altar.$"

Baldesia_Text_Bennis1::
# 827 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: MASTER BENNIS!\p MASTER BENNIS: ASAK. Oho? And… you're\n here too, I see.$"

Baldesia_Text_Bennis2::
# 833 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: Oh, beef.\n Do I really have a weird shaped butt?$"

Baldesia_Text_Bennis3::
# 838 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: L-LADY MOMO?\p MASTER BENNIS: Young Lady.\n Your scalp is as shiny as ever.\p MOMO: … … … …\n I'm back.$"

Baldesia_Text_Bennis4::
# 846 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}? Hm.\p ASAK: Huh… I just realized we never knew\n your name.\l And you also know LADY MOMO…\l I'm surprised.$"

Baldesia_Text_Bennis5::
# 854 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: We were searching all\n over HOENN for you.\l Where have you been?\p MOMO: … I made it back in time for the\n ritual… I think.\l I need to go see Brother now.$"
