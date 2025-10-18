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
# 143 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_GiveLeadersCrest_Text_1, MSGBOX_AUTOCLOSE
Baldesia_EventScript_GiveLeadersCrest_1:
# 146 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 147 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_GiveLeadersCrest_2:
# 134 "data/maps/Baldesia/scripts.pory"
	giveitem ITEM_LEADERS_CREST
# 135 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 136 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManMiniGame_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/Baldesia/scripts.pory"
	setvar VAR_BALDESIA_MINI_GAME_STATE, 8
	goto Baldesia_EventScript_GiveLeadersCrest_1


Baldesia_EventScript_NinjaBoy1::
# 152 "data/maps/Baldesia/scripts.pory"
	lock
# 153 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_1_BALDESIA, Baldesia_EventScript_NinjaBoy1_4
Baldesia_EventScript_NinjaBoy1_3:
# 176 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 177 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_1, MSGBOX_AUTOCLOSE
# 179 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy1_1:
# 181 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy1_2:
# 154 "data/maps/Baldesia/scripts.pory"
	delay 16
# 155 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 156 "data/maps/Baldesia/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 157 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 158 "data/maps/Baldesia/scripts.pory"
	waitse
# 159 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 160 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_0, MSGBOX_AUTOCLOSE
# 162 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 163 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 165 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 166 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 167 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy1Location
# 168 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/Baldesia/scripts.pory"
	waitse
# 170 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 171 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 172 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 173 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_1_BALDESIA
	goto Baldesia_EventScript_NinjaBoy1_1

Baldesia_EventScript_NinjaBoy1_4:
# 153 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy1_2
	goto Baldesia_EventScript_NinjaBoy1_3


Baldesia_EventScript_NinjaBoy2::
# 186 "data/maps/Baldesia/scripts.pory"
	lock
# 187 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_2_BALDESIA, Baldesia_EventScript_NinjaBoy2_4
Baldesia_EventScript_NinjaBoy2_3:
# 210 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 211 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy2_Text_0, MSGBOX_AUTOCLOSE
# 213 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy2_1:
# 215 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy2_2:
# 188 "data/maps/Baldesia/scripts.pory"
	delay 16
# 189 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 190 "data/maps/Baldesia/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 191 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 192 "data/maps/Baldesia/scripts.pory"
	waitse
# 193 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 194 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy1_Text_0, MSGBOX_AUTOCLOSE
# 196 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 197 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 198 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 199 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 200 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 201 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy2Location
# 202 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 203 "data/maps/Baldesia/scripts.pory"
	waitse
# 204 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 205 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 206 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 207 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_2_BALDESIA
	goto Baldesia_EventScript_NinjaBoy2_1

Baldesia_EventScript_NinjaBoy2_4:
# 187 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy2_2
	goto Baldesia_EventScript_NinjaBoy2_3


Baldesia_EventScript_NinjaBoy3::
# 220 "data/maps/Baldesia/scripts.pory"
	lock
# 221 "data/maps/Baldesia/scripts.pory"
	call EventScript_RevealTrainer
# 222 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_3_BALDESIA, Baldesia_EventScript_NinjaBoy3_4
Baldesia_EventScript_NinjaBoy3_3:
# 245 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 246 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy3_Text_1, MSGBOX_AUTOCLOSE
# 247 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy3_1:
# 249 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy3_2:
# 223 "data/maps/Baldesia/scripts.pory"
	delay 16
# 224 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 225 "data/maps/Baldesia/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 226 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 227 "data/maps/Baldesia/scripts.pory"
	waitse
# 228 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 229 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy3_Text_0, MSGBOX_AUTOCLOSE
# 231 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 232 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 234 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 235 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 236 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy3Location
# 237 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 238 "data/maps/Baldesia/scripts.pory"
	waitse
# 239 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 240 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 241 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 242 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_3_BALDESIA
	goto Baldesia_EventScript_NinjaBoy3_1

Baldesia_EventScript_NinjaBoy3_4:
# 222 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy3_2
	goto Baldesia_EventScript_NinjaBoy3_3


Baldesia_EventScript_NinjaBoy4::
# 254 "data/maps/Baldesia/scripts.pory"
	lock
# 255 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_4_BALDESIA, Baldesia_EventScript_NinjaBoy4_4
Baldesia_EventScript_NinjaBoy4_3:
# 278 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 279 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy4_Text_1, MSGBOX_AUTOCLOSE
# 281 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy4_1:
# 283 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy4_2:
# 256 "data/maps/Baldesia/scripts.pory"
	delay 16
# 257 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 258 "data/maps/Baldesia/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 259 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 260 "data/maps/Baldesia/scripts.pory"
	waitse
# 261 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 262 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy4_Text_0, MSGBOX_AUTOCLOSE
# 264 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 265 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 266 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 267 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 268 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 269 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy4Location
# 270 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 271 "data/maps/Baldesia/scripts.pory"
	waitse
