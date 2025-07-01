Baldesia_MapScripts::
# 15 "data/maps/Baldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Baldesia_OnTransition
	.byte 0


Baldesia_OnTransition::
# 19 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_1_BALDESIA, Baldesia_UpdateNinjaBoy1Location
# 20 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_2_BALDESIA, Baldesia_UpdateNinjaBoy2Location
# 21 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_3_BALDESIA, Baldesia_UpdateNinjaBoy3Location
# 22 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_4_BALDESIA, Baldesia_UpdateNinjaBoy4Location
# 23 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_5_BALDESIA, Baldesia_UpdateNinjaBoy5Location
# 24 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_6_BALDESIA, Baldesia_UpdateNinjaBoy6Location
	end


Baldesia_UpdateNinjaBoy1Location::
# 29 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 7, 21, 24
# 30 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_UpdateNinjaBoy2Location::
# 35 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 19, 21, 23
# 36 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_UpdateNinjaBoy3Location::
# 41 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 17, 23, 23
# 42 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_MOUNTAIN_DISGUISE
	return


Baldesia_UpdateNinjaBoy4Location::
# 47 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 18, 25, 27
# 48 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_WANDER_AROUND
	return


Baldesia_UpdateNinjaBoy5Location::
# 53 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 16, 21, 26
# 54 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	return


Baldesia_UpdateNinjaBoy6Location::
# 59 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 20, 23, 24
	return


Baldesia_EventScript_OldManMiniGame::
# 64 "data/maps/Baldesia/scripts.pory"
	lock
# 65 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 66 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 0 Baldesia_EventScript_StartMiniGame
# 67 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 1 Baldesia_EventScript_RemindMiniGame
# 68 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 2 Baldesia_EventScript_GiveResult
# 69 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 3 Baldesia_EventScript_GiveResult
# 70 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 4 Baldesia_EventScript_GiveResult
# 71 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 5 Baldesia_EventScript_GiveResult
# 72 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 6 Baldesia_EventScript_GiveResult
# 73 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 7, Baldesia_EventScript_GiveLeadersCrest
# 74 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 78 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 79 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_StartMiniGame::
# 84 "data/maps/Baldesia/scripts.pory"
	lock
# 85 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_StartMiniGame_Text_0
# 90 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 91 "data/maps/Baldesia/scripts.pory"
	setvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 92 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_RemindMiniGame::
# 97 "data/maps/Baldesia/scripts.pory"
	lock
# 98 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_RemindMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 101 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 102 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_GiveResult::
# 107 "data/maps/Baldesia/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_BALDESIA_NINJA_BOY_COUNTER
# 108 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 112 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_GiveLeadersCrest::
# 117 "data/maps/Baldesia/scripts.pory"
	lock
# 118 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveLeadersCrest_Text_0
# 121 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 122 "data/maps/Baldesia/scripts.pory"
	checkitemspace ITEM_LEADERS_CREST
# 123 "data/maps/Baldesia/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_EventScript_GiveLeadersCrest_2
# 133 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveLeadersCrest_Text_1, MSGBOX_AUTOCLOSE
Baldesia_EventScript_GiveLeadersCrest_1:
# 136 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 137 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_GiveLeadersCrest_2:
# 124 "data/maps/Baldesia/scripts.pory"
	giveitem ITEM_LEADERS_CREST
# 125 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 126 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/Baldesia/scripts.pory"
	setvar VAR_BALDESIA_MINI_GAME_STATE, 8
	goto Baldesia_EventScript_GiveLeadersCrest_1


Baldesia_EventScript_NinjaBoy1::
# 142 "data/maps/Baldesia/scripts.pory"
	lock
# 143 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 0, Baldesia_EventScript_NinjaBoyHiding
# 144 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_1_BALDESIA, Baldesia_EventScript_NinjaBoy1_4
Baldesia_EventScript_NinjaBoy1_3:
# 166 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 167 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_1, MSGBOX_AUTOCLOSE
# 169 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy1_1:
# 171 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy1_2:
# 145 "data/maps/Baldesia/scripts.pory"
	delay 16
# 146 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 147 "data/maps/Baldesia/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 148 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 149 "data/maps/Baldesia/scripts.pory"
	waitse
# 150 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 151 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 154 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 155 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 156 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 157 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy1Location
# 158 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 159 "data/maps/Baldesia/scripts.pory"
	waitse
# 160 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 161 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 162 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 163 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_1_BALDESIA
	goto Baldesia_EventScript_NinjaBoy1_1

Baldesia_EventScript_NinjaBoy1_4:
# 144 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy1_2
	goto Baldesia_EventScript_NinjaBoy1_3


Baldesia_EventScript_NinjaBoy2::
# 176 "data/maps/Baldesia/scripts.pory"
	lock
