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

# 33 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_EventScript_TurnPlayerNorth::
# 34 "data/maps/Baldesia_MainHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 35 "data/maps/Baldesia_MainHouse/scripts.pory"
	end

Baldesia_MainHouse_UpdateNPCPos::
# 40 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 14, 10
# 41 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 42 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 6, 11, 11
# 43 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 44 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_MainHouse_UpdateAriaPos::
# 49 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 12, 7
# 50 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


Baldesia_MainHouse_EventScript_Clerk::
# 55 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 56 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 57 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_BALDESIA_MART
# 58 "data/maps/Baldesia_MainHouse/scripts.pory"
	message gText_HowMayIServeYou
# 59 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_Pokemart
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 63 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 64 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 68 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Pokemart:
# 69 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 70 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 71 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 73 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_LURE
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ELIXIR
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 79 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 80 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_MochiClerk::
# 84 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 85 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_BALDESIA_MART
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	message Baldesia_MainHouse_EventScript_MochiClerk_Text_0
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_PokemartMochi
# 90 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_MochiClerk_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_PokemartMochi:
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CALM_MINT
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 119 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 24
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 279 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 297 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 309 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 327 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 335 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 339 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 350 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 351 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 358 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 362 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 363 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 370 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 380 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_LANDMARK_BALDESIA
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxy 7, 16, 10
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectnewmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxy 6, 11, 11
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectnewmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
# 392 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Baldesia_MainHouse_UpdateNPCPos
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	special DrawWholeMapView
# 394 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 397 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 404 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 405 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 409 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 415 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 417 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 420 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 421 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 427 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 428 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 429 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 432 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 433 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 434 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 435 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 436 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaLeaves
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 443 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 444 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 445 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 446 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 447 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 448 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 5
# 450 "data/maps/Baldesia_MainHouse/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_SYS_BENNIS_FINAL_REMATCH
# 452 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 453 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_COMPLETED_BALDESIA
# 454 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 460 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 462 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 463 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 464 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 465 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 470 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 471 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 472 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 473 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 474 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 475 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 476 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 477 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 479 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 480 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 486 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 498 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 499 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 500 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 507 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 508 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 509 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 518 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 519 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 520 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 522 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 523 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 524 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 510 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 511 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 512 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 515 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 529 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 533 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 534 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 535 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 536 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 537 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 542 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_AUTOCLOSE
# 548 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 549 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 550 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 551 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 563 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 569 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 564 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 577 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 586 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 591 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 587 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 599 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 603 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 600 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 611 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 612 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 613 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_RG_NET_CENTER
# 614 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_KimonoGirl_Text_0, MSGBOX_YESNO
# 618 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 624 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_KimonoGirl_Text_1, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 626 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 627 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 628 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 629 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 630 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 631 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 619 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 620 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 621 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 744 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 745 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 745 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 755 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 779 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 780 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 781 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 798 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 801 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 803 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 804 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 807 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 808 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 808 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 808 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 811 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 815 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 815 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 815 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 815 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 818 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 819 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 819 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 819 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 819 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 820 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 820 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 820 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 821 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 821 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 821 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 821 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 824 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 825 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 826 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 827 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 828 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 831 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 832 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 832 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 832 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 833 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 836 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 839 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 839 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 839 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 839 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello, valued customer.\nI'm selling mochi and snacks.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 90 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy BERTHA”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 421 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 436 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p I'm gonna head back to MOSSDEEP and\n get some more training in!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 477 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 486 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 500 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 533 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n train more!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 564 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 569 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 577 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the BALD MAIDEN needs\n to play the POKé FLUTE to wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 587 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 591 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 600 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 603 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_EventScript_KimonoGirl_Text_0:
# 614 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello, and welcome.\p I can restore your tired POKéMON\n to full health.\p Would you like to rest your POKéMON?$"

Baldesia_MainHouse_EventScript_KimonoGirl_Text_1:
# 624 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I hope to see you again.$"

Baldesia_MainHouse_TextLohan::
# 635 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the BALD MAIDEN of\n the ASAKURA family is required to\l travel to the altar to perform a\l sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 651 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the BALD\l MAIDEN is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 666 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and HOENN's CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 676 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 682 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 695 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 703 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But, I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\p There are stories of it passed down,\n but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 717 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p I've restored your POKéMON\n to full health.\p I hope to see you again.$"
