Baldesia_MapScripts::
# 15 "data/maps/Baldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Baldesia_OnTransition
# 16 "data/maps/Baldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Baldesia_OnResume
	.byte 0


Baldesia_OnTransition::
# 20 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_1_BALDESIA, Baldesia_UpdateNinjaBoy1Location
# 21 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_2_BALDESIA, Baldesia_UpdateNinjaBoy2Location
# 22 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_3_BALDESIA, Baldesia_UpdateNinjaBoy3Location
# 23 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_4_BALDESIA, Baldesia_UpdateNinjaBoy4Location
# 24 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_5_BALDESIA, Baldesia_UpdateNinjaBoy5Location
# 25 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HIDE_NINJA_BOY_6_BALDESIA, Baldesia_UpdateNinjaBoy6Location
	end


Baldesia_OnResume::
# 30 "data/maps/Baldesia/scripts.pory"
	call_if_set FLAG_HISUIAN_ZORUA, Baldesia_RemoveHisuianZorua
	end


Baldesia_RemoveHisuianZorua::
# 35 "data/maps/Baldesia/scripts.pory"
	removeobject 24
	return


Baldesia_UpdateNinjaBoy1Location::
# 40 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 7, 21, 24
# 41 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_UpdateNinjaBoy2Location::
# 46 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 19, 21, 23
# 47 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 19, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_UpdateNinjaBoy3Location::
# 52 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 17, 23, 23
# 53 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_MOUNTAIN_DISGUISE
	return


Baldesia_UpdateNinjaBoy4Location::
# 58 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 18, 25, 27
# 59 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_WANDER_AROUND
	return


Baldesia_UpdateNinjaBoy5Location::
# 64 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 16, 21, 26
# 65 "data/maps/Baldesia/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	return


Baldesia_UpdateNinjaBoy6Location::
# 70 "data/maps/Baldesia/scripts.pory"
	setobjectxyperm 20, 23, 24
	return


Baldesia_EventScript_OldManMiniGame::
# 75 "data/maps/Baldesia/scripts.pory"
	lock
# 76 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 77 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 0 Baldesia_EventScript_StartMiniGame
# 78 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 1 Baldesia_EventScript_RemindMiniGame
# 79 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 2 Baldesia_EventScript_GiveResult
# 80 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 3 Baldesia_EventScript_GiveResult
# 81 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 4 Baldesia_EventScript_GiveResult
# 82 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 5 Baldesia_EventScript_GiveResult
# 83 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 6 Baldesia_EventScript_GiveResult
# 84 "data/maps/Baldesia/scripts.pory"
	goto_if_eq VAR_BALDESIA_MINI_GAME_STATE, 7, Baldesia_EventScript_GiveLeadersCrest
# 85 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 89 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 90 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_StartMiniGame::
# 95 "data/maps/Baldesia/scripts.pory"
	lock
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
	lock
# 110 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_RemindMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 113 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 114 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_GiveResult::
# 119 "data/maps/Baldesia/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_BALDESIA_NINJA_BOY_COUNTER
# 120 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveResult_Text_0, MSGBOX_AUTOCLOSE
# 123 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 124 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_GiveLeadersCrest::
# 129 "data/maps/Baldesia/scripts.pory"
	lock
# 130 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveLeadersCrest_Text_0
# 133 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 134 "data/maps/Baldesia/scripts.pory"
	checkitemspace ITEM_LEADERS_CREST
# 135 "data/maps/Baldesia/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_EventScript_GiveLeadersCrest_2
# 145 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveLeadersCrest_Text_1, MSGBOX_AUTOCLOSE
Baldesia_EventScript_GiveLeadersCrest_1:
# 148 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 149 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_GiveLeadersCrest_2:
# 136 "data/maps/Baldesia/scripts.pory"
	giveitem ITEM_LEADERS_CREST
# 137 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 138 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 142 "data/maps/Baldesia/scripts.pory"
	setvar VAR_BALDESIA_MINI_GAME_STATE, 8
	goto Baldesia_EventScript_GiveLeadersCrest_1


Baldesia_EventScript_NinjaBoy1::
# 154 "data/maps/Baldesia/scripts.pory"
	lock
# 155 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_1_BALDESIA, Baldesia_EventScript_NinjaBoy1_4
Baldesia_EventScript_NinjaBoy1_3:
# 178 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 179 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_1, MSGBOX_AUTOCLOSE
# 181 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy1_1:
# 183 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy1_2:
# 156 "data/maps/Baldesia/scripts.pory"
	delay 16
# 157 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 158 "data/maps/Baldesia/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 159 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 160 "data/maps/Baldesia/scripts.pory"
	waitse
# 161 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 162 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_0, MSGBOX_AUTOCLOSE
# 164 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 165 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 166 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 167 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 168 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 169 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy1Location
# 170 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 171 "data/maps/Baldesia/scripts.pory"
	waitse
# 172 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 173 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 174 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 175 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_1_BALDESIA
	goto Baldesia_EventScript_NinjaBoy1_1

