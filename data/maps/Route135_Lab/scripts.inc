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
	setflag FLAG_SYS_DYNAMIC_LEVELS
# 12 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_LANDMARK_ROUTE135
# 13 "data/maps/Route135_Lab/scripts.pory"
	call_if_set FLAG_ENABLED_JAMES_MATCH_CALL, Route135_Lab_DisableJamesMatchCall
# 14 "data/maps/Route135_Lab/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 4, Route135_Lab_JamesPosition
	end


Route135_Lab_JamesPosition::
# 19 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 20 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Route135_Lab_DisableJamesMatchCall::
# 25 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_ENABLED_JAMES_MATCH_CALL
	return


Route135_Lab_EventScript_Maniac::
# 30 "data/maps/Route135_Lab/scripts.pory"
	lock
# 31 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
# 35 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_Maniac_3
# 38 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_Maniac_4
Route135_Lab_EventScript_Maniac_1:
# 41 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusyTalkToCosmog, MSGBOX_DEFAULT
# 42 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 43 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 32 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
# 33 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_3:
# 36 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_ToAreaZero
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_4:
# 39 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_TalkToCosmog
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 48 "data/maps/Route135_Lab/scripts.pory"
	lock
# 49 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 50 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 52 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 53 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 54 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 59 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 60 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 61 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 62 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 63 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 64 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 65 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 66 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 67 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 138 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 140 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 141 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 142 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 144 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 146 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 68 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 70 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 71 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 72 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 73 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 76 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 77 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 78 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 82 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 83 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 84 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 85 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 86 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 87 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 89 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 90 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 91 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 93 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 94 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 95 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 96 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 97 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 99 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 100 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 101 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 102 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 103 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 106 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 107 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 108 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 109 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 112 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 113 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 114 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 115 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 116 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 117 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 118 "data/maps/Route135_Lab/scripts.pory"
	fadenewbgm MUS_NONE
# 119 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 121 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 122 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 123 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 124 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 126 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 127 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 128 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 129 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 130 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 131 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 132 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 133 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 134 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 135 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 151 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 152 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 153 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 154 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 155 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 156 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 157 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 158 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 159 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 160 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 161 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 162 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 163 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 164 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 165 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 166 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 167 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 168 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 169 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 174 "data/maps/Route135_Lab/scripts.pory"
	lock
# 175 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 176 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 177 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 178 "data/maps/Route135_Lab/scripts.pory"
	goto_if_ge VAR_ULTRA_SPACE_STATE, 6, Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero
# 179 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 184 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 185 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_ManiacLookAround
# 186 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 187 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 188 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 189 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_JamesLookAround
# 190 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 193 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 194 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 195 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 196 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 198 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 199 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 200 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_Movement_ManiacReturnsToComputer
# 201 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 202 "data/maps/Route135_Lab/scripts.pory"
	applymovement 6, Route_135_Lab_Movement_CosmogReturnsToComputer
# 203 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 204 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 205 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 206 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 207 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 6
# 208 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 209 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 210 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 212 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 213 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 214 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesFacePlayer
# 215 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 216 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 218 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 219 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 220 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 222 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 223 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 224 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 225 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 227 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesReturnsToComputer
# 228 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 229 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 230 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 231 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_Movement_PlayerLeaves
# 232 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route135_Lab/scripts.pory"
	removeobject 5
# 234 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 235 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 236 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 237 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_JAMES_AREA_ZERO_CALL_STEP_COUNTER, 0
# 238 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 239 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 240 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 241 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_JamesCallsPlayerAreaZero::
# 246 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 247 "data/maps/Route135_Lab/scripts.pory"
	pokenavcall Route_135_Lab_PokenavText_JamesComeBackToTheLab
# 248 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 249 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 250 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 5
# 251 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_EventScript_ToAreaZero::
# 256 "data/maps/Route135_Lab/scripts.pory"
	lock