# 272 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 273 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 274 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 275 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_4_BALDESIA
	goto Baldesia_EventScript_NinjaBoy4_1

Baldesia_EventScript_NinjaBoy4_4:
# 255 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy4_2
	goto Baldesia_EventScript_NinjaBoy4_3


Baldesia_EventScript_NinjaBoy5::
# 288 "data/maps/Baldesia/scripts.pory"
	lock
# 289 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_5_BALDESIA, Baldesia_EventScript_NinjaBoy5_4
Baldesia_EventScript_NinjaBoy5_3:
# 312 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 313 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy5_Text_1, MSGBOX_AUTOCLOSE
# 317 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy5_1:
# 319 "data/maps/Baldesia/scripts.pory"
	applymovement 16, Common_Movement_FaceOriginalDirection
# 320 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 321 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy5_2:
# 290 "data/maps/Baldesia/scripts.pory"
	delay 16
# 291 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 292 "data/maps/Baldesia/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 293 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 294 "data/maps/Baldesia/scripts.pory"
	waitse
# 295 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 296 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy5_Text_0, MSGBOX_AUTOCLOSE
# 298 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 299 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 300 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 301 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 302 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 303 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy5Location
# 304 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 305 "data/maps/Baldesia/scripts.pory"
	waitse
# 306 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 307 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 308 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 309 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_5_BALDESIA
	goto Baldesia_EventScript_NinjaBoy5_1

Baldesia_EventScript_NinjaBoy5_4:
# 289 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy5_2
	goto Baldesia_EventScript_NinjaBoy5_3


Baldesia_EventScript_NinjaBoy6::
# 326 "data/maps/Baldesia/scripts.pory"
	lock
# 327 "data/maps/Baldesia/scripts.pory"
	goto_if_unset FLAG_HIDE_NINJA_BOY_6_BALDESIA, Baldesia_EventScript_NinjaBoy6_4
Baldesia_EventScript_NinjaBoy6_3:
# 349 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 350 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy6_Text_1, MSGBOX_AUTOCLOSE
# 355 "data/maps/Baldesia/scripts.pory"
	waitmessage
Baldesia_EventScript_NinjaBoy6_1:
# 357 "data/maps/Baldesia/scripts.pory"
	release
	end

Baldesia_EventScript_NinjaBoy6_2:
# 328 "data/maps/Baldesia/scripts.pory"
	delay 16
# 329 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 330 "data/maps/Baldesia/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 331 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 332 "data/maps/Baldesia/scripts.pory"
	waitse
# 333 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 334 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_NinjaBoy6_Text_0, MSGBOX_AUTOCLOSE
# 335 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 336 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 337 "data/maps/Baldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 338 "data/maps/Baldesia/scripts.pory"
	clearflag FLAG_BALDESIA_MINI_GAME_START
# 339 "data/maps/Baldesia/scripts.pory"
	playse SE_FLEE
# 340 "data/maps/Baldesia/scripts.pory"
	call Baldesia_UpdateNinjaBoy6Location
# 341 "data/maps/Baldesia/scripts.pory"
	special DrawWholeMapView
# 342 "data/maps/Baldesia/scripts.pory"
	waitse
# 343 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 344 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_NINJA_BOY_COUNTER, 1
# 345 "data/maps/Baldesia/scripts.pory"
	addvar VAR_BALDESIA_MINI_GAME_STATE, 1
# 346 "data/maps/Baldesia/scripts.pory"
	setflag FLAG_HIDE_NINJA_BOY_6_BALDESIA
	goto Baldesia_EventScript_NinjaBoy6_1

Baldesia_EventScript_NinjaBoy6_4:
# 327 "data/maps/Baldesia/scripts.pory"
	compare VAR_BALDESIA_MINI_GAME_STATE, 1
	goto_if_ge Baldesia_EventScript_NinjaBoy6_2
	goto Baldesia_EventScript_NinjaBoy6_3


Baldesia_EventScript_LittleGirl::
# 362 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_OldWoman::
# 369 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_OldManBridge::
# 377 "data/maps/Baldesia/scripts.pory"
	lock
# 378 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 379 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_OldManBridge_Text_0, MSGBOX_AUTOCLOSE
# 382 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 383 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 384 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
	end


Baldesia_EventScript_KimonoLady1::
# 389 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_KimonoLady1_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_KimonoLady2::
# 397 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_KimonoLady2_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_Ninja::
# 404 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_Ninja_Text_0, MSGBOX_NPC
	end


Baldesia_EventScript_EntranceGuard::
# 410 "data/maps/Baldesia/scripts.pory"
	lock
# 411 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 412 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_EntranceGuard_Text_0, MSGBOX_AUTOCLOSE
# 413 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 414 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 415 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 416 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_EventScript_Sawk::
# 421 "data/maps/Baldesia/scripts.pory"
	lock
