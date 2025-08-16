Route135_Lab_MapScripts::
# 6 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route135_Lab_OnTransition
# 2 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 0, Route135_Lab_EventScript_ToUltraSpace
# 4 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 3, Route135_Lab_EventScript_EndUltraSpace
	.2byte 0


Route135_Lab_OnTransition::
# 10 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_E
# 11 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 12 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_LANDMARK_ROUTE135
# 13 "data/maps/Route135_Lab/scripts.pory"
	call_if_set FLAG_ENABLED_JAMES_MATCH_CALL, Route135_Lab_DisableJamesMatchCall
# 14 "data/maps/Route135_Lab/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 4, Route135_Lab_JamesPosition
	end


Route135_Lab_JamesPosition::
# 19 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 20 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Route135_Lab_DisableJamesMatchCall::
# 25 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_ENABLED_JAMES_MATCH_CALL
	return


Route135_Lab_EventScript_Maniac::
# 30 "data/maps/Route135_Lab/scripts.pory"
	lock
# 31 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
# 35 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_Maniac_3
# 38 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_Maniac_4
Route135_Lab_EventScript_Maniac_1:
# 41 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusyTalkToCosmog, MSGBOX_DEFAULT
# 42 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 43 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 32 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
# 33 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_3:
# 36 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_ToAreaZero
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_4:
# 39 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_TalkToCosmog
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 48 "data/maps/Route135_Lab/scripts.pory"
	lock
# 49 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_ge Route135_Lab_EventScript_James_4
Route135_Lab_EventScript_James_1:
# 52 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_JAMES, Route135_Lab_EventScript_James_9
Route135_Lab_EventScript_James_8:
# 55 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 56 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_James_12
# 61 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_James_13
# 75 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
Route135_Lab_EventScript_James_11:
# 78 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 79 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 80 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_James_2:
# 50 "data/maps/Route135_Lab/scripts.pory"
	goto Route_135_EventScript_JamesBattle
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_3:
# 49 "data/maps/Route135_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_DEFEATED_JAMES, Route135_Lab_EventScript_James_2
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_4:
# 49 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, Route135_Lab_EventScript_James_3
	goto Route135_Lab_EventScript_James_1

Route135_Lab_EventScript_James_9:
# 53 "data/maps/Route135_Lab/scripts.pory"
	goto Route_135_EventScript_JamesGoFinishTheGame
	goto Route135_Lab_EventScript_James_8

Route135_Lab_EventScript_James_12:
# 57 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_James_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_James_11

Route135_Lab_EventScript_James_13:
# 62 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_James_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_James_11


Route_135_EventScript_JamesGoFinishTheGame::
# 85 "data/maps/Route135_Lab/scripts.pory"
	lock
# 86 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 87 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 88 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 89 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 91 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 92 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_LINA_TALKED_TO, 2
	goto_if_eq Route_135_EventScript_JamesGoFinishTheGame_2
# 120 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_1, MSGBOX_DEFAULT
# 138 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 139 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_2, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 150 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 151 "data/maps/Route135_Lab/scripts.pory"
	message Route_135_EventScript_JamesGoFinishTheGame_Text_3
# 153 "data/maps/Route135_Lab/scripts.pory"
	waitfanfare
# 154 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 155 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_LINA_TALKED_TO, 2
Route_135_EventScript_JamesGoFinishTheGame_1:
# 157 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 158 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 159 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_EventScript_JamesGoFinishTheGame_2:
# 93 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesGoFinishTheGame_Text_0, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route_135_EventScript_JamesGoFinishTheGame_1


Route_135_EventScript_JamesBattle::
# 164 "data/maps/Route135_Lab/scripts.pory"
	lock
