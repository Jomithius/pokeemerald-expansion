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


Route135_Lab_EventScript_Maniac::
# 28 "data/maps/Route135_Lab/scripts.pory"
	lock
# 29 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 4
	goto_if_eq Route135_Lab_EventScript_Maniac_2
# 33 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 5
	goto_if_eq Route135_Lab_EventScript_Maniac_3
# 36 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_ULTRA_SPACE_STATE, 6
	goto_if_eq Route135_Lab_EventScript_Maniac_4
Route135_Lab_EventScript_Maniac_1:
# 39 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusyTalkToCosmog, MSGBOX_DEFAULT
# 40 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 41 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_Maniac_2:
# 30 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImBusy, MSGBOX_DEFAULT
# 31 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_3:
# 34 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_ToAreaZero
	goto Route135_Lab_EventScript_Maniac_1

Route135_Lab_EventScript_Maniac_4:
# 37 "data/maps/Route135_Lab/scripts.pory"
	goto Route135_Lab_EventScript_TalkToCosmog
	goto Route135_Lab_EventScript_Maniac_1


Route135_Lab_EventScript_James::
# 46 "data/maps/Route135_Lab/scripts.pory"
	lock
# 47 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 48 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route_135_Lab_Text_ImGoingToStayHere, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 50 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 51 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 52 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ToUltraSpace::
# 57 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 58 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 60 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 61 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 62 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacApproachPlayer
# 63 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 64 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac1, MSGBOX_YESNO
# 65 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToUltraSpace_2
# 136 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacNo, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 138 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 139 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 140 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 142 "data/maps/Route135_Lab/scripts.pory"
	waitstate
Route135_Lab_EventScript_ToUltraSpace_1:
# 144 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end

Route135_Lab_EventScript_ToUltraSpace_2:
# 66 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 68 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacGoBackToPC
# 69 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 70 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoBackToPC
# 71 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac3, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 74 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 75 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 76 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 80 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 81 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 82 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 83 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 84 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 85 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac4, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 87 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 88 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 89 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 91 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 92 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesEnter
# 93 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 94 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 95 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route135_Lab/scripts.pory"
	playse SE_PIN
# 97 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 98 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 99 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 100 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 101 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 104 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 105 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 106 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 107 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac5, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 110 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Route135_Lab_Movement_ManiacStartExperiment
# 111 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 112 "data/maps/Route135_Lab/scripts.pory"
	applymovement 2, Route135_Lab_Movement_JamesStartExperiment
# 113 "data/maps/Route135_Lab/scripts.pory"
	delay 16
# 114 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerStartExperiment
# 115 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 2
# 116 "data/maps/Route135_Lab/scripts.pory"
	fadenewbgm MUS_NONE
# 117 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac6, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 119 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 120 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BERRY_BLENDER
# 121 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 122 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac7, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 124 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 125 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 126 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 127 "data/maps/Route135_Lab/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 128 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 129 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 130 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 131 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 1
# 132 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 40, 65
# 133 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToUltraSpace_1


Route135_Lab_Shake::
# 149 "data/maps/Route135_Lab/scripts.pory"
	delay 30
# 150 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8004, 2
# 151 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8005, 6
# 152 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8006, 8
# 153 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_0x8007, 4
# 154 "data/maps/Route135_Lab/scripts.pory"
	special ShakeCamera
# 155 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 156 "data/maps/Route135_Lab/scripts.pory"
	delay 60
# 157 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 158 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 159 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 160 "data/maps/Route135_Lab/scripts.pory"
	delay 20
# 161 "data/maps/Route135_Lab/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 162 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_TO_WHITE
# 163 "data/maps/Route135_Lab/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 164 "data/maps/Route135_Lab/scripts.pory"
	delay 10
# 165 "data/maps/Route135_Lab/scripts.pory"
	waitse
# 166 "data/maps/Route135_Lab/scripts.pory"
	playse SE_INTRO_BLAST
# 167 "data/maps/Route135_Lab/scripts.pory"
	delay 20
	return