# 257 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 258 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route135_Lab_EventScript_ToAreaZero_2
# 262 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacIntroduceAreaZero, MSGBOX_YESNO
Route135_Lab_EventScript_ToAreaZero_1:
# 264 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 265 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToAreaZero_6
# 283 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 286 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 287 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 288 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_1
Route135_Lab_EventScript_ToAreaZero_5:
# 290 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToAreaZero_2:
# 259 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_0, MSGBOX_YESNO
	goto Route135_Lab_EventScript_ToAreaZero_1

Route135_Lab_EventScript_ToAreaZero_6:
# 266 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_1, MSGBOX_AUTOCLOSE
# 269 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_EventScript_PlayerGoesToCosmog
# 270 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacExplainCosmog, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 273 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 274 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 275 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 276 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 277 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 278 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 6
# 279 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 280 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToAreaZero_5


Route135_Lab_EventScript_TalkToCosmog::
# 295 "data/maps/Route135_Lab/scripts.pory"
	lock
# 296 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 297 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_0, MSGBOX_AUTOCLOSE
# 306 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 307 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 308 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 309 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 310 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_1
# 313 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 314 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 315 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 316 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 317 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_2, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 320 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 321 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 322 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 323 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_MELTAN
# 324 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero::
# 329 "data/maps/Route135_Lab/scripts.pory"
	lock
# 330 "data/maps/Route135_Lab/scripts.pory"
	message Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0
# 331 "data/maps/Route135_Lab/scripts.pory"
	multichoice 25, 5, MULTI_ULTRA_SPACE_CHOICE, 0
# 332 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 333 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2
# 340 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3
Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1:
# 347 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2:
# 334 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 335 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 336 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 337 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 26, 49
# 338 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3:
# 341 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 342 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 343 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 344 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 345 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1


Route135_Lab_EventScript_PlayerGoesToCosmog::
# 352 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 353 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq Route135_Lab_EventScript_PlayerGoesToCosmog_2
# 358 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogNorth
# 359 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
Route135_Lab_EventScript_PlayerGoesToCosmog_1:
# 361 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 362 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
	return

Route135_Lab_EventScript_PlayerGoesToCosmog_2:
# 354 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogEast
# 355 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	goto Route135_Lab_EventScript_PlayerGoesToCosmog_1


# 366 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 368 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 368 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 371 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 372 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 372 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 372 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 373 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 373 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 373 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 373 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 374 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 377 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 378 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 378 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 378 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 379 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 379 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 379 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 379 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 380 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 416 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 417 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 418 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 433 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 434 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 434 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 434 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 435 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 436 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 439 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 440 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 440 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 440 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 441 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 444 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 445 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 445 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 448 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 449 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 450 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 451 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 452 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 453 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 454 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 455 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 459 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 460 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 461 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 462 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 463 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 464 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 465 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 466 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 470 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 471 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 472 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 473 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 474 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 475 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 476 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 477 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 542 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 544 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 544 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 544 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 544 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 545 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 546 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 549 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 550 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 551 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 551 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 551 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 552 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 553 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 553 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 554 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 557 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 558 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 559 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 562 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 563 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 563 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 563 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 563 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 564 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 564 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 565 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 565 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 566 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 567 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 567 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 570 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 571 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 571 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 571 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 571 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 580 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogEast:
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 582 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 585 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogNorth:
# 586 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 587 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 587 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 588 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

Route_135_Lab_EventScript_Meltan::
# 647 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 648 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_MELTAN, 10, 4
# 649 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_0, MSGBOX_YESNO
# 653 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_Meltan_2
# 676 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 677 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_Meltan_1:
# 680 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 681 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route_135_Lab_EventScript_Meltan_2:
# 654 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_MELTAN, 75
# 655 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 656 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_Meltan_5
# 663 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_Meltan_6
# 671 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 672 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_5:
# 657 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 658 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 659 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 660 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 661 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_6:
# 664 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 665 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 666 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 667 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 668 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_Meltan_1