# 165 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 166 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 167 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 168 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 170 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 171 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattle_Text_0, MSGBOX_DEFAULT
# 174 "data/maps/Route135_Lab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route_135_EventScript_JamesBattle_Text_1, Route_135_EventScript_JamesBattle_Text_2
# 175 "data/maps/Route135_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route_135_EventScript_JamesBattleChoseNo
# 176 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattle_Text_3, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 186 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 187 "data/maps/Route135_Lab/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/Route135_Lab/scripts.pory"
	case DIR_WEST, Route_135_EventScript_JamesBattle_3
# 190 "data/maps/Route135_Lab/scripts.pory"
	case DIR_EAST, Route_135_EventScript_JamesBattle_4
# 192 "data/maps/Route135_Lab/scripts.pory"
	case DIR_NORTH, Route_135_EventScript_JamesBattle_5
# 195 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
Route_135_EventScript_JamesBattle_1:
# 197 "data/maps/Route135_Lab/scripts.pory"
	delay 24
# 198 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 199 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 200 "data/maps/Route135_Lab/scripts.pory"
	removeobject 2
# 201 "data/maps/Route135_Lab/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 203 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_115
# 204 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_MISA_STATE, 11
# 205 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route_135_EventScript_JamesBattle_3:
# 189 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
	goto Route_135_EventScript_JamesBattle_1

Route_135_EventScript_JamesBattle_4:
# 191 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayer
	goto Route_135_EventScript_JamesBattle_1

Route_135_EventScript_JamesBattle_5:
# 193 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesLeavesPlayerNorth
	goto Route_135_EventScript_JamesBattle_1


Route_135_EventScript_JamesBattleChoseNo::
# 210 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_EventScript_JamesBattleChoseNo_Text_0, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 213 "data/maps/Route135_Lab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 214 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 220 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 221 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 222 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 223 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 224 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 225 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 226 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 227 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 228 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 299 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 301 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 302 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 303 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 305 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 307 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 229 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 231 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 232 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 233 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 234 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 237 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 238 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 239 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 242 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 243 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 244 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 245 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 246 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 247 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 248 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 250 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 251 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 252 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 254 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 255 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 256 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 257 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 258 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 260 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 261 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 262 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 263 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 264 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 266 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 267 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 268 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 269 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 270 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 273 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 274 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 275 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 276 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 277 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 278 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 279 "data/maps/Route135_Lab/scripts.pory"
	fadenewbgm MUS_NONE
# 280 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 282 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 283 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 284 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 285 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 287 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 288 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 289 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 290 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 291 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 292 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 293 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 294 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 295 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 296 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 312 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 313 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 314 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 315 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 316 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 317 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 318 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 319 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 320 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 321 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 322 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 323 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 324 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 325 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 326 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 327 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 328 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 329 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 330 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 335 "data/maps/Route135_Lab/scripts.pory"
	lock
# 336 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 337 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 338 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 339 "data/maps/Route135_Lab/scripts.pory"
	goto_if_ge VAR_ULTRA_SPACE_STATE, 6, Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero
# 340 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 345 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 346 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_ManiacLookAround
# 347 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 348 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 349 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 350 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_JamesLookAround
# 351 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 354 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 355 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 356 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 357 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 358 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 359 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 360 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 361 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_Movement_ManiacReturnsToComputer
# 362 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 363 "data/maps/Route135_Lab/scripts.pory"
	applymovement 6, Route_135_Lab_Movement_CosmogReturnsToComputer
# 364 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 365 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 366 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 367 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 368 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 6
# 369 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 370 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 371 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 372 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 373 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 374 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 375 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesFacePlayer
# 376 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 377 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 379 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 380 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 381 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 383 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 384 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 385 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 386 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 387 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 388 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesReturnsToComputer
# 389 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 390 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 391 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 392 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_Movement_PlayerLeaves
# 393 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 394 "data/maps/Route135_Lab/scripts.pory"
	removeobject 5