Route135_Lab_EventScript_Cosmog::
# 172 "data/maps/Route135_Lab/scripts.pory"
	lock
# 173 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 174 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 175 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 176 "data/maps/Route135_Lab/scripts.pory"
	goto_if_ge VAR_ULTRA_SPACE_STATE, 6, Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero
# 177 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_EndUltraSpace::
# 182 "data/maps/Route135_Lab/scripts.pory"
	lockall
# 183 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_ManiacLookAround
# 184 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 185 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_PlayerLookAround
# 186 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 187 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_JamesLookAround
# 188 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 191 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 192 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 193 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 194 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac8, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 196 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 197 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 198 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Route_135_Lab_Movement_ManiacReturnsToComputer
# 199 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 200 "data/maps/Route135_Lab/scripts.pory"
	applymovement 6, Route_135_Lab_Movement_CosmogReturnsToComputer
# 201 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 202 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 203 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 204 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 205 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 6
# 206 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 207 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 208 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_Maniac9, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 210 "data/maps/Route135_Lab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 211 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 4
# 212 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesFacePlayer
# 213 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 214 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James2, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 216 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 217 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 218 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_EndUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 221 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 222 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 223 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_James3, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 225 "data/maps/Route135_Lab/scripts.pory"
	applymovement 5, Route_135_Lab_Movement_JamesReturnsToComputer
# 226 "data/maps/Route135_Lab/scripts.pory"
	delay 8
# 227 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 228 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 5
# 229 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_135_Lab_Movement_PlayerLeaves
# 230 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route135_Lab/scripts.pory"
	removeobject 5
# 232 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 233 "data/maps/Route135_Lab/scripts.pory"
	clearflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 234 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 4
# 235 "data/maps/Route135_Lab/scripts.pory"
	call_if_set FLAG_DEFEATED_RED, Route135_Lab_TryAdvanceUltraSpaceVar
# 236 "data/maps/Route135_Lab/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE135
# 237 "data/maps/Route135_Lab/scripts.pory"
	warp MAP_ROUTE135, 8, 10
# 238 "data/maps/Route135_Lab/scripts.pory"
	waitstate
# 239 "data/maps/Route135_Lab/scripts.pory"
	releaseall
	end


Route135_Lab_TryAdvanceUltraSpaceVar::
# 245 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 5
	return


Route135_Lab_EventScript_ToAreaZero::
# 250 "data/maps/Route135_Lab/scripts.pory"
	lock
# 251 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 252 "data/maps/Route135_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route135_Lab_EventScript_ToAreaZero_2
# 256 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacIntroduceAreaZero, MSGBOX_YESNO
Route135_Lab_EventScript_ToAreaZero_1:
# 258 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 259 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route135_Lab_EventScript_ToAreaZero_6
# 275 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_2, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 278 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 279 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 280 "data/maps/Route135_Lab/scripts.pory"
	setflag FLAG_TEMP_1
Route135_Lab_EventScript_ToAreaZero_5:
# 282 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ToAreaZero_2:
# 253 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_0, MSGBOX_YESNO
	goto Route135_Lab_EventScript_ToAreaZero_1

Route135_Lab_EventScript_ToAreaZero_6:
# 260 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_ToAreaZero_Text_1, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_EventScript_PlayerGoesToCosmog
# 264 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_Text_ManiacExplainCosmog, MSGBOX_AUTOCLOSE
# 266 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 267 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 268 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 269 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 270 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 6
# 271 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 272 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ToAreaZero_5


Route135_Lab_EventScript_TalkToCosmog::
# 287 "data/maps/Route135_Lab/scripts.pory"
	lock
# 288 "data/maps/Route135_Lab/scripts.pory"
	faceplayer
# 289 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_0, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 299 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 300 "data/maps/Route135_Lab/scripts.pory"
	giveitem ITEM_N_SOLARIZER
