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
	setflag FLAG_TEMP_E
# 11 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_LANDMARK_ROUTE135
# 12 "data/maps/Route135_Lab/scripts.pory"
	call_if_set FLAG_ENABLED_JAMES_MATCH_CALL, Route135_Lab_DisableJamesMatchCall
# 13 "data/maps/Route135_Lab/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 4, Route135_Lab_JamesPosition
	end


Route135_Lab_JamesPosition::
# 18 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 19 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Route135_Lab_DisableJamesMatchCall::
# 24 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_ENABLED_JAMES_MATCH_CALL
	return


Route135_Lab_EventScript_Maniac::
# 29 "data/maps/Route135_Lab/scripts.pory"
	lock
# 30 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
# 34 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_Maniac_3
# 37 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_Maniac_4
Route135_Lab_EventScript_Maniac_1:
# 40 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusyTalkToCosmog, MSGBOX_DEFAULT
# 41 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 42 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 31 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
# 32 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_3:
# 35 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_ToAreaZero
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_4:
# 38 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_TalkToCosmog
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 47 "data/maps/Route135_Lab/scripts.pory"
	lock
# 48 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 49 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 51 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 52 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 53 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 58 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 59 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 60 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 61 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 62 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 63 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 64 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 65 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 66 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 137 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 139 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 140 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 141 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 143 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 145 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 67 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 69 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 70 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 71 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 72 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 75 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 76 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 77 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 81 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 82 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 83 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 84 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 85 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 86 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 87 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 88 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 89 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 90 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 92 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 93 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 94 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 95 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 96 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 98 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 99 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 100 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 101 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 102 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 105 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 106 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 107 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 108 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 111 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 112 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 113 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 114 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 115 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 116 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 117 "data/maps/Route135_Lab/scripts.pory"
	fadenewbgm MUS_NONE
# 118 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 120 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 121 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 122 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 123 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 125 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 126 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 127 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 128 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 129 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 130 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 131 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 132 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 133 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 134 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 150 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 151 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 152 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 153 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 154 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 155 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 156 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 157 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 158 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 159 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 160 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 161 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 162 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 163 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 164 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 165 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 166 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 167 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 168 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 173 "data/maps/Route135_Lab/scripts.pory"
	lock
# 174 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 175 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 176 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 177 "data/maps/Route135_Lab/scripts.pory"
	goto_if_ge VAR_ULTRA_SPACE_STATE, 6, Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero
# 178 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 183 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 184 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_ManiacLookAround
# 185 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 186 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 187 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 188 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_JamesLookAround
# 189 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 193 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 194 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 195 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 196 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 197 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 198 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 199 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_Movement_ManiacReturnsToComputer
# 200 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 201 "data/maps/Route135_Lab/scripts.pory"
	applymovement 6, Route_135_Lab_Movement_CosmogReturnsToComputer
# 202 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 203 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 204 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 205 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 206 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 6
# 207 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 208 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 209 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 211 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 212 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 213 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesFacePlayer
# 214 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 215 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 216 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 217 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 218 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 219 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 222 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 223 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 224 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 226 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesReturnsToComputer
# 227 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 228 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 229 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 230 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_Movement_PlayerLeaves
# 231 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route135_Lab/scripts.pory"
	removeobject 5
# 233 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 234 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 235 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 236 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
# 237 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 238 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 239 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 240 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_JamesCallsPlayerAreaZero::
# 245 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 246 "data/maps/Route135_Lab/scripts.pory"
	pokenavcall Route_135_Lab_PokenavText_JamesComeBackToTheLab
# 247 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 248 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 249 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 5
# 250 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_ToAreaZero::
# 255 "data/maps/Route135_Lab/scripts.pory"
	lock