# 177 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_2_BALDESIA, Baldesia_EventScript_NinjaBoy2_4
Baldesia_EventScript_NinjaBoy2_3:
# 199 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 200 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy2_Text_0, MSGBOX_AUTOCLOSE
# 202 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy2_1:
# 204 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy2_2:
# 178 "data/maps/Baldesia/scripts.pory"
	delay 16
# 179 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 180 "data/maps/Baldesia/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 181 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 182 "data/maps/Baldesia/scripts.pory"
	waitse
# 183 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 184 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_0, MSGBOX_AUTOCLOSE
# 186 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 187 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 188 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 189 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 190 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy2Location
# 191 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 192 "data/maps/Baldesia/scripts.pory"
	waitse
# 193 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 194 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 195 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 196 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_2_BALDESIA
	goto Baldesia_EventScript_NinjaBoy2_1

Baldesia_EventScript_NinjaBoy2_4:
# 177 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy2_2
	goto Baldesia_EventScript_NinjaBoy2_3


Baldesia_EventScript_NinjaBoy3::
# 209 "data/maps/Baldesia/scripts.pory"
	lock
# 210 "data/maps/Baldesia/scripts.pory"
	call EventScript_RevealTrainer
# 211 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_3_BALDESIA, Baldesia_EventScript_NinjaBoy3_4
Baldesia_EventScript_NinjaBoy3_3:
# 233 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 234 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy3_Text_1, MSGBOX_AUTOCLOSE
# 235 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy3_1:
# 237 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy3_2:
# 212 "data/maps/Baldesia/scripts.pory"
	delay 16
# 213 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 214 "data/maps/Baldesia/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 215 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 216 "data/maps/Baldesia/scripts.pory"
	waitse
# 217 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 218 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy3_Text_0, MSGBOX_AUTOCLOSE
# 220 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 221 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 223 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 224 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy3Location
# 225 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 226 "data/maps/Baldesia/scripts.pory"
	waitse
# 227 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 228 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 229 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 230 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_3_BALDESIA
	goto Baldesia_EventScript_NinjaBoy3_1

Baldesia_EventScript_NinjaBoy3_4:
# 211 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy3_2
	goto Baldesia_EventScript_NinjaBoy3_3


Baldesia_EventScript_NinjaBoy4::
# 242 "data/maps/Baldesia/scripts.pory"
	lock
# 243 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_4_BALDESIA, Baldesia_EventScript_NinjaBoy4_4
Baldesia_EventScript_NinjaBoy4_3:
# 265 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 266 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy4_Text_1, MSGBOX_AUTOCLOSE
# 268 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy4_1:
# 270 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy4_2:
# 244 "data/maps/Baldesia/scripts.pory"
	delay 16
# 245 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 246 "data/maps/Baldesia/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 247 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 248 "data/maps/Baldesia/scripts.pory"
	waitse
# 249 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 250 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy4_Text_0, MSGBOX_AUTOCLOSE
# 252 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 253 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 254 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 255 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 256 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy4Location
# 257 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 258 "data/maps/Baldesia/scripts.pory"
	waitse
# 259 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 260 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 261 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 262 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_4_BALDESIA
	goto Baldesia_EventScript_NinjaBoy4_1

Baldesia_EventScript_NinjaBoy4_4:
# 243 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy4_2
	goto Baldesia_EventScript_NinjaBoy4_3


Baldesia_EventScript_NinjaBoy5::
# 275 "data/maps/Baldesia/scripts.pory"
	lock
# 276 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_5_BALDESIA, Baldesia_EventScript_NinjaBoy5_4
Baldesia_EventScript_NinjaBoy5_3:
# 298 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 299 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy5_Text_1, MSGBOX_AUTOCLOSE
# 302 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy5_1:
# 304 "data/maps/Baldesia/scripts.pory"
	applymovement 16, Common_Movement_FaceOriginalDirection
# 305 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 306 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy5_2:
# 277 "data/maps/Baldesia/scripts.pory"
	delay 16
# 278 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 279 "data/maps/Baldesia/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 280 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 281 "data/maps/Baldesia/scripts.pory"
	waitse
# 282 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 283 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy5_Text_0, MSGBOX_AUTOCLOSE
# 285 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 286 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 287 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 288 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 289 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy5Location
# 290 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 291 "data/maps/Baldesia/scripts.pory"
	waitse
# 292 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 293 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 294 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 295 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_5_BALDESIA
	goto Baldesia_EventScript_NinjaBoy5_1

Baldesia_EventScript_NinjaBoy5_4:
# 276 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy5_2
	goto Baldesia_EventScript_NinjaBoy5_3


