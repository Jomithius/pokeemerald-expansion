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
	call_if_eq VAR_MOMO_ARIA_STATE, 5, Baldesia_MainHouse_UpdateAriaPos
	end


Baldesia_MainHouse_UpdateAriaPos::
# 26 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectxyperm 7, 19, 9
# 27 "data/maps/Baldesia_MainHouse/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	return


Baldesia_MainHouse_EventScript_GoToChief::
# 32 "data/maps/Baldesia_MainHouse/scripts.pory"
	lockall
# 33 "data/maps/Baldesia_MainHouse/scripts.pory"
	checkobjectat 5, 20
# 34 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Baldesia_MainHouse_EventScript_GoToChief_2
# 58 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 60 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 22
# 61 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 23
# 62 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 24
# 63 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
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
	removeobject 22
# 74 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 23
# 75 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 24
# 76 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 77 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 78 "data/maps/Baldesia_MainHouse/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
Baldesia_MainHouse_EventScript_GoToChief_1:
# 80 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitstate
	end

Baldesia_MainHouse_EventScript_GoToChief_2:
# 35 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 37 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 19
# 38 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 20
# 39 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 21
# 40 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 41 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 42 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 43 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 44 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 45 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 46 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToChief_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 48 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 49 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 19
# 51 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 20
# 52 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 21
# 53 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 54 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 4
# 55 "data/maps/Baldesia_MainHouse/scripts.pory"
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
	fadescreen FADE_TO_BLACK
# 124 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 125 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 25
# 126 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 127 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 128 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 129 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 130 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 131 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 132 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 133 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackDown
# 134 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 135 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 136 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 137 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 139 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 26
# 140 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 141 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 142 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 143 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 144 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 145 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 20
# 146 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_PIN
# 147 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 148 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 149 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 150 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_YAWN
# 151 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_WalkBackUp
# 152 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 153 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 154 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 155 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 156 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 27
# 157 "data/maps/Baldesia_MainHouse/scripts.pory"
	addobject 28
# 158 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 159 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 160 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 26, Common_Movement_WalkUp
# 161 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 26
# 162 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 30
# 163 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_LookAround
# 164 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 7
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_1, MSGBOX_AUTOCLOSE
# 166 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 167 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Baldesia_MainHouse_Movement_AriaCharges
# 168 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 25, Baldesia_MainHouse_Movement_WalkBackRight
# 169 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 170 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 171 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 172 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 173 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 174 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 175 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 176 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 177 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 178 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_2, MSGBOX_AUTOCLOSE
# 180 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 181 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 182 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 183 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 184 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 185 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 186 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 187 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_3, MSGBOX_AUTOCLOSE
# 189 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 190 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 191 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_4, MSGBOX_AUTOCLOSE
# 193 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 194 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadenewbgm MUS_B_ARENA
# 195 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 196 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_FLEE
# 197 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 25
# 198 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 26
# 199 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 27
# 200 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 28
# 201 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 202 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 203 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 204 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 205 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 206 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 207 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
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
# 229 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 230 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 231 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 232 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 233 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 6
# 234 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_BIKE_HOP
# 235 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 236 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 8
# 237 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 238 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 239 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan2, MSGBOX_AUTOCLOSE
# 240 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 241 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 242 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_8, MSGBOX_AUTOCLOSE
# 246 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 247 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 248 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, ContestHall_Movement_Heart
# 249 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 250 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 251 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 252 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 253 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 254 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 255 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay 60
# 256 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan3, MSGBOX_AUTOCLOSE
# 257 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 258 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 259 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_9, MSGBOX_AUTOCLOSE
# 261 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 262 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 263 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_10, MSGBOX_AUTOCLOSE
# 268 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 269 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 270 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 271 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 272 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_TextLohan4, MSGBOX_AUTOCLOSE
# 273 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 274 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 275 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 276 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_11, MSGBOX_AUTOCLOSE
# 280 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 281 "data/maps/Baldesia_MainHouse/scripts.pory"
	playse SE_M_PETAL_DANCE
# 282 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 283 "data/maps/Baldesia_MainHouse/scripts.pory"
	removeobject 3
# 284 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 285 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitse
# 286 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 287 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_EventScript_GoToAltar_Text_12, MSGBOX_AUTOCLOSE
# 290 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 291 "data/maps/Baldesia_MainHouse/scripts.pory"
	fadedefaultbgm
# 292 "data/maps/Baldesia_MainHouse/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BALDESIA
# 293 "data/maps/Baldesia_MainHouse/scripts.pory"
	setflag FLAG_HIDE_NINJAS_BALDESIA_MAIN_HOUSE
# 294 "data/maps/Baldesia_MainHouse/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 5
# 295 "data/maps/Baldesia_MainHouse/scripts.pory"
	releaseall
	end


Baldesia_MainHouse_EventScript_KimonoGirl::
# 300 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock
# 301 "data/maps/Baldesia_MainHouse/scripts.pory"
	faceplayer
# 302 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 303 "data/maps/Baldesia_MainHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Baldesia_MainHouse_EventScript_KimonoGirl_2
# 309 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
Baldesia_MainHouse_EventScript_KimonoGirl_1:
# 311 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmessage
# 312 "data/maps/Baldesia_MainHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 313 "data/maps/Baldesia_MainHouse/scripts.pory"
	waitmovement 0
