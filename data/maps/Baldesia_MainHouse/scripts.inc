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


Baldesia_MainHouse_EventScript_GoToChief::
# 44 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 45 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 46 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 68 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 69 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 70 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 71 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 73 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 79 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 80 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 82 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 83 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 84 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 85 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 47 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 48 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 49 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 50 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 51 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 52 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 53 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 54 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 55 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 56 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 58 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 59 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 63 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 64 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 65 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 94 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 95 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 96 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 113 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 114 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 119 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 209 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 210 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 227 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 228 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 297 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_LohanThanks::
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_LohanThankYou, MSGBOX_AUTOCLOSE
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	closemessage
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 327 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Baldesia_MainHouse_Movement_LohanReturns
# 328 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 329 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_AriaRecievesArmor, MSGBOX_AUTOCLOSE
# 330 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Baldesia_MainHouse_Movement_BennisToPlayer
# 332 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_0, MSGBOX_AUTOCLOSE
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 338 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 339 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 340 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 341 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 4
# 342 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 6
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 346 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 347 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_LohanThanks_Text_1, MSGBOX_AUTOCLOSE
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaLeaves
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 7
# 358 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_ARIA_BALDESIA_MAIN_HOUSE
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_REMATCH_TRAINERS_BENNIS_DOJO
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 8
# 361 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 366 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 370 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 371 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 372 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 380 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 385 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 386 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 388 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 405 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 414 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 415 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 421 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 427 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 429 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 417 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 436 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 437 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 438 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 441 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 443 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 444 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 457 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 464 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 470 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 465 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Lohan::
# 487 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 488 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 500 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 7
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 504 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 512 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 513 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 515 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 521 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 523 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 524 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 525 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 526 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 516 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 517 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 518 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 638 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 639 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 639 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 640 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 641 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 642 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 645 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 646 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 647 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 648 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 648 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 649 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 652 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 653 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 654 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 654 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 654 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 654 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 654 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 655 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 655 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 658 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 659 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 660 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 661 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 664 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 665 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 666 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 667 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 670 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 671 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 672 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 673 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 674 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 675 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 676 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 679 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 680 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 680 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 680 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 680 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 680 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 680 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 680 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 681 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 681 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 681 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 684 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 685 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 685 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 685 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 685 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 685 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 685 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 685 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 686 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 686 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 686 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 686 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 686 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 689 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 690 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 691 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 692 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 695 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 696 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 697 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 698 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 701 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 702 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 702 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 702 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 705 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 706 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 707 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 707 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 707 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 707 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 708 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 708 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 708 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 709 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 712 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 713 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 713 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 713 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 713 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 714 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 714 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 714 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 715 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 715 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 715 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 715 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 718 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LohanReturns:
# 719 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 720 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 720 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 721 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 724 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_BennisToPlayer:
# 725 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 725 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 725 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 726 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 729 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaLeaves:
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 730 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 731 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 731 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 731 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 731 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 731 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 732 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 56 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy ritual”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_0:
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MASTER BENNIS: {PLAYER}. I'll be heading\n back to my dojo.\p I want to battle you one more time.\n I'll wait for you there.$"

Baldesia_MainHouse_EventScript_LohanThanks_Text_1:
# 348 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I shouldn't make MOMO wait for me\n too long.\p We'll be ready for a rematch soon,\n {PLAYER}!$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 384 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 438 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 440 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 449 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n more training!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 457 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the MAUVILLE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 465 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 470 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 478 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the Maiden needs to\n play the POKé FLUTE to truly wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 488 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 492 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 501 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 504 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'm so sorry for attacking you!\p And thank you so much for everything\n that you did.$"

Baldesia_MainHouse_TextLohan::
# 530 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the Maiden of the\n ASAKURA family is required to travel\l to the altar to perform a sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 545 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 560 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and the HOENN CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 570 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 576 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_LohanThankYou::
# 597 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You've returned.\n I… don't know what to say…\l But I'm sorry. And thank you.\p The mythical POKéMON, PECHARUNT…\n There are stories of it passed down,\l but I didn't believe it to be real.\p Apparently, it uses PECHA BERRIES and\n it's poison to create brainwashing\l mochi. It sounds ridiculous.\p Either way, I won't just thank you.\n I'd like to give you both rewards.$"

Baldesia_MainHouse_Text_AriaRecievesArmor::
# 611 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: N-New armor…!\n This will increase my power…\p LOHAN: That armor is only given to the\n most trusted allies of the ASAKURA\l family.\p Where's MOMO? I want to apologize to\n her too. My memory is hazy, but I\l remember she was mad before she left.\p ARIA: … I think she went back home.\n I'll let her know.\p LOHAN: … Back home… I see.\n So she's found somewhere she belongs.\p BENNIS, can you head back to HOENN's\n mainland? To make sure she's safe?\p MASTER BENNIS: Yes, sir.\p LOHAN: Well, I won't keep you all\n any longer.\p You're welcome in BALDESIA any time.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 631 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
