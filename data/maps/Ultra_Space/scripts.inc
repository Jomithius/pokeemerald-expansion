Ultra_Space_MapScripts::
# 5 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ultra_Space_UpdatePCMetatiles
# 2 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ultra_Space_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ultra_Space_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Ultra_Space/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 1, Ultra_Space_EventScript_ArrivedInUltraSpace
	.2byte 0


Ultra_Space_UpdatePCMetatiles::
# 9 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_BLACEPHALON, Ultra_Space_EventScript_AddPC
	end


Ultra_Space_EventScript_ArrivedInUltraSpace::
# 14 "data/maps/Ultra_Space/scripts.pory"
	lock
# 15 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_VISITED_ULTRA_SPACE
# 16 "data/maps/Ultra_Space/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 17 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 18 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 19 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 20 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 21 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 22 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 23 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 24 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacPanic
# 25 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 26 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesLookAround
# 27 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 28 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerLookAround
# 29 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 30 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 32 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_Maniac1
# 33 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 34 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 35 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 36 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 37 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 38 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac1, MSGBOX_AUTOCLOSE
# 39 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 40 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 41 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 42 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_James1, MSGBOX_AUTOCLOSE
# 43 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 44 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 45 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac2, MSGBOX_AUTOCLOSE
# 46 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 47 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToCentralArea
# 48 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 49 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesToCentralArea
# 50 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 51 "data/maps/Ultra_Space/scripts.pory"
	setobjectxyperm 1, 30, 38
# 52 "data/maps/Ultra_Space/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_NONE
# 53 "data/maps/Ultra_Space/scripts.pory"
	setobjectxyperm 2, 29, 36
# 54 "data/maps/Ultra_Space/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 55 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 56 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 2
# 57 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Blacephalon::
# 62 "data/maps/Ultra_Space/scripts.pory"
	lock
# 63 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_0, MSGBOX_AUTOCLOSE
# 64 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 65 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerToCentralArea
# 66 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 67 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 68 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 69 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_1, MSGBOX_AUTOCLOSE
# 71 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 72 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 73 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 74 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 75 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 76 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac3, MSGBOX_AUTOCLOSE
# 77 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 78 "data/maps/Ultra_Space/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_NONE
# 79 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToPortal
# 80 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 81 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 82 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 83 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 84 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 85 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 86 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 87 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 88 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 89 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_2, MSGBOX_AUTOCLOSE
# 90 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 91 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 93 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 94 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 95 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_Blacephalon
# 96 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 97 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacRunToPlayer
# 98 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 99 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_3, MSGBOX_AUTOCLOSE
# 102 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 103 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 104 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 105 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_BlacephalonApproachesPlayer
# 106 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 4
# 107 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 75
# 108 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 109 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacFacePlayer
# 110 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 111 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac4, MSGBOX_AUTOCLOSE
# 112 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 113 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 114 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 115 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_4, MSGBOX_AUTOCLOSE
# 117 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 118 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 119 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 120 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 121 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 122 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 123 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 124 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_5, MSGBOX_AUTOCLOSE
# 127 "data/maps/Ultra_Space/scripts.pory"
	giveitem ITEM_BEAST_BALL, 50
# 128 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 129 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 130 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 131 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac5, MSGBOX_AUTOCLOSE
# 132 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 133 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacGoesToPermSpot
# 134 "data/maps/Ultra_Space/scripts.pory"
	delay 30
# 135 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 136 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 137 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 138 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 139 "data/maps/Ultra_Space/scripts.pory"
	setobjectxyperm 2, 27, 48
# 140 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 141 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 142 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 143 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 144 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_JamesGoingToExplore, MSGBOX_AUTOCLOSE
# 145 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 146 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesGoesToPermSpot
# 147 "data/maps/Ultra_Space/scripts.pory"
	delay 32
# 148 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 149 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 150 "data/maps/Ultra_Space/scripts.pory"
	setobjectxyperm 1, 22, 31
# 151 "data/maps/Ultra_Space/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 152 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_EventScript_AddPC
# 153 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 154 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 3
# 155 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_James::
# 160 "data/maps/Ultra_Space/scripts.pory"
	lock
# 161 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 162 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_InvisiblePathHint, MSGBOX_NPC
# 163 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 164 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 165 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 166 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Maniac::
# 171 "data/maps/Ultra_Space/scripts.pory"
	lock
