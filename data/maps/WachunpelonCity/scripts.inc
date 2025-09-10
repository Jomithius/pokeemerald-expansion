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
	setflag FLAG_SYS_BOSS_BATTLE
# 13 "data/maps/WachunpelonCity/scripts.pory"
	trainerbattle_single TRAINER_MAE_3, WachunpelonCity_Text_Mae, WachunpelonCity_EventScript_Mae_Text_0, WachunpelonCity_EventScript_MaePostBattle
# 14 "data/maps/WachunpelonCity/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 15 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Mae_Text_1, MSGBOX_NPC
	end


WachunpelonCity_EventScript_MaePostBattle::
# 24 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 25 "data/maps/WachunpelonCity/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 26 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 30 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 31 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 32 "data/maps/WachunpelonCity/scripts.pory"
	delay 8
# 33 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 34 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 35 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 36 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, WachunpelonCity_Movement_OldMan1
# 37 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 38 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 40 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 41 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 42 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 48 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, WachunpelonCity_Movement_OldMan2
# 49 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_3, MSGBOX_DEFAULT
# 53 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 54 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 55 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_4, MSGBOX_AUTOCLOSE
# 58 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 59 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_FatMan::
# 64 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldMan::
# 70 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldWoman::
# 76 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldWoman_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_AquaGrunt::
# 81 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 82 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 83 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 84 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 86 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 87 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_AquaGrunt_Text_0, MSGBOX_AUTOCLOSE
# 91 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 92 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 93 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Woman_4::
# 99 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 100 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_4_Text_0, MSGBOX_AUTOCLOSE
# 101 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 102 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 103 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Tuber_F::
# 109 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_F_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_Tuber_M_Swimming::
# 115 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Tuber_M_Walking::
# 120 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Walking_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Man_4::
# 125 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_1::
# 131 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_1_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_OldManBeach::
# 137 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldManBeach_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Sailor::
# 143 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Sailor_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_2::
# 149 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 150 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 151 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_2_Text_0, MSGBOX_AUTOCLOSE
# 154 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 155 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 156 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Cook::
# 162 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 163 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_0, MSGBOX_AUTOCLOSE
# 169 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 170 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 171 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 172 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 173 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 174 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 175 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_1, MSGBOX_AUTOCLOSE
# 178 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 179 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 180 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 181 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_PolicemanTrigger::
# 186 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 187 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 188 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 189 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 190 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 191 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 192 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 193 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 194 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 195 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanTrigger_2
# 199 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanTrigger_1:
WachunpelonCity_EventScript_PolicemanTrigger_6:
# 201 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanTrigger_7
# 204 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 205 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 206 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_WalkBack
# 207 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 209 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 211 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 212 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 213 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 214 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 215 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 216 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 217 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 218 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 219 "data/maps/WachunpelonCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_WACHUNPELON_CITY
# 220 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 221 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 222 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 223 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 224 "data/maps/WachunpelonCity/scripts.pory"
	warp MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 225 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 226 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanTrigger_2:
# 196 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_1

WachunpelonCity_EventScript_PolicemanTrigger_7:
# 202 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_6


WachunpelonCity_EventScript_Policeman::
# 231 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 232 "data/maps/WachunpelonCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 233 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq WachunpelonCity_EventScript_Policeman_2
# 237 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanEast
WachunpelonCity_EventScript_Policeman_1:
	end

WachunpelonCity_EventScript_Policeman_2:
# 234 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanNorth
	goto WachunpelonCity_EventScript_Policeman_1


WachunpelonCity_EventScript_PolicemanNorth::
# 243 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 244 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanNorth_2
# 248 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanNorth_1:
WachunpelonCity_EventScript_PolicemanNorth_6:
# 250 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanNorth_7
# 253 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 254 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 255 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 256 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 257 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 258 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 260 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 261 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 262 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 263 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 264 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerNorth
# 265 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 266 "data/maps/WachunpelonCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_WACHUNPELON_CITY
# 267 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 268 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 269 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 270 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 271 "data/maps/WachunpelonCity/scripts.pory"
	warp MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 272 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 273 "data/maps/WachunpelonCity/scripts.pory"
	release
	end

WachunpelonCity_EventScript_PolicemanNorth_2:
# 245 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_1

WachunpelonCity_EventScript_PolicemanNorth_7:
# 251 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_6


WachunpelonCity_EventScript_PolicemanEast::
# 278 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 279 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 280 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 281 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 282 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 283 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 284 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 285 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanEast_2
# 289 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanEast_1:
WachunpelonCity_EventScript_PolicemanEast_6:
# 291 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanEast_7
# 294 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 295 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 296 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 297 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 299 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 301 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 302 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 303 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 304 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 305 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerEast
# 306 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/WachunpelonCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_WACHUNPELON_CITY
# 308 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 309 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 310 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 311 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 312 "data/maps/WachunpelonCity/scripts.pory"
	warp MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 313 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 314 "data/maps/WachunpelonCity/scripts.pory"
	release
	end

WachunpelonCity_EventScript_PolicemanEast_2:
# 286 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_1

WachunpelonCity_EventScript_PolicemanEast_7:
# 292 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanEast_6


# 375 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_WalkBack:
# 376 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 377 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_up
	step_end

# 380 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerNorth:
# 381 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 382 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 385 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerEast:
# 386 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 386 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
	step_end

# 389 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_OldMan1:
# 390 "data/maps/WachunpelonCity/scripts.pory"
	walk_right