# 256 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 257 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route135_Lab_EventScript_ToAreaZero_2
# 261 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacIntroduceAreaZero, MSGBOX_YESNO
Route135_Lab_EventScript_ToAreaZero_1:
# 263 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 264 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToAreaZero_6
# 282 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 285 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 286 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 287 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_1
Route135_Lab_EventScript_ToAreaZero_5:
# 289 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToAreaZero_2:
# 258 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_0, MSGBOX_YESNO
	goto Route135_Lab_EventScript_ToAreaZero_1

Route135_Lab_EventScript_ToAreaZero_6:
# 265 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_1, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_EventScript_PlayerGoesToCosmog
# 269 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacExplainCosmog, MSGBOX_AUTOCLOSE
# 271 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 272 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 273 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 274 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 275 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 276 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 277 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 6
# 278 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 279 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToAreaZero_5


Route135_Lab_EventScript_TalkToCosmog::
# 294 "data/maps/Route135_Lab/scripts.pory"
	lock
# 295 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 296 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_0, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 306 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 307 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 308 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 309 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_1
# 312 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 313 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 314 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 315 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 316 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_2, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 319 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 320 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 321 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 322 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_MELTAN
# 323 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero::
# 328 "data/maps/Route135_Lab/scripts.pory"
	lock
# 329 "data/maps/Route135_Lab/scripts.pory"
	message Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0
# 330 "data/maps/Route135_Lab/scripts.pory"
	multichoice 25, 5, MULTI_ULTRA_SPACE_CHOICE, 0
# 331 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 332 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2
# 339 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3
Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1:
# 346 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2:
# 333 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 334 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 335 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 336 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 26, 49
# 337 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3:
# 340 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 341 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 342 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 343 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 344 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1


Route135_Lab_EventScript_PlayerGoesToCosmog::
# 351 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 352 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq Route135_Lab_EventScript_PlayerGoesToCosmog_2
# 357 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogNorth
# 358 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
Route135_Lab_EventScript_PlayerGoesToCosmog_1:
# 360 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 361 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
	return

Route135_Lab_EventScript_PlayerGoesToCosmog_2:
# 353 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogEast
# 354 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	goto Route135_Lab_EventScript_PlayerGoesToCosmog_1


# 365 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 366 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 366 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 366 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 366 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 366 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 370 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 371 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 371 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 371 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 372 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 372 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 372 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 372 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 373 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 376 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 377 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 377 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 377 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 378 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 378 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 378 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 378 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 379 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 415 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 416 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 432 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 433 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 433 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 433 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 434 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 435 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 438 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 439 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 439 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 439 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 440 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 443 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 444 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 444 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 447 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 448 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 449 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 450 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 451 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 452 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 453 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 454 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 458 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 459 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 460 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 461 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 462 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 463 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 464 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 465 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 469 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 470 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 471 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 472 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 473 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 474 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 475 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 476 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 541 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 542 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 544 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 545 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 548 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 549 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 550 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 550 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 550 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 551 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 552 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 552 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 553 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 556 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 557 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 558 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 561 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 563 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 563 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 564 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 564 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 565 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 566 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 566 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 569 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 570 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 570 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 570 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 570 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 579 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogEast:
# 580 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 584 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogNorth:
# 585 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 586 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 586 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 587 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

Route_135_Lab_EventScript_Meltan::
# 646 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 647 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_MELTAN, 10, 4
# 648 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_0, MSGBOX_YESNO
# 652 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_Meltan_2
# 675 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 676 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_Meltan_1:
# 679 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 680 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route_135_Lab_EventScript_Meltan_2:
# 653 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_MELTAN, 75
# 654 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 655 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_Meltan_5
# 662 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_Meltan_6
# 670 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 671 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_5:
# 656 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 657 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 658 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 659 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 660 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_6:
# 663 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 664 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 665 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 666 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 667 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_Meltan_1