# 172 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 173 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_DoYouNeedMedicalAssistance, MSGBOX_AUTOCLOSE
# 174 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 175 "data/maps/Ultra_Space/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 176 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries, MSGBOX_AUTOCLOSE
# 177 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 178 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 179 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 180 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_AddPC::
# 185 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 46, METATILE_DistortionWorld_Ultra_Space_PC_Top, TRUE
# 186 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 47, METATILE_Building_PC_Off, TRUE
# 187 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 48, METATILE_DistortionWorld_Ultra_Space_PC_Bottom, FALSE
	return


Ultra_Space_EventScript_Necrozma::
# 192 "data/maps/Ultra_Space/scripts.pory"
	lock
# 193 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
# 194 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 195 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 75
# 196 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 197 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_BLACK
# 198 "data/maps/Ultra_Space/scripts.pory"
	removeobject 13
# 199 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_NECROZMA
# 200 "data/maps/Ultra_Space/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 201 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_0, MSGBOX_AUTOCLOSE
# 202 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 203 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 204 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 205 "data/maps/Ultra_Space/scripts.pory"
	setobjectxy 1, 24, 15
# 206 "data/maps/Ultra_Space/scripts.pory"
	setobjectxy 2, 24, 14
# 207 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesGoesToNecrozma
# 208 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 209 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacGoesToNecrozma
# 210 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 211 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_ThatWasCrazy, MSGBOX_AUTOCLOSE
# 212 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 213 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 214 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 215 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 216 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 217 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 218 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 219 "data/maps/Ultra_Space/scripts.pory"
	addobject 15
# 220 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_COSMOG_ULTRA_SPACE
# 221 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 222 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 223 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 224 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 225 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 226 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 227 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 228 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 229 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 230 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_1, MSGBOX_AUTOCLOSE
# 231 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 232 "data/maps/Ultra_Space/scripts.pory"
	applymovement 15, Ultra_Space_Movement_Cosmog
# 233 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 234 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 235 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 236 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 237 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 238 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac6, MSGBOX_AUTOCLOSE
# 239 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 240 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 241 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 242 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_2, MSGBOX_AUTOCLOSE
# 245 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 246 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 247 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 248 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 249 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 250 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 251 "data/maps/Ultra_Space/scripts.pory"
	setobjectxyperm 15, 26, 48
# 252 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 7, 8
# 253 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_Shake::
# 258 "data/maps/Ultra_Space/scripts.pory"
	delay 30
# 259 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8004, 2
# 260 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8005, 6
# 261 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8006, 8
# 262 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8007, 4
# 263 "data/maps/Ultra_Space/scripts.pory"
	special ShakeCamera
# 264 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 265 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 266 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 267 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 268 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 269 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 270 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 271 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 272 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 273 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 274 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 275 "data/maps/Ultra_Space/scripts.pory"
	playse SE_INTRO_BLAST
# 276 "data/maps/Ultra_Space/scripts.pory"
	delay 20
	return


# 383 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacPanic:
# 384 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 385 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 386 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_up
# 387 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 388 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_left
# 389 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 390 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_right
# 391 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 392 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
# 393 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 396 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Maniac1:
# 397 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 397 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 398 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 401 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesLookAround:
# 402 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 403 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 404 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 405 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 406 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 409 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerLookAround:
# 410 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
# 411 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 412 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
# 413 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 414 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 415 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 416 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 419 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToCentralArea:
# 420 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 420 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 420 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 420 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 421 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 421 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 424 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesToCentralArea:
# 425 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 426 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 426 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 426 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 426 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 427 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 427 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 430 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerToCentralArea:
# 431 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 431 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 431 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 431 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 431 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 431 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 432 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 435 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToPortal:
# 436 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 436 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 436 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 436 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 439 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacRunToPlayer:
# 440 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 440 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 440 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 441 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 441 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 442 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
	step_end

# 445 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Blacephalon:
# 446 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 446 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 447 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 448 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 448 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 448 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 451 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_BlacephalonApproachesPlayer:
# 452 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 452 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 452 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 453 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 456 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacFacePlayer:
# 457 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 457 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 457 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 458 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 459 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 460 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 461 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 462 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 462 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 463 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 466 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToPermSpot:
# 467 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 467 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 468 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 468 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 468 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 468 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 469 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 470 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 470 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 473 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToPermSpot:
# 474 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 475 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 475 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 475 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 475 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 476 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 476 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 476 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 476 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 477 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 477 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 477 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 477 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 478 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 481 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToNecrozma:
# 482 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 482 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 482 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 482 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 482 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 482 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 483 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 484 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 487 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToNecrozma:
# 488 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 488 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 488 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 488 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 488 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 488 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 488 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 489 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 490 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 493 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Cosmog:
# 494 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 495 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 495 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 495 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0:
# 30 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: No, no, no…!$"