# 422 "data/maps/Baldesia/scripts.pory"
	faceplayer
# 423 "data/maps/Baldesia/scripts.pory"
	playmoncry SPECIES_SAWK, CRY_MODE_ENCOUNTER
# 424 "data/maps/Baldesia/scripts.pory"
	waitmoncry
# 425 "data/maps/Baldesia/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 426 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 427 "data/maps/Baldesia/scripts.pory"
	release
	end


Baldesia_Entrance_TriggerLeft::
# 432 "data/maps/Baldesia/scripts.pory"
	lockall
# 433 "data/maps/Baldesia/scripts.pory"
	setvar VAR_TEMP_B, 1
# 434 "data/maps/Baldesia/scripts.pory"
	goto Baldesia_EventScript_HisuianZoruaTrigger
	end


Baldesia_Entrance_TriggerRight::
# 439 "data/maps/Baldesia/scripts.pory"
	lockall
# 440 "data/maps/Baldesia/scripts.pory"
	setvar VAR_TEMP_B, 2
# 441 "data/maps/Baldesia/scripts.pory"
	goto Baldesia_EventScript_HisuianZoruaTrigger
	end


Baldesia_EventScript_HisuianZoruaTrigger::
# 446 "data/maps/Baldesia/scripts.pory"
	lockall
# 447 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 448 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 449 "data/maps/Baldesia/scripts.pory"
	delay 8
# 450 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 451 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 452 "data/maps/Baldesia/scripts.pory"
	waitse
# 453 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Baldesa_Movement_BlockTrainerLeftGuard
# 454 "data/maps/Baldesia/scripts.pory"
	delay 16
# 455 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Baldesa_Movement_BlockTrainerRightGuard
# 456 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 457 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 458 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
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
	waitse
# 489 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_3, MSGBOX_AUTOCLOSE
# 490 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 491 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 492 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 493 "data/maps/Baldesia/scripts.pory"
	waitmovement 11
# 494 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_4, MSGBOX_AUTOCLOSE
# 498 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 499 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkLeft
# 500 "data/maps/Baldesia/scripts.pory"
	delay 8
# 501 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 502 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 503 "data/maps/Baldesia/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 504 "data/maps/Baldesia/scripts.pory"
	delay 8
# 505 "data/maps/Baldesia/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 506 "data/maps/Baldesia/scripts.pory"
	waitmovement 12
# 507 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkUp6
# 508 "data/maps/Baldesia/scripts.pory"
	delay 8
# 509 "data/maps/Baldesia/scripts.pory"
	compare VAR_TEMP_B, 1
	goto_if_eq Baldesia_EventScript_HisuianZoruaTrigger_2
# 512 "data/maps/Baldesia/scripts.pory"
	compare VAR_TEMP_B, 2
	goto_if_eq Baldesia_EventScript_HisuianZoruaTrigger_3
# 516 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesia
Baldesia_EventScript_HisuianZoruaTrigger_1:
# 518 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 519 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 520 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 521 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_5, MSGBOX_AUTOCLOSE
# 524 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 525 "data/maps/Baldesia/scripts.pory"
	addobject 2
# 526 "data/maps/Baldesia/scripts.pory"
	addobject 4
# 527 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 528 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 529 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 530 "data/maps/Baldesia/scripts.pory"
	waitse
# 531 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 532 "data/maps/Baldesia/scripts.pory"
	delay 8
# 533 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 534 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 535 "data/maps/Baldesia/scripts.pory"
	fadenewbgm MUS_BENNIS_DOJO
# 536 "data/maps/Baldesia/scripts.pory"
	savebgm MUS_BENNIS_DOJO
# 537 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkRight7
# 538 "data/maps/Baldesia/scripts.pory"
	delay 16
# 539 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkRight7
# 540 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 541 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis1, MSGBOX_AUTOCLOSE
# 542 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 543 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 544 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 545 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_6, MSGBOX_AUTOCLOSE
# 547 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 548 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 549 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 550 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_7, MSGBOX_AUTOCLOSE
# 553 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 554 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 555 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 556 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_8, MSGBOX_AUTOCLOSE
# 557 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 558 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 559 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 560 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 561 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 562 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 563 "data/maps/Baldesia/scripts.pory"
	waitse
# 564 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_9, MSGBOX_AUTOCLOSE
# 565 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 566 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 567 "data/maps/Baldesia/scripts.pory"
	delay 16
# 568 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 569 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 570 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_10, MSGBOX_AUTOCLOSE
# 571 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 572 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua1
# 573 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 574 "data/maps/Baldesia/scripts.pory"
	delay 16
# 575 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua2
# 576 "data/maps/Baldesia/scripts.pory"
	delay 8
# 577 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 578 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 579 "data/maps/Baldesia/scripts.pory"
	delay 16
# 580 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakInspectZorua3
# 581 "data/maps/Baldesia/scripts.pory"
	delay 8