Baldesia_EventScript_NinjaBoy1_4:
# 155 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy1_2
	goto Baldesia_EventScript_NinjaBoy1_3


Baldesia_EventScript_NinjaBoy2::
# 188 "data/maps/Baldesia/scripts.pory"
	lock
# 189 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_2_BALDESIA, Baldesia_EventScript_NinjaBoy2_4
Baldesia_EventScript_NinjaBoy2_3:
# 212 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 213 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy2_Text_0, MSGBOX_AUTOCLOSE
# 215 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy2_1:
# 217 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy2_2:
# 190 "data/maps/Baldesia/scripts.pory"
	delay 16
# 191 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 192 "data/maps/Baldesia/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 193 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 194 "data/maps/Baldesia/scripts.pory"
	waitse
# 195 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 196 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_0, MSGBOX_AUTOCLOSE
# 198 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 199 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 200 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 201 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 202 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 203 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy2Location
# 204 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 205 "data/maps/Baldesia/scripts.pory"
	waitse
# 206 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 207 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 208 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 209 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_2_BALDESIA
	goto Baldesia_EventScript_NinjaBoy2_1

Baldesia_EventScript_NinjaBoy2_4:
# 189 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy2_2
	goto Baldesia_EventScript_NinjaBoy2_3


Baldesia_EventScript_NinjaBoy3::
# 222 "data/maps/Baldesia/scripts.pory"
	lock
# 223 "data/maps/Baldesia/scripts.pory"
	call EventScript_RevealTrainer
# 224 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_3_BALDESIA, Baldesia_EventScript_NinjaBoy3_4
Baldesia_EventScript_NinjaBoy3_3:
# 247 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 248 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy3_Text_1, MSGBOX_AUTOCLOSE
# 249 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy3_1:
# 251 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy3_2:
# 225 "data/maps/Baldesia/scripts.pory"
	delay 16
# 226 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 227 "data/maps/Baldesia/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 228 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 229 "data/maps/Baldesia/scripts.pory"
	waitse
# 230 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 231 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy3_Text_0, MSGBOX_AUTOCLOSE
# 233 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 234 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 235 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 236 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 237 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 238 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy3Location
# 239 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 240 "data/maps/Baldesia/scripts.pory"
	waitse
# 241 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 242 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 243 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 244 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_3_BALDESIA
	goto Baldesia_EventScript_NinjaBoy3_1

Baldesia_EventScript_NinjaBoy3_4:
# 224 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy3_2
	goto Baldesia_EventScript_NinjaBoy3_3


Baldesia_EventScript_NinjaBoy4::
# 256 "data/maps/Baldesia/scripts.pory"
	lock
# 257 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_4_BALDESIA, Baldesia_EventScript_NinjaBoy4_4
Baldesia_EventScript_NinjaBoy4_3:
# 280 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 281 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy4_Text_1, MSGBOX_AUTOCLOSE
# 283 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy4_1:
# 285 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy4_2:
# 258 "data/maps/Baldesia/scripts.pory"
	delay 16
# 259 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 260 "data/maps/Baldesia/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 261 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 262 "data/maps/Baldesia/scripts.pory"
	waitse
# 263 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 264 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy4_Text_0, MSGBOX_AUTOCLOSE
# 266 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 267 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 268 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 269 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 270 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 271 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy4Location
# 272 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 273 "data/maps/Baldesia/scripts.pory"
	waitse
# 274 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 275 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 276 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 277 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_4_BALDESIA
	goto Baldesia_EventScript_NinjaBoy4_1

Baldesia_EventScript_NinjaBoy4_4:
# 257 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy4_2
	goto Baldesia_EventScript_NinjaBoy4_3


Baldesia_EventScript_NinjaBoy5::
# 290 "data/maps/Baldesia/scripts.pory"
	lock
# 291 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_5_BALDESIA, Baldesia_EventScript_NinjaBoy5_4
Baldesia_EventScript_NinjaBoy5_3:
# 314 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 315 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy5_Text_1, MSGBOX_AUTOCLOSE
# 319 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy5_1:
# 321 "data/maps/Baldesia/scripts.pory"
	applymovement 16, Common_Movement_FaceOriginalDirection
# 322 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 323 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy5_2:
# 292 "data/maps/Baldesia/scripts.pory"
	delay 16
# 293 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 294 "data/maps/Baldesia/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 295 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 296 "data/maps/Baldesia/scripts.pory"
	waitse
# 297 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 298 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy5_Text_0, MSGBOX_AUTOCLOSE
# 300 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 301 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 302 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 303 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 304 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 305 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy5Location
# 306 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 307 "data/maps/Baldesia/scripts.pory"
	waitse
# 308 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 309 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 310 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 311 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_5_BALDESIA
	goto Baldesia_EventScript_NinjaBoy5_1

Baldesia_EventScript_NinjaBoy5_4:
# 291 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy5_2
	goto Baldesia_EventScript_NinjaBoy5_3


Baldesia_EventScript_NinjaBoy6::
# 328 "data/maps/Baldesia/scripts.pory"
	lock
