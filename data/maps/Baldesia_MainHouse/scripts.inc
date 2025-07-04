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
	.2byte 0


Baldesia_MainHouse_OnTransition::
# 19 "data/maps/Baldesia_MainHouse/scripts.pory"
	setrespawn HEAL_LOCATION_BALDESIA
# 20 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_TEMP_E
# 21 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 5, Baldesia_MainHouse_UpdateNPCPos
# 22 "data/maps/Baldesia_MainHouse/scripts.pory"
	call_if_eq VAR_MOMO_ARIA_STATE, 6, Baldesia_MainHouse_UpdateNPCPos
	end


Baldesia_MainHouse_UpdateNPCPos::
# 27 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 19, 9
# 28 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 29 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 6, 11, 11
# 30 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 31 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	return


Baldesia_MainHouse_EventScript_GoToChief::
# 36 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 37 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 38 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 63 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 64 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 65 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 67 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 68 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 69 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 71 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 72 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 22
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 80 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 39 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 40 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 41 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 42 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 43 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 44 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 46 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 47 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 48 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 49 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 50 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 51 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 53 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 54 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 55 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 56 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 57 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	goto Baldesia_MainHouse_EventScript_GoToChief_1


Baldesia_MainHouse_EventScript_GoToAltar::
# 85 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 86 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_LookAround
# 87 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 88 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_0, MSGBOX_AUTOCLOSE
# 91 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 92 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 93 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 94 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan, MSGBOX_AUTOCLOSE
# 95 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 96 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 97 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 98 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 99 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 100 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 101 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 102 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 103 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 104 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 105 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesToChief
# 106 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 107 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak, MSGBOX_AUTOCLOSE
# 108 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 109 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakGoesBack
# 110 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 111 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextAsak2, MSGBOX_AUTOCLOSE
# 112 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 113 "data/maps/Baldesia_MainHouse/scripts.pory"
	playbgm MUS_NONE, FALSE
# 114 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 115 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 116 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 117 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 118 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 119 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 120 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 121 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaEnter
# 122 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 123 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 9
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuard
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuard
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 16
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceUp
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 15, Baldesia_MainHouse_Movement_LeftGuardReturn
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 16, Baldesia_MainHouse_Movement_RightGuardReturn
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 9
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 12
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 15
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_5, MSGBOX_AUTOCLOSE
# 211 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 212 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 213 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 214 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 215 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 216 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_6, MSGBOX_AUTOCLOSE
# 219 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 220 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 221 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 222 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 223 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 224 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 225 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_7, MSGBOX_AUTOCLOSE
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 244 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 245 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 266 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 267 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 278 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 279 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 289 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 296 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 297 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 298 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 299 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_Guard::
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Guard_Text_0, MSGBOX_AUTOCLOSE
# 307 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 308 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 309 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 310 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Ninja::
# 315 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 316 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 317 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 319 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 320 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 321 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Ninja_Text_0, MSGBOX_AUTOCLOSE
# 323 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 324 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 325 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 326 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_NinjaBoy::
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_NinjaBoy_Text_0, MSGBOX_SIGN
	end


Baldesia_MainHouse_EventScript_Bennis::
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Bennis_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_Asak::
# 343 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 344 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Asak_Text_0, MSGBOX_AUTOCLOSE
# 352 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 353 "data/maps/Baldesia_MainHouse/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 354 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_2
# 359 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Baldesia_MainHouse_EventScript_Asak_3
# 363 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
# 364 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 365 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
Baldesia_MainHouse_EventScript_Asak_1:
# 367 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 5
# 368 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 5
# 369 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_Asak_2:
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth
# 356 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 16
# 357 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto Baldesia_MainHouse_EventScript_Asak_1

Baldesia_MainHouse_EventScript_Asak_3:
# 360 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Baldesia_MainHouse_Movement_AsakLeave
	goto Baldesia_MainHouse_EventScript_Asak_1


Baldesia_MainHouse_EventScript_Panini::
# 374 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_0, MSGBOX_DEFAULT
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Baldesia_MainHouse_EventScript_Panini_Text_1, Baldesia_MainHouse_EventScript_Panini_Text_2, Baldesia_MainHouse_EventScript_Panini_Text_3
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Panini_Text_4, MSGBOX_AUTOCLOSE
# 379 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 380 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 381 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 382 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end


Baldesia_MainHouse_EventScript_Aria::
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Aria_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldManDojo::
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldManDojo_Text_0, MSGBOX_NPC
	end


Baldesia_MainHouse_EventScript_OldWoman::
# 402 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 8
	goto_if_le Baldesia_MainHouse_EventScript_OldWoman_2
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_OldWoman_1:
	end

Baldesia_MainHouse_EventScript_OldWoman_2:
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldWoman_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_OldWoman_1


Baldesia_MainHouse_EventScript_OldMan::
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_OldMan_Text_0
	end


Baldesia_MainHouse_EventScript_Lohan::
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 8
	goto_if_le Baldesia_MainHouse_EventScript_Lohan_2
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lohan_1:
	end

Baldesia_MainHouse_EventScript_Lohan_2:
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lohan_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lohan_1


Baldesia_MainHouse_EventScript_Lindsay::
# 438 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_MOMO_ARIA_STATE, 8
	goto_if_le Baldesia_MainHouse_EventScript_Lindsay_2
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_1, MSGBOX_NPC
Baldesia_MainHouse_EventScript_Lindsay_1:
	end