# 390 "data/maps/WachunpelonCity/scripts.pory"
	walk_right
# 391 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
# 391 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 394 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_OldMan2:
# 395 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 395 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 396 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 396 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 397 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_right
	step_end

WachunpelonCity_EventScript_Mae_Text_0:
# 13 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm a diva and I deserve this…$"

WachunpelonCity_EventScript_Mae_Text_1:
# 15 "data/maps/WachunpelonCity/scripts.pory"
	.string "Yasss, this beach slayyyyys!\p No matter what you do, I'll\n never leave!\p I'm a DIVA!\n And I DESERVE this!$"

WachunpelonCity_EventScript_MaePostBattle_Text_0:
# 26 "data/maps/WachunpelonCity/scripts.pory"
	.string "MAE: Usually this is the part where\n somebody would kick me out, right?\p But this time we're just on a beach.$"

WachunpelonCity_EventScript_MaePostBattle_Text_1:
# 38 "data/maps/WachunpelonCity/scripts.pory"
	.string "OLD MAN: Excuse me!$"

WachunpelonCity_EventScript_MaePostBattle_Text_2:
# 42 "data/maps/WachunpelonCity/scripts.pory"
	.string "Please don't battle here!\p My grandkids are playing on\n the beach! It's dangerous!\p If I worked here, I would have\n asked you to leave!$"

WachunpelonCity_EventScript_MaePostBattle_Text_3:
# 50 "data/maps/WachunpelonCity/scripts.pory"
	.string "What's wrong with today's youth?\p Gosh… I hope my grandkids don't grow\n up and become like that…$"

WachunpelonCity_EventScript_MaePostBattle_Text_4:
# 56 "data/maps/WachunpelonCity/scripts.pory"
	.string "MAE: …\n I'm still not leaving.$"

WachunpelonCity_EventScript_FatMan_Text_0:
# 64 "data/maps/WachunpelonCity/scripts.pory"
	.string "Man…\n That's a nice ocean breeze.$"

WachunpelonCity_EventScript_OldMan_Text_0:
# 70 "data/maps/WachunpelonCity/scripts.pory"
	.string "This could be one of the last\n vacations we ever take! Hahaha!$"

WachunpelonCity_EventScript_OldWoman_Text_0:
# 76 "data/maps/WachunpelonCity/scripts.pory"
	.string "Don't say that!$"

WachunpelonCity_EventScript_AquaGrunt_Text_0:
# 87 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm not doing anything bad, I swear!\p I just moved out here after everything\n that happened.\p I just want to live quietly now.$"

WachunpelonCity_EventScript_Woman_4_Text_0:
# 100 "data/maps/WachunpelonCity/scripts.pory"
	.string "You can do it, honey!$"

WachunpelonCity_EventScript_Tuber_F_Text_0:
# 109 "data/maps/WachunpelonCity/scripts.pory"
	.string "I can't!\n It's too scary!$"

WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0:
# 115 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love swimming!$"

WachunpelonCity_EventScript_Tuber_M_Walking_Text_0:
# 120 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love running on the sand!$"

WachunpelonCity_EventScript_Man_4_Text_0:
# 125 "data/maps/WachunpelonCity/scripts.pory"
	.string "We came all the way from VERDANTURF.\n I work at the DAYCARE over there.$"

WachunpelonCity_EventScript_Woman_1_Text_0:
# 131 "data/maps/WachunpelonCity/scripts.pory"
	.string "My family can embarass me sometimes,\n but I still love them.$"

WachunpelonCity_EventScript_OldManBeach_Text_0:
# 137 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm on vacation with my family.\n I love seeing my grandkids having fun.$"

WachunpelonCity_EventScript_Sailor_Text_0:
# 143 "data/maps/WachunpelonCity/scripts.pory"
	.string "It can be hard work navigatin' these\n seas.$"

WachunpelonCity_EventScript_Woman_2_Text_0:
# 151 "data/maps/WachunpelonCity/scripts.pory"
	.string "I come here from LUSH ACREAGE all the\n time just for the coffee.\p It's so good!$"

WachunpelonCity_EventScript_Cook_Text_0:
# 163 "data/maps/WachunpelonCity/scripts.pory"
	.string "Hm… So he decided to use those spices…!\n Gosh… It's so yummy…\l Tasty…\l Scrumptious…\l Delicious…\l Savory…$"

WachunpelonCity_EventScript_Cook_Text_1:
# 175 "data/maps/WachunpelonCity/scripts.pory"
	.string "Excuse me!\p It's rude to bother people when they're\n eating!$"

WachunpelonCity_Text_Policeman1::
# 318 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p Most of the BIKERS have been arrested\n already.\p Only the boss along with a couple of\n members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanBikersRoute123::
# 335 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p I heard you drove those thugs away from\n ROUTE 123 as well.\p Most of them have been arrested\n already.\p Only the boss along with a couple of\n members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanNo::
# 354 "data/maps/WachunpelonCity/scripts.pory"
	.string "Come on. You've already helped me\n on this case before.\p This will be the last time.$"

WachunpelonCity_Text_Policeman2::
# 360 "data/maps/WachunpelonCity/scripts.pory"
	.string "Great! This time I have clearance to use\n force as necessary.\p It won't be a repeat of last time.\n I'll lead.$"

WachunpelonCity_Text_Mae::
# 367 "data/maps/WachunpelonCity/scripts.pory"
	.string "Huh?\n It's you again!\p You're seriously even trying to stop\n my vacation?!\p I'm a diva and I deserve this!$"