# 395 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 396 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 397 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 398 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 399 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
# 400 "data/maps/Route135_Lab/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 401 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 402 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 403 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 404 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 405 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_JamesCallsPlayerAreaZero::
# 410 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 411 "data/maps/Route135_Lab/scripts.pory"
	pokenavcall Route_135_Lab_PokenavText_JamesComeBackToTheLab
# 412 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 413 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 414 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 5
# 415 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_ToAreaZero::
# 420 "data/maps/Route135_Lab/scripts.pory"
	lock
# 421 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 422 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route135_Lab_EventScript_ToAreaZero_2
# 426 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacIntroduceAreaZero, MSGBOX_YESNO
Route135_Lab_EventScript_ToAreaZero_1:
# 428 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 429 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToAreaZero_6
# 447 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 449 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 450 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 451 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 452 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_1
Route135_Lab_EventScript_ToAreaZero_5:
# 454 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToAreaZero_2:
# 423 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_0, MSGBOX_YESNO
	goto Route135_Lab_EventScript_ToAreaZero_1

Route135_Lab_EventScript_ToAreaZero_6:
# 430 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_1, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_EventScript_PlayerGoesToCosmog
# 434 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 435 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacExplainCosmog, MSGBOX_AUTOCLOSE
# 436 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 437 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 438 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 439 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 440 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 441 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 442 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 6
# 443 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 444 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToAreaZero_5


Route135_Lab_EventScript_TalkToCosmog::
# 459 "data/maps/Route135_Lab/scripts.pory"
	lock
# 460 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 461 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_0, MSGBOX_AUTOCLOSE
# 470 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 471 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 472 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 473 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 474 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_1
# 477 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 478 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 479 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 480 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 481 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_2, MSGBOX_AUTOCLOSE
# 483 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 484 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 485 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 486 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 487 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_MELTAN
# 488 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero::
# 493 "data/maps/Route135_Lab/scripts.pory"
	lock
# 494 "data/maps/Route135_Lab/scripts.pory"
	message Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0
# 495 "data/maps/Route135_Lab/scripts.pory"
	multichoice 25, 5, MULTI_ULTRA_SPACE_CHOICE, 0
# 496 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 497 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2
# 504 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3
Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1:
# 511 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2:
# 498 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 499 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 500 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 501 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 26, 49
# 502 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3:
# 505 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 506 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 507 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 508 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 509 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1


Route135_Lab_EventScript_PlayerGoesToCosmog::
# 516 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 517 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq Route135_Lab_EventScript_PlayerGoesToCosmog_2
# 522 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogNorth
# 523 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
Route135_Lab_EventScript_PlayerGoesToCosmog_1:
# 525 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 526 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
	return

Route135_Lab_EventScript_PlayerGoesToCosmog_2:
# 518 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogEast
# 519 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	goto Route135_Lab_EventScript_PlayerGoesToCosmog_1


# 530 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 531 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 531 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 531 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 531 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 531 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 532 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 532 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 535 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 536 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 536 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 536 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 537 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 537 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 537 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 537 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 538 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 541 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 542 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 542 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 542 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 544 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 580 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 582 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 597 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 598 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 598 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 598 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 599 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 600 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 603 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 604 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 604 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 604 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 605 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 608 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 609 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 609 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 612 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 613 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 614 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 615 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 616 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 617 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 618 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 619 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 623 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 624 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 625 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 626 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 627 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 628 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 629 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 630 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 634 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 635 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 636 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 637 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 638 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 639 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 640 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 641 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 706 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 707 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 708 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 708 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 708 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 708 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 709 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 710 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 713 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 714 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 715 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 715 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 715 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 716 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 717 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 717 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 718 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 721 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 722 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 723 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 726 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 727 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 727 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 727 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 727 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 728 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 728 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 729 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 729 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 730 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 731 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 731 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 734 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 735 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 735 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 735 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 735 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 744 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogEast:
# 745 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 746 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 749 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogNorth:
# 750 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 751 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 751 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 752 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