# 582 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 583 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 584 "data/maps/Baldesia/scripts.pory"
	delay 16
# 585 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakWalkToBennis
# 586 "data/maps/Baldesia/scripts.pory"
	delay 8
# 587 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 588 "data/maps/Baldesia/scripts.pory"
	delay 8
# 589 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 590 "data/maps/Baldesia/scripts.pory"
	waitmovement 4
# 591 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_11, MSGBOX_AUTOCLOSE
# 592 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 593 "data/maps/Baldesia/scripts.pory"
	addobject 3
# 594 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkRight7
# 595 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 596 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 597 "data/maps/Baldesia/scripts.pory"
	delay 8
# 598 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 599 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 600 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 601 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 602 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 603 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 604 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 605 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 606 "data/maps/Baldesia/scripts.pory"
	waitse
# 607 "data/maps/Baldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 608 "data/maps/Baldesia/scripts.pory"
	delay 45
# 609 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 610 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Common_Movement_QuestionMark
# 611 "data/maps/Baldesia/scripts.pory"
	delay 6
# 612 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 613 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 614 "data/maps/Baldesia/scripts.pory"
	waitse
# 615 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_12, MSGBOX_AUTOCLOSE
# 617 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 618 "data/maps/Baldesia/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 619 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror
# 620 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror
# 621 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 622 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_13, MSGBOX_AUTOCLOSE
# 624 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 625 "data/maps/Baldesia/scripts.pory"
	playse SE_RG_HELP_OPEN
# 626 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror2
# 627 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror2Reverse
# 628 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 629 "data/maps/Baldesia/scripts.pory"
	delay 20
# 630 "data/maps/Baldesia/scripts.pory"
	playse SE_RG_HELP_CLOSE
# 631 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror4
# 632 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror4Reverse
# 633 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 634 "data/maps/Baldesia/scripts.pory"
	delay 60
# 635 "data/maps/Baldesia/scripts.pory"
	playse SE_BIKE_HOP
# 636 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniMirror3
# 637 "data/maps/Baldesia/scripts.pory"
	applymovement 4, Baldesia_Movement_PaniniMirror3Reverse
# 638 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 639 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_14, MSGBOX_AUTOCLOSE
# 640 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 641 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterRight
# 642 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 643 "data/maps/Baldesia/scripts.pory"
	playse SE_EFFECTIVE
# 644 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 645 "data/maps/Baldesia/scripts.pory"
	removeobject 4
# 646 "data/maps/Baldesia/scripts.pory"
	addobject 24
# 647 "data/maps/Baldesia/scripts.pory"
	waitse
# 648 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 649 "data/maps/Baldesia/scripts.pory"
	delay 60
# 650 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 651 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 652 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 653 "data/maps/Baldesia/scripts.pory"
	delay 8
# 654 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 655 "data/maps/Baldesia/scripts.pory"
	delay 8
# 656 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 657 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 658 "data/maps/Baldesia/scripts.pory"
	waitse
# 659 "data/maps/Baldesia/scripts.pory"
	delay 30
# 660 "data/maps/Baldesia/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceRight
# 661 "data/maps/Baldesia/scripts.pory"
	waitmovement 24
# 662 "data/maps/Baldesia/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUI, CRY_MODE_ENCOUNTER
# 663 "data/maps/Baldesia/scripts.pory"
	waitmoncry
# 664 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_15, MSGBOX_AUTOCLOSE
# 665 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 666 "data/maps/Baldesia/scripts.pory"
	applymovement 24, Common_Movement_WalkRight
# 667 "data/maps/Baldesia/scripts.pory"
	waitmovement 24
# 668 "data/maps/Baldesia/scripts.pory"
	setwildbattle SPECIES_ZORUA_HISUI, 80
# 669 "data/maps/Baldesia/scripts.pory"
	dowildbattle
# 670 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_PaniniFaceBennis
# 671 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 672 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_16, MSGBOX_AUTOCLOSE
# 674 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 675 "data/maps/Baldesia/scripts.pory"
	applymovement 3, Baldesia_Movement_WalkFastLeft7
# 676 "data/maps/Baldesia/scripts.pory"
	delay 24
# 677 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 678 "data/maps/Baldesia/scripts.pory"
	delay 8
# 679 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 680 "data/maps/Baldesia/scripts.pory"
	waitmovement 3
# 681 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis2, MSGBOX_AUTOCLOSE
# 682 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 683 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 684 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 685 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_17, MSGBOX_AUTOCLOSE
# 687 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 688 "data/maps/Baldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 689 "data/maps/Baldesia/scripts.pory"
	playse SE_SHINY
# 690 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 691 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 692 "data/maps/Baldesia/scripts.pory"
	waitse
# 693 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 694 "data/maps/Baldesia/scripts.pory"
	delay 4
# 695 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 696 "data/maps/Baldesia/scripts.pory"
	delay 4
