Baldesia_MainHouse_MapScripts::
# 10 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Baldesia_MainHouse_OnTransition
# 11 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 17 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Baldesia_MainHouse_OnWarp
# 12 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Baldesia_MainHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Baldesia_MainHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script_2 VAR_MOMO_ARIA_STATE, 3, Baldesia_MainHouse_EventScript_GoToChief
# 14 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script_2 VAR_MOMO_ARIA_STATE, 4, Baldesia_MainHouse_EventScript_GoToAltar
# 15 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script_2 VAR_MOMO_ARIA_STATE, 7, Baldesia_MainHouse_EventScript_LohanThanks
	.2byte 0


Baldesia_MainHouse_OnTransition::
# 21 "data/maps/Baldesia_MainHouse/scripts.pory"
	setrespawn HEAL_LOCATION_BALDESIA
# 22 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_TEMP_E
# 23 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 5, Baldesia_MainHouse_UpdateNPCPos
# 24 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 6, Baldesia_MainHouse_UpdateNPCPos
# 25 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 7, Baldesia_MainHouse_UpdateAriaPos
	end


Baldesia_MainHouse_OnWarp::
# 30 "data/maps/Baldesia_MainHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


Baldesia_MainHouse_UpdateNPCPos::
# 35 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 19, 9
# 36 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 37 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 6, 11, 11
# 38 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 39 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_MainHouse_UpdateAriaPos::
# 44 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 12, 7
# 45 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


Baldesia_MainHouse_EventScript_Clerk::
# 50 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 51 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 52 "data/maps/Baldesia_MainHouse/scripts.pory"
	message gText_HowMayIServeYou
# 53 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 54 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_Pokemart
# 55 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 56 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Pokemart:
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 63 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 64 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 65 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 66 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 67 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_LURE
# 68 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ELIXIR
# 69 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 70 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 71 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_MochiClerk::
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	message Baldesia_MainHouse_EventScript_MochiClerk_Text_0
# 79 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 80 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_PokemartMochi
# 81 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_MochiClerk_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_PokemartMochi:
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 119 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 94 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 95 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 96 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 279 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 297 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 309 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 332 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 335 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 350 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 351 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_LANDMARK_BALDESIA
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 362 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 363 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 370 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 380 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 392 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 394 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 401 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaLeaves
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 404 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 405 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 409 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 5
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_SYS_BENNIS_FINAL_REMATCH
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 420 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 421 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 429 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 432 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 433 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 434 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 435 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 436 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 437 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 438 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 445 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 457 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 458 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 466 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 467 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 468 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 473 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 477 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 479 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 482 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 469 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 470 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 471 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 474 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 488 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 489 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 490 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 493 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 494 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 495 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 496 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 509 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 516 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 522 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 517 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 539 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 540 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 552 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 553 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 564 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 565 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 566 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 567 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 573 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 575 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 576 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 577 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 578 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 568 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 569 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 570 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 692 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 693 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 694 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 698 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 699 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 700 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 700 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 701 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 704 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 705 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 706 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 706 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 706 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 706 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 706 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 707 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 707 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 711 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 712 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 713 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 717 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 718 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 719 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 725 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 726 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 731 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 744 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 750 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 781 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 784 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 784 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 784 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 784 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello.\nI'm selling mochi.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 81 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy ritual”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p We'll be ready for a rematch soon,\n {PLAYER}!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 420 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 436 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 445 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 490 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n more training!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 509 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 517 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 522 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the Maiden needs to\n play the POKé FLUTE to truly wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 540 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 553 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_TextLohan::
# 582 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the Maiden of the\n ASAKURA family is required to travel\l to the altar to perform a sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 597 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 612 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and the HOENN CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 622 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 628 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 641 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 649 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\n There are stories of it passed down,\l but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 663 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 683 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