# 329 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_6_BALDESIA, Baldesia_EventScript_NinjaBoy6_4
Baldesia_EventScript_NinjaBoy6_3:
# 351 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 352 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy6_Text_1, MSGBOX_AUTOCLOSE
# 357 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy6_1:
# 359 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy6_2:
# 330 "data/maps/Baldesia/scripts.pory"
	delay 16
# 331 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 332 "data/maps/Baldesia/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 333 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 334 "data/maps/Baldesia/scripts.pory"
	waitse
# 335 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 336 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy6_Text_0, MSGBOX_AUTOCLOSE
# 337 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 338 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 339 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 340 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 341 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 342 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy6Location
# 343 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 344 "data/maps/Baldesia/scripts.pory"
	waitse
# 345 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 346 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 347 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 348 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_6_BALDESIA
	goto Baldesia_EventScript_NinjaBoy6_1

Baldesia_EventScript_NinjaBoy6_4:
# 329 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy6_2
	goto Baldesia_EventScript_NinjaBoy6_3


Baldesia_EventScript_LittleGirl::
# 364 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_OldWoman::
# 371 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_OldManBridge::
# 379 "data/maps/Baldesia/scripts.pory"
	lock
# 380 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 381 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManBridge_Text_0, MSGBOX_AUTOCLOSE
# 384 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 385 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 386 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
	end


Baldesia_EventScript_KimonoLady1::
# 391 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_KimonoLady1_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_KimonoLady2::
# 399 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_KimonoLady2_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_Ninja::
# 406 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_Ninja_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_EntranceGuard::
# 412 "data/maps/Baldesia/scripts.pory"
	lock
# 413 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 414 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_EntranceGuard_Text_0, MSGBOX_AUTOCLOSE
# 415 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 416 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 417 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 418 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_Sawk::
# 423 "data/maps/Baldesia/scripts.pory"
	lock
# 424 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 425 "data/maps/Baldesia/scripts.pory"
	playmoncry SPECIES_SAWK, CRY_MODE_ENCOUNTER
# 426 "data/maps/Baldesia/scripts.pory"
	waitmoncry
# 427 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 428 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 429 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_Entrance_TriggerLeft::
# 434 "data/maps/Baldesia/scripts.pory"
	lockall
# 435 "data/maps/Baldesia/scripts.pory"
	setvar VAR_TEMP_B, 1
# 436 "data/maps/Baldesia/scripts.pory"
	goto Baldesia_EventScript_HisuianZoruaTrigger
	end


Baldesia_Entrance_TriggerRight::
# 441 "data/maps/Baldesia/scripts.pory"
	lockall
# 442 "data/maps/Baldesia/scripts.pory"
	setvar VAR_TEMP_B, 2
# 443 "data/maps/Baldesia/scripts.pory"
	goto Baldesia_EventScript_HisuianZoruaTrigger
	end


Baldesia_EventScript_HisuianZoruaTrigger::
# 448 "data/maps/Baldesia/scripts.pory"
	lockall
# 449 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 450 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 451 "data/maps/Baldesia/scripts.pory"
	delay 8
# 452 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 453 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 454 "data/maps/Baldesia/scripts.pory"
	waitse
# 455 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Baldesa_Movement_BlockTrainerLeftGuard
# 456 "data/maps/Baldesia/scripts.pory"
	delay 16
# 457 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Baldesa_Movement_BlockTrainerRightGuard
# 458 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 459 "data/maps/Baldesia/scripts.pory"
	delay 10
# 460 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_0, MSGBOX_AUTOCLOSE
# 464 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 465 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_BALDESIA
# 466 "data/maps/Baldesia/scripts.pory"
	addobject 1
# 467 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 468 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 469 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 470 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 471 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 472 "data/maps/Baldesia/scripts.pory"
	waitse
# 473 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_1, MSGBOX_AUTOCLOSE
# 475 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 476 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 477 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 478 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 479 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_2, MSGBOX_AUTOCLOSE
# 482 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 483 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 484 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 485 "data/maps/Baldesia/scripts.pory"
	delay 8
# 486 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 487 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 488 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_3, MSGBOX_AUTOCLOSE
# 489 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 490 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 491 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 492 "data/maps/Baldesia/scripts.pory"
	waitmovement 11
# 493 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_4, MSGBOX_AUTOCLOSE
# 497 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 498 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 499 "data/maps/Baldesia/scripts.pory"
	delay 8
# 500 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 501 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 502 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 503 "data/maps/Baldesia/scripts.pory"
	delay 8
# 504 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 505 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 506 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkUp6
# 507 "data/maps/Baldesia/scripts.pory"
	delay 8
# 508 "data/maps/Baldesia/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq Baldesia_EventScript_HisuianZoruaTrigger_2
# 511 "data/maps/Baldesia/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq Baldesia_EventScript_HisuianZoruaTrigger_3
# 515 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesia
Baldesia_EventScript_HisuianZoruaTrigger_1:
# 517 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 518 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 519 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 520 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_5, MSGBOX_AUTOCLOSE
# 523 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 524 "data/maps/Baldesia/scripts.pory"
	addobject 2