Baldesia_EventScript_NinjaBoy6::
# 311 "data/maps/Baldesia/scripts.pory"
	lock
# 312 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_6_BALDESIA, Baldesia_EventScript_NinjaBoy6_4
Baldesia_EventScript_NinjaBoy6_3:
# 333 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 334 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy6_Text_1, MSGBOX_AUTOCLOSE
# 339 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy6_1:
# 341 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy6_2:
# 313 "data/maps/Baldesia/scripts.pory"
	delay 16
# 314 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 315 "data/maps/Baldesia/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 316 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 317 "data/maps/Baldesia/scripts.pory"
	waitse
# 318 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 319 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy6_Text_0, MSGBOX_AUTOCLOSE
# 320 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 321 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 322 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 323 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 324 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy6Location
# 325 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 326 "data/maps/Baldesia/scripts.pory"
	waitse
# 327 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 328 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 329 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 330 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_6_BALDESIA
	goto Baldesia_EventScript_NinjaBoy6_1

Baldesia_EventScript_NinjaBoy6_4:
# 312 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy6_2
	goto Baldesia_EventScript_NinjaBoy6_3


Baldesia_EventScript_NinjaBoyHiding::
# 346 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoyHiding_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_OldManMiniGame_Text_0:
# 74 "data/maps/Baldesia/scripts.pory"
	.string "That crest is demanding of respect\n in our culture.\p It proves you have the qualities to\n become a powerful leader.$"

Baldesia_EventScript_StartMiniGame_Text_0:
# 85 "data/maps/Baldesia/scripts.pory"
	.string "Hm… I sense potential in you, young one.\n How about a little challenge?\p If you can find my 6 disciples that are\n hidden around the village, I'll give\l you a reward.$"

Baldesia_EventScript_RemindMiniGame_Text_0:
# 98 "data/maps/Baldesia/scripts.pory"
	.string "If you can find my 6 disciples that are\n hidden outside around the village, I'll\l give you a reward.$"

Baldesia_EventScript_GiveResult_Text_0:
# 108 "data/maps/Baldesia/scripts.pory"
	.string "So far you've found {STR_VAR_1} out of\n 6 disciples.\p Keep searching, young one.$"

Baldesia_EventScript_GiveLeadersCrest_Text_0:
# 118 "data/maps/Baldesia/scripts.pory"
	.string "Hm… So you were able to find all\n of my disciples… Impressive.\p As promised, here's your reward.$"

Baldesia_EventScript_GiveLeadersCrest_Text_1:
# 133 "data/maps/Baldesia/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Baldesia_EventScript_NinjaBoy1_Text_0:
# 151 "data/maps/Baldesia/scripts.pory"
	.string "Uh oh!\n  You found me!$"

Baldesia_EventScript_NinjaBoy1_Text_1:
# 167 "data/maps/Baldesia/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

Baldesia_EventScript_NinjaBoy2_Text_0:
# 200 "data/maps/Baldesia/scripts.pory"
	.string "Is it hot, or is it cold?\n I don't know cause I'm not bald!$"

Baldesia_EventScript_NinjaBoy3_Text_0:
# 218 "data/maps/Baldesia/scripts.pory"
	.string "W-What?!\n  My disguise was perfect!$"

Baldesia_EventScript_NinjaBoy3_Text_1:
# 234 "data/maps/Baldesia/scripts.pory"
	.string "I'm practicing my disguises!$"

Baldesia_EventScript_NinjaBoy4_Text_0:
# 250 "data/maps/Baldesia/scripts.pory"
	.string "Aw!\n  You found me!$"

Baldesia_EventScript_NinjaBoy4_Text_1:
# 266 "data/maps/Baldesia/scripts.pory"
	.string "I thought hiding in plain sight was\n a good idea.$"

Baldesia_EventScript_NinjaBoy5_Text_0:
# 283 "data/maps/Baldesia/scripts.pory"
	.string "Dang!\n  You found me!$"

Baldesia_EventScript_NinjaBoy5_Text_1:
# 299 "data/maps/Baldesia/scripts.pory"
	.string "I'm training to be a great ninja\n like MASTER BENNIS!\p Believe it!$"

Baldesia_EventScript_NinjaBoy6_Text_0:
# 319 "data/maps/Baldesia/scripts.pory"
	.string "…!$"

Baldesia_EventScript_NinjaBoy6_Text_1:
# 334 "data/maps/Baldesia/scripts.pory"
	.string "…\n …\l …\p … I wanna grow up to be bald like my\n Auntie MOMO.$"

Baldesia_EventScript_NinjaBoyHiding_Text_0:
# 346 "data/maps/Baldesia/scripts.pory"
	.string "I'm training right now!\n SENSEI told us to hide!$"