# 301 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 302 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_1
# 305 "data/maps/Route135_Lab/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 306 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 3
# 307 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 308 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 309 "data/maps/Route135_Lab/scripts.pory"
	msgbox Route135_Lab_EventScript_TalkToCosmog_Text_2, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route135_Lab/scripts.pory"
	waitmessage
# 312 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 313 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
# 314 "data/maps/Route135_Lab/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 7
# 315 "data/maps/Route135_Lab/scripts.pory"
	release
	end


Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero::
# 320 "data/maps/Route135_Lab/scripts.pory"
	lock
# 321 "data/maps/Route135_Lab/scripts.pory"
	message Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0
# 322 "data/maps/Route135_Lab/scripts.pory"
	multichoice 25, 5, MULTI_ULTRA_SPACE_CHOICE, 0
# 323 "data/maps/Route135_Lab/scripts.pory"
	closemessage
# 324 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2
# 331 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3
Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1:
# 338 "data/maps/Route135_Lab/scripts.pory"
	release
	end

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_2:
# 325 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 326 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 327 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 328 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_ULTRA_SPACE, 26, 49
# 329 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_3:
# 332 "data/maps/Route135_Lab/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 333 "data/maps/Route135_Lab/scripts.pory"
	waitmoncry
# 334 "data/maps/Route135_Lab/scripts.pory"
	call Route135_Lab_Shake
# 335 "data/maps/Route135_Lab/scripts.pory"
	warpwhitefade MAP_AREA_ZERO, 15, 11
# 336 "data/maps/Route135_Lab/scripts.pory"
	waitstate
	goto Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_1


Route135_Lab_EventScript_PlayerGoesToCosmog::
# 343 "data/maps/Route135_Lab/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_0
# 344 "data/maps/Route135_Lab/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq Route135_Lab_EventScript_PlayerGoesToCosmog_2
# 349 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogNorth
# 350 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
Route135_Lab_EventScript_PlayerGoesToCosmog_1:
# 352 "data/maps/Route135_Lab/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 353 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 1
	return

Route135_Lab_EventScript_PlayerGoesToCosmog_2:
# 345 "data/maps/Route135_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route135_Lab_Movement_PlayerGoesToCosmogWest
# 346 "data/maps/Route135_Lab/scripts.pory"
	waitmovement 0
	goto Route135_Lab_EventScript_PlayerGoesToCosmog_1


# 357 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacApproachPlayer:
# 358 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 358 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 358 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 358 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 358 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 359 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 359 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 362 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacGoBackToPC:
# 363 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 363 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 363 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 364 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 364 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 364 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 364 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 365 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 368 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoBackToPC:
# 369 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 369 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 369 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 370 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 370 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 370 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 370 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 371 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 407 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesEnter:
# 408 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 408 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 408 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 408 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 408 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 408 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 409 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 424 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_ManiacStartExperiment:
# 425 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 425 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 425 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 426 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 427 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 430 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_JamesStartExperiment:
# 431 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 431 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 431 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 432 "data/maps/Route135_Lab/scripts.pory"
	walk_right
	step_end

# 435 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerStartExperiment:
# 436 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 436 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 439 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_ManiacLookAround:
# 440 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 441 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 442 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
# 443 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 444 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 445 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 446 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 450 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_JamesLookAround:
# 451 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 452 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 453 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 454 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 455 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 456 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 457 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 461 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_PlayerLookAround:
# 462 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_right
# 463 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 464 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
# 465 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 466 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_up
# 467 "data/maps/Route135_Lab/scripts.pory"
	delay_8
# 468 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 533 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_ManiacReturnsToComputer:
# 534 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_down
# 535 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 535 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 535 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 535 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
# 536 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_up
# 537 "data/maps/Route135_Lab/scripts.pory"
	walk_fast_right
	step_end

# 540 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_CosmogReturnsToComputer:
# 541 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 542 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 542 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 542 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 543 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 544 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 544 "data/maps/Route135_Lab/scripts.pory"
	walk_right
# 545 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 548 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesFacePlayer:
# 549 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 550 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_left
	step_end

