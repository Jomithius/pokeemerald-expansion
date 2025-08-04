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
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 114 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 297 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 327 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 335 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 339 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 350 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 351 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 358 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_LANDMARK_BALDESIA
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 370 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 380 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 392 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 394 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 397 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 398 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 404 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 405 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaLeaves
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 409 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 5
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	addvar VAR_FINAL_REMATCH_STATE, 1
# 415 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_SYS_BENNIS_FINAL_REMATCH
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_JIMMY_FINAL_REMATCH_CALL_STEP_COUNTER, 0
# 417 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 427 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 428 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 433 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 434 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 435 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 436 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 437 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 438 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 443 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 444 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 455 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 462 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 463 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 470 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 471 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 472 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 477 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 482 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 485 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 486 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 487 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 473 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 474 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 475 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 493 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 494 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 495 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 496 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 497 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 498 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 499 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 500 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 505 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 520 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 526 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 521 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 534 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 548 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 560 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 557 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 568 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 569 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 570 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 571 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 577 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 579 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 580 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 581 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 582 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 572 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 573 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 574 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 694 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 695 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 695 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 698 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 701 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 702 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 703 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 704 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 704 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 705 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 708 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 711 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 711 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 714 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 715 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 717 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 720 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 721 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 726 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 731 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 740 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 745 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
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
Baldesia_MainHouse_Movement_AriaCharges:
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 762 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 763 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 763 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 763 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 763 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 768 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
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
Baldesia_MainHouse_Movement_LohanReturns:
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 777 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 780 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 781 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 781 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 781 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 782 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 785 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 786 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 787 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 788 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 84 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello.\nI'm selling mochi.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy ritual”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p We'll be ready for a rematch soon,\n {PLAYER}!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 455 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 463 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 494 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 495 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 495 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 495 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 496 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 505 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n more training!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 521 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 526 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 534 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the Maiden needs to\n play the POKé FLUTE to truly wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 548 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 557 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 560 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_TextLohan::
# 586 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the Maiden of the\n ASAKURA family is required to travel\l to the altar to perform a sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 616 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and the HOENN CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 626 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 632 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 645 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 653 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\n There are stories of it passed down,\l but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 667 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 687 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