Ultra_Space_EventScript_Blacephalon_Text_0:
# 63 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: {PLAYER}! Over here!$"

Ultra_Space_EventScript_Blacephalon_Text_1:
# 69 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: This area looks promising.\n He's investigating it now.$"

Ultra_Space_EventScript_Blacephalon_Text_2:
# 89 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Look out!$"

Ultra_Space_EventScript_Blacephalon_Text_3:
# 99 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: W-What is that?!\n An undiscovered POKéMON?!\p Wait, it's attacking!$"

Ultra_Space_EventScript_Blacephalon_Text_4:
# 115 "data/maps/Ultra_Space/scripts.pory"
	.string "Assistant, please give some of them\n to the intern.$"

Ultra_Space_EventScript_Blacephalon_Text_5:
# 124 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Here you go.\n Apparently they should be more effective\l at catching POKéMON from the ULTRA SPACE.$"

Ultra_Space_EventScript_Necrozma_Text_0:
# 201 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}!$"

Ultra_Space_EventScript_Necrozma_Text_1:
# 230 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: C-COSMOG?!$"

Ultra_Space_EventScript_Necrozma_Text_2:
# 242 "data/maps/Ultra_Space/scripts.pory"
	.string "Quite fortuitous, indeed!\n Now COSMOG, if you will.\l Please get us out of here!$"

Ultra_Space_Text_DoYouNeedMedicalAssistance::
# 280 "data/maps/Ultra_Space/scripts.pory"
	.string "Ah, intern.\n You require medical assistance, yes?$"

Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries::
# 285 "data/maps/Ultra_Space/scripts.pory"
	.string "Let me know if you find anything\n significant, okay?$"

Ultra_Space_Text_InvisiblePathHint::
# 290 "data/maps/Ultra_Space/scripts.pory"
	.string "Oh, {PLAYER}. Did you find anything\n interesting?\p In the distance I can see another island\n but I can't figure out how to get over\l there.\p I almost wanna just try and run there\n from here…$"

Ultra_Space_Text_Maniac1::
# 300 "data/maps/Ultra_Space/scripts.pory"
	.string "This wasn't supposed to happen…\n It appears we've been pulled into\l the rift.\p I'm not sure if we'll ever be able\n to return to our world…\p JAMES: Something…\p Something about this place feels…\l familiar.\p$"

Ultra_Space_Text_James1::
# 311 "data/maps/Ultra_Space/scripts.pory"
	.string "I don't know why…\p But I think if we head north we might\n find something.$"

Ultra_Space_Text_Maniac2::
# 317 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: …Intruiging.\n Perhaps you had stumbled across a rift\l in the past…\p Although I've never heard reports of\n such an occurance happening to anyone.\p Either way, let us follow your intuition\n and keep moving.$"

Ultra_Space_Text_Maniac3::
# 327 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Hm… Intruiging.\n It appears as though these caves\l are a means of connection to the\l other floating islands…\l Perhaps we can come across another rift\l through them…\p I must get a closer look!$"

Ultra_Space_Text_Maniac4::
# 337 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: T-That was close!\n But still! A new discovery!\p This will push my research forward at\n lightspeed!\p Now that we know there's undiscovered\n POKéMON here, we can test the new\l POKé BALL I designed…$"

Ultra_Space_Text_Maniac5::
# 347 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Now, while that was a riveting\n experience, I'd rather be safe than\l sorry.\p I'll leave the exploration to you TRAINERS\n while I try to analyze the area as much\l as I can with what I have on hand.\p Call for me if you find anything\n significant or require medical aid.$"

Ultra_Space_Text_JamesGoingToExplore::
# 358 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I'm going to survey this central\n area and make sure the PROF. is safe.\p Maybe there's a clue on how to get\n out of here.$"

Ultra_Space_Text_ThatWasCrazy::
# 365 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I saw you walk across the sky\n and went to get the PROF.\l That was crazy!\p MANIAC: Yes, maniacal indeed…\n Unfortunately, there's still no rift\l over here.$"

Ultra_Space_Text_Maniac6::
# 374 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: You came for us?!\p RESPLENDENT!\n I had no idea COSMOG had the ability\l to traverse the ULTRA SPACE!\p COSMOG, are you able to take us\n back to the lab?$"