# 553 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_JamesReturnsToComputer:
# 554 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 554 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 554 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 554 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 555 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 555 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 556 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 556 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 557 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 558 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 558 "data/maps/Route135_Lab/scripts.pory"
	walk_up
	step_end

# 561 "data/maps/Route135_Lab/scripts.pory"
Route_135_Lab_Movement_PlayerLeaves:
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_down
# 562 "data/maps/Route135_Lab/scripts.pory"
	walk_down
	step_end

# 571 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogWest:
# 572 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 573 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 576 "data/maps/Route135_Lab/scripts.pory"
Route135_Lab_Movement_PlayerGoesToCosmogNorth:
# 577 "data/maps/Route135_Lab/scripts.pory"
	walk_left
# 578 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 578 "data/maps/Route135_Lab/scripts.pory"
	walk_up
# 579 "data/maps/Route135_Lab/scripts.pory"
	walk_in_place_down
	step_end

Route135_Lab_EventScript_ToUltraSpace_Text_0:
# 76 "data/maps/Route135_Lab/scripts.pory"
	.string " In fact, this POKéMON here came from one\n of those rifts.\l I've named it COSMOG.$"

Route135_Lab_EventScript_ToUltraSpace_Text_1:
# 89 "data/maps/Route135_Lab/scripts.pory"
	.string "Assistant!$"

Route135_Lab_EventScript_EndUltraSpace_Text_0:
# 189 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: We…\n We really returned…$"

Route135_Lab_EventScript_EndUltraSpace_Text_1:
# 218 "data/maps/Route135_Lab/scripts.pory"
	.string "I think I understand why JIMMY gave\n me this job now…$"

Route135_Lab_EventScript_ToAreaZero_Text_0:
# 253 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern. Did you change your mind?$"

Route135_Lab_EventScript_ToAreaZero_Text_1:
# 260 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n Go stand next to COSMOG.\p It shall transport you.$"

Route135_Lab_EventScript_ToAreaZero_Text_2:
# 275 "data/maps/Route135_Lab/scripts.pory"
	.string "…I see. Well, you know where\n to find me if you change your mind.$"

Route135_Lab_EventScript_TalkToCosmog_Text_0:
# 289 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n It seems the survey went well.\l Thanks for the great data.\p Well, other than that, there hasn't\n been any significant new developments.\p But on another trip to ULTRA SPACE we\n found these devices.\p I couldn't find any use for them, but\n maybe you can.$"

Route135_Lab_EventScript_TalkToCosmog_Text_1:
# 302 "data/maps/Route135_Lab/scripts.pory"
	.string "If you'd like to return to one of the\n previous worlds, COSMOG is ready.\l It seems to trust you now.$"

Route135_Lab_EventScript_TalkToCosmog_Text_2:
# 309 "data/maps/Route135_Lab/scripts.pory"
	.string "I'm busy, so I'll leave it to you.\n You know the routine by now.$"

Route135_Lab_EventScript_ReturnToUltraSpaceOrAreaZero_Text_0:
# 321 "data/maps/Route135_Lab/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Where would you like to go?$"

Route135_Lab_Text_Maniac1::
# 374 "data/maps/Route135_Lab/scripts.pory"
	.string "Hm? Are you the new intern?$"

Route135_Lab_Text_Maniac2::
# 378 "data/maps/Route135_Lab/scripts.pory"
	.string "Resplendent!\n You're just in time.\l Come with me.$"

Route135_Lab_Text_Maniac3::
# 384 "data/maps/Route135_Lab/scripts.pory"
	.string "I presume you're already aware of\n what's being researched here… but\l to reiterate, I'm currently looking\l into the possibility of traveling\l to new worlds.\p In fact, I discovered the existence of\n different dimensions parallel to ours.\p I've named the endless expanse\n between these worlds ULTRA SPACE.\p Around the world, there have been\n rifts across the region that connect\l our world to this ULTRA SPACE.$"

Route135_Lab_Text_Maniac4::
# 399 "data/maps/Route135_Lab/scripts.pory"
	.string "I've reached a breakthrough in my\n experiments and now plan to attempt\l to open a rift to the ULTRA SPACE.\p You made it just in time.\n Quite fortuitous, indeed.$"

