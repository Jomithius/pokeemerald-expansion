WachunpelonCity_MapScripts::
# 2 "data/maps/WachunpelonCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WachunpelonCity_OnTransition
	.byte 0


WachunpelonCity_OnTransition::
# 6 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_LANDMARK_WACHUNPELON
# 7 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


WachunpelonCity_EventScript_Mae::
# 12 "data/maps/WachunpelonCity/scripts.pory"
	trainerbattle_single TRAINER_MAE_3, WachunpelonCity_Text_Mae, WachunpelonCity_EventScript_Mae_Text_0, WachunpelonCity_EventScript_MaePostBattle
# 13 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Mae_Text_1, MSGBOX_NPC
# 18 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
	end


WachunpelonCity_EventScript_MaePostBattle::
# 23 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 24 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 28 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 29 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 30 "data/maps/WachunpelonCity/scripts.pory"
	delay 8
# 31 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 32 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 34 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, WachunpelonCity_Movement_OldMan1
# 35 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 36 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 38 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 39 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_2, MSGBOX_AUTOCLOSE
# 45 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 46 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, WachunpelonCity_Movement_OldMan2
# 47 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_3, MSGBOX_DEFAULT
# 51 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 52 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 53 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_4, MSGBOX_AUTOCLOSE
# 56 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 57 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_FatMan::
# 62 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldMan::
# 68 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldWoman::
# 74 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldWoman_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_AquaGrunt::
# 79 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 80 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 81 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 82 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 84 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 85 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_AquaGrunt_Text_0, MSGBOX_AUTOCLOSE
# 89 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 90 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 91 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Woman_4::
# 97 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 98 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_4_Text_0, MSGBOX_AUTOCLOSE
# 99 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 100 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 101 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Tuber_F::
# 107 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_F_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_Tuber_M_Swimming::
# 113 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Tuber_M_Walking::
# 118 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Walking_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Man_4::
# 123 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_1::
# 129 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_1_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_OldManBeach::
# 135 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldManBeach_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Sailor::
# 141 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Sailor_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_2::
# 147 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 148 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 149 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_2_Text_0, MSGBOX_AUTOCLOSE
# 152 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 153 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 154 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Cook::
# 160 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 161 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_0, MSGBOX_AUTOCLOSE
# 167 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 168 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 169 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 170 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 171 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 172 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 173 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_1, MSGBOX_AUTOCLOSE
# 176 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 177 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 178 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 179 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_PolicemanTrigger::
# 184 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 185 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 186 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 187 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 188 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 189 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 190 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 191 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 192 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 193 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanTrigger_2
# 197 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanTrigger_1:
WachunpelonCity_EventScript_PolicemanTrigger_6:
# 199 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanTrigger_7
# 202 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 203 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 204 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_WalkBack
# 205 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 207 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 209 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 210 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 211 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 212 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 213 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 214 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 215 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 216 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 218 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 219 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 220 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 221 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanTrigger_2:
# 194 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_1

WachunpelonCity_EventScript_PolicemanTrigger_7:
# 200 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_6


WachunpelonCity_EventScript_Policeman::
# 226 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 227 "data/maps/WachunpelonCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 228 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq WachunpelonCity_EventScript_Policeman_2
# 232 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanEast
WachunpelonCity_EventScript_Policeman_1:
	end

WachunpelonCity_EventScript_Policeman_2:
# 229 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanNorth
	goto WachunpelonCity_EventScript_Policeman_1


WachunpelonCity_EventScript_PolicemanNorth::
# 238 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 239 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanNorth_2
# 243 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanNorth_1:
WachunpelonCity_EventScript_PolicemanNorth_6:
# 245 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanNorth_7
# 248 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 249 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 250 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 251 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 253 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 254 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 255 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 256 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 257 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 258 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 259 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerNorth
# 260 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 261 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 262 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 263 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 264 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 265 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanNorth_2:
# 240 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_1

WachunpelonCity_EventScript_PolicemanNorth_7:
# 246 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_6


WachunpelonCity_EventScript_PolicemanEast::
# 270 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 271 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 272 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 273 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 274 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 275 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 276 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 277 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanEast_2
# 281 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanEast_1:
WachunpelonCity_EventScript_PolicemanEast_6:
# 283 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanEast_7
# 286 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 287 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 288 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 289 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 291 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 292 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 293 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 294 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 295 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 296 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 297 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerEast
# 298 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 300 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 301 "data/maps/WachunpelonCity/scripts.pory"
	warpdoor MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 302 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 303 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanEast_2:
# 278 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_1

WachunpelonCity_EventScript_PolicemanEast_7:
# 284 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_6


# 364 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_WalkBack:
# 365 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 366 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_up
	step_end

# 369 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerNorth:
# 370 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 371 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 374 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerEast:
# 375 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 375 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
	step_end

# 378 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_OldMan1:
# 379 "data/maps/WachunpelonCity/scripts.pory"
	walk_right
# 379 "data/maps/WachunpelonCity/scripts.pory"
	walk_right
# 380 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
# 380 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 383 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_OldMan2:
# 384 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 384 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 385 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 385 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 386 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_right
	step_end

WachunpelonCity_EventScript_Mae_Text_0:
# 12 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm a diva and I deserve this…$"

