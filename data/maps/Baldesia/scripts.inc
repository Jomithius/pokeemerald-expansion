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


Baldesia_Entrance_TriggerLeft::
# 364 "data/maps/Baldesia/scripts.pory"
	lockall
# 365 "data/maps/Baldesia/scripts.pory"
	setvar VAR_TEMP_B, 1
# 366 "data/maps/Baldesia/scripts.pory"
	goto Baldesia_EventScript_HisuianZoruaTrigger
	end


Baldesia_Entrance_TriggerRight::
# 371 "data/maps/Baldesia/scripts.pory"
	lockall
# 372 "data/maps/Baldesia/scripts.pory"
	setvar VAR_TEMP_B, 2
# 373 "data/maps/Baldesia/scripts.pory"
	goto Baldesia_EventScript_HisuianZoruaTrigger
	end


Baldesia_EventScript_HisuianZoruaTrigger::
# 378 "data/maps/Baldesia/scripts.pory"
	lockall
# 379 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 380 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 381 "data/maps/Baldesia/scripts.pory"
	delay 8
# 382 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 383 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 384 "data/maps/Baldesia/scripts.pory"
	waitse
# 385 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Baldesa_Movement_BlockTrainerLeftGuard
# 386 "data/maps/Baldesia/scripts.pory"
	delay 16
# 387 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Baldesa_Movement_BlockTrainerRightGuard
# 388 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 389 "data/maps/Baldesia/scripts.pory"
	delay 10
# 390 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_0, MSGBOX_AUTOCLOSE
# 394 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 395 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_BALDESIA
# 396 "data/maps/Baldesia/scripts.pory"
	addobject 1
# 397 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkDown4
# 398 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 399 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 400 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 401 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 402 "data/maps/Baldesia/scripts.pory"
	waitse
# 403 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_1, MSGBOX_AUTOCLOSE
# 405 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 406 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 407 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 408 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 409 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_2, MSGBOX_AUTOCLOSE
# 412 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 413 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 414 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 415 "data/maps/Baldesia/scripts.pory"
	delay 8
# 416 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 417 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 418 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_3, MSGBOX_AUTOCLOSE
# 419 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 420 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 421 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 422 "data/maps/Baldesia/scripts.pory"
	waitmovement 11
# 423 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_4, MSGBOX_AUTOCLOSE
# 427 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 428 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 429 "data/maps/Baldesia/scripts.pory"
	delay 8
# 430 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 431 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 432 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 433 "data/maps/Baldesia/scripts.pory"
	delay 8
# 434 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 435 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 436 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkUp6
# 437 "data/maps/Baldesia/scripts.pory"
	delay 8
# 438 "data/maps/Baldesia/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq Baldesia_EventScript_HisuianZoruaTrigger_2
# 441 "data/maps/Baldesia/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq Baldesia_EventScript_HisuianZoruaTrigger_3
# 445 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesia
Baldesia_EventScript_HisuianZoruaTrigger_1:
# 447 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 448 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 449 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 450 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_5, MSGBOX_AUTOCLOSE
# 453 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 454 "data/maps/Baldesia/scripts.pory"
	addobject 2
# 455 "data/maps/Baldesia/scripts.pory"
	addobject 4
# 456 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 457 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 458 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 459 "data/maps/Baldesia/scripts.pory"
	waitse
# 460 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 461 "data/maps/Baldesia/scripts.pory"
	delay 8
# 462 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 463 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 464 "data/maps/Baldesia/scripts.pory"
	fadenewbgm MUS_BENNIS_DOJO
# 465 "data/maps/Baldesia/scripts.pory"
	savebgm MUS_BENNIS_DOJO
# 466 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkRight7
# 467 "data/maps/Baldesia/scripts.pory"
	delay 16
