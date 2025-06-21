Route135_Lab_MapScripts::
# 2 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route135_Lab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 0, Route135_Lab_EventScript_ToUltraSpace
# 4 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 3, Route135_Lab_EventScript_EndUltraSpace
	.2byte 0

Route135_Lab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 3, Route135_EventScript_NPCPosition
# 8 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 4, Route135_EventScript_JamesPosition
# 9 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 5, Route135_EventScript_JamesPosition
	.2byte 0


Route135_EventScript_NPCPosition::
# 14 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_VISITED_ROUTE_135
# 15 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 16 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 1, 6, 9
# 17 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 18 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 2, 8, 9
# 19 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 3, 6, 8
# 20 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 21 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 22 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	end


Route135_EventScript_JamesPosition::
# 27 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 28 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


Route135_Lab_EventScript_Maniac::
# 33 "data/maps/Route135_Lab/scripts.pory"
	lock
# 34 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
Route135_Lab_EventScript_Maniac_1:
# 38 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 35 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
# 36 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 43 "data/maps/Route135_Lab/scripts.pory"
	lock
# 44 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 45 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 46 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 47 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 48 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 49 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 54 "data/maps/Route135_Lab/scripts.pory"
	lock
# 55 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 56 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 57 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 58 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 59 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 60 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 61 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 62 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 131 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 133 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 134 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 135 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 137 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 139 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 63 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 65 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 66 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 67 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 68 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 71 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 72 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 73 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 77 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 78 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 79 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 80 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 81 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 82 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 84 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 85 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 86 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 87 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 88 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 89 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 90 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 91 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 93 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 94 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 95 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 96 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 98 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 101 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 102 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 103 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 104 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 107 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 108 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 109 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 110 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 111 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 112 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 113 "data/maps/Route135_Lab/scripts.pory"
	playbgm MUS_NONE, FALSE
# 114 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 116 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 117 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 118 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 119 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 121 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 122 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 123 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 124 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 125 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 126 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 127 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 128 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 144 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 145 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 146 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 147 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 148 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 149 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 150 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 151 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 152 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 153 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 154 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 155 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 156 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 157 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 158 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 159 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 160 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 161 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 162 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 167 "data/maps/Route135_Lab/scripts.pory"
	lock
# 168 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 169 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 170 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 171 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 176 "data/maps/Route135_Lab/scripts.pory"
	lock
# 177 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route_135_Lab_ManiacLookAround
# 178 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 179 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 180 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 181 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_JamesLookAround
# 182 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 185 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 186 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 187 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 189 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route_135_Lab_Movement_ManiacReturnsToComputer
# 190 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 191 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Route_135_Lab_Movement_CosmogReturnsToComputer
# 192 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 193 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 194 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 195 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 196 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 197 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 198 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 199 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 201 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 202 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 203 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesFacePlayer
# 204 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 205 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 207 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 208 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 209 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 211 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesReturnsToComputer
# 212 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 213 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 214 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 216 "data/maps/Route135_Lab/scripts.pory"
	release
	end


# 220 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 221 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 221 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 221 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 221 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 221 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 222 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 222 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 225 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 226 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 226 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 226 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 227 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 227 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 227 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 227 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 228 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 231 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 232 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 232 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 232 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 233 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 233 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 233 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 233 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 234 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 270 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 271 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 271 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 271 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 271 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 271 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 272 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 287 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 288 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 288 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 288 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 289 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 290 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 293 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 294 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 294 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 294 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 295 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 298 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 299 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 299 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 302 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 303 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 304 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 305 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 306 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 307 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 308 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 309 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 313 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 314 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 315 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 316 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 317 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 318 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 319 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 320 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 324 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 325 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 326 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 327 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 328 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 329 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 330 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 331 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 394 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 395 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 396 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 396 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 396 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 396 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 396 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 399 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 400 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 400 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 401 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 401 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 401 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 401 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 402 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 403 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 404 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 407 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 408 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 409 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 412 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 413 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 413 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 413 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 414 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 414 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 415 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 415 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 73 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 86 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 183 "data/maps/Route135_Lab/scripts.pory"
	.string "We… We really returned…$"

Route135_Lab_Text_Maniac1::
# 237 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 241 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 247 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 262 "data/maps/Route135_Lab/scripts.pory"
	.string "Now I've reached a breakthrough in\n my experiments and plan to attempt to\l open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 275 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 280 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 335 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 341 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 348 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 355 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n I must log all my findings this instant!$"

Route135_Lab_Text_Maniac9::
# 360 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 367 "data/maps/Route135_Lab/scripts.pory"
	.string "…He's gonna be like that for a while.\n Well, that was an experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay here and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 376 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…\l Anyways, like the PROF. said, we'll\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 384 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 420 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, Intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"
