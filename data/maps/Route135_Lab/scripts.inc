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
	call_if_unset FLAG_VISITED_ROUTE_135_LAB, Route135_SetFlag
# 12 "data/maps/Route135_Lab/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 4, Route135_Lab_JamesPosition
	end


Route135_SetFlag::
# 18 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_VISITED_ROUTE_135_LAB
	return


Route135_Lab_JamesPosition::
# 23 "data/maps/Route135_Lab/scripts.pory"
	setobjectxyperm 2, 5, 2
# 24 "data/maps/Route135_Lab/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
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
	call_if_set FLAG_SYS_DEFEATED_RED, Route135_Lab_TryAdvanceUltraSpaceVar
# 237 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 238 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 239 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 240 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_TryAdvanceUltraSpaceVar::
# 246 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 5
	return


Route135_Lab_EventScript_ToAreaZero::
# 251 "data/maps/Route135_Lab/scripts.pory"
	lock
# 252 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 253 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route135_Lab_EventScript_ToAreaZero_2
# 257 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacIntroduceAreaZero, MSGBOX_YESNO
Route135_Lab_EventScript_ToAreaZero_1:
# 259 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 260 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToAreaZero_6
# 278 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 281 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 282 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 283 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_1
Route135_Lab_EventScript_ToAreaZero_5:
# 285 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToAreaZero_2:
# 254 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_0, MSGBOX_YESNO
	goto Route135_Lab_EventScript_ToAreaZero_1

Route135_Lab_EventScript_ToAreaZero_6:
# 261 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_1, MSGBOX_AUTOCLOSE
# 264 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_EventScript_PlayerGoesToCosmog
# 265 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacExplainCosmog, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 268 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 269 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 270 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 271 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 272 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 273 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 6
# 274 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 275 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToAreaZero_5


Route135_Lab_EventScript_TalkToCosmog::
# 290 "data/maps/Route135_Lab/scripts.pory"
	lock
# 291 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 292 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_0, MSGBOX_AUTOCLOSE
# 301 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 302 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 303 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_LUNARIZER
# 304 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 305 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_1
# 308 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 309 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 310 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 311 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 312 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_2, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 315 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 316 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 317 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 318 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_MELTAN
# 319 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero::
# 324 "data/maps/Route135_Lab/scripts.pory"
	lock
# 325 "data/maps/Route135_Lab/scripts.pory"
	message Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0
# 326 "data/maps/Route135_Lab/scripts.pory"
	multichoice 25, 5, MULTI_ULTRA_SPACE_CHOICE, 0
# 327 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 328 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2
# 335 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3
Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1:
# 342 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2:
# 329 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 330 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 331 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 332 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 26, 49
# 333 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3:
# 336 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 337 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 338 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 339 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 340 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1


Route135_Lab_EventScript_PlayerGoesToCosmog::
# 347 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 348 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq Route135_Lab_EventScript_PlayerGoesToCosmog_2
# 353 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogNorth
# 354 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
Route135_Lab_EventScript_PlayerGoesToCosmog_1:
# 356 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 357 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
	return

Route135_Lab_EventScript_PlayerGoesToCosmog_2:
# 349 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogEast
# 350 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	goto Route135_Lab_EventScript_PlayerGoesToCosmog_1


# 361 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 362 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 362 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 362 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 362 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 362 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 363 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 363 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 366 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 367 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 368 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 368 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 368 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 368 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 369 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 372 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 373 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 373 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 373 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 374 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 374 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 374 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 374 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 375 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 411 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 412 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 412 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 412 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 412 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 412 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 412 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 413 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 428 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 429 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 429 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 429 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 430 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 431 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 434 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 435 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 435 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 435 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 436 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 439 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 440 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 440 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 443 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 444 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 445 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 446 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 447 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 448 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 449 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 450 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 454 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 455 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 456 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 457 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 458 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 459 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 460 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 461 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 465 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 466 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 467 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 468 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 469 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 470 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 471 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 472 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 537 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 538 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 539 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 539 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 539 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 539 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 541 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 544 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 545 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 546 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 546 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 546 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 547 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 548 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 548 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 549 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 552 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 553 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 554 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 557 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 558 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 558 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 558 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 558 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 559 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 559 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 560 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 560 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 561 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 565 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 566 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 566 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 566 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 566 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 575 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogEast:
# 576 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 577 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 580 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogNorth:
# 581 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 582 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 582 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 583 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

Route_135_Lab_EventScript_Meltan::
# 627 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 628 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_MELTAN, 10, 4
# 629 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_0, MSGBOX_YESNO
# 633 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_Meltan_2
# 656 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 657 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_Meltan_1:
# 660 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 661 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route_135_Lab_EventScript_Meltan_2:
# 634 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_MELTAN, 75
# 635 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MELTAN
# 636 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_Meltan_5
# 643 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_Meltan_6
# 651 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 652 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_5:
# 637 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 638 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 639 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 640 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 641 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_Meltan_1