Route_135_Lab_EventScript_Meltan::
# 811 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 812 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_MELTAN, 10, 4
# 813 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_0, MSGBOX_YESNO
# 817 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_Meltan_2
# 840 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 841 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_Meltan_1:
# 844 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 845 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route_135_Lab_EventScript_Meltan_2:
# 818 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_MELTAN, 75
# 819 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 820 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_Meltan_5
# 827 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_Meltan_6
# 835 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 836 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_5:
# 821 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 822 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 823 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 824 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 825 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_6:
# 828 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 829 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 830 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 831 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 832 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_Meltan_1


Route_135_Lab_EventScript_TypeNull::
# 850 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 851 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_TYPE_NULL, 10, 4
# 852 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_TypeNull_Text_0, MSGBOX_YESNO
# 856 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_TypeNull_2
# 879 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 880 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_TypeNull_1:
# 883 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 884 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route_135_Lab_EventScript_TypeNull_2:
# 857 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_TYPE_NULL, 70
# 858 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 859 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_TypeNull_5
# 866 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_TypeNull_6
# 874 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 875 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_5:
# 860 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 861 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 862 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 863 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 864 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_6:
# 867 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 868 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 869 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 870 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 871 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_TypeNull_1


# 888 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesLeavesPlayer:
# 889 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 889 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 890 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 891 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 894 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesLeavesPlayerNorth:
# 895 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 896 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

Route135_Lab_EventScript_James_Text_0:
# 57 "data/maps/Route135_Lab/scripts.pory"
	.string "What's up, {PLAYER}.\n The PROF. is waiting for you.$"

Route135_Lab_EventScript_James_Text_1:
# 62 "data/maps/Route135_Lab/scripts.pory"
	.string "How did the expedition go?\n I surveyed that place too.\p It's crazy to think there's whole\n other worlds and civilizations out\l there parallel to ours.\p Maybe the void could actually be\n real…\p Don't worry, I'm not going to\n go back to my phase.\p I'm just thinking out loud.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_0:
# 93 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.\p You're at the end of the game, {PLAYER}.\n Hurry up and do what you need to do.\p Oh, and here's a hint: your exploration\n throughout the game paid off.\p You'll be able to challenge the\n “secret” superboss. Good luck.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_1:
# 120 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}? Wow.\n Uh, this is kind of awkward…\p Honestly, I didn't expect to see\n you again after that last battle.\p Um…\l …\p You're the type of person who needs\n to see EVERYTHING in a game. I see…\p Well, there's nothing really left for\n you here, unless you want to go back\l to ULTRA SPACE or AREA ZERO for some\l reason.\p But you know, I felt like that last\n battle was a good end to my story, and\l you just made it weird by coming back\l here to talk to me again.\p You didn't even know if there would be\n any different dialogue, you weirdo.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_2:
# 139 "data/maps/Route135_Lab/scripts.pory"
	.string "You know what, though?\p It sucks you didn't keep this same\n energy throughout the whole game,\l because you didn't unlock the “secret” \l superboss.\p But you know what? As a favor,\n I'll make it so you have a chance\l to battle them.\p Good luck, {PLAYER}.\n Go finish the game.$"

Route_135_EventScript_JamesGoFinishTheGame_Text_3:
# 151 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}You're now able to challenge\n the superboss!$"

Route_135_EventScript_JamesBattle_Text_0:
# 171 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, {PLAYER}.\n Sorry, I was focused on my research.\p What's up?$"

Route_135_EventScript_JamesBattle_Text_1:
# 174 "data/maps/Route135_Lab/scripts.pory"
	.string "Want to battle?$"

Route_135_EventScript_JamesBattle_Text_2:
# 174 "data/maps/Route135_Lab/scripts.pory"
	.string "Nevermind.$"

Route_135_EventScript_JamesBattle_Text_3:
# 176 "data/maps/Route135_Lab/scripts.pory"
	.string "A battle?\p Well, it HAS been a while since\n the last time we did.\l …\l Sure.\p I was actually going to head home for\n a bit to take care of some things.\p Could you meet me on ROUTE 115?\n I'll wait for you there.$"