# 468 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkRight7
# 469 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 470 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis1, MSGBOX_AUTOCLOSE
# 471 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 472 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 473 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 474 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_6, MSGBOX_AUTOCLOSE
# 476 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 477 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 478 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 479 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_7, MSGBOX_AUTOCLOSE
# 482 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 483 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 484 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 485 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_8, MSGBOX_AUTOCLOSE
# 486 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 487 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 488 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 489 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 490 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 491 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 492 "data/maps/Baldesia/scripts.pory"
	waitse
# 493 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_9, MSGBOX_AUTOCLOSE
# 494 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 495 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 496 "data/maps/Baldesia/scripts.pory"
	delay 16
# 497 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 498 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 499 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_10, MSGBOX_AUTOCLOSE
# 500 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 501 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua1
# 502 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 503 "data/maps/Baldesia/scripts.pory"
	delay 16
# 504 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua2
# 505 "data/maps/Baldesia/scripts.pory"
	delay 8
# 506 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 507 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 508 "data/maps/Baldesia/scripts.pory"
	delay 16
# 509 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua3
# 510 "data/maps/Baldesia/scripts.pory"
	delay 8
# 511 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 512 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 513 "data/maps/Baldesia/scripts.pory"
	delay 16
# 514 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakWalkToBennis
# 515 "data/maps/Baldesia/scripts.pory"
	delay 8
# 516 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 517 "data/maps/Baldesia/scripts.pory"
	delay 8
# 518 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 519 "data/maps/Baldesia/scripts.pory"
	waitmovement 4
# 520 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_11, MSGBOX_AUTOCLOSE
# 521 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 522 "data/maps/Baldesia/scripts.pory"
	addobject 3
# 523 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkRight7
# 524 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 525 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 526 "data/maps/Baldesia/scripts.pory"
	delay 8
# 527 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 528 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 529 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 530 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 531 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 532 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 533 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 534 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 535 "data/maps/Baldesia/scripts.pory"
	waitse
# 536 "data/maps/Baldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 537 "data/maps/Baldesia/scripts.pory"
	delay 30
# 538 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 539 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 540 "data/maps/Baldesia/scripts.pory"
	delay 6
# 541 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 542 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 543 "data/maps/Baldesia/scripts.pory"
	waitse
# 544 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_12, MSGBOX_AUTOCLOSE
# 546 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 547 "data/maps/Baldesia/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 548 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror
# 549 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror
# 550 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 551 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_13, MSGBOX_AUTOCLOSE
# 553 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 554 "data/maps/Baldesia/scripts.pory"
	playse SE_RG_HELP_OPEN
# 555 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror2
# 556 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror2Reverse
# 557 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 558 "data/maps/Baldesia/scripts.pory"
	delay 20
# 559 "data/maps/Baldesia/scripts.pory"
	playse SE_RG_HELP_CLOSE
# 560 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror4
# 561 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror4Reverse
# 562 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 563 "data/maps/Baldesia/scripts.pory"
	delay 60
# 564 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 565 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror3
# 566 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror3Reverse
# 567 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 568 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_14, MSGBOX_AUTOCLOSE
# 569 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 570 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterRight
# 571 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 572 "data/maps/Baldesia/scripts.pory"
	playse SE_EFFECTIVE
# 573 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 574 "data/maps/Baldesia/scripts.pory"
	removeobject 4
# 575 "data/maps/Baldesia/scripts.pory"
	addobject 24
# 576 "data/maps/Baldesia/scripts.pory"
	waitse
# 577 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 578 "data/maps/Baldesia/scripts.pory"
	delay 60
# 579 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 580 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 581 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 582 "data/maps/Baldesia/scripts.pory"
	delay 8
# 583 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 584 "data/maps/Baldesia/scripts.pory"
	delay 8
# 585 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 586 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 587 "data/maps/Baldesia/scripts.pory"
	waitse
# 588 "data/maps/Baldesia/scripts.pory"
	delay 30
# 589 "data/maps/Baldesia/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceRight
# 590 "data/maps/Baldesia/scripts.pory"
	waitmovement 24
