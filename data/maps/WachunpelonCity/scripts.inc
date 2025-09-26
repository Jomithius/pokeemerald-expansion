WachunpelonCity_MapScripts::
# 2 "data/maps/WachunpelonCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WachunpelonCity_OnTransition
	.byte 0


WachunpelonCity_OnTransition::
# 6 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_SYS_DYNAMIC_LEVELS
	end


WachunpelonCity_EventScript_Mae::
# 11 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_SYS_BOSS_BATTLE
# 12 "data/maps/WachunpelonCity/scripts.pory"
	trainerbattle_single TRAINER_MAE_3, WachunpelonCity_Text_Mae, WachunpelonCity_EventScript_Mae_Text_0, WachunpelonCity_EventScript_MaePostBattle
# 13 "data/maps/WachunpelonCity/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 14 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Mae_Text_1, MSGBOX_NPC
	end


WachunpelonCity_EventScript_MaePostBattle::
# 23 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 24 "data/maps/WachunpelonCity/scripts.pory"
	clearflag FLAG_SYS_BOSS_BATTLE
# 25 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 29 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 30 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 31 "data/maps/WachunpelonCity/scripts.pory"
	delay 8
# 32 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 33 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 35 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, WachunpelonCity_Movement_OldMan1
# 36 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 37 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_1, MSGBOX_DEFAULT
# 38 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 39 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 40 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_2, MSGBOX_AUTOCLOSE
# 46 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 47 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 17, WachunpelonCity_Movement_OldMan2
# 48 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_3, MSGBOX_DEFAULT
# 52 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 53 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 54 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 55 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_MaePostBattle_Text_4, MSGBOX_AUTOCLOSE
# 57 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 58 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_FatMan::
# 63 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldMan::
# 69 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_OldWoman::
# 75 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldWoman_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_AquaGrunt::
# 80 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 81 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 82 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 83 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 85 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 86 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_AquaGrunt_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 91 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 92 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Woman_4::
# 98 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 99 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_4_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 101 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 102 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Tuber_F::
# 108 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_F_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_EventScript_Tuber_M_Swimming::
# 114 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Tuber_M_Walking::
# 119 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Tuber_M_Walking_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Man_4::
# 124 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Man_4_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_1::
# 130 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_1_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_OldManBeach::
# 136 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_OldManBeach_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Sailor::
# 142 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Sailor_Text_0, MSGBOX_NPC
	end


WachunpelonCity_EventScript_Woman_2::
# 148 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 149 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 150 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Woman_2_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 154 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 155 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_Cook::
# 161 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 162 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_0, MSGBOX_AUTOCLOSE
# 168 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 169 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 170 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 171 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 172 "data/maps/WachunpelonCity/scripts.pory"
	waitse
# 173 "data/maps/WachunpelonCity/scripts.pory"
	faceplayer
# 174 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_EventScript_Cook_Text_1, MSGBOX_AUTOCLOSE
# 177 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 178 "data/maps/WachunpelonCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 179 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 180 "data/maps/WachunpelonCity/scripts.pory"
	release
	end


WachunpelonCity_EventScript_PolicemanTrigger::
# 185 "data/maps/WachunpelonCity/scripts.pory"
	lockall
# 186 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 187 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 188 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 189 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 190 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 191 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 192 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 193 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 194 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanTrigger_2
# 198 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanTrigger_1:
WachunpelonCity_EventScript_PolicemanTrigger_6:
# 200 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanTrigger_7
# 203 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 204 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 205 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_WalkBack
# 206 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 207 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 208 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 210 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 211 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 212 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 213 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 214 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 215 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 216 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 217 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/WachunpelonCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_WACHUNPELON_CITY
# 219 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 220 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 221 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 222 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 223 "data/maps/WachunpelonCity/scripts.pory"
	warp MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 224 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 225 "data/maps/WachunpelonCity/scripts.pory"
	releaseall
	end

WachunpelonCity_EventScript_PolicemanTrigger_2:
# 195 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_1

WachunpelonCity_EventScript_PolicemanTrigger_7:
# 201 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanTrigger_6


WachunpelonCity_EventScript_Policeman::
# 230 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 231 "data/maps/WachunpelonCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 232 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq WachunpelonCity_EventScript_Policeman_2
# 236 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanWest
WachunpelonCity_EventScript_Policeman_1:
	end

WachunpelonCity_EventScript_Policeman_2:
# 233 "data/maps/WachunpelonCity/scripts.pory"
	goto WachunpelonCity_EventScript_PolicemanNorth
	goto WachunpelonCity_EventScript_Policeman_1


WachunpelonCity_EventScript_PolicemanNorth::
# 242 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 243 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanNorth_2
# 247 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanNorth_1:
WachunpelonCity_EventScript_PolicemanNorth_6:
# 249 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanNorth_7
# 252 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 253 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 254 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 255 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 257 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 258 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 259 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 260 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 261 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 262 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 263 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 264 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/WachunpelonCity/scripts.pory"
	callnative RemoveFollowingPokemon