Route_135_EventScript_JamesBattleChoseNo_Text_0:
# 210 "data/maps/Route135_Lab/scripts.pory"
	.string "Oh, okay.\n I'm kind of busy right now, so…$"

Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 239 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 252 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 352 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: We…\n We really returned…$"

Route135_Lab_EventScript_EndUltraSpace_Text_1:
# 381 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…$"

Route135_Lab_EventScript_ToAreaZero_Text_0:
# 423 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern. Did you change your mind?$"

Route135_Lab_EventScript_ToAreaZero_Text_1:
# 430 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n Go stand next to COSMOG.\p It shall transport you.$"

Route135_Lab_EventScript_ToAreaZero_Text_2:
# 447 "data/maps/Route135_Lab/scripts.pory"
	.string "…I see. Well, you know where\n to find me if you change your mind.$"

Route135_Lab_EventScript_TalkToCosmog_Text_0:
# 461 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n It seems the survey went well.\l Thanks for the great data.\p Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to ULTRA SPACE, we\n found these devices.\p I couldn't find any use for them, but\n maybe you can.$"

Route135_Lab_EventScript_TalkToCosmog_Text_1:
# 474 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\l It seems to trust you now.$"

Route135_Lab_EventScript_TalkToCosmog_Text_2:
# 481 "data/maps/Route135_Lab/scripts.pory"
	.string "I'm busy, so I'll leave it to you.\n You know the routine by now.$"

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0:
# 494 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Where would you like to go?$"

Route_135_Lab_EventScript_Meltan_Text_0:
# 813 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MELTAN.\p Take the POKé BALL?$"

Route_135_Lab_EventScript_Meltan_Text_1:
# 822 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Route_135_Lab_EventScript_Meltan_Text_2:
# 841 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"

Route_135_Lab_EventScript_TypeNull_Text_0:
# 852 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TYPE NULL.\p Take the POKé BALL?$"

Route135_Lab_Text_Maniac1::
# 547 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 551 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 557 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 572 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 585 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 590 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 645 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 651 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 658 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 665 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 672 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 679 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: …He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 690 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 696 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 738 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"

Route135_Lab_Text_ManiacIntroduceAreaZero::
# 755 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Salutations.\p I assume JAMES provided you with the\n relevant information, yes?\p As you saw, COSMOG is capable of\n traversing the ULTRA SPACE at will.\p With extensive testing and research,\n we've been able to survey the ULTRA\l SPACE further.\p During these surveys, we came across\n another rift that seems to lead to\l another world…\p Seeing as you were crazy enough to\n walk across the sky, I presume you'd\l be open to being the first human to\l explore this new world, yes?$"

Route135_Lab_Text_ManiacExplainCosmog::
# 774 "data/maps/Route135_Lab/scripts.pory"
	.string "The camera I put on COSMOG showed\n the world has a somewhat strange\l composition… Although there are signs\l that it was once inhabited by humans,\l so it should be safe to traverse.\p COSMOG will be with you, so if you want\n to return to the lab, just ask it.\p Now, it is time! Godspeed, intern!\n COSMOG, if you will!$"

Route_135_Lab_Text_ImBusyTalkToCosmog::
# 786 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Sadly, there's no new discoveries.\p Just ask COSMOG if you need to return\n to the ULTRA SPACE.\p It seems to trust you enough without\n needing my intervention any further.$"

Route_135_Lab_PokenavText_JamesComeBackToTheLab::
# 795 "data/maps/Route135_Lab/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}?\n It's JAMES.\p The PROF. says there's a new\n breakthrough in his research.\p He thinks you'll be interested\n in helping with his experiment.\p Can you come to the LAB when\n you have a chance?\p … … … … … …\n … … … … … Click!$"