# 591 "data/maps/Baldesia/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUI, CRY_MODE_ENCOUNTER
# 592 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_15, MSGBOX_AUTOCLOSE
# 593 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 594 "data/maps/Baldesia/scripts.pory"
	applymovement 24, Common_Movement_WalkRight
# 595 "data/maps/Baldesia/scripts.pory"
	waitmovement 24
# 596 "data/maps/Baldesia/scripts.pory"
	setwildbattle SPECIES_ZORUA_HISUI, 50
# 597 "data/maps/Baldesia/scripts.pory"
	dowildbattle
# 598 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniFaceBennis
# 599 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 600 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_16, MSGBOX_AUTOCLOSE
# 602 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 603 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_WalkFastLeft7
# 604 "data/maps/Baldesia/scripts.pory"
	delay 24
# 605 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 606 "data/maps/Baldesia/scripts.pory"
	delay 8
# 607 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 608 "data/maps/Baldesia/scripts.pory"
	waitmovement 3
# 609 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis2, MSGBOX_AUTOCLOSE
# 610 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 611 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 612 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 613 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_17, MSGBOX_AUTOCLOSE
# 615 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 616 "data/maps/Baldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 617 "data/maps/Baldesia/scripts.pory"
	playse SE_SHINY
# 618 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 619 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 620 "data/maps/Baldesia/scripts.pory"
	waitse
# 621 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 622 "data/maps/Baldesia/scripts.pory"
	delay 4
# 623 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 624 "data/maps/Baldesia/scripts.pory"
	delay 4
# 625 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 626 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 627 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_18, MSGBOX_AUTOCLOSE
# 629 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 630 "data/maps/Baldesia/scripts.pory"
	playse SE_SHINY
# 631 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 632 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 633 "data/maps/Baldesia/scripts.pory"
	waitse
# 634 "data/maps/Baldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 635 "data/maps/Baldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 3
# 636 "data/maps/Baldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 637 "data/maps/Baldesia/scripts.pory"
	waitse
# 638 "data/maps/Baldesia/scripts.pory"
	addobject 22
# 639 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Baldesia_Movement_MomoEnters
# 640 "data/maps/Baldesia/scripts.pory"
	waitmovement 22
# 641 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 642 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 643 "data/maps/Baldesia/scripts.pory"
	delay 8
# 644 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 645 "data/maps/Baldesia/scripts.pory"
	delay 8
# 646 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 647 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 648 "data/maps/Baldesia/scripts.pory"
	waitse
# 649 "data/maps/Baldesia/scripts.pory"
	fadedefaultbgm
# 650 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis3, MSGBOX_AUTOCLOSE
# 651 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 652 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceRight
# 653 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 654 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_19, MSGBOX_AUTOCLOSE
# 655 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 656 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 657 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 658 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 659 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis4, MSGBOX_AUTOCLOSE
# 660 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 661 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 662 "data/maps/Baldesia/scripts.pory"
	delay 8
# 663 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 664 "data/maps/Baldesia/scripts.pory"
	delay 8
# 665 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceUp
# 666 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 667 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis5, MSGBOX_AUTOCLOSE
# 668 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 669 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Baldesia_Movement_MomoGoesToMainHouse
# 670 "data/maps/Baldesia/scripts.pory"
	delay 30
# 671 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 672 "data/maps/Baldesia/scripts.pory"
	delay 8
# 673 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 674 "data/maps/Baldesia/scripts.pory"
	delay 8
# 675 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 676 "data/maps/Baldesia/scripts.pory"
	waitmovement 22
# 677 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 678 "data/maps/Baldesia/scripts.pory"
	removeobject 22
# 679 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 680 "data/maps/Baldesia/scripts.pory"
	delay 8
# 681 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 682 "data/maps/Baldesia/scripts.pory"
	delay 8