# 266 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerNorth
# 267 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 268 "data/maps/WachunpelonCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_WACHUNPELON_CITY
# 269 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 270 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 271 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 272 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 273 "data/maps/WachunpelonCity/scripts.pory"
	warp MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 274 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 275 "data/maps/WachunpelonCity/scripts.pory"
	release
	end

WachunpelonCity_EventScript_PolicemanNorth_2:
# 244 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_1

WachunpelonCity_EventScript_PolicemanNorth_7:
# 250 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanNorth_6


WachunpelonCity_EventScript_PolicemanWest::
# 280 "data/maps/WachunpelonCity/scripts.pory"
	lock
# 281 "data/maps/WachunpelonCity/scripts.pory"
	playse SE_PIN
# 282 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 283 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 284 "data/maps/WachunpelonCity/scripts.pory"
	delay 16
# 285 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 286 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 287 "data/maps/WachunpelonCity/scripts.pory"
	goto_if_set FLAG_SYS_DEFEATED_SPEEDWAGON_ROUTE_123, WachunpelonCity_EventScript_PolicemanWest_2
# 291 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman1, MSGBOX_YESNO
WachunpelonCity_EventScript_PolicemanWest_1:
WachunpelonCity_EventScript_PolicemanWest_6:
# 293 "data/maps/WachunpelonCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WachunpelonCity_EventScript_PolicemanWest_7
# 296 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_Policeman2, MSGBOX_AUTOCLOSE
# 297 "data/maps/WachunpelonCity/scripts.pory"
	waitmessage
# 298 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 299 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 301 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/WachunpelonCity/scripts.pory"
	opendoor 46, 14
# 303 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 304 "data/maps/WachunpelonCity/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 305 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 1
# 306 "data/maps/WachunpelonCity/scripts.pory"
	removeobject 1
# 307 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 308 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/WachunpelonCity/scripts.pory"
	callnative RemoveFollowingPokemon
# 310 "data/maps/WachunpelonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WachunpelonCity_Movement_PlayerEast
# 311 "data/maps/WachunpelonCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/WachunpelonCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_WACHUNPELON_CITY
# 313 "data/maps/WachunpelonCity/scripts.pory"
	closedoor 46, 14
# 314 "data/maps/WachunpelonCity/scripts.pory"
	waitdooranim
# 315 "data/maps/WachunpelonCity/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_WACHUNPELON
# 316 "data/maps/WachunpelonCity/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 9
# 317 "data/maps/WachunpelonCity/scripts.pory"
	warp MAP_WACHUNPELON_CITY_SEWER, 26, 5
# 318 "data/maps/WachunpelonCity/scripts.pory"
	waitstate
# 319 "data/maps/WachunpelonCity/scripts.pory"
	release
	end

WachunpelonCity_EventScript_PolicemanWest_2:
# 288 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanBikersRoute123, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanWest_1

WachunpelonCity_EventScript_PolicemanWest_7:
# 294 "data/maps/WachunpelonCity/scripts.pory"
	msgbox WachunpelonCity_Text_PolicemanNo, MSGBOX_YESNO
	goto WachunpelonCity_EventScript_PolicemanWest_6


# 380 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_WalkBack:
# 381 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 382 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_up
	step_end

# 385 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerNorth:
# 386 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 387 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 390 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_PlayerEast:
# 391 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 391 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
	step_end

# 394 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_OldMan1:
# 395 "data/maps/WachunpelonCity/scripts.pory"
	walk_right
# 395 "data/maps/WachunpelonCity/scripts.pory"
	walk_right
# 396 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
# 396 "data/maps/WachunpelonCity/scripts.pory"
	walk_up
	step_end

# 399 "data/maps/WachunpelonCity/scripts.pory"
WachunpelonCity_Movement_OldMan2:
# 400 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 400 "data/maps/WachunpelonCity/scripts.pory"
	walk_down
# 401 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 401 "data/maps/WachunpelonCity/scripts.pory"
	walk_left
# 402 "data/maps/WachunpelonCity/scripts.pory"
	walk_in_place_right
	step_end

WachunpelonCity_EventScript_Mae_Text_0:
# 12 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm a diva and I deserve this…$"

WachunpelonCity_EventScript_Mae_Text_1:
# 14 "data/maps/WachunpelonCity/scripts.pory"
	.string "Yasss, this beach slayyyyys!\p No matter what you do, I'll\n never leave!\p I'm a DIVA!\n And I DESERVE this!$"

WachunpelonCity_EventScript_MaePostBattle_Text_0:
# 25 "data/maps/WachunpelonCity/scripts.pory"
	.string "MAE: Usually this is the part where\n somebody would kick me out, right?\p But this time we're just on a beach.$"

WachunpelonCity_EventScript_MaePostBattle_Text_1:
# 37 "data/maps/WachunpelonCity/scripts.pory"
	.string "OLD MAN: Excuse me!$"

