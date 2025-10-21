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
# 25 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 5, Baldesia_MainHouse_UpdateNPCPos
# 26 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 6, Baldesia_MainHouse_UpdateNPCPos
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
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_MainHouse_UpdateAriaPos::
# 47 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 28, 12, 7
# 48 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 29, 10, 6
# 49 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 29, MOVEMENT_TYPE_FACE_RIGHT
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
	.2byte ITEM_ULTRA_BALL
# 70 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 71 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 73 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_LURE
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_MochiClerk::
# 82 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 83 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 84 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_BALDESIA_MART
# 85 "data/maps/Baldesia_MainHouse/scripts.pory"
	message Baldesia_MainHouse_EventScript_MochiClerk_Text_0
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_PokemartMochi
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_MochiClerk_Text_1, MSGBOX_DEFAULT
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 90 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 95 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_PokemartMochi:
# 96 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CALM_MINT
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 119 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 24
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_NORMAL
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 279 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 309 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 327 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 332 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 339 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 350 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 351 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 362 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 363 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_NONE
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_VISITED_BALDESIA
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_MOMO_BALDESIA_MAIN_HOUSE
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_PANINI_ARIA_MAIN_HOUSE
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
# 394 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 401 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 404 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 405 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 409 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 415 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 417 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 427 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 428 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 29
# 429 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_PANINI_ARIA_MAIN_HOUSE
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 432 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceRight
# 433 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 434 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 438 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 28, Baldesia_MainHouse_Movement_AriaLeaves
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 28
# 443 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 28
# 444 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_BENNIS_BALDESIA_MAIN_HOUSE
# 445 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_PANINI_ARIA_MAIN_HOUSE
# 446 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 447 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 448 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 5
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 450 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_SYS_BENNIS_FINAL_REMATCH
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 452 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_COMPLETED_BALDESIA
# 453 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 458 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 460 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 462 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 463 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 464 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 469 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 470 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 471 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 472 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 473 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 474 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 475 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 476 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 477 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 479 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 480 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 485 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 497 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 498 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 499 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 506 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 507 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 508 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 517 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 518 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 519 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 521 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 522 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 523 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 509 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 510 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 511 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 528 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 529 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 533 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 534 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 535 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 536 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 541 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 542 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_AUTOCLOSE
# 547 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 548 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 549 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 550 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 555 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 562 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 568 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 563 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 576 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 585 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 590 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 586 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 598 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 602 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 599 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 610 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 611 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 612 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_RG_NET_CENTER
# 613 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_KimonoGirl_Text_0, MSGBOX_YESNO
# 617 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 623 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_KimonoGirl_Text_1, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 625 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 626 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 627 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 628 "data/maps/Baldesia_MainHouse/scripts.pory"
	savebgm MUS_DUMMY
# 629 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 630 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 618 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 619 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 620 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 744 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 744 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 745 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 750 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 763 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 769 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 778 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 779 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 780 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 781 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 784 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 789 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 790 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 795 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 796 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 797 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 800 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 801 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 801 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 801 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 802 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 803 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 806 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 807 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 807 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 807 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 810 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 811 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 812 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 813 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 814 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 817 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 818 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 818 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 818 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 818 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 819 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 819 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 819 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 820 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 820 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 820 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 820 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 823 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 824 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 825 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 826 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 827 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 830 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 831 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 831 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 831 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 832 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 835 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 836 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 836 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 836 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 837 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 838 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 85 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello, valued customer.\nI'm selling mochi and snacks.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “bald ritual”!\n How would I know what that means?\p I'm lucky that BALDASARIO figured out\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 351 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 434 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p I'm gonna head back to MOSSDEEP and\n get some more training in!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 460 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 476 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 485 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 499 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n train more!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 555 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 563 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 568 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 576 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the BALD MAIDEN needs\n to play the POKé FLUTE to wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 586 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 590 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 599 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 602 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_EventScript_KimonoGirl_Text_0:
# 613 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello, and welcome.\p I can restore your tired POKéMON\n to full health.\p Would you like to rest your POKéMON?$"

Baldesia_MainHouse_EventScript_KimonoGirl_Text_1:
# 623 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I hope to see you again.$"

Baldesia_MainHouse_TextLohan::
# 634 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the BALD MAIDEN of\n the ASAKURA family is required to\l travel to the altar to perform a\l sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 650 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the BALD\l MAIDEN is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 665 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and HOENN's CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 675 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 681 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 694 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 702 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But, I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\p There are stories of it passed down,\n but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p I've restored your POKéMON\n to full health.\p I hope to see you again.$"