# 525 "data/maps/Baldesia/scripts.pory"
	addobject 4
# 526 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 527 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 528 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 529 "data/maps/Baldesia/scripts.pory"
	waitse
# 530 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 531 "data/maps/Baldesia/scripts.pory"
	delay 8
# 532 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 533 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 534 "data/maps/Baldesia/scripts.pory"
	fadenewbgm MUS_BENNIS_DOJO
# 535 "data/maps/Baldesia/scripts.pory"
	savebgm MUS_BENNIS_DOJO
# 536 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkRight7
# 537 "data/maps/Baldesia/scripts.pory"
	delay 16
# 538 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkRight7
# 539 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 540 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis1, MSGBOX_AUTOCLOSE
# 541 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 542 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 543 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 544 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_6, MSGBOX_AUTOCLOSE
# 546 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 547 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 548 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 549 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_7, MSGBOX_AUTOCLOSE
# 552 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 553 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 554 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 555 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_8, MSGBOX_AUTOCLOSE
# 556 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 557 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 558 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 559 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 560 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 561 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 562 "data/maps/Baldesia/scripts.pory"
	waitse
# 563 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_9, MSGBOX_AUTOCLOSE
# 564 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 565 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 566 "data/maps/Baldesia/scripts.pory"
	delay 16
# 567 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 568 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 569 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_10, MSGBOX_AUTOCLOSE
# 570 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 571 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua1
# 572 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 573 "data/maps/Baldesia/scripts.pory"
	delay 16
# 574 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua2
# 575 "data/maps/Baldesia/scripts.pory"
	delay 8
# 576 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 577 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 578 "data/maps/Baldesia/scripts.pory"
	delay 16
# 579 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua3
# 580 "data/maps/Baldesia/scripts.pory"
	delay 8
# 581 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 582 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 583 "data/maps/Baldesia/scripts.pory"
	delay 16
# 584 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakWalkToBennis
# 585 "data/maps/Baldesia/scripts.pory"
	delay 8
# 586 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 587 "data/maps/Baldesia/scripts.pory"
	delay 8
# 588 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 589 "data/maps/Baldesia/scripts.pory"
	waitmovement 4
# 590 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_11, MSGBOX_AUTOCLOSE
# 591 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 592 "data/maps/Baldesia/scripts.pory"
	addobject 3
# 593 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkRight7
# 594 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 595 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 596 "data/maps/Baldesia/scripts.pory"
	delay 8
# 597 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 598 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 599 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 600 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 601 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 602 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 603 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 604 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 605 "data/maps/Baldesia/scripts.pory"
	waitse
# 606 "data/maps/Baldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 607 "data/maps/Baldesia/scripts.pory"
	delay 30
# 608 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 609 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 610 "data/maps/Baldesia/scripts.pory"
	delay 6
# 611 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 612 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 613 "data/maps/Baldesia/scripts.pory"
	waitse
# 614 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_12, MSGBOX_AUTOCLOSE
# 616 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 617 "data/maps/Baldesia/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 618 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror
# 619 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror
# 620 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 621 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_13, MSGBOX_AUTOCLOSE
# 623 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 624 "data/maps/Baldesia/scripts.pory"
	playse SE_RG_HELP_OPEN
# 625 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror2
# 626 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror2Reverse
# 627 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 628 "data/maps/Baldesia/scripts.pory"
	delay 20
# 629 "data/maps/Baldesia/scripts.pory"
	playse SE_RG_HELP_CLOSE
# 630 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror4
# 631 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror4Reverse
# 632 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 633 "data/maps/Baldesia/scripts.pory"
	delay 60
# 634 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 635 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror3
# 636 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror3Reverse
# 637 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 638 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_14, MSGBOX_AUTOCLOSE
# 639 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 640 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterRight
# 641 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 642 "data/maps/Baldesia/scripts.pory"
	playse SE_EFFECTIVE
# 643 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 644 "data/maps/Baldesia/scripts.pory"
	removeobject 4
# 645 "data/maps/Baldesia/scripts.pory"
	addobject 24
# 646 "data/maps/Baldesia/scripts.pory"
	waitse
# 647 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 648 "data/maps/Baldesia/scripts.pory"
	delay 60
# 649 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 650 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 651 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 652 "data/maps/Baldesia/scripts.pory"
	delay 8
# 653 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 654 "data/maps/Baldesia/scripts.pory"
	delay 8
# 655 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 656 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 657 "data/maps/Baldesia/scripts.pory"
	waitse
# 658 "data/maps/Baldesia/scripts.pory"
	delay 30
# 659 "data/maps/Baldesia/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceRight
# 660 "data/maps/Baldesia/scripts.pory"
	waitmovement 24
# 661 "data/maps/Baldesia/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUI, CRY_MODE_ENCOUNTER
# 662 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_15, MSGBOX_AUTOCLOSE
# 663 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 664 "data/maps/Baldesia/scripts.pory"
	applymovement 24, Common_Movement_WalkRight
# 665 "data/maps/Baldesia/scripts.pory"
	waitmovement 24
