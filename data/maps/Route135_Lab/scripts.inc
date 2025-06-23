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
	call_if_unset FLAG_VISITED_ROUTE_135_LAB, Route135_SetFlag
# 11 "data/maps/Route135_Lab/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 4, Route135_Lab_JamesPosition
	end


Route135_SetFlag::
# 17 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_VISITED_ROUTE_135_LAB
	return


Route135_Lab_JamesPosition::
# 22 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 23 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Route135_EventScript_NPCPosition::
# 29 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 1, 6, 9
# 30 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 31 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 2, 8, 9
# 32 "data/maps/Route135_Lab/scripts.pory"
	setobjectxy 3, 6, 8
# 33 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 34 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 35 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	return


Route135_Lab_EventScript_Maniac::
# 40 "data/maps/Route135_Lab/scripts.pory"
	lock
# 41 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
Route135_Lab_EventScript_Maniac_1:
# 45 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 42 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
# 43 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 50 "data/maps/Route135_Lab/scripts.pory"
	lock
# 51 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 52 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 54 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 55 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 56 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 61 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 62 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 63 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 64 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 65 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 66 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 67 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 68 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 69 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 140 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 142 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 143 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 144 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 146 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 148 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 70 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 72 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 73 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 74 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 75 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 78 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 79 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 80 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 84 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 85 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 86 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 87 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 88 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 89 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 91 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 92 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 93 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 95 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 96 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 97 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 98 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 99 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 101 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 102 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 103 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 104 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 105 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 108 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 109 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 110 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 111 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 114 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 115 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 116 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 117 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 118 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 119 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 120 "data/maps/Route135_Lab/scripts.pory"
	fadenewbgm MUS_NONE
# 121 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 123 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 124 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 125 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 126 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 128 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 129 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 130 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 131 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 132 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 133 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 134 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 135 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 136 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 137 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 153 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 154 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 155 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 156 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 157 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 158 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 159 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 160 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 161 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 162 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 163 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 164 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 165 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 166 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 167 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 168 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 169 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 170 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 171 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 176 "data/maps/Route135_Lab/scripts.pory"
	lock
# 177 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 178 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 179 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 180 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 185 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 186 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_ManiacLookAround
# 187 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 188 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 189 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 190 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_JamesLookAround
# 191 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 195 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 196 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 197 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 199 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 200 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 201 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_Movement_ManiacReturnsToComputer
# 202 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 203 "data/maps/Route135_Lab/scripts.pory"
	applymovement 6, Route_135_Lab_Movement_CosmogReturnsToComputer
# 204 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 205 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 206 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 207 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 208 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 6
# 209 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 210 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 211 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 213 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 214 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 215 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesFacePlayer
# 216 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 217 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 219 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 220 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 221 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 224 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 225 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 226 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 228 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesReturnsToComputer
# 229 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 230 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 231 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 232 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_Movement_PlayerLeaves
# 233 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route135_Lab/scripts.pory"
	removeobject 5
# 235 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 236 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 237 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 238 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 239 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 240 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 241 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


# 245 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 246 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 246 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 246 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 246 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 246 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 247 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 247 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 250 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 251 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 251 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 251 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 252 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 252 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 252 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 252 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 253 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 256 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 257 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 257 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 257 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 258 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 258 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 258 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 258 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 259 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 295 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 296 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 296 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 296 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 296 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 296 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 296 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 297 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 312 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 313 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 313 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 313 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 314 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 315 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 318 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 319 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 319 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 319 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 320 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 323 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 324 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 324 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 327 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 328 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 329 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 330 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 331 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 332 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 333 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 334 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 338 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 339 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 340 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 341 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 342 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 343 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 344 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 345 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 349 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 350 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 351 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 352 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 353 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 354 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 355 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 356 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 421 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 422 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 423 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 423 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 423 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 423 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 424 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 425 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 428 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 429 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 430 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 430 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 430 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 431 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 432 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 432 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 433 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 436 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 437 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 438 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 441 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 442 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 442 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 442 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 442 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 443 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 443 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 444 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 444 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 445 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 446 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 446 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 449 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 450 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 450 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 450 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 450 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 80 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 93 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 192 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: We…\n We really returned…$"

Route135_Lab_EventScript_EndUltraSpace_Text_1:
# 221 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…$"

Route135_Lab_Text_Maniac1::
# 262 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 266 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 272 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 287 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 300 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 305 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 360 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 366 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 373 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 380 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 387 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 394 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: …He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 405 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 411 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 453 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"