# 683 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 684 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 685 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_20, MSGBOX_AUTOCLOSE
# 686 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 687 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp5
# 688 "data/maps/Baldesia/scripts.pory"
	delay 8
# 689 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 690 "data/maps/Baldesia/scripts.pory"
	delay 8
# 691 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 692 "data/maps/Baldesia/scripts.pory"
	waitmovement 2
# 693 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 694 "data/maps/Baldesia/scripts.pory"
	waitse
# 695 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakApproachesPlayer
# 696 "data/maps/Baldesia/scripts.pory"
	delay 8
# 697 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 698 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 699 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_21, MSGBOX_AUTOCLOSE
# 702 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 703 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 704 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 705 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_22, MSGBOX_AUTOCLOSE
# 706 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 707 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakGoesToMainHouse
# 708 "data/maps/Baldesia/scripts.pory"
	delay 8
# 709 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 710 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 711 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 712 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 713 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 714 "data/maps/Baldesia/scripts.pory"
	waitse
# 715 "data/maps/Baldesia/scripts.pory"
	removeobject 1
# 716 "data/maps/Baldesia/scripts.pory"
	removeobject 2
# 717 "data/maps/Baldesia/scripts.pory"
	removeobject 3
# 718 "data/maps/Baldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 2
# 719 "data/maps/Baldesia/scripts.pory"
	releaseall
	end

Baldesia_EventScript_HisuianZoruaTrigger_2:
# 439 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesiaLeftTrigger
	goto Baldesia_EventScript_HisuianZoruaTrigger_1

Baldesia_EventScript_HisuianZoruaTrigger_3:
# 442 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesiaRightTrigger
	goto Baldesia_EventScript_HisuianZoruaTrigger_1


Baldesia_EventScript_INeedToGoGetPanini::
# 724 "data/maps/Baldesia/scripts.pory"
	lockall
# 725 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_INeedToGoGetPanini_Text_0, MSGBOX_AUTOCLOSE
# 726 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 727 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 728 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 729 "data/maps/Baldesia/scripts.pory"
	releaseall
	end


Baldesia_EventScript_YouNeedPermission::
# 734 "data/maps/Baldesia/scripts.pory"
	lockall
# 735 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 736 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 737 "data/maps/Baldesia/scripts.pory"
	waitmovement 9
# 738 "data/maps/Baldesia/scripts.pory"
	waitse
# 739 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceRight
# 740 "data/maps/Baldesia/scripts.pory"
	delay 8
# 741 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 742 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 743 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_YouNeedPermission_Text_0, MSGBOX_AUTOCLOSE
# 745 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 746 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 747 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 748 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 749 "data/maps/Baldesia/scripts.pory"
	waitmovement 9
# 750 "data/maps/Baldesia/scripts.pory"
	releaseall
	end


# 787 "data/maps/Baldesia/scripts.pory"
Baldesa_Movement_BlockTrainerLeftGuard:
# 788 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
# 789 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_down
	step_end

# 792 "data/maps/Baldesia/scripts.pory"
Baldesa_Movement_BlockTrainerRightGuard:
# 793 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 794 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_down
	step_end

# 797 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesia:
# 798 "data/maps/Baldesia/scripts.pory"
	walk_up
# 798 "data/maps/Baldesia/scripts.pory"
	walk_up
# 798 "data/maps/Baldesia/scripts.pory"
	walk_up
# 798 "data/maps/Baldesia/scripts.pory"
	walk_up
# 798 "data/maps/Baldesia/scripts.pory"
	walk_up
# 798 "data/maps/Baldesia/scripts.pory"
	walk_up
# 798 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 801 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesiaLeftTrigger:
# 802 "data/maps/Baldesia/scripts.pory"
	walk_right
# 803 "data/maps/Baldesia/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 806 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesiaRightTrigger:
# 807 "data/maps/Baldesia/scripts.pory"
	walk_left
# 808 "data/maps/Baldesia/scripts.pory"
	walk_up