Route_135_Lab_EventScript_TypeNull::
# 685 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 686 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_TYPE_NULL, 10, 4
# 687 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_TypeNull_Text_0, MSGBOX_YESNO
# 691 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_TypeNull_2
# 714 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 715 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_TypeNull_1:
# 718 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 719 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route_135_Lab_EventScript_TypeNull_2:
# 692 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_TYPE_NULL, 70
# 693 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 694 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_TypeNull_5
# 701 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_TypeNull_6
# 709 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 710 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_5:
# 695 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 696 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 697 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 698 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 699 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_6:
# 702 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 703 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 704 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 705 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 706 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_TypeNull_1


Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 77 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 90 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 190 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: We…\n We really returned…$"

Route135_Lab_EventScript_EndUltraSpace_Text_1:
# 219 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…$"

Route135_Lab_EventScript_ToAreaZero_Text_0:
# 258 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern. Did you change your mind?$"

Route135_Lab_EventScript_ToAreaZero_Text_1:
# 265 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n Go stand next to COSMOG.\p It shall transport you.$"

Route135_Lab_EventScript_ToAreaZero_Text_2:
# 282 "data/maps/Route135_Lab/scripts.pory"
	.string "…I see. Well, you know where\n to find me if you change your mind.$"

Route135_Lab_EventScript_TalkToCosmog_Text_0:
# 296 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n It seems the survey went well.\l Thanks for the great data.\p Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to ULTRA SPACE, we\n found these devices.\p I couldn't find any use for them, but\n maybe you can.$"

Route135_Lab_EventScript_TalkToCosmog_Text_1:
# 309 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\l It seems to trust you now.$"

Route135_Lab_EventScript_TalkToCosmog_Text_2:
# 316 "data/maps/Route135_Lab/scripts.pory"
	.string "I'm busy, so I'll leave it to you.\n You know the routine by now.$"

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0:
# 329 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Where would you like to go?$"

Route_135_Lab_EventScript_Meltan_Text_0:
# 648 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MELTAN.\p Take the POKé BALL?$"

Route_135_Lab_EventScript_Meltan_Text_1:
# 657 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Route_135_Lab_EventScript_Meltan_Text_2:
# 676 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"

Route_135_Lab_EventScript_TypeNull_Text_0:
# 687 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TYPE NULL.\p Take the POKé BALL?$"

Route135_Lab_Text_Maniac1::
# 382 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 386 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 392 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 407 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 420 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 425 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 480 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 486 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 493 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 500 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 507 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 514 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: …He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 525 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 531 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 573 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"

Route135_Lab_Text_ManiacIntroduceAreaZero::
# 590 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Salutations.\p I assume JAMES provided you with the\n relevant information, yes?\p As you saw, COSMOG is capable of\n traversing the ULTRA SPACE at will.\p With extensive testing and research,\n we've been able to survey the ULTRA\l SPACE further.\p During these surveys, we came across\n another rift that seems to lead to\l another world…\p Seeing as you were crazy enough to\n walk across the sky, I presume you'd\l be open to being the first human to\l explore this new world, yes?$"

Route135_Lab_Text_ManiacExplainCosmog::
# 609 "data/maps/Route135_Lab/scripts.pory"
	.string "The camera I put on COSMOG showed\n the world has a somewhat strange\l composition… Although there are signs\l that it was once inhabited by humans,\l so it should be safe to traverse.\p COSMOG will be with you, so if you want\n to return to the lab, just ask it.\p Now, it is time! Godspeed, intern!\n COSMOG, if you will!$"

Route_135_Lab_Text_ImBusyTalkToCosmog::
# 621 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Sadly, there's no new discoveries.\p Just ask COSMOG if you need to return\n to the ULTRA SPACE.\p It seems to trust you enough without\n needing my intervention any further.$"

Route_135_Lab_PokenavText_JamesComeBackToTheLab::
# 630 "data/maps/Route135_Lab/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}?\n It's JAMES.\p The PROF. says there's a new\n breakthrough in his research.\p He thinks you'll be interested\n in helping with his experiment.\p Can you come to the LAB when\n you have a chance?\p … … … … … …\n … … … … … Click!$"