# 697 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 698 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 699 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_18, MSGBOX_AUTOCLOSE
# 701 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 702 "data/maps/Baldesia/scripts.pory"
	playse SE_SHINY
# 703 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 704 "data/maps/Baldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 705 "data/maps/Baldesia/scripts.pory"
	waitse
# 706 "data/maps/Baldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 707 "data/maps/Baldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 708 "data/maps/Baldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 709 "data/maps/Baldesia/scripts.pory"
	waitse
# 710 "data/maps/Baldesia/scripts.pory"
	addobject 22
# 711 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Baldesia_Movement_MomoEnters
# 712 "data/maps/Baldesia/scripts.pory"
	waitmovement 22
# 713 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 714 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 715 "data/maps/Baldesia/scripts.pory"
	delay 8
# 716 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 717 "data/maps/Baldesia/scripts.pory"
	delay 8
# 718 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 719 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 720 "data/maps/Baldesia/scripts.pory"
	waitse
# 721 "data/maps/Baldesia/scripts.pory"
	fadedefaultbgm
# 722 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis3, MSGBOX_AUTOCLOSE
# 723 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 724 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceRight
# 725 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 726 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_19, MSGBOX_AUTOCLOSE
# 727 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 728 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 729 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 730 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 731 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis4, MSGBOX_AUTOCLOSE
# 732 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 733 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 734 "data/maps/Baldesia/scripts.pory"
	delay 8
# 735 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 736 "data/maps/Baldesia/scripts.pory"
	delay 8
# 737 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Common_Movement_WalkInPlaceUp
# 738 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 739 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_Text_Bennis5, MSGBOX_AUTOCLOSE
# 740 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 741 "data/maps/Baldesia/scripts.pory"
	applymovement 22, Baldesia_Movement_MomoGoesToMainHouse
# 742 "data/maps/Baldesia/scripts.pory"
	delay 30
# 743 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 744 "data/maps/Baldesia/scripts.pory"
	delay 8
# 745 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 746 "data/maps/Baldesia/scripts.pory"
	delay 8
# 747 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 748 "data/maps/Baldesia/scripts.pory"
	waitmovement 22
# 749 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 750 "data/maps/Baldesia/scripts.pory"
	removeobject 22
# 751 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 752 "data/maps/Baldesia/scripts.pory"
	delay 8
# 753 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 754 "data/maps/Baldesia/scripts.pory"
	delay 8
# 755 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 756 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 757 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_20, MSGBOX_AUTOCLOSE
# 758 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 759 "data/maps/Baldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp5
# 760 "data/maps/Baldesia/scripts.pory"
	delay 8
# 761 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 762 "data/maps/Baldesia/scripts.pory"
	delay 8
# 763 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 764 "data/maps/Baldesia/scripts.pory"
	waitmovement 2
# 765 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 766 "data/maps/Baldesia/scripts.pory"
	waitse
# 767 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakApproachesPlayer
# 768 "data/maps/Baldesia/scripts.pory"
	delay 8
# 769 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 770 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 771 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_21, MSGBOX_AUTOCLOSE
# 774 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 775 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 776 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 777 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_HisuianZoruaTrigger_Text_22, MSGBOX_AUTOCLOSE
# 778 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 779 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Baldesia_Movement_AsakGoesToMainHouse
# 780 "data/maps/Baldesia/scripts.pory"
	delay 8
# 781 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 782 "data/maps/Baldesia/scripts.pory"
	waitmovement 1
# 783 "data/maps/Baldesia/scripts.pory"
	playse SE_DOOR
# 784 "data/maps/Baldesia/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 785 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 786 "data/maps/Baldesia/scripts.pory"
	waitse
# 787 "data/maps/Baldesia/scripts.pory"
	removeobject 1
# 788 "data/maps/Baldesia/scripts.pory"
	removeobject 2
# 789 "data/maps/Baldesia/scripts.pory"
	removeobject 3
# 790 "data/maps/Baldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 2
# 791 "data/maps/Baldesia/scripts.pory"
	releaseall
	end

Baldesia_EventScript_HisuianZoruaTrigger_2:
# 510 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesiaLeftTrigger
	goto Baldesia_EventScript_HisuianZoruaTrigger_1

Baldesia_EventScript_HisuianZoruaTrigger_3:
# 513 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Baldesia_Movement_PlayerEntersBaldesiaRightTrigger
	goto Baldesia_EventScript_HisuianZoruaTrigger_1


Baldesia_EventScript_INeedToGoGetPanini::
# 796 "data/maps/Baldesia/scripts.pory"
	lockall
# 797 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_INeedToGoGetPanini_Text_0, MSGBOX_AUTOCLOSE
# 798 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 799 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 800 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 801 "data/maps/Baldesia/scripts.pory"
	releaseall
	end


Baldesia_EventScript_YouNeedPermission::
# 806 "data/maps/Baldesia/scripts.pory"
	lockall
