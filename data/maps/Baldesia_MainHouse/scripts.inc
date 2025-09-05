Baldesia_MainHouse_MapScripts::
# 10 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Baldesia_MainHouse_OnTransition
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


# 29 "data/maps/Baldesia_MainHouse/scripts.pory"

# 30 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_OnWarp:
# 31 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Baldesia_MainHouse_EventScript_TurnPlayerNorth
# 32 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte 0
# 33 "data/maps/Baldesia_MainHouse/scripts.pory"

# 34 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_EventScript_TurnPlayerNorth::
# 35 "data/maps/Baldesia_MainHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 36 "data/maps/Baldesia_MainHouse/scripts.pory"
	end

Baldesia_MainHouse_UpdateNPCPos::
# 41 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 19, 9
# 42 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 43 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 6, 11, 11
# 44 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 45 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_MainHouse_UpdateAriaPos::
# 50 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 12, 7
# 51 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


Baldesia_MainHouse_EventScript_Clerk::
# 56 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 57 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 58 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_BALDESIA_MART
# 59 "data/maps/Baldesia_MainHouse/scripts.pory"
	message gText_HowMayIServeYou
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_Pokemart
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 63 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 64 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 69 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Pokemart:
# 70 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 71 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 73 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_LURE
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ELIXIR
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 79 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 80 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 81 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_MochiClerk::
# 85 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_BALDESIA_MART
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	message Baldesia_MainHouse_EventScript_MochiClerk_Text_0
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 90 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_PokemartMochi
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_MochiClerk_Text_1, MSGBOX_DEFAULT
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 94 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_PokemartMochi:
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MUSCLE_MOCHI
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_RESIST_MOCHI
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 113 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 114 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 119 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_PECHARUNT, FALSE
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmoncry
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmoncry
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 279 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 332 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 335 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 339 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 358 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 370 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_LANDMARK_BALDESIA
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 392 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 394 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 397 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 398 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 401 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 409 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 415 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 417 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaLeaves
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 427 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 428 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 429 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 5
# 432 "data/maps/Baldesia_MainHouse/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 433 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_SYS_BENNIS_FINAL_REMATCH
# 434 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 435 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 443 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 444 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 445 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 446 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 452 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 453 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 454 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 455 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 456 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 457 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 458 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 460 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 462 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 467 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 473 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 479 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 480 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 488 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 489 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 490 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 495 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 499 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 500 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 503 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 504 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 505 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 493 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 496 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 510 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 511 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 512 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 515 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 516 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 517 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 518 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 523 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 538 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 539 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 552 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 561 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 566 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 562 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 574 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 578 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 575 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 586 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 587 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 588 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_RG_NET_CENTER
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_KimonoGirl_Text_0, MSGBOX_YESNO
# 593 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 599 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_KimonoGirl_Text_1, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 602 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 603 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 604 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 605 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 606 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 594 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 595 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 596 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 719 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 720 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 720 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 721 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 726 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 734 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 740 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 745 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 755 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 756 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 762 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 762 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 762 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 779 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 789 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 789 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 789 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 799 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 800 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 801 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 801 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 805 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 806 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 806 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 806 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 807 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 810 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 811 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 811 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 811 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello.\nI'm selling mochi.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy ritual”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p We'll be ready for a rematch soon,\n {PLAYER}!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 458 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 467 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 473 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 512 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 523 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n more training!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 539 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 552 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the BALD MAIDEN needs\n to play the POKé FLUTE to wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 562 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 566 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 575 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 578 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_EventScript_KimonoGirl_Text_0:
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello, and welcome.\p I can restore your tired POKéMON\n to full health.\p Would you like to rest your POKéMON?$"

Baldesia_MainHouse_EventScript_KimonoGirl_Text_1:
# 599 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I hope to see you again.$"

Baldesia_MainHouse_TextLohan::
# 610 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the BALD MAIDEN of\n the ASAKURA family is required to\l travel to the altar to perform a\l sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 626 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 641 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and HOENN's CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 651 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 657 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 670 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 678 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\n There are stories of it passed down,\l but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 692 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 712 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p I've restored your POKéMON\n to full health.\p I hope to see you again.$"