# 666 "data/maps/Baldesia/scripts.pory"
	setwildbattle SPECIES_ZORUA_HISUI, 50
# 667 "data/maps/Baldesia/scripts.pory"
	dowildbattle
# 668 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniFaceBennis
# 669 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 670 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_16, MSGBOX_AUTOCLOSE
# 672 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 673 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_WalkFastLeft7
# 674 "data/maps/Baldesia/scripts.pory"
	delay 24
# 675 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 676 "data/maps/Baldesia/scripts.pory"
	delay 8
# 677 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 678 "data/maps/Baldesia/scripts.pory"
	waitmovement 3
# 679 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis2, MSGBOX_AUTOCLOSE
# 680 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 681 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 682 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 683 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_17, MSGBOX_AUTOCLOSE
# 685 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 686 "data/maps/Baldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 687 "data/maps/Baldesia/scripts.pory"
	playse SE_SHINY
# 688 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 689 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 690 "data/maps/Baldesia/scripts.pory"
	waitse
# 691 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 692 "data/maps/Baldesia/scripts.pory"
	delay 4
# 693 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 694 "data/maps/Baldesia/scripts.pory"
	delay 4
# 695 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 696 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 697 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_18, MSGBOX_AUTOCLOSE
# 699 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 700 "data/maps/Baldesia/scripts.pory"
	playse SE_SHINY
# 701 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 702 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 703 "data/maps/Baldesia/scripts.pory"
	waitse
# 704 "data/maps/Baldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 705 "data/maps/Baldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 706 "data/maps/Baldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 707 "data/maps/Baldesia/scripts.pory"
	waitse
# 708 "data/maps/Baldesia/scripts.pory"
	addobject 22
# 709 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Baldesia_Movement_MomoEnters
# 710 "data/maps/Baldesia/scripts.pory"
	waitmovement 22
# 711 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 712 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 713 "data/maps/Baldesia/scripts.pory"
	delay 8
# 714 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 715 "data/maps/Baldesia/scripts.pory"
	delay 8
# 716 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 717 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 718 "data/maps/Baldesia/scripts.pory"
	waitse
# 719 "data/maps/Baldesia/scripts.pory"
	fadedefaultbgm
# 720 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis3, MSGBOX_AUTOCLOSE
# 721 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 722 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceRight
# 723 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 724 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_19, MSGBOX_AUTOCLOSE
# 725 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 726 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 727 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 728 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 729 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis4, MSGBOX_AUTOCLOSE
# 730 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 731 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 732 "data/maps/Baldesia/scripts.pory"
	delay 8
# 733 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 734 "data/maps/Baldesia/scripts.pory"
	delay 8
# 735 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceUp
# 736 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 737 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis5, MSGBOX_AUTOCLOSE
# 738 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 739 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Baldesia_Movement_MomoGoesToMainHouse
# 740 "data/maps/Baldesia/scripts.pory"
	delay 30
# 741 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 742 "data/maps/Baldesia/scripts.pory"
	delay 8
# 743 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 744 "data/maps/Baldesia/scripts.pory"
	delay 8
# 745 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 746 "data/maps/Baldesia/scripts.pory"
	waitmovement 22
# 747 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 748 "data/maps/Baldesia/scripts.pory"
	removeobject 22
# 749 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 750 "data/maps/Baldesia/scripts.pory"
	delay 8
# 751 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 752 "data/maps/Baldesia/scripts.pory"
	delay 8
# 753 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 754 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 755 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_20, MSGBOX_AUTOCLOSE
# 756 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 757 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp5
# 758 "data/maps/Baldesia/scripts.pory"
	delay 8
# 759 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 760 "data/maps/Baldesia/scripts.pory"
	delay 8
# 761 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 762 "data/maps/Baldesia/scripts.pory"
	waitmovement 2
# 763 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 764 "data/maps/Baldesia/scripts.pory"
	waitse
# 765 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakApproachesPlayer
# 766 "data/maps/Baldesia/scripts.pory"
	delay 8
# 767 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 768 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 769 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_21, MSGBOX_AUTOCLOSE
# 772 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 773 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 774 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 775 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_22, MSGBOX_AUTOCLOSE
# 776 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 777 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakGoesToMainHouse
# 778 "data/maps/Baldesia/scripts.pory"
	delay 8
# 779 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 780 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 781 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 782 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 783 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 784 "data/maps/Baldesia/scripts.pory"
	waitse
# 785 "data/maps/Baldesia/scripts.pory"
	removeobject 1
# 786 "data/maps/Baldesia/scripts.pory"
	removeobject 2
# 787 "data/maps/Baldesia/scripts.pory"
	removeobject 3
# 788 "data/maps/Baldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 2
# 789 "data/maps/Baldesia/scripts.pory"
	releaseall
	end

Baldesia_EventScript_HisuianZoruaTrigger_2:
# 509 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesiaLeftTrigger
	goto Baldesia_EventScript_HisuianZoruaTrigger_1

Baldesia_EventScript_HisuianZoruaTrigger_3:
# 512 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesiaRightTrigger
	goto Baldesia_EventScript_HisuianZoruaTrigger_1