Route135_Lab_Text_James::
# 412 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: {PLAYER}?\n What are you doing here?$"

Route135_Lab_Text_Maniac5::
# 417 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Ah, so you two are\n already acquainted.\p Then let us forgo the formalities and\n get right to the experiment!$"

Route135_Lab_Text_Maniac6::
# 472 "data/maps/Route135_Lab/scripts.pory"
	.string "This machine I've built should be\n capable of creating the rift…\l Let us begin.$"

Route135_Lab_Text_Maniac7::
# 478 "data/maps/Route135_Lab/scripts.pory"
	.string "It's working! It's really working!\n RESPLENDENT!\p I knew I was a genius!\n Wait… No! Something's wrong!$"

Route135_Lab_Text_ManiacNo::
# 485 "data/maps/Route135_Lab/scripts.pory"
	.string "I see…\n Well, this is a private LAB.\p If you're not going to help me with\n my research, you'll have to leave.$"

Route135_Lab_Text_Maniac8::
# 492 "data/maps/Route135_Lab/scripts.pory"
	.string "Great work COSMOG!\n These discoveries are monumental!\p I must log all my findings this instant!\n Come with me, COSMOG!$"

Route135_Lab_Text_Maniac9::
# 499 "data/maps/Route135_Lab/scripts.pory"
	.string "MANIAC: Thanks for your work, intern.\n You're free to do as you would.\p I shall contact you if your assistance\n is required again.$"

Route135_Lab_Text_James2::
# 506 "data/maps/Route135_Lab/scripts.pory"
	.string "JAMES: …He's gonna be like that for a\n while.\p Well, either way, that really was a crazy\n experience.\p What are you going to do now, {PLAYER}?\n I'm going to stay and help out more.\l I think if I do, I'll find the answers\l I'm looking for.$"

Route135_Lab_Text_James3::
# 517 "data/maps/Route135_Lab/scripts.pory"
	.string "Anyways, like the PROF. said, we'll let\n let you know if anything else happens.\p See ya, {PLAYER}.$"

Route_135_Lab_Text_ImGoingToStayHere::
# 523 "data/maps/Route135_Lab/scripts.pory"
	.string "I don't know how long I'm going to\n stay here but I don't mind it.\p Yeah, it's in a rural area, but the people\n are nice.\p The PROF.'s a little weird, but I can\n tolerate it.$"

Route_135_Lab_Text_ImBusy::
# 565 "data/maps/Route135_Lab/scripts.pory"
	.string "Salutations, intern.\n There's no new breakthroughs yet.\p I'm busy now, so come back later.$"

Route135_Lab_Text_ManiacIntroduceAreaZero::
# 582 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Salutations.\p I assume JAMES provided you with the\n relevant information, yes?\p As you saw, COSMOG is capable of\n traversing the ULTRA SPACE at will.\p With extensive testing and research,\n we've been able to survey the ULTRA\l SPACE further.\p During these surveys, we came across\n another rift that seems to lead to\l another world…\p Seeing as you were crazy enough to\n walk across the sky, I presume you'd\l be open to being the first human to\l explore this new world, yes?$"

Route135_Lab_Text_ManiacExplainCosmog::
# 601 "data/maps/Route135_Lab/scripts.pory"
	.string "The camera I put on COSMOG showed\n the world has a somewhat strange\l composition… Although, there are signs\l that it was once inhabited by humans\l so it should be safe to traverse.\p COSMOG will be with you, so if you want\n to return to the lab, just ask it.\p Now, it is time! Godspeed, intern!\n COSMOG, if you will!$"

Route_135_Lab_Text_ImBusyTalkToCosmog::
# 613 "data/maps/Route135_Lab/scripts.pory"
	.string "Ah, intern.\n Unfortunately, there's no new discoveries.\p Just ask COSMOG if you need to return to\n the ULTRA SPACE.\p It seems to trust you enough without needing\n my intervention any further.$"