WachunpelonCity_EventScript_Mae_Text_1:
# 13 "data/maps/WachunpelonCity/scripts.pory"
	.string "Yasss, this beach slayyyyys!\p No matter what you do, I'll\n never leave!\p I'm a DIVA!\n And I DESERVE this!$"

WachunpelonCity_EventScript_MaePostBattle_Text_0:
# 24 "data/maps/WachunpelonCity/scripts.pory"
	.string "Usually this is the part where\n somebody would kick me out, right?\p But this time we're just on a beach.$"

WachunpelonCity_EventScript_MaePostBattle_Text_1:
# 36 "data/maps/WachunpelonCity/scripts.pory"
	.string "Excuse me!$"

WachunpelonCity_EventScript_MaePostBattle_Text_2:
# 40 "data/maps/WachunpelonCity/scripts.pory"
	.string "Please don't battle here!\p My grandkids are playing on\n the beach! It's dangerous!\p If I worked here, I would have\n asked you to leave!$"

WachunpelonCity_EventScript_MaePostBattle_Text_3:
# 48 "data/maps/WachunpelonCity/scripts.pory"
	.string "What's wrong with today's youth?\p Gosh… I hope my grandkids don't grow\n up and become like that…$"

WachunpelonCity_EventScript_MaePostBattle_Text_4:
# 54 "data/maps/WachunpelonCity/scripts.pory"
	.string "…\n I'm still not leaving.$"

WachunpelonCity_EventScript_FatMan_Text_0:
# 62 "data/maps/WachunpelonCity/scripts.pory"
	.string "Man…\n That's a nice ocean breeze.$"

WachunpelonCity_EventScript_OldMan_Text_0:
# 68 "data/maps/WachunpelonCity/scripts.pory"
	.string "This could be one of the last\n vacations we ever take! Hahaha!$"

WachunpelonCity_EventScript_OldWoman_Text_0:
# 74 "data/maps/WachunpelonCity/scripts.pory"
	.string "Don't say that!$"

WachunpelonCity_EventScript_AquaGrunt_Text_0:
# 85 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm not doing anything bad, I swear!\p I just moved out here after everything\n that happened.\p I just want to live quietly now.$"

WachunpelonCity_EventScript_Woman_4_Text_0:
# 98 "data/maps/WachunpelonCity/scripts.pory"
	.string "You can do it, honey!$"

WachunpelonCity_EventScript_Tuber_F_Text_0:
# 107 "data/maps/WachunpelonCity/scripts.pory"
	.string "I can't!\n It's too scary!$"

WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0:
# 113 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love swimming!$"

WachunpelonCity_EventScript_Tuber_M_Walking_Text_0:
# 118 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love running on the sand!$"

WachunpelonCity_EventScript_Man_4_Text_0:
# 123 "data/maps/WachunpelonCity/scripts.pory"
	.string "We came all the way from VERDANTURF.\n I work at the DAYCARE over there.$"

WachunpelonCity_EventScript_Woman_1_Text_0:
# 129 "data/maps/WachunpelonCity/scripts.pory"
	.string "My family can embarass me sometimes,\n but I still love them.$"

WachunpelonCity_EventScript_OldManBeach_Text_0:
# 135 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm on vacation with my family.\n I love seeing my grandkids having fun.$"

WachunpelonCity_EventScript_Sailor_Text_0:
# 141 "data/maps/WachunpelonCity/scripts.pory"
	.string "It can be hard work navigatin' these\n seas.$"

WachunpelonCity_EventScript_Woman_2_Text_0:
# 149 "data/maps/WachunpelonCity/scripts.pory"
	.string "I come here from LUSH ACREAGE all the\n time just for the coffee.\p It's so good!$"

WachunpelonCity_EventScript_Cook_Text_0:
# 161 "data/maps/WachunpelonCity/scripts.pory"
	.string "Hm… So he decided to use those spices…!\n Gosh… It's so yummy…\l Tasty…\l Scrumptious…\l Delicious…\l Savory…$"

WachunpelonCity_EventScript_Cook_Text_1:
# 173 "data/maps/WachunpelonCity/scripts.pory"
	.string "Excuse me!\p It's rude to bother people when they're\n eating!$"

WachunpelonCity_Text_Policeman1::
# 307 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p Most of the BIKERS have been arrested\n already.\p Only the boss along with a couple of\n members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanBikersRoute123::
# 324 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p I heard you drove those thugs away from\n ROUTE 123 as well.\p Most of them have been arrested\n already.\p Only the boss along with a couple of\n members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanNo::
# 343 "data/maps/WachunpelonCity/scripts.pory"
	.string "Come on. You've already helped me\n on this case before.\p This will be the last time.$"

WachunpelonCity_Text_Policeman2::
# 349 "data/maps/WachunpelonCity/scripts.pory"
	.string "Great! This time I have clearance to use\n force as necessary.\p It won't be a repeat of last time.\n I'll lead.$"

WachunpelonCity_Text_Mae::
# 356 "data/maps/WachunpelonCity/scripts.pory"
	.string "Huh?\n It's you again!\p You're seriously even trying to stop\n my vacation?!\p I'm a diva and I deserve this!$"