# 808 "data/maps/Baldesia/scripts.pory"
	walk_up
# 808 "data/maps/Baldesia/scripts.pory"
	walk_up
# 808 "data/maps/Baldesia/scripts.pory"
	walk_up
# 808 "data/maps/Baldesia/scripts.pory"
	walk_up
# 808 "data/maps/Baldesia/scripts.pory"
	walk_up
# 808 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 811 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua1:
# 812 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 813 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 814 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_left
	step_end

# 817 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua2:
# 818 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 819 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 820 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_up
	step_end

# 823 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua3:
# 824 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 825 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 826 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 829 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakWalkToBennis:
# 830 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 831 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 834 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror:
# 835 "data/maps/Baldesia/scripts.pory"
	lock_facing_direction
# 836 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 836 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 837 "data/maps/Baldesia/scripts.pory"
	delay_16
# 838 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 838 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 839 "data/maps/Baldesia/scripts.pory"
	delay_16
# 840 "data/maps/Baldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 843 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror2:
# 844 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 845 "data/maps/Baldesia/scripts.pory"
	delay_4
# 846 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
# 847 "data/maps/Baldesia/scripts.pory"
	delay_4
# 848 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 849 "data/maps/Baldesia/scripts.pory"
	delay_4
# 850 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
	step_end

# 853 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror4Reverse:
# 854 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 855 "data/maps/Baldesia/scripts.pory"
	delay_4
# 856 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
# 857 "data/maps/Baldesia/scripts.pory"
	delay_4
# 858 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 859 "data/maps/Baldesia/scripts.pory"
	delay_4
# 860 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
	step_end

# 863 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror3:
# 864 "data/maps/Baldesia/scripts.pory"
	jump_in_place_left_right
	step_end

# 867 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror3Reverse:
# 868 "data/maps/Baldesia/scripts.pory"
	jump_in_place_right_left
	step_end

# 871 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror4:
# 872 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 873 "data/maps/Baldesia/scripts.pory"
	delay_4
# 874 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
# 875 "data/maps/Baldesia/scripts.pory"
	delay_4
# 876 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 877 "data/maps/Baldesia/scripts.pory"
	delay_4
# 878 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
	step_end

# 881 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror2Reverse:
# 882 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 883 "data/maps/Baldesia/scripts.pory"
	delay_4
# 884 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
# 885 "data/maps/Baldesia/scripts.pory"
	delay_4
# 886 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 887 "data/maps/Baldesia/scripts.pory"
	delay_4
# 888 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
	step_end

# 891 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniFaceBennis:
# 892 "data/maps/Baldesia/scripts.pory"
	walk_right
# 893 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
	step_end

# 896 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_WalkFastLeft7:
# 897 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 897 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 897 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 897 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 897 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 897 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 897 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
	step_end

# 900 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_MomoEnters:
# 901 "data/maps/Baldesia/scripts.pory"
	walk_up
# 901 "data/maps/Baldesia/scripts.pory"
	walk_up
# 901 "data/maps/Baldesia/scripts.pory"
	walk_up
# 901 "data/maps/Baldesia/scripts.pory"
	walk_up
# 902 "data/maps/Baldesia/scripts.pory"
	walk_left
# 903 "data/maps/Baldesia/scripts.pory"
	walk_up
# 903 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 906 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_MomoGoesToMainHouse:
# 907 "data/maps/Baldesia/scripts.pory"
	walk_right
# 908 "data/maps/Baldesia/scripts.pory"
	walk_up
# 908 "data/maps/Baldesia/scripts.pory"
	walk_up
# 908 "data/maps/Baldesia/scripts.pory"
	walk_up
# 909 "data/maps/Baldesia/scripts.pory"
	walk_left
# 910 "data/maps/Baldesia/scripts.pory"
	walk_up
# 910 "data/maps/Baldesia/scripts.pory"
	walk_up
