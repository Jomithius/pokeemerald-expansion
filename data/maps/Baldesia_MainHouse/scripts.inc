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
	message gText_HowMayIServeYou
# 59 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_Pokemart
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 66 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Pokemart:
# 67 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 68 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 69 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 70 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 71 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 73 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_LURE
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ELIXIR
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_MochiClerk::
# 82 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 83 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 84 "data/maps/Baldesia_MainHouse/scripts.pory"
	message Baldesia_MainHouse_EventScript_MochiClerk_Text_0
# 85 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_PokemartMochi
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_MochiClerk_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_PokemartMochi:
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 94 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MUSCLE_MOCHI
# 95 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_RESIST_MOCHI
# 96 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 113 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 114 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 119 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 279 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 309 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 327 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 332 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 335 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 358 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 362 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 363 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_LANDMARK_BALDESIA
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 380 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 397 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 398 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 401 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 404 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 405 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaLeaves
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 415 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 417 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 5
# 420 "data/maps/Baldesia_MainHouse/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 421 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_SYS_BENNIS_FINAL_REMATCH
# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 428 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 429 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 432 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 433 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 434 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 443 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 444 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 445 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 446 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 447 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 448 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 450 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 455 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 467 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 468 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 469 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 476 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 477 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 487 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 488 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 489 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 493 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 479 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 480 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 484 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 498 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 499 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 500 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 502 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 503 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 504 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 505 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 506 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 511 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 519 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 526 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 527 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 540 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 549 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 554 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 550 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 562 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 566 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 563 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 574 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 575 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 576 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 577 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 583 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 585 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 586 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 587 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 588 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 578 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 579 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 580 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 700 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 701 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 701 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 702 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 703 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 704 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 707 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 708 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 711 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 714 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 715 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 717 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 717 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 720 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 721 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 726 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 734 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 759 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 763 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 768 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 769 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 769 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 769 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 769 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 774 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 780 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 781 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 783 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 791 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 792 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 793 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 794 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 84 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello.\nI'm selling mochi.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy ritual”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 332 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p We'll be ready for a rematch soon,\n {PLAYER}!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 446 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 455 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 469 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 500 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 502 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 511 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n more training!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 519 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 527 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 540 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the Maiden needs to\n play the POKé FLUTE to truly wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 550 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 554 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 563 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 566 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_TextLohan::
# 592 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the Maiden of the\n ASAKURA family is required to travel\l to the altar to perform a sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 607 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 622 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and the HOENN CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 632 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 638 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 651 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 659 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\n There are stories of it passed down,\l but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 673 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 693 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