# 807 "data/maps/Baldesia/scripts.pory"
	playse SE_PIN
# 808 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 809 "data/maps/Baldesia/scripts.pory"
	waitmovement 9
# 810 "data/maps/Baldesia/scripts.pory"
	waitse
# 811 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceRight
# 812 "data/maps/Baldesia/scripts.pory"
	delay 8
# 813 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 814 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 815 "data/maps/Baldesia/scripts.pory"
	msgbox Baldesia_EventScript_YouNeedPermission_Text_0, MSGBOX_AUTOCLOSE
# 817 "data/maps/Baldesia/scripts.pory"
	waitmessage
# 818 "data/maps/Baldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 819 "data/maps/Baldesia/scripts.pory"
	waitmovement 0
# 820 "data/maps/Baldesia/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 821 "data/maps/Baldesia/scripts.pory"
	waitmovement 9
# 822 "data/maps/Baldesia/scripts.pory"
	releaseall
	end


# 861 "data/maps/Baldesia/scripts.pory"
Baldesa_Movement_BlockTrainerLeftGuard:
# 862 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
# 863 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_down
	step_end

# 866 "data/maps/Baldesia/scripts.pory"
Baldesa_Movement_BlockTrainerRightGuard:
# 867 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 868 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_down
	step_end

# 871 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesia:
# 872 "data/maps/Baldesia/scripts.pory"
	walk_up
# 872 "data/maps/Baldesia/scripts.pory"
	walk_up
# 872 "data/maps/Baldesia/scripts.pory"
	walk_up
# 872 "data/maps/Baldesia/scripts.pory"
	walk_up
# 872 "data/maps/Baldesia/scripts.pory"
	walk_up
# 872 "data/maps/Baldesia/scripts.pory"
	walk_up
# 872 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 875 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesiaLeftTrigger:
# 876 "data/maps/Baldesia/scripts.pory"
	walk_right
# 877 "data/maps/Baldesia/scripts.pory"
	walk_up
# 877 "data/maps/Baldesia/scripts.pory"
	walk_up
# 877 "data/maps/Baldesia/scripts.pory"
	walk_up
# 877 "data/maps/Baldesia/scripts.pory"
	walk_up
# 877 "data/maps/Baldesia/scripts.pory"
	walk_up
# 877 "data/maps/Baldesia/scripts.pory"
	walk_up
# 877 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 880 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PlayerEntersBaldesiaRightTrigger:
# 881 "data/maps/Baldesia/scripts.pory"
	walk_left
# 882 "data/maps/Baldesia/scripts.pory"
	walk_up
# 882 "data/maps/Baldesia/scripts.pory"
	walk_up
# 882 "data/maps/Baldesia/scripts.pory"
	walk_up
# 882 "data/maps/Baldesia/scripts.pory"
	walk_up
# 882 "data/maps/Baldesia/scripts.pory"
	walk_up
# 882 "data/maps/Baldesia/scripts.pory"
	walk_up
# 882 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 885 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua1:
# 886 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 887 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 888 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_left
	step_end

# 891 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua2:
# 892 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 893 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 894 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_up
	step_end

# 897 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakInspectZorua3:
# 898 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 899 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 900 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 903 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakWalkToBennis:
# 904 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 905 "data/maps/Baldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 908 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror:
# 909 "data/maps/Baldesia/scripts.pory"
	lock_facing_direction
# 910 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 910 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 911 "data/maps/Baldesia/scripts.pory"
	delay_16
# 912 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 912 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 913 "data/maps/Baldesia/scripts.pory"
	delay_16
# 914 "data/maps/Baldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 917 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror2:
# 918 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 919 "data/maps/Baldesia/scripts.pory"
	delay_4
# 920 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
# 921 "data/maps/Baldesia/scripts.pory"
	delay_4
# 922 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 923 "data/maps/Baldesia/scripts.pory"
	delay_4
# 924 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
	step_end

# 927 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror4Reverse:
# 928 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 929 "data/maps/Baldesia/scripts.pory"
	delay_4
# 930 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
# 931 "data/maps/Baldesia/scripts.pory"
	delay_4
# 932 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 933 "data/maps/Baldesia/scripts.pory"
	delay_4
# 934 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
	step_end

# 937 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror3:
# 938 "data/maps/Baldesia/scripts.pory"
	jump_in_place_left_right
	step_end

# 941 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror3Reverse:
# 942 "data/maps/Baldesia/scripts.pory"
	jump_in_place_right_left
	step_end

# 945 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror4:
# 946 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 947 "data/maps/Baldesia/scripts.pory"
	delay_4
# 948 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
# 949 "data/maps/Baldesia/scripts.pory"
	delay_4
# 950 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 951 "data/maps/Baldesia/scripts.pory"
	delay_4
# 952 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
	step_end

# 955 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniMirror2Reverse:
# 956 "data/maps/Baldesia/scripts.pory"
	walk_in_place_down