Route_135_Lab_EventScript_Meltan_6:
# 644 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 645 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 646 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 647 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_MELTAN
# 648 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto Route_135_Lab_EventScript_Meltan_1


Route_135_Lab_EventScript_TypeNull::
# 666 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 667 "data/maps/Route135_Lab/scripts.pory"
	showmonpic SPECIES_TYPE_NULL, 10, 4
# 668 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_TypeNull_Text_0, MSGBOX_YESNO
# 672 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_135_Lab_EventScript_TypeNull_2
# 695 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 696 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_2
Route_135_Lab_EventScript_TypeNull_1:
# 699 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 700 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route_135_Lab_EventScript_TypeNull_2:
# 673 "data/maps/Route135_Lab/scripts.pory"
	givemon SPECIES_TYPE_NULL, 70
# 674 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYPE_NULL
# 675 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route_135_Lab_EventScript_TypeNull_5
# 682 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route_135_Lab_EventScript_TypeNull_6
# 690 "data/maps/Route135_Lab/scripts.pory"
	hidemonpic
# 691 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_5:
# 676 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 677 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 678 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 679 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 680 "data/maps/Route135_Lab/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto Route_135_Lab_EventScript_TypeNull_1

Route_135_Lab_EventScript_TypeNull_6:
# 683 "data/maps/Route135_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 684 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_EventScript_Meltan_Text_1
# 685 "data/maps/Route135_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 686 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_RECEIVED_TYPE_NULL
# 687 "data/maps/Route135_Lab/scripts.pory"
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
# 254 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern. Did you change your mind?$"

Route135_Lab_EventScript_ToAreaZero_Text_1:
# 261 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n Go stand next to COSMOG.\p It shall transport you.$"

Route135_Lab_EventScript_ToAreaZero_Text_2:
# 278 "data/maps/Route135_Lab/scripts.pory"
	.string "…I see. Well, you know where\n to find me if you change your mind.$"

Route135_Lab_EventScript_TalkToCosmog_Text_0:
# 292 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n It seems the survey went well.\l Thanks for the great data.\p Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to ULTRA SPACE, we\n found these devices.\p I couldn't find any use for them, but\n maybe you can.$"

Route135_Lab_EventScript_TalkToCosmog_Text_1:
# 305 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\l It seems to trust you now.$"

Route135_Lab_EventScript_TalkToCosmog_Text_2:
# 312 "data/maps/Route135_Lab/scripts.pory"
	.string "I'm busy, so I'll leave it to you.\n You know the routine by now.$"

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0:
# 325 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Where would you like to go?$"

Route_135_Lab_EventScript_Meltan_Text_0:
# 629 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MELTAN.\p Take the POKé BALL?$"

Route_135_Lab_EventScript_Meltan_Text_1:
# 638 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Route_135_Lab_EventScript_Meltan_Text_2:
# 657 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"

Route_135_Lab_EventScript_TypeNull_Text_0:
# 668 "data/maps/Route135_Lab/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TYPE NULL.\p Take the POKé BALL?$"

Route135_Lab_Text_Maniac1::
# 378 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 382 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 388 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 403 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 416 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 421 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 476 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 482 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 489 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 496 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 503 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 510 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: …He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 521 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 527 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 569 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"

Route135_Lab_Text_ManiacIntroduceAreaZero::
# 586 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Salutations.\p I assume JAMES provided you with the\n relevant information, yes?\p As you saw, COSMOG is capable of\n traversing the ULTRA SPACE at will.\p With extensive testing and research,\n we've been able to survey the ULTRA\l SPACE further.\p During these surveys, we came across\n another rift that seems to lead to\l another world…\p Seeing as you were crazy enough to\n walk across the sky, I presume you'd\l be open to being the first human to\l explore this new world, yes?$"

Route135_Lab_Text_ManiacExplainCosmog::
# 605 "data/maps/Route135_Lab/scripts.pory"
	.string "The camera I put on COSMOG showed\n the world has a somewhat strange\l composition… Although there are signs\l that it was once inhabited by humans,\l so it should be safe to traverse.\p COSMOG will be with you, so if you want\n to return to the lab, just ask it.\p Now, it is time! Godspeed, intern!\n COSMOG, if you will!$"

Route_135_Lab_Text_ImBusyTalkToCosmog::
# 617 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Unfortunately, there's no new discoveries.\p Just ask COSMOG if you need to return to\n the ULTRA SPACE.\p It seems to trust you enough without needing\n my intervention any further.$"