WachunpelonCity_EventScript_MaePostBattle_Text_2:
# 41 "data/maps/WachunpelonCity/scripts.pory"
	.string "Please don't battle here!\p My grandkids are playing on\n the beach! It's dangerous!\p If I worked here, I would have\n asked you to leave!$"

WachunpelonCity_EventScript_MaePostBattle_Text_3:
# 49 "data/maps/WachunpelonCity/scripts.pory"
	.string "What's wrong with today's youth?\p Gosh… I hope my grandkids don't grow\n up and become like that…$"

WachunpelonCity_EventScript_MaePostBattle_Text_4:
# 55 "data/maps/WachunpelonCity/scripts.pory"
	.string "MAE: …\n I'm still not leaving.$"

WachunpelonCity_EventScript_FatMan_Text_0:
# 63 "data/maps/WachunpelonCity/scripts.pory"
	.string "Man…\n That's a nice ocean breeze.$"

WachunpelonCity_EventScript_OldMan_Text_0:
# 69 "data/maps/WachunpelonCity/scripts.pory"
	.string "This could be one of the last\n vacations we ever take! Hahaha!$"

WachunpelonCity_EventScript_OldWoman_Text_0:
# 75 "data/maps/WachunpelonCity/scripts.pory"
	.string "Don't say that!$"

WachunpelonCity_EventScript_AquaGrunt_Text_0:
# 86 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm not doing anything bad, I swear!\p I just moved out here after everything\n that happened.\p I just want to live quietly now.$"

WachunpelonCity_EventScript_Woman_4_Text_0:
# 99 "data/maps/WachunpelonCity/scripts.pory"
	.string "You can do it, honey!$"

WachunpelonCity_EventScript_Tuber_F_Text_0:
# 108 "data/maps/WachunpelonCity/scripts.pory"
	.string "I can't!\n It's too scary!$"

WachunpelonCity_EventScript_Tuber_M_Swimming_Text_0:
# 114 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love swimming!$"

WachunpelonCity_EventScript_Tuber_M_Walking_Text_0:
# 119 "data/maps/WachunpelonCity/scripts.pory"
	.string "I love running on the sand!$"

WachunpelonCity_EventScript_Man_4_Text_0:
# 124 "data/maps/WachunpelonCity/scripts.pory"
	.string "We came all the way from VERDANTURF.\n I work at the DAYCARE over there.$"

WachunpelonCity_EventScript_Woman_1_Text_0:
# 130 "data/maps/WachunpelonCity/scripts.pory"
	.string "My family can embarass me sometimes,\n but I still love them.$"

WachunpelonCity_EventScript_OldManBeach_Text_0:
# 136 "data/maps/WachunpelonCity/scripts.pory"
	.string "I'm on vacation with my family.\n I love seeing my grandkids having fun.$"

WachunpelonCity_EventScript_Sailor_Text_0:
# 142 "data/maps/WachunpelonCity/scripts.pory"
	.string "It can be hard work navigatin' these\n seas.$"

WachunpelonCity_EventScript_Woman_2_Text_0:
# 150 "data/maps/WachunpelonCity/scripts.pory"
	.string "I come here from LUSH ACREAGE all the\n time just for the coffee.\p It's so good!$"

WachunpelonCity_EventScript_Cook_Text_0:
# 162 "data/maps/WachunpelonCity/scripts.pory"
	.string "Hm… So he decided to use those spices…!\n Gosh… It's so yummy…\l Tasty…\l Scrumptious…\l Delicious…\l Savory…$"

WachunpelonCity_EventScript_Cook_Text_1:
# 174 "data/maps/WachunpelonCity/scripts.pory"
	.string "Excuse me!\p It's rude to bother people when they're\n eating!$"

WachunpelonCity_Text_Policeman1::
# 323 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p Most of the BIKERS have been arrested\n already.\p Only the boss along with a couple of\n members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanBikersRoute123::
# 340 "data/maps/WachunpelonCity/scripts.pory"
	.string "It's you! Thanks again for your help on\n ROUTE 110.\p I heard you drove those thugs away from\n ROUTE 123 as well.\p Most of them have been arrested\n already.\p Only the boss along with a couple of\n members are left now, and I've tracked\l them to their hideout here.\p Backup's actually coming this time, but\n I want to get the jump on them before\l they have a chance to escape…\p So, what do you say?\p Having a strong TRAINER like you to\n cover me would be reassuring.\p Can you help me out?$"

WachunpelonCity_Text_PolicemanNo::
# 359 "data/maps/WachunpelonCity/scripts.pory"
	.string "Come on. You've already helped me\n on this case before.\p This will be the last time.$"

WachunpelonCity_Text_Policeman2::
# 365 "data/maps/WachunpelonCity/scripts.pory"
	.string "Great! This time I have clearance to use\n force as necessary.\p It won't be a repeat of last time.\n I'll lead.$"

WachunpelonCity_Text_Mae::
# 372 "data/maps/WachunpelonCity/scripts.pory"
	.string "Huh?\n It's you again!\p You're seriously even trying to stop\n my vacation?!\p I'm a diva and I deserve this!$"
