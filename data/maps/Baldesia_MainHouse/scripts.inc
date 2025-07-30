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
	.2byte ITEM_NONE

Baldesia_MainHouse_EventScript_GoToChief::
# 85 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 113 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 114 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 90 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 94 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 95 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 96 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 218 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 309 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 327 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 334 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 335 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 336 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 339 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_LANDMARK_BALDESIA
# 349 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 358 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 362 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 363 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 370 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 373 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 380 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 389 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 394 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaLeaves
# 396 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 397 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 398 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 401 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 409 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 420 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 421 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 427 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 428 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 429 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 435 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 447 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 448 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 456 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 457 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 458 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 463 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 467 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 468 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 469 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 471 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 472 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 473 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 460 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 464 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 479 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 480 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 482 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 484 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 485 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 486 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 499 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 506 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 512 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 507 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 520 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 529 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 534 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 542 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 546 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 554 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 555 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 557 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 563 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 565 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 566 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 567 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 568 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 558 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 559 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 560 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 680 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 681 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 681 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 682 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 683 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 684 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 687 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 688 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 689 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 694 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 695 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 700 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 701 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 702 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 703 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 706 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 707 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 708 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 712 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 713 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 714 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 715 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 716 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 717 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 718 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 721 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 722 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 723 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 726 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 727 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 728 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 731 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 733 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 734 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 737 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 738 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 739 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 740 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 743 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 744 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 744 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 744 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 747 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 748 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 749 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 750 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 750 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
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
	step_end

# 754 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 755 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 755 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 755 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 755 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 756 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 756 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 756 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 757 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 760 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 761 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 762 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 762 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 763 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 766 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 767 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 768 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 771 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 772 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 773 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 774 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 774 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 774 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 774 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_MochiClerk_Text_0:
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hello.\nI'm selling mochi.$"

Baldesia_MainHouse_EventScript_MochiClerk_Text_1:
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for your patronage.$"

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy ritual”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p We'll be ready for a rematch soon,\n {PLAYER}!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 435 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 480 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 481 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 482 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 491 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n more training!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 499 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 507 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 512 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 520 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the Maiden needs to\n play the POKé FLUTE to truly wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 534 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 546 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_TextLohan::
# 572 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the Maiden of the\n ASAKURA family is required to travel\l to the altar to perform a sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 587 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 602 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and the HOENN CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 612 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 618 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 631 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 639 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\n There are stories of it passed down,\l but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 653 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 673 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