Baldesia_EventScript_INeedToGoGetPanini::
# 794 "data/maps/Baldesia/scripts.pory"
	lockall
# 795 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_INeedToGoGetPanini_Text_0, MSGBOX_AUTOCLOSE
# 796 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 797 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 798 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 799 "data/maps/Baldesia/scripts.pory"
	releaseall
	end


Baldesia_EventScript_YouNeedPermission::
# 804 "data/maps/Baldesia/scripts.pory"
	lockall
# 805 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 806 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 807 "data/maps/Baldesia/scripts.pory"
	waitmovement 9
# 808 "data/maps/Baldesia/scripts.pory"
	waitse
# 809 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceRight
# 810 "data/maps/Baldesia/scripts.pory"
	delay 8
# 811 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 812 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 813 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_YouNeedPermission_Text_0, MSGBOX_AUTOCLOSE
# 815 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 816 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 817 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 818 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 819 "data/maps/Baldesia/scripts.pory"
	waitmovement 9
# 820 "data/maps/Baldesia/scripts.pory"
	releaseall
	end


# 859 "data/maps/Baldesia/scripts.pory"
Baldesa_Movement_BlockTrainerLeftGuard:
# 860 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
# 861 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_down
	step_end

# 864 "data/maps/Baldesia/scripts.pory"
Baldesa_Movement_BlockTrainerRightGuard:
# 865 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 866 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_down
	step_end

# 869 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesia:
# 870 "data/maps/Baldesia/scripts.pory"
	walk_up
# 870 "data/maps/Baldesia/scripts.pory"
	walk_up
# 870 "data/maps/Baldesia/scripts.pory"
	walk_up
# 870 "data/maps/Baldesia/scripts.pory"
	walk_up
# 870 "data/maps/Baldesia/scripts.pory"
	walk_up
# 870 "data/maps/Baldesia/scripts.pory"
	walk_up
# 870 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 873 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesiaLeftTrigger:
# 874 "data/maps/Baldesia/scripts.pory"
	walk_right
# 875 "data/maps/Baldesia/scripts.pory"
	walk_up
# 875 "data/maps/Baldesia/scripts.pory"
	walk_up
# 875 "data/maps/Baldesia/scripts.pory"
	walk_up
# 875 "data/maps/Baldesia/scripts.pory"
	walk_up
# 875 "data/maps/Baldesia/scripts.pory"
	walk_up
# 875 "data/maps/Baldesia/scripts.pory"
	walk_up
# 875 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 878 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesiaRightTrigger:
# 879 "data/maps/Baldesia/scripts.pory"
	walk_left
# 880 "data/maps/Baldesia/scripts.pory"
	walk_up
# 880 "data/maps/Baldesia/scripts.pory"
	walk_up
# 880 "data/maps/Baldesia/scripts.pory"
	walk_up
# 880 "data/maps/Baldesia/scripts.pory"
	walk_up
# 880 "data/maps/Baldesia/scripts.pory"
	walk_up
# 880 "data/maps/Baldesia/scripts.pory"
	walk_up
# 880 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 883 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua1:
# 884 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 885 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 886 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_left
	step_end

# 889 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua2:
# 890 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 891 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 892 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_up
	step_end

# 895 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua3:
# 896 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 897 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 898 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 901 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakWalkToBennis:
# 902 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 903 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 906 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror:
# 907 "data/maps/Baldesia/scripts.pory"
	lock_facing_direction
# 908 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 908 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 909 "data/maps/Baldesia/scripts.pory"
	delay_16
# 910 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 910 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 911 "data/maps/Baldesia/scripts.pory"
	delay_16
# 912 "data/maps/Baldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 915 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror2:
# 916 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 917 "data/maps/Baldesia/scripts.pory"
	delay_4
# 918 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
# 919 "data/maps/Baldesia/scripts.pory"
	delay_4
# 920 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 921 "data/maps/Baldesia/scripts.pory"
	delay_4
# 922 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
	step_end

# 925 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror4Reverse:
# 926 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 927 "data/maps/Baldesia/scripts.pory"
	delay_4
# 928 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
# 929 "data/maps/Baldesia/scripts.pory"
	delay_4
# 930 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 931 "data/maps/Baldesia/scripts.pory"
	delay_4
# 932 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
	step_end

# 935 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror3:
# 936 "data/maps/Baldesia/scripts.pory"
	jump_in_place_left_right
	step_end

# 939 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror3Reverse:
# 940 "data/maps/Baldesia/scripts.pory"
	jump_in_place_right_left
	step_end

# 943 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror4:
# 944 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 945 "data/maps/Baldesia/scripts.pory"
	delay_4
# 946 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
# 947 "data/maps/Baldesia/scripts.pory"
	delay_4
# 948 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 949 "data/maps/Baldesia/scripts.pory"
	delay_4
# 950 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
	step_end

# 953 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror2Reverse:
# 954 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 955 "data/maps/Baldesia/scripts.pory"
	delay_4
# 956 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
# 957 "data/maps/Baldesia/scripts.pory"
	delay_4