# 910 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 913 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakGoesToMainHouse:
# 914 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 915 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 915 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 915 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 915 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 915 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 915 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 915 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
	step_end

# 918 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakApproachesPlayer:
# 919 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 920 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
# 920 "data/maps/Baldesia/scripts.pory"
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

Baldesia_EventScript_HisuianZoruaTrigger_Text_0:
# 390 "data/maps/Baldesia/scripts.pory"
	.string "Halt!\n I've never seen you before.\p I'm sorry, but we can't just let\n you enter.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_1:
# 403 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Huh?!\n What are YOU doing here?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_2:
# 409 "data/maps/Baldesia/scripts.pory"
	.string "ASAK, you know this person?\p ASAK: … Yes.\n They're a… friend… of MASTER BENNIS.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_3:
# 418 "data/maps/Baldesia/scripts.pory"
	.string "I see! My deepest apologies.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_4:
# 423 "data/maps/Baldesia/scripts.pory"
	.string "We will allow you entry out of respect\n for MASTER BENNIS.\p But if you cause any trouble, you'll be\n dealt with accordingly.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_5:
# 450 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: You're lucky that MASTER BENNIS\n has acknowledged your strength.\p If it was up to me, I'd-$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_6:
# 474 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Yes. I caught them trying to enter\n the village.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_7:
# 479 "data/maps/Baldesia/scripts.pory"
	.string "…By the way, who is that next\n to you?\p MASTER BENNIS: Hm? It's PANINI.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_8:
# 485 "data/maps/Baldesia/scripts.pory"
	.string "Right, PANINI?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_9:
# 493 "data/maps/Baldesia/scripts.pory"
	.string "PANINI?: Paneenee?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_10:
# 499 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: See?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_11:
# 520 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Sir, I'm not sure if that's PANINI…$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_12:
# 544 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini?\n PANINI?: Paneenee?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_13:
# 551 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini!\n PANINI?: Paneenee!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_14:
# 568 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_15:
# 592 "data/maps/Baldesia/scripts.pory"
	.string "ZORUA: Paneenee!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_16:
# 600 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini?! Panini panini?!\n Panini!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_17:
# 613 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: N-No, sir! W-Well, not in\n your overworld sprite, at least…$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_18:
# 627 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Ah! My eyes! Now what?!\n What was that flash?!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_19:
# 654 "data/maps/Baldesia/scripts.pory"
	.string "… Hi, {PLAYER}.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_20:
# 685 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: I'm going too.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_21:
# 699 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Sorry, {PLAYER}.\n Could I ask you to go get PANINI and\l then come to the MAIN HOUSE?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_22:
# 705 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS! Wait for me!$"

Baldesia_EventScript_INeedToGoGetPanini_Text_0:
# 725 "data/maps/Baldesia/scripts.pory"
	.string "I need to go get PANINI first.$"

Baldesia_EventScript_YouNeedPermission_Text_0:
# 743 "data/maps/Baldesia/scripts.pory"
	.string "Sorry, you need permission from the\n village chief to travel to the altar.$"

Baldesia_Text_Bennis1::
# 754 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: MASTER BENNIS!\p MASTER BENNIS: ASAK. Oho? And… you're\n here too, I see.$"

Baldesia_Text_Bennis2::
# 760 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: Oh, beef.\n Do I really have a weird shaped butt?$"

Baldesia_Text_Bennis3::
# 765 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: L-LADY ASAKURA?\p MASTER BENNIS: Madam.\n Your scalp is as shiny as ever.\p MOMO: … … … … I'm back.$"

Baldesia_Text_Bennis4::
# 772 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}? Hm.\p ASAK: Huh… I just realized we never knew\n your name.\l So you also know LADY ASAKURA…$"

Baldesia_Text_Bennis5::
# 779 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: We were searching all\n over HOENN for you.\l Where have you been?\p MOMO: … I came back in time for the\n ritual.\l I need to go see brother now.$"