# 957 "data/maps/Baldesia/scripts.pory"
	delay_4
# 958 "data/maps/Baldesia/scripts.pory"
	walk_in_place_right
# 959 "data/maps/Baldesia/scripts.pory"
	delay_4
# 960 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
# 961 "data/maps/Baldesia/scripts.pory"
	delay_4
# 962 "data/maps/Baldesia/scripts.pory"
	walk_in_place_left
	step_end

# 965 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_PaniniFaceBennis:
# 966 "data/maps/Baldesia/scripts.pory"
	walk_right
# 967 "data/maps/Baldesia/scripts.pory"
	walk_in_place_up
	step_end

# 970 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_WalkFastLeft7:
# 971 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 971 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 971 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 971 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 971 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 971 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 971 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
	step_end

# 974 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_MomoEnters:
# 975 "data/maps/Baldesia/scripts.pory"
	walk_up
# 975 "data/maps/Baldesia/scripts.pory"
	walk_up
# 975 "data/maps/Baldesia/scripts.pory"
	walk_up
# 975 "data/maps/Baldesia/scripts.pory"
	walk_up
# 976 "data/maps/Baldesia/scripts.pory"
	walk_left
# 977 "data/maps/Baldesia/scripts.pory"
	walk_up
# 977 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 980 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_MomoGoesToMainHouse:
# 981 "data/maps/Baldesia/scripts.pory"
	walk_right
# 982 "data/maps/Baldesia/scripts.pory"
	walk_up
# 982 "data/maps/Baldesia/scripts.pory"
	walk_up
# 982 "data/maps/Baldesia/scripts.pory"
	walk_up
# 983 "data/maps/Baldesia/scripts.pory"
	walk_left
# 984 "data/maps/Baldesia/scripts.pory"
	walk_up
# 984 "data/maps/Baldesia/scripts.pory"
	walk_up
# 984 "data/maps/Baldesia/scripts.pory"
	walk_up
	step_end

# 987 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakGoesToMainHouse:
# 988 "data/maps/Baldesia/scripts.pory"
	walk_fast_left
# 989 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 989 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 989 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 989 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 989 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 989 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
# 989 "data/maps/Baldesia/scripts.pory"
	walk_fast_up
	step_end

# 992 "data/maps/Baldesia/scripts.pory"
Baldesia_Movement_AsakApproachesPlayer:
# 993 "data/maps/Baldesia/scripts.pory"
	walk_fast_down
# 994 "data/maps/Baldesia/scripts.pory"
	walk_fast_right
# 994 "data/maps/Baldesia/scripts.pory"
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
# 143 "data/maps/Baldesia/scripts.pory"
	.string "Hm… It seems you don't have enough room,\n young one.$"

Baldesia_EventScript_NinjaBoy1_Text_0:
# 160 "data/maps/Baldesia/scripts.pory"
	.string "Uh oh!\n  You found me!$"

Baldesia_EventScript_NinjaBoy1_Text_1:
# 177 "data/maps/Baldesia/scripts.pory"
	.string "Baldy, baldy, over there!\n What's it like to have no hair?$"

Baldesia_EventScript_NinjaBoy2_Text_0:
# 211 "data/maps/Baldesia/scripts.pory"
	.string "Is it hot, or is it cold?\n I don't know, 'cause I'm not bald!$"

Baldesia_EventScript_NinjaBoy3_Text_0:
# 229 "data/maps/Baldesia/scripts.pory"
	.string "W-What?!\n  My disguise was perfect!$"

Baldesia_EventScript_NinjaBoy3_Text_1:
# 246 "data/maps/Baldesia/scripts.pory"
	.string "I'm practicing my disguises!$"

Baldesia_EventScript_NinjaBoy4_Text_0:
# 262 "data/maps/Baldesia/scripts.pory"
	.string "Aw!\n  You found me!$"

Baldesia_EventScript_NinjaBoy4_Text_1:
# 279 "data/maps/Baldesia/scripts.pory"
	.string "I thought hiding in plain sight was\n a good idea.$"

Baldesia_EventScript_NinjaBoy5_Text_0:
# 296 "data/maps/Baldesia/scripts.pory"
	.string "Dang!\n  You found me!$"

Baldesia_EventScript_NinjaBoy5_Text_1:
# 313 "data/maps/Baldesia/scripts.pory"
	.string "I'm training to be a great NINJA\n like MASTER BENNIS!\p It's not fair that only PANINI gets to\n be his disciple!$"

Baldesia_EventScript_NinjaBoy6_Text_0:
# 334 "data/maps/Baldesia/scripts.pory"
	.string "…!$"

Baldesia_EventScript_NinjaBoy6_Text_1:
# 350 "data/maps/Baldesia/scripts.pory"
	.string "…\n …\l …\p … I wanna grow up to be bald like my\n Auntie MOMO.$"