Baldesia_MainHouse_EventScript_Lindsay_2:
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_Lindsay_Text_0, MSGBOX_NPC
	goto Baldesia_MainHouse_EventScript_Lindsay_1


Baldesia_MainHouse_EventScript_KimonoGirl::
# 450 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 451 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 452 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 453 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 459 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 461 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 462 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 463 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 464 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 454 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 455 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 456 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 542 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 543 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 544 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 545 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 546 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 549 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 550 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 551 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 552 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 552 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 553 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 556 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 557 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 558 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 558 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 558 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 558 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 558 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 559 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 559 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 562 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 563 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 564 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 565 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 568 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 569 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 570 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 571 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 574 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 575 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 576 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 577 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 578 "data/maps/Baldesia_MainHouse/scripts.pory"
	face_left
# 579 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 580 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 583 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuard:
# 584 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 584 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 584 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 584 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 584 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 584 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 584 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 585 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 585 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
# 585 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_left
	step_end

# 588 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuard:
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 589 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_down
# 590 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 590 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 590 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 590 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
# 590 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_faster_right
	step_end

# 593 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_LeftGuardReturn:
# 594 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 594 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 594 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 594 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 594 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_left
# 595 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 595 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 595 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 595 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 595 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 595 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 595 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 596 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 599 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_RightGuardReturn:
# 600 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 600 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 600 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 601 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_up
# 602 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_down
	step_end

# 605 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 606 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 606 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 606 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 609 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeavePlayerFacingNorth:
# 610 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 611 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 611 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 611 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 611 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 612 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 612 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 612 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 613 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 613 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 613 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 613 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

# 616 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakLeave:
# 617 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 617 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 617 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 617 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 618 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 618 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 618 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 619 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 619 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 619 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 619 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
	step_end

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 48 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\n MOMO!\p Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like… you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All it said was “beefy ritual”!\n How am I supposed to know what that \l means?\p I'm lucky that you told BALDASARIO\n where you were actually going!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 265 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_EventScript_Guard_Text_0:
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't get into any trouble.$"

Baldesia_MainHouse_EventScript_Ninja_Text_0:
# 322 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "How did you see me?!$"

Baldesia_MainHouse_EventScript_NinjaBoy_Text_0:
# 331 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Don't talk to me!\n I'm working!$"

Baldesia_MainHouse_EventScript_Bennis_Text_0:
# 337 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Hm…\n Something smells… beefy.$"

Baldesia_MainHouse_EventScript_Asak_Text_0:
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "……… I mean no disrespect, {PLAYER},\n but this really doesn't feel right.\p Still… I can't go against my Lord's will.\n Also… He's right.\p I'm ashamed of our failure…\p I think I'm going to go back home for\n a bit to retrain.$"

Baldesia_MainHouse_EventScript_Panini_Text_0:
# 376 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini… Panini ni.$"

Baldesia_MainHouse_EventScript_Panini_Text_1:
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… You're right.$"

Baldesia_MainHouse_EventScript_Panini_Text_2:
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll be careful.$"

Baldesia_MainHouse_EventScript_Panini_Text_3:
# 377 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "What are you even saying?$"

Baldesia_MainHouse_EventScript_Panini_Text_4:
# 378 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Panini.$"

Baldesia_MainHouse_EventScript_Aria_Text_0:
# 387 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARGH!\n Why can't I go with?!\p I guess all I can do right now is\n more training!$"

Baldesia_MainHouse_EventScript_OldManDojo_Text_0:
# 395 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "The former Head of the ASAKURA\n family and his wife spend a lot of\l time at the LILYCOVE GAME CORNER.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_0:
# 403 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Lately the Village Chief has been\n much stricter.\p I wonder what changed.$"

Baldesia_MainHouse_EventScript_OldWoman_Text_1:
# 408 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "So PECHARUNT and the LOYAL THREE\n plotted to steal the wish…\p I wonder what it would've wished for.$"

Baldesia_MainHouse_EventScript_OldMan_Text_0:
# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "While we say that JIRACHI is going\n to awaken, the truth is it's only coming\l out of a deeper state of sleep.\p During this time, the Maiden needs to play\n the POKé FLUTE to truly wake it up.$"

Baldesia_MainHouse_EventScript_Lohan_Text_0:
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Move quickly, {PLAYER}.\n There's not much time left.$"

Baldesia_MainHouse_EventScript_Lohan_Text_1:
# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done, {PLAYER}.\p You are always welcome here.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_0:
# 439 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "… We're counting on you.$"

Baldesia_MainHouse_EventScript_Lindsay_Text_1:
# 442 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I can't thank you enough for what\n you've done.\p You are always welcome here.$"

Baldesia_MainHouse_TextLohan::
# 468 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the Maiden of the\n ASAKURA family is required to travel\l to the altar to perform a sacred ritual.\p I want you to be her bodyguard while\n it's taking place.$"

Baldesia_MainHouse_TextAsak::
# 483 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition dictates that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n Her retainers?\p The ones that were unable to\n properly complete their mission?\l Have some shame and know your place.\p ASAK: ……… Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 498 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and the HOENN CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI falls\l back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 508 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 514 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You rush in here uninvited and demand\n to take place in the ritual because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 527 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 535 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