Route_135_Lab_EventScript_TypeNull::
# 686 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 687 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_TYPE_NULL, 10, 4
# 688 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_TypeNull_Text_0, MSGBOX_YESNO
# 692 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_TypeNull_2
# 715 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 716 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_TypeNull_1:
# 719 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 720 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route_135_Lab_EventScript_TypeNull_2:
# 693 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_TYPE_NULL, 70
# 694 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 695 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_TypeNull_5
# 702 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_TypeNull_6
# 710 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 711 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_5:
# 696 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 697 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 698 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 699 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 700 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_6:
# 703 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 704 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 705 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 706 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 707 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_TypeNull_1


Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 78 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 91 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 191 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: We…\n We really returned…$"

Route135_Lab_EventScript_EndUltraSpace_Text_1:
# 220 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…$"

Route135_Lab_EventScript_ToAreaZero_Text_0:
# 259 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern. Did you change your mind?$"

Route135_Lab_EventScript_ToAreaZero_Text_1:
# 266 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n Go stand next to COSMOG.\p It shall transport you.$"

Route135_Lab_EventScript_ToAreaZero_Text_2:
# 283 "data/maps/Route135_Lab/scripts.pory"
	.string "…I see. Well, you know where\n to find me if you change your mind.$"

Route135_Lab_EventScript_TalkToCosmog_Text_0:
# 297 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n It seems the survey went well.\l Thanks for the great data.\p Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to ULTRA SPACE, we\n found these devices.\p I couldn't find any use for them, but\n maybe you can.$"

Route135_Lab_EventScript_TalkToCosmog_Text_1:
# 310 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\l It seems to trust you now.$"

Route135_Lab_EventScript_TalkToCosmog_Text_2:
# 317 "data/maps/Route135_Lab/scripts.pory"
	.string "I'm busy, so I'll leave it to you.\n You know the routine by now.$"

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0:
# 330 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Where would you like to go?$"

Route_135_Lab_EventScript_Meltan_Text_0:
# 649 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MELTAN.\p Take the POKé BALL?$"

Route_135_Lab_EventScript_Meltan_Text_1:
# 658 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Route_135_Lab_EventScript_Meltan_Text_2:
# 677 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"

Route_135_Lab_EventScript_TypeNull_Text_0:
# 688 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TYPE NULL.\p Take the POKé BALL?$"

Route135_Lab_Text_Maniac1::
# 383 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 387 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 393 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 408 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 421 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 426 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 481 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 487 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 494 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 501 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 508 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 515 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: …He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 526 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 532 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 574 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"

Route135_Lab_Text_ManiacIntroduceAreaZero::
# 591 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Salutations.\p I assume JAMES provided you with the\n relevant information, yes?\p As you saw, COSMOG is capable of\n traversing the ULTRA SPACE at will.\p With extensive testing and research,\n we've been able to survey the ULTRA\l SPACE further.\p During these surveys, we came across\n another rift that seems to lead to\l another world…\p Seeing as you were crazy enough to\n walk across the sky, I presume you'd\l be open to being the first human to\l explore this new world, yes?$"

Route135_Lab_Text_ManiacExplainCosmog::
# 610 "data/maps/Route135_Lab/scripts.pory"
	.string "The camera I put on COSMOG showed\n the world has a somewhat strange\l composition… Although there are signs\l that it was once inhabited by humans,\l so it should be safe to traverse.\p COSMOG will be with you, so if you want\n to return to the lab, just ask it.\p Now, it is time! Godspeed, intern!\n COSMOG, if you will!$"

Route_135_Lab_Text_ImBusyTalkToCosmog::
# 622 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Sadly, there's no new discoveries.\p Just ask COSMOG if you need to return\n to the ULTRA SPACE.\p It seems to trust you enough without\n needing my intervention any further.$"

Route_135_Lab_PokenavText_JamesComeBackToTheLab::
# 631 "data/maps/Route135_Lab/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}?\n It's JAMES.\p The PROF. says there's a new\n breakthrough in his research.\p He thinks you'll be interested\n in helping with his experiment.\p Can you come to the LAB when\n you have a chance?\p … … … … … …\n … … … … … Click!$"