Baldesia_EventScript_LittleGirl_Text_0:
# 362 "data/maps/Baldesia/scripts.pory"
	.string "My mom said the ASAKURA family has\n a gene that makes the women bald!\p Hahaha!$"

Baldesia_EventScript_OldWoman_Text_0:
# 369 "data/maps/Baldesia/scripts.pory"
	.string "There's a DOJO in the woods renowned\n for the strength of its members.\p I heard the MASTER there is looking\n for a successor.$"

Baldesia_EventScript_OldManBridge_Text_0:
# 379 "data/maps/Baldesia/scripts.pory"
	.string "I helped dig this moat about\n fifty years ago.\p Time really flies.$"

Baldesia_EventScript_KimonoLady1_Text_0:
# 389 "data/maps/Baldesia/scripts.pory"
	.string "There's a new flavor of mochi that\n was recently brought to the village.\p The Chief and his wife seem to enjoy it\n the most.$"

Baldesia_EventScript_KimonoLady2_Text_0:
# 397 "data/maps/Baldesia/scripts.pory"
	.string "I heard the Young Lady left the village\n because she met somebody.\p Oh, to be in love…$"

Baldesia_EventScript_Ninja_Text_0:
# 404 "data/maps/Baldesia/scripts.pory"
	.string "This land has been home to\n NINJAS for many generations.$"

Baldesia_EventScript_EntranceGuard_Text_0:
# 412 "data/maps/Baldesia/scripts.pory"
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
# 489 "data/maps/Baldesia/scripts.pory"
	.string "I see! My deepest apologies.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_4:
# 494 "data/maps/Baldesia/scripts.pory"
	.string "We will allow you entry out of respect\n for MASTER BENNIS.\p But if you cause any trouble, you'll be\n dealt with accordingly.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_5:
# 521 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: You're lucky that MASTER BENNIS\n has acknowledged your strength.\p If it was up to me, I'd-$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_6:
# 545 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Yes. I caught them trying to enter\n the village.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_7:
# 550 "data/maps/Baldesia/scripts.pory"
	.string "…By the way, who is that next\n to you?\p MASTER BENNIS: Hm? It's PANINI.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_8:
# 556 "data/maps/Baldesia/scripts.pory"
	.string "Right, PANINI?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_9:
# 564 "data/maps/Baldesia/scripts.pory"
	.string "PANINI?: Paneenee?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_10:
# 570 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: See?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_11:
# 591 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Sir, I'm not sure if that's PANINI…$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_12:
# 615 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini?\n PANINI?: Paneenee?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_13:
# 622 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini!\n PANINI?: Paneenee!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_14:
# 639 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_15:
# 664 "data/maps/Baldesia/scripts.pory"
	.string "ZORUA: Paneenee!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_16:
# 672 "data/maps/Baldesia/scripts.pory"
	.string "PANINI: Panini?! Panini panini?!\n Panini!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_17:
# 685 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: N-No, sir! W-Well, not in\n your overworld sprite, at least…$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_18:
# 699 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Ah! My eyes! Now what?!\n What was that flash?!$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_19:
# 726 "data/maps/Baldesia/scripts.pory"
	.string "… Hi, {PLAYER}.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_20:
# 757 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: I'm going too.$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_21:
# 771 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: Sorry, {PLAYER}.\n Could I ask you to go get PANINI and\l then come to the MAIN HOUSE?$"

Baldesia_EventScript_HisuianZoruaTrigger_Text_22:
# 777 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS! Wait for me!$"

Baldesia_EventScript_INeedToGoGetPanini_Text_0:
# 797 "data/maps/Baldesia/scripts.pory"
	.string "I need to go get PANINI first.$"

Baldesia_EventScript_YouNeedPermission_Text_0:
# 815 "data/maps/Baldesia/scripts.pory"
	.string "Sorry, you need permission from the\n Village Chief to travel to the altar.$"

Baldesia_Text_Bennis1::
# 826 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: MASTER BENNIS!\p MASTER BENNIS: ASAK. Oho? And… you're\n here too, I see.$"

Baldesia_Text_Bennis2::
# 832 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: Oh, beef.\n Do I really have a weird shaped butt?$"

Baldesia_Text_Bennis3::
# 837 "data/maps/Baldesia/scripts.pory"
	.string "ASAK: L-LADY MOMO?\p MASTER BENNIS: Young Lady.\n Your scalp is as shiny as ever.\p MOMO: … … … …\n I'm back.$"

Baldesia_Text_Bennis4::
# 845 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}? Hm.\p ASAK: Huh… I just realized we never knew\n your name.\l And you also know LADY MOMO…\l I'm surprised.$"

Baldesia_Text_Bennis5::
# 853 "data/maps/Baldesia/scripts.pory"
	.string "MASTER BENNIS: We were searching all\n over HOENN for you.\l Where have you been?\p MOMO: … I made it back in time for the\n ritual… I think.\l I need to go see brother now.$"