# 958 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 959 "data/maps/Baldesia/scripts.pory"
	delay_4
# 960 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
	step_end

# 963 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniFaceBennis:
# 964 "data/maps/Baldesia/scripts.pory"
	walk_right
# 965 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
	step_end

# 968 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_WalkFastLeft7:
# 969 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 969 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 969 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 969 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 969 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 969 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 969 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
	step_end

# 972 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_MomoEnters:
# 973 "data/maps/Baldesia/scripts.pory"
	walk_up
# 973 "data/maps/Baldesia/scripts.pory"
	walk_up
# 973 "data/maps/Baldesia/scripts.pory"
	walk_up
# 973 "data/maps/Baldesia/scripts.pory"
	walk_up
# 974 "data/maps/Baldesia/scripts.pory"
	walk_left
# 975 "data/maps/Baldesia/scripts.pory"
	walk_up
# 975 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 978 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_MomoGoesToMainHouse:
# 979 "data/maps/Baldesia/scripts.pory"
	walk_right
# 980 "data/maps/Baldesia/scripts.pory"
	walk_up
# 980 "data/maps/Baldesia/scripts.pory"
	walk_up
# 980 "data/maps/Baldesia/scripts.pory"
	walk_up
# 981 "data/maps/Baldesia/scripts.pory"
	walk_left
# 982 "data/maps/Baldesia/scripts.pory"
	walk_up
# 982 "data/maps/Baldesia/scripts.pory"
	walk_up
# 982 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 985 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakGoesToMainHouse:
# 986 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 987 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 987 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 987 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 987 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 987 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 987 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 987 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
	step_end

# 990 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakApproachesPlayer:
# 991 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 992 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
# 992 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
	step_end

Baldesia_EventScript_OldManMiniGame_Text_0:
# 85 "data/maps/Baldesia/scripts.pory"
	.string "That crest is demanding of respect\n in our culture.\p It proves you have the qualities to\n become a powerful leader.$"

Baldesia_EventScript_StartMiniGame_Text_0:
# 96 "data/maps/Baldesia/scripts.pory"
	.string "Hm… I sense potential in you, young one.\n How about a little challenge?\p If you can find my 6 disciples that are\n hidden around the village, I'll give\l you a reward.$"

Baldesia_EventScript_RemindMiniGame_Text_0:
# 110 "data/maps/Baldesia/scripts.pory"
	.string "If you can find my 6 disciples that are\n hidden outside around the village, I'll\l give you a reward.$"

Baldesia_EventScript_GiveResult_Text_0:
# 120 "data/maps/Baldesia/scripts.pory"
	.string "So far you've found {STR_VAR_1} out of\n 6 disciples.\p Keep searching, young one.$"

Baldesia_EventScript_GiveLeadersCrest_Text_0:
# 130 "data/maps/Baldesia/scripts.pory"
	.string "Hm… So you were able to find all\n of my disciples… Impressive.\p As promised, here's your reward.$"

Baldesia_EventScript_GiveLeadersCrest_Text_1:
# 145 "data/maps/Baldesia/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Baldesia_EventScript_NinjaBoy1_Text_0:
# 162 "data/maps/Baldesia/scripts.pory"
	.string "Uh oh!\n  You found me!$"

Baldesia_EventScript_NinjaBoy1_Text_1:
# 179 "data/maps/Baldesia/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

Baldesia_EventScript_NinjaBoy2_Text_0:
# 213 "data/maps/Baldesia/scripts.pory"
	.string "Is it hot, or is it cold?\n I don't know, 'cause I'm not bald!$"

Baldesia_EventScript_NinjaBoy3_Text_0:
# 231 "data/maps/Baldesia/scripts.pory"
	.string "W-What?!\n  My disguise was perfect!$"

Baldesia_EventScript_NinjaBoy3_Text_1:
# 248 "data/maps/Baldesia/scripts.pory"
	.string "I'm practicing my disguises!$"

Baldesia_EventScript_NinjaBoy4_Text_0:
# 264 "data/maps/Baldesia/scripts.pory"
	.string "Aw!\n  You found me!$"

Baldesia_EventScript_NinjaBoy4_Text_1:
# 281 "data/maps/Baldesia/scripts.pory"
	.string "I thought hiding in plain sight was\n a good idea.$"

Baldesia_EventScript_NinjaBoy5_Text_0:
# 298 "data/maps/Baldesia/scripts.pory"
	.string "Dang!\n  You found me!$"

Baldesia_EventScript_NinjaBoy5_Text_1:
# 315 "data/maps/Baldesia/scripts.pory"
	.string "I'm training to be a great ninja\n like MASTER BENNIS!\p It's not fair that only PANINI gets to\n be his disciple!$"

Baldesia_EventScript_NinjaBoy6_Text_0:
# 336 "data/maps/Baldesia/scripts.pory"
	.string "…!$"

Baldesia_EventScript_NinjaBoy6_Text_1:
# 352 "data/maps/Baldesia/scripts.pory"
	.string "…\n …\l …\p … I wanna grow up to be bald like my\n Auntie MOMO.$"

