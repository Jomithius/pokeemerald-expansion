Route135_Lab_MapScripts::
# 6 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route135_Lab_OnTransition
# 2 "data/maps/Route135_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route135_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 0, Route135_Lab_EventScript_ToUltraSpace
# 4 "data/maps/Route135_Lab/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 3, Route135_Lab_EventScript_EndUltraSpace
	.2byte 0


Route135_Lab_OnTransition::
# 10 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_VISITED_ROUTE_135_LAB
# 11 "data/maps/Route135_Lab/scripts.pory"
	call_if_set FLAG_RETURNED_FROM_ULTRA_SPACE, Route135_EventScript_NPCPosition
# 12 "data/maps/Route135_Lab/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 4, Route135_Lab_JamesPosition
	end


Route135_Lab_JamesPosition::
# 17 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 18 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Route135_EventScript_NPCPosition::
# 23 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 1, 6, 9
# 24 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 2, 8, 9
# 26 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 3, 6, 8
# 27 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 28 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 29 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	return


Route135_Lab_EventScript_Maniac::
# 34 "data/maps/Route135_Lab/scripts.pory"
	lock
# 35 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
Route135_Lab_EventScript_Maniac_1:
# 39 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 36 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
# 37 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 44 "data/maps/Route135_Lab/scripts.pory"
	lock
# 45 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 46 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 48 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 49 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 50 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 55 "data/maps/Route135_Lab/scripts.pory"
	lock
# 56 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 57 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 58 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 59 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 60 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 61 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 62 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 63 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 132 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 134 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 135 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 136 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 138 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 140 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 64 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 66 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 67 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 68 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 69 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 72 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 73 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 74 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 78 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 79 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 80 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 81 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 82 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 83 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 85 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 86 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 87 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 89 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 90 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 91 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 92 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 93 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 95 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 96 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 97 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 98 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 99 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 102 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 103 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 104 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 105 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 108 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 109 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 110 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 111 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 112 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 113 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 114 "data/maps/Route135_Lab/scripts.pory"
	playbgm MUS_NONE, FALSE
# 115 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 117 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 118 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 119 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 120 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 122 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 123 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 124 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 125 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 126 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 127 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 128 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 129 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 145 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 146 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 147 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 148 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 149 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 150 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 151 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 152 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 153 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 154 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 155 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 156 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 157 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 158 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 159 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 160 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 161 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 162 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 163 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 168 "data/maps/Route135_Lab/scripts.pory"
	lock
# 169 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 170 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 171 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 172 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 177 "data/maps/Route135_Lab/scripts.pory"
	lock
# 178 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route_135_Lab_ManiacLookAround
# 179 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 180 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 181 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 182 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_JamesLookAround
# 183 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 186 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 187 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 188 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 190 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route_135_Lab_Movement_ManiacReturnsToComputer
# 191 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 192 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Route_135_Lab_Movement_CosmogReturnsToComputer
# 193 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 194 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 195 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 196 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 197 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 198 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 199 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 200 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 202 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 203 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 204 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesFacePlayer
# 205 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 206 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 208 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 209 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 210 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 212 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route_135_Lab_Movement_JamesReturnsToComputer
# 213 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 214 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 215 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 217 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 218 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RETURNED_FROM_ULTRA_SPACE
# 219 "data/maps/Route135_Lab/scripts.pory"
	release
	end


# 223 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 224 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 224 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 224 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 224 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 224 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 225 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 225 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 228 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 229 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 229 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 229 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 230 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 230 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 230 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 230 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 231 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 234 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 235 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 235 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 235 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 236 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 236 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 236 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 236 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 237 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 273 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 274 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 274 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 274 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 274 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 274 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 274 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 275 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 290 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 291 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 291 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 291 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 292 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 293 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 296 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 297 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 297 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 297 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 298 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 301 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 302 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 302 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 305 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 306 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 307 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 308 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 309 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 310 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 311 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 312 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 316 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 317 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 318 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 319 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 320 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 321 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 322 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 323 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 327 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 328 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 329 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 330 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 331 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 332 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 333 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 334 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 397 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 398 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 399 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 399 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 399 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 399 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 399 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 402 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 403 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 403 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 404 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 404 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 404 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 404 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 405 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 406 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 407 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 410 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 411 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 412 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 415 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 418 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 418 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 419 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 420 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 74 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 87 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 184 "data/maps/Route135_Lab/scripts.pory"
	.string "We… We really returned…$"

Route135_Lab_Text_Maniac1::
# 240 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 244 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 250 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 265 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 278 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 283 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 338 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 344 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 351 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 358 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n I must log all my findings this instant!$"

Route135_Lab_Text_Maniac9::
# 363 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 370 "data/maps/Route135_Lab/scripts.pory"
	.string "…He's gonna be like that for a while.\n Well, that was an experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay here and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 379 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…\l Anyways, like the PROF. said, we'll\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 387 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 423 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, Intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"