# 314 "data/maps/Baldesia_MainHouse/scripts.pory"
	release
	end

Baldesia_MainHouse_EventScript_KimonoGirl_2:
# 304 "data/maps/Baldesia_MainHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 305 "data/maps/Baldesia_MainHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 306 "data/maps/Baldesia_MainHouse/scripts.pory"
	msgbox Baldesia_MainHouse_Text_ThankYouForWaiting, MSGBOX_DEFAULT
	goto Baldesia_MainHouse_EventScript_KimonoGirl_1


# 390 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesToChief:
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 391 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 392 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 393 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 394 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 397 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AsakGoesBack:
# 398 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 399 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_down
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 400 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_right
# 401 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_left
	step_end

# 404 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaEnter:
# 405 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 406 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_left
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 407 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

# 410 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackDown:
# 411 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 412 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_down
# 413 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 416 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackUp:
# 417 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 418 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 419 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
	step_end

# 422 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_WalkBackRight:
# 423 "data/maps/Baldesia_MainHouse/scripts.pory"
	lock_facing_direction
# 424 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_right
# 425 "data/maps/Baldesia_MainHouse/scripts.pory"
	unlock_facing_direction
# 426 "data/maps/Baldesia_MainHouse/scripts.pory"
	delay_16
# 427 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_in_place_fast_up
	step_end

# 430 "data/maps/Baldesia_MainHouse/scripts.pory"
Baldesia_MainHouse_Movement_AriaCharges:
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
# 431 "data/maps/Baldesia_MainHouse/scripts.pory"
	walk_fast_up
	step_end

Baldesia_MainHouse_EventScript_GoToChief_Text_0:
# 46 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "We've been expecting you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_0:
# 89 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "???: So you're {PLAYER}.\n MOMO told me you were coming.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_1:
# 165 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_2:
# 179 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … What are you doing here?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_3:
# 188 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: You know this fool? Very well.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_4:
# 192 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "I'll allow it.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_5:
# 208 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: That scared me!\p MOMO! Why didn't you tell me where you\n were going?!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_6:
# 217 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … It's like you didn't see the\n note I left you.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_7:
# 226 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: All the note said was “ritual”!\n How am I supposed to know what that \l means?$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_8:
# 243 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ARIA: I heard everything. I'm MOMO's\n KNIGHT. I swore to protect her.\l Please, let me go with!$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_9:
# 260 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: ……… Brother.$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_10:
# 264 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I won't discuss it any further.\n You're lucky I've even allowed this\l KNIGHT to show such disrespect.\p MOMO: ………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_11:
# 277 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "You should go on ahead, since you're\n able to get to the altar quickly.\p MOMO: ………………$"

Baldesia_MainHouse_EventScript_GoToAltar_Text_12:
# 288 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: Time is of the essence.\n Hurry to the altar, {PLAYER}.$"

Baldesia_MainHouse_TextLohan::
# 318 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: I'm LOHAN, the Village Chief of\n BALDESIA.\p I've heard that you've earned the\n respect of not only MASTER BENNIS, but\l my sister as well. Quite impressive.\p Anyways, as you may have heard, JIRACHI\n is going to awaken soon.\p During this time, the Maiden of the\n ASAKURA Family is required to travel\l to the altar to perform the ritual.\p I want you to be her bodyguard during\n the ritual.$"

Baldesia_MainHouse_TextAsak::
# 333 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "ASAK: M-My Lord! With all due respect,\n tradition demands that the Young Lady\l is escorted by her retainers!\p To delegate such a role to one person,\n an outsider as well, is unheard of!\p LOHAN: Enough!\n This is my decision.\p ASAK: … Yes, sir.\n My deepest apologies.$"

Baldesia_MainHouse_TextAsak2::
# 345 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string " LOHAN: MOMO and the HOENN CHAMPION\n should be more than enough to deter\l anybody with ill intentions.\p Since MOMO procrastinated, there's not\n much time left before JIRACHI will\l fall back into a deep slumber.\p You must leave immed-\p ???: Wait! You can't just barge in here!$"

Baldesia_MainHouse_TextLohan2::
# 355 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "MOMO: … … … …\n Figure it out.\p LOHAN: Enough!\n Why have you barged in here?$"

Baldesia_MainHouse_TextLohan3::
# 362 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "LOHAN: ………\n I see.\p You barge in here uninvited, demanding\n to take place in the ritual, because\l you're her… “KNIGHT”?\p There's no way I'll permit you to\n accompany her and {PLAYER}.\p Such disrespect won't be tolerated\n any longer. You will wait here.\p ARIA: But-$"

Baldesia_MainHouse_TextLohan4::
# 375 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Now, that's enough talk.\p MOMO has already waited until the last\n minute for the ritual. We need to hurry.\p {PLAYER}, make preparations quickly and\n then head out.$"

Baldesia_MainHouse_Text_ThankYouForWaiting::
# 383 "data/maps/Baldesia_MainHouse/scripts.pory"
	.string "Thank you for waiting.\p We've restored your POKéMON\n to full health.\p We hope to see you again!$"