Baldesia_EventScript_LittleGirl_Text_0:
# 364 "data/maps/Baldesia/scripts.pory"
	.string "My mom said the ASAKURA family has\n a gene that makes the women bald!\p Hahaha!$"

Baldesia_EventScript_OldWoman_Text_0:
# 371 "data/maps/Baldesia/scripts.pory"
	.string "There's a DOJO in the woods renowned\n for the strength of its members.\p I heard the Sensei there is looking\n for a successor.$"

Baldesia_EventScript_OldManBridge_Text_0:
# 381 "data/maps/Baldesia/scripts.pory"
	.string "I helped dig this moat about\n fifty years ago.\p Time really flies.$"

Baldesia_EventScript_KimonoLady1_Text_0:
# 391 "data/maps/Baldesia/scripts.pory"
	.string "There's a new flavor of mochi that's\n becoming super popular in the village.\p The Chief and his wife seem to enjoy it\n the most.$"

Baldesia_EventScript_KimonoLady2_Text_0:
# 399 "data/maps/Baldesia/scripts.pory"
	.string "I heard the Young Lady left the village\n because she met somebody.\p Oh, to be in love…$"

Baldesia_EventScript_Ninja_Text_0:
# 406 "data/maps/Baldesia/scripts.pory"
	.string "This land has been home to\n ninjas for many generations.$"

Baldesia_EventScript_EntranceGuard_Text_0:
# 414 "data/maps/Baldesia/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_0:
# 460 "data/maps/Baldesia/scripts.pory"
	.string "Halt!\n I've never seen you before.\p I'm sorry, but we can't just let\n you enter.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_1:
# 473 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Huh?!\n What are YOU doing here?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_2:
# 479 "data/maps/Baldesia/scripts.pory"
	.string "ASAK, you know this person?\p ASAK: … Yes.\n They're a… friend… of MASTER BENNIS.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_3:
# 488 "data/maps/Baldesia/scripts.pory"
	.string "I see! My deepest apologies.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_4:
# 493 "data/maps/Baldesia/scripts.pory"
	.string "We will allow you entry out of respect\n for MASTER BENNIS.\p But if you cause any trouble, you'll be\n dealt with accordingly.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_5:
# 520 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: You're lucky that MASTER BENNIS\n has acknowledged your strength.\p If it was up to me, I'd-$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_6:
# 544 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Yes. I caught them trying to enter\n the village.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_7:
# 549 "data/maps/Baldesia/scripts.pory"
	.string "…By the way, who is that next\n to you?\p MASTER BENNIS: Hm? It's PANINI.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_8:
# 555 "data/maps/Baldesia/scripts.pory"
	.string "Right, PANINI?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_9:
# 563 "data/maps/Baldesia/scripts.pory"
	.string "PANINI?: Paneenee?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_10:
# 569 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: See?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_11:
# 590 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Sir, I'm not sure if that's PANINI…$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_12:
# 614 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini?\n PANINI?: Paneenee?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_13:
# 621 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini!\n PANINI?: Paneenee!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_14:
# 638 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_15:
# 662 "data/maps/Baldesia/scripts.pory"
	.string "ZORUA: Paneenee!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_16:
# 670 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini?! Panini panini?!\n Panini!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_17:
# 683 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: N-No, sir! W-Well, not in\n your overworld sprite, at least…$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_18:
# 697 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Ah! My eyes! Now what?!\n What was that flash?!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_19:
# 724 "data/maps/Baldesia/scripts.pory"
	.string "… Hi, {PLAYER}.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_20:
# 755 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: I'm going too.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_21:
# 769 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Sorry, {PLAYER}.\n Could I ask you to go get PANINI and\l then come to the MAIN HOUSE?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_22:
# 775 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS! Wait for me!$"

Baldesia_EventScript_INeedToGoGetPanini_Text_0:
# 795 "data/maps/Baldesia/scripts.pory"
	.string "I need to go get PANINI first.$"

Baldesia_EventScript_YouNeedPermission_Text_0:
# 813 "data/maps/Baldesia/scripts.pory"
	.string "Sorry, you need permission from the\n Village Chief to travel to the altar.$"

Baldesia_Text_Bennis1::
# 824 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: MASTER BENNIS!\p MASTER BENNIS: ASAK. Oho? And… you're\n here too, I see.$"

Baldesia_Text_Bennis2::
# 830 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: Oh, beef.\n Do I really have a weird shaped butt?$"

Baldesia_Text_Bennis3::
# 835 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: L-LADY ASAKURA?\p MASTER BENNIS: Young Lady.\n Your scalp is as shiny as ever.\p MOMO: … … … …\n I'm back.$"

Baldesia_Text_Bennis4::
# 843 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}? Hm.\p ASAK: Huh… I just realized we never knew\n your name.\l And you also know Lady ASAKURA…\l I'm surprised.$"

Baldesia_Text_Bennis5::
# 851 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: We were searching all\n over HOENN for you.\l Where have you been?\p MOMO: … I made it back in time for the\n ritual… I think.\l I need to go see brother now.$"
