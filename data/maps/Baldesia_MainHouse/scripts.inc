Baldesia_MainHouse_MapScripts::
# 12 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Baldesia_MainHouse_OnTransition
# 19 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Baldesia_MainHouse_OnWarp
# 14 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Baldesia_MainHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Baldesia_MainHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script_2 VAR_MOMO_ARIA_STATE, 3, Baldesia_MainHouse_EventScript_GoToChief
# 16 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script_2 VAR_MOMO_ARIA_STATE, 4, Baldesia_MainHouse_EventScript_GoToAltar
# 17 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script_2 VAR_MOMO_ARIA_STATE, 7, Baldesia_MainHouse_EventScript_LohanThanks
	.2byte 0


Baldesia_MainHouse_OnTransition::
# 23 "data/maps/Baldesia_MainHouse/scripts.pory"
	setrespawn HEAL_LOCATION_BALDESIA
# 24 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_TEMP_E
# 27 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 7, Baldesia_MainHouse_UpdateAriaPos
	end


# 31 "data/maps/Baldesia_MainHouse/scripts.pory"

# 32 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_OnWarp:
# 33 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Baldesia_MainHouse_EventScript_TurnPlayerNorth
# 34 "data/maps/Baldesia_MainHouse/scripts.pory"

# 35 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_EventScript_TurnPlayerNorth::
# 36 "data/maps/Baldesia_MainHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 37 "data/maps/Baldesia_MainHouse/scripts.pory"
	end

Baldesia_MainHouse_UpdateNPCPos::
# 42 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 14, 10
# 43 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 44 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 6, 11, 11
# 45 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 46 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_MainHouse_UpdateAriaPos::
# 51 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 28, 12, 7
# 52 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 29, 10, 6
# 53 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 29, MOVEMENT_TYPE_FACE_RIGHT
	return


Baldesia_MainHouse_EventScript_Clerk::
# 59 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_BALDESIA_MART
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	message gText_HowMayIServeYou
# 63 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 64 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_Pokemart
# 65 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 66 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 67 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Pokemart:
# 73 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 79 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 80 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 81 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_LURE
# 82 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_MochiClerk::
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_BALDESIA_MART
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	message Baldesia_MainHouse_EventScript_MochiClerk_Text_0
# 90 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_PokemartMochi
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_MochiClerk_Text_1, MSGBOX_DEFAULT
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 94 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 95 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_PokemartMochi:
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 113 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 114 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CALM_MINT
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 24
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 279 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 297 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 327 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 332 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 335 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 350 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 351 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 358 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 370 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 380 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_VISITED_BALDESIA
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 392 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 394 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_MOMO_BALDESIA_MAIN_HOUSE
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_PANINI_ARIA_MAIN_HOUSE
# 397 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 28
# 398 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 29
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 401 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 409 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 415 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 417 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 420 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 421 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 432 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 433 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 434 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 435 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 29
# 436 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_PANINI_ARIA_MAIN_HOUSE
# 437 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 438 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceRight
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 445 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 446 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 28, Baldesia_MainHouse_Movement_AriaLeaves
# 447 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 448 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 28
# 450 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 28
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_BENNIS_BALDESIA_MAIN_HOUSE
# 452 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_PANINI_ARIA_MAIN_HOUSE
# 453 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 454 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 455 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 5
# 456 "data/maps/Baldesia_MainHouse/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 457 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_SYS_BENNIS_FINAL_REMATCH
# 458 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_COMPLETED_BALDESIA
# 460 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 465 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 466 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 467 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 468 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 469 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 470 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 471 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 476 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 477 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 479 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 480 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 482 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 484 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 485 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 486 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 487 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 498 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 504 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 505 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 506 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 515 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 520 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 524 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 525 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 526 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 528 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 529 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 516 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 517 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 518 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 521 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 535 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 536 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 537 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 538 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 539 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 540 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 541 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 542 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 548 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 549 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 550 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_AUTOCLOSE
# 554 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 555 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 557 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 562 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 569 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 575 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 570 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 583 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 592 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 597 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 593 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 605 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 609 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 606 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 617 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 618 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 619 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_RG_NET_CENTER
# 620 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_KimonoGirl_Text_0, MSGBOX_YESNO
# 624 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 630 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_KimonoGirl_Text_1, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 632 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 633 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 634 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 635 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 636 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 637 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 625 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 626 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 627 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 750 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 779 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 784 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 798 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 798 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 798 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 798 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 798 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 801 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
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
Baldesia_MainHouse_Movement_RightGuardReturn:
# 808 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 808 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 808 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 809 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 809 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 809 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 809 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 809 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 809 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 809 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 810 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 817 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 818 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
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
Baldesia_MainHouse_Movement_AsakLeave:
# 825 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 825 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 825 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 825 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 826 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 826 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 826 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 827 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 827 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 827 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 827 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 830 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 831 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 832 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 833 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 834 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 839 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 842 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 843 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 843 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 843 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 844 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 844 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 844 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 844 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 844 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 845 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 845 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 845 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 845 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello, valued customer.\nI'm selling mochi and snacks.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy BERTHA”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p I'm gonna head back to MOSSDEEP and\n get some more training in!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 467 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 498 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 506 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 537 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 538 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 538 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 538 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 539 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 550 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n train more!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 562 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 570 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 575 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 583 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the BALD MAIDEN needs\n to play the POKé FLUTE to wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 593 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 597 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 606 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 609 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_EventScript_KimonoGirl_Text_0:
# 620 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello, and welcome.\p I can restore your tired POKéMON\n to full health.\p Would you like to rest your POKéMON?$"

Baldesia_MainHouse_EventScript_KimonoGirl_Text_1:
# 630 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I hope to see you again.$"

Baldesia_MainHouse_TextLohan::
# 641 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the BALD MAIDEN of\n the ASAKURA family is required to\l travel to the altar to perform a\l sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 657 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the BALD\l MAIDEN is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 672 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and HOENN's CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 682 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 688 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 701 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But, I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\p There are stories of it passed down,\n but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p I've restored your POKéMON\n to full health.\p I hope to see you again.$"
