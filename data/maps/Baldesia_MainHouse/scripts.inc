Baldesia_MainHouse_MapScripts::
# 10 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Baldesia_MainHouse_OnTransition
# 11 "data/maps/Baldesia_MainHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
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
# 20 "data/maps/Baldesia_MainHouse/scripts.pory"
	setrespawn HEAL_LOCATION_BALDESIA
# 21 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_TEMP_E
# 22 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 5, Baldesia_MainHouse_UpdateNPCPos
# 23 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 6, Baldesia_MainHouse_UpdateNPCPos
# 24 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 7, Baldesia_MainHouse_UpdateAriaPos
	end


Baldesia_MainHouse_UpdateNPCPos::
# 29 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 19, 9
# 30 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 31 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 6, 11, 11
# 32 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 33 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_MainHouse_UpdateAriaPos::
# 38 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 12, 7
# 39 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return


Baldesia_MainHouse_EventScript_Clerk::
# 44 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 45 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 46 "data/maps/Baldesia_MainHouse/scripts.pory"
	message gText_HowMayIServeYou
# 47 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 48 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_Pokemart
# 49 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 50 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 54 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Pokemart:
# 55 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 56 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 57 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 58 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 59 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_MAX_LURE
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ELIXIR
# 63 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 64 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 65 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 66 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_MochiClerk::
# 70 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 71 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	message Baldesia_MainHouse_EventScript_MochiClerk_Text_0
# 73 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	pokemart Baldesia_MainHouse_PokemartMochi
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_MochiClerk_Text_1, MSGBOX_DEFAULT
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


	.align 2
# 80 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_PokemartMochi:
# 81 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 82 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
# 83 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 84 "data/maps/Baldesia_MainHouse/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 90 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 113 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 114 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
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
	removeobject 22
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 94 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 95 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 96 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
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
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 297 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 309 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 327 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 332 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 339 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 350 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 351 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 358 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 362 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 363 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 370 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 392 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 397 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaLeaves
# 398 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 401 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 404 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 405 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 415 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 421 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 427 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 428 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 429 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 432 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 437 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 443 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 450 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 458 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 460 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 465 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 469 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 470 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 471 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 473 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 474 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 475 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 462 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 463 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 466 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 480 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 482 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 484 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 485 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 486 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 487 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 488 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 493 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 508 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 509 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 522 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 531 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 536 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 548 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 545 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 557 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 558 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 559 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 565 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 567 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 568 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 569 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 570 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 560 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 561 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 562 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 682 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 683 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 683 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 684 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 685 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 686 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 689 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 692 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 692 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 693 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 698 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 698 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 698 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 698 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 698 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 699 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 699 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 702 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 703 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 704 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 705 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 708 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 710 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 711 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 714 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 715 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 717 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 718 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 719 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 720 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 725 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 725 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 725 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 734 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 734 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 734 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 734 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 734 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 735 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 736 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 740 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 740 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 740 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 741 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 742 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 745 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 746 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 750 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 751 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 752 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 753 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 756 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 758 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
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
	step_end

# 762 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 763 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 764 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 765 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 768 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 769 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 769 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 769 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 770 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 774 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 774 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 774 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 775 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 776 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello.\nPlease take a look at my wares.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy ritual”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 392 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p We'll be ready for a rematch soon,\n {PLAYER}!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 428 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 437 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 443 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 482 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 484 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 493 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n more training!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 509 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 522 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the Maiden needs to\n play the POKé FLUTE to truly wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 532 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 536 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 545 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 548 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_TextLohan::
# 574 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the Maiden of the\n ASAKURA family is required to travel\l to the altar to perform a sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 604 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and the HOENN CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 614 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 620 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 633 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 641 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\n There are stories of it passed down,\l but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 655 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 675 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
