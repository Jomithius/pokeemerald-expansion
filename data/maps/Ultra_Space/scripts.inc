Ultra_Space_MapScripts::
# 5 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ultra_Space_UpdatePCMetatiles
# 6 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Ultra_Space_UpdateUltraBeasts
# 2 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ultra_Space_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ultra_Space_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Ultra_Space/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 1, Ultra_Space_EventScript_ArrivedInUltraSpace
	.2byte 0


Ultra_Space_UpdatePCMetatiles::
# 10 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_BLACEPHALON, Ultra_Space_EventScript_AddPC
	end


Ultra_Space_UpdateUltraBeasts::
# 15 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_BLACEPHALON, Ultra_Space_RemoveBlacephalon
# 16 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_NECROZMA, Ultra_Space_RemoveNecrozma
# 17 "data/maps/Ultra_Space/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 3, UltraSpace_TryRemoveUltraBeast
	end


Ultra_Space_RemoveBlacephalon::
# 22 "data/maps/Ultra_Space/scripts.pory"
	removeobject 4
	return


Ultra_Space_RemoveNecrozma::
# 27 "data/maps/Ultra_Space/scripts.pory"
	removeobject 13
	return


UltraSpace_TryRemoveUltraBeast::
# 32 "data/maps/Ultra_Space/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 34 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 35 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 36 "data/maps/Ultra_Space/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


Ultra_Space_EventScript_ArrivedInUltraSpace::
# 41 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 42 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_VISITED_ULTRA_SPACE
# 43 "data/maps/Ultra_Space/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 44 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 46 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 47 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 48 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 49 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 51 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacPanic
# 52 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 53 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesLookAround
# 54 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 55 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerLookAround
# 56 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 57 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 59 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_Maniac1
# 60 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 61 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 62 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 63 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 64 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 65 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac1, MSGBOX_AUTOCLOSE
# 66 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 67 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 68 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 69 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 70 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 71 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 74 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 75 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 76 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 77 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2, MSGBOX_AUTOCLOSE
# 78 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 79 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 80 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 81 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_James1, MSGBOX_AUTOCLOSE
# 82 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 83 "data/maps/Ultra_Space/scripts.pory"
	playse SE_BIKE_HOP
# 84 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 85 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 86 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 87 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac2, MSGBOX_AUTOCLOSE
# 88 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 89 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 90 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 91 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3, MSGBOX_AUTOCLOSE
# 93 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 94 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToCentralArea
# 95 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 96 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesToCentralArea
# 97 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 98 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 99 "data/maps/Ultra_Space/scripts.pory"
	removeobject 1
# 100 "data/maps/Ultra_Space/scripts.pory"
	removeobject 2
# 101 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 102 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 2
# 103 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Blacephalon::
# 108 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 109 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 111 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 112 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 113 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerToCentralArea
# 114 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 115 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 116 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 117 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_1, MSGBOX_AUTOCLOSE
# 119 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 120 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 121 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 122 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 123 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 124 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacInvestigate
# 125 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 126 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac3, MSGBOX_AUTOCLOSE
# 127 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 128 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacToPortal
# 129 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 130 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 131 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 132 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 133 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 134 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 135 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 136 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 137 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 138 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 139 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 140 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_2, MSGBOX_AUTOCLOSE
# 141 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 142 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 143 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 144 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 145 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 146 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 147 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 148 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 149 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 150 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_Blacephalon
# 151 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 152 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacRunToPlayer
# 153 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 154 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_3, MSGBOX_AUTOCLOSE
# 157 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 158 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_BlacephalonApproachesPlayer
# 159 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 4
# 160 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 161 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 75
# 162 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 163 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacFacePlayer
# 164 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 165 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac4, MSGBOX_AUTOCLOSE
# 166 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 167 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 168 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 169 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 170 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 171 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_4, MSGBOX_AUTOCLOSE
# 174 "data/maps/Ultra_Space/scripts.pory"
	giveitem ITEM_BEAST_BALL, 50
# 175 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 176 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 177 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 178 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 179 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 180 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 181 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac5, MSGBOX_AUTOCLOSE
# 182 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 183 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacGoesToPermSpot
# 184 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 185 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 186 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 187 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 188 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 189 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 190 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 191 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 192 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 193 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_JamesGoingToExplore, MSGBOX_AUTOCLOSE
# 194 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 195 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Ultra_Space_Movement_JamesGoesToPermSpot
# 196 "data/maps/Ultra_Space/scripts.pory"
	delay 32
# 197 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 198 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 199 "data/maps/Ultra_Space/scripts.pory"
	removeobject 16
# 200 "data/maps/Ultra_Space/scripts.pory"
	removeobject 17
# 201 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_NECROZMA
# 202 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_EventScript_AddPC
# 203 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 204 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 3
# 205 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_James::
# 210 "data/maps/Ultra_Space/scripts.pory"
	lock
# 211 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 212 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_InvisiblePathHint, MSGBOX_NPC
# 213 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 214 "data/maps/Ultra_Space/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 215 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 19
# 216 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Maniac::
# 221 "data/maps/Ultra_Space/scripts.pory"
	lock
# 222 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 223 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_DoYouNeedMedicalAssistance, MSGBOX_AUTOCLOSE
# 224 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 225 "data/maps/Ultra_Space/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 226 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries, MSGBOX_AUTOCLOSE
# 227 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 228 "data/maps/Ultra_Space/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 229 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 18
# 230 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_AddPC::
# 235 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 46, METATILE_DistortionWorld_Ultra_Space_PC_Top, TRUE
# 236 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 47, METATILE_Building_PC_Off, TRUE
# 237 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 48, METATILE_DistortionWorld_Ultra_Space_PC_Bottom, FALSE
	return


Ultra_Space_EventScript_Necrozma::
# 242 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 243 "data/maps/Ultra_Space/scripts.pory"
	fadenewbgm MUS_NONE
# 244 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 245 "data/maps/Ultra_Space/scripts.pory"
	playse SE_RG_DEOXYS_MOVE
# 246 "data/maps/Ultra_Space/scripts.pory"
	applymovement 13, Ultra_Space_Movement_Necrozma
# 247 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 13
# 248 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 249 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
# 250 "data/maps/Ultra_Space/scripts.pory"
	delay 40
# 251 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 252 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_NECROZMA
# 253 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 75, ITEM_ULTRANECROZIUM_Z
# 254 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 255 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 256 "data/maps/Ultra_Space/scripts.pory"
	fadedefaultbgm
# 257 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_0, MSGBOX_AUTOCLOSE
# 258 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 259 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerWalksDown
# 260 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 261 "data/maps/Ultra_Space/scripts.pory"
	addobject 20
# 262 "data/maps/Ultra_Space/scripts.pory"
	addobject 21
# 263 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 264 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Ultra_Space_Movement_JamesGoesToNecrozma
# 265 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 266 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Ultra_Space_Movement_ManiacGoesToNecrozma
# 267 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 21
# 268 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_ThatWasCrazy, MSGBOX_AUTOCLOSE
# 269 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 270 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 271 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 272 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 273 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 274 "data/maps/Ultra_Space/scripts.pory"
	playse SE_THUNDER
# 275 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 276 "data/maps/Ultra_Space/scripts.pory"
	addobject 15
# 277 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_COSMOG_ULTRA_SPACE
# 278 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 279 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 280 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 281 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 282 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 283 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 284 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 285 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 286 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 287 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 288 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 289 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 20
# 290 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 291 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_1, MSGBOX_AUTOCLOSE
# 292 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 293 "data/maps/Ultra_Space/scripts.pory"
	applymovement 15, Ultra_Space_Movement_Cosmog
# 294 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 295 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 296 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 297 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceLeft
# 298 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 299 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac6, MSGBOX_AUTOCLOSE
# 300 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 301 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 302 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 303 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_2, MSGBOX_AUTOCLOSE
# 306 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 307 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 308 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 309 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 310 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 311 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 312 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 313 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 314 "data/maps/Ultra_Space/scripts.pory"
	setobjectxyperm 15, 26, 48
# 315 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 7, 9
# 316 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 317 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Buzzwole::
# 322 "data/maps/Ultra_Space/scripts.pory"
	lock
# 323 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 324 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_BUZZWOLE, CRY_MODE_ENCOUNTER
# 325 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 326 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BUZZWOLE, 75
# 327 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 328 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Pheromosa::
# 333 "data/maps/Ultra_Space/scripts.pory"
	lock
# 334 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 335 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_PHEROMOSA, CRY_MODE_ENCOUNTER
# 336 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 337 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_PHEROMOSA, 75
# 338 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 339 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Guzzlord::
# 344 "data/maps/Ultra_Space/scripts.pory"
	lock
# 345 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 346 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_GUZZLORD, CRY_MODE_ENCOUNTER
# 347 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 348 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_GUZZLORD, 75
# 349 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 350 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Stakataka::
# 355 "data/maps/Ultra_Space/scripts.pory"
	lock
# 356 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 357 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_STAKATAKA, CRY_MODE_ENCOUNTER
# 358 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 359 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_STAKATAKA, 75
# 360 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 361 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Kartana::
# 366 "data/maps/Ultra_Space/scripts.pory"
	lock
# 367 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 368 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_KARTANA, CRY_MODE_ENCOUNTER
# 369 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 370 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_KARTANA, 75
# 371 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 372 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Xurkitree::
# 377 "data/maps/Ultra_Space/scripts.pory"
	lock
# 378 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 379 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
# 380 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 381 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_XURKITREE, 75
# 382 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 383 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Celesteela::
# 388 "data/maps/Ultra_Space/scripts.pory"
	lock
# 389 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 390 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_CELESTEELA, CRY_MODE_ENCOUNTER
# 391 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 392 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_CELESTEELA, 75
# 393 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 394 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Lunala::
# 399 "data/maps/Ultra_Space/scripts.pory"
	lock
# 400 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 401 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_LUNALA, CRY_MODE_ENCOUNTER
# 402 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 403 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_LUNALA, 75
# 404 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 405 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 406 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Solgaleo::
# 411 "data/maps/Ultra_Space/scripts.pory"
	lock
# 412 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 413 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_SOLGALEO, CRY_MODE_ENCOUNTER
# 414 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 415 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_SOLGALEO, 75
# 416 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 417 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 418 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_Shake::
# 423 "data/maps/Ultra_Space/scripts.pory"
	delay 30
# 424 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8004, 2
# 425 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8005, 6
# 426 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8006, 8
# 427 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8007, 4
# 428 "data/maps/Ultra_Space/scripts.pory"
	special ShakeCamera
# 429 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 430 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 431 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 432 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 433 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 434 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 435 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 436 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 437 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 438 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 439 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 440 "data/maps/Ultra_Space/scripts.pory"
	playse SE_INTRO_BLAST
# 441 "data/maps/Ultra_Space/scripts.pory"
	delay 20
	return


# 543 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacPanic:
# 544 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 545 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 546 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_up
# 547 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 548 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_left
# 549 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 550 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_right
# 551 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 552 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
# 553 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 556 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Maniac1:
# 557 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 557 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 558 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 561 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesLookAround:
# 562 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 563 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 564 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 565 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 566 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 569 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerLookAround:
# 570 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
# 571 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 572 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
# 573 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 574 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 575 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 576 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 579 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToCentralArea:
# 580 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 580 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 580 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 580 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 581 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 581 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 584 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesToCentralArea:
# 585 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 586 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 586 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 586 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 586 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 587 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 588 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 588 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 591 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerToCentralArea:
# 592 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 592 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 592 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 592 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 592 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 592 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 593 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 596 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToPortal:
# 597 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 597 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 597 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 597 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 600 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacRunToPlayer:
# 601 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 601 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 602 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 602 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 603 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 604 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
	step_end

# 607 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Blacephalon:
# 608 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 608 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 609 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 610 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 610 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 610 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 613 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_BlacephalonApproachesPlayer:
# 614 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 614 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 614 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 615 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 618 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacFacePlayer:
# 619 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 619 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 619 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 620 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 621 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 622 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 623 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 624 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 624 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 625 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 628 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToPermSpot:
# 629 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 630 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 630 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 630 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 630 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 632 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 632 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 632 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 632 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 635 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToPermSpot:
# 636 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 638 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 638 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 638 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 638 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 639 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 639 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 639 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 640 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 640 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 643 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToNecrozma:
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 645 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 646 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 649 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToNecrozma:
# 650 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 650 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 650 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 650 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 650 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 650 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 650 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 652 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 655 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Cosmog:
# 656 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 657 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 658 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 658 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 661 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacInvestigate:
# 662 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 663 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 664 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 665 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 666 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 667 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 668 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 669 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 670 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 671 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 672 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 675 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Necrozma:
# 676 "data/maps/Ultra_Space/scripts.pory"
	levitate
# 677 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 677 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 678 "data/maps/Ultra_Space/scripts.pory"
	stop_levitate
	step_end

# 681 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerWalksDown:
# 682 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 682 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 682 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0:
# 57 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: No, no, no…!$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1:
# 71 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Something…\p Something about this place feels…\n familiar.$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2:
# 77 "data/maps/Ultra_Space/scripts.pory"
	.string "I don't know why…$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3:
# 91 "data/maps/Ultra_Space/scripts.pory"
	.string "Either way, let us follow his intuition\n and keep moving.$"

Ultra_Space_EventScript_Blacephalon_Text_0:
# 109 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}! Over here!$"

Ultra_Space_EventScript_Blacephalon_Text_1:
# 117 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: This area looks promising.\n He's investigating it now.$"

Ultra_Space_EventScript_Blacephalon_Text_2:
# 140 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Look out!$"

Ultra_Space_EventScript_Blacephalon_Text_3:
# 154 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: W-What is that?!\n A POKéMON?!\p Wait, it's attacking!$"

Ultra_Space_EventScript_Blacephalon_Text_4:
# 171 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Here you go.\n They should be effective at catching\l POKéMON from the ULTRA SPACE.$"

Ultra_Space_EventScript_Necrozma_Text_0:
# 257 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}!$"

Ultra_Space_EventScript_Necrozma_Text_1:
# 291 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: C-COSMOG?!$"

Ultra_Space_EventScript_Necrozma_Text_2:
# 303 "data/maps/Ultra_Space/scripts.pory"
	.string "Quite fortuitous, indeed!\n Now COSMOG, if you will.\l Please get us out of here!$"

Ultra_Space_Text_DoYouNeedMedicalAssistance::
# 445 "data/maps/Ultra_Space/scripts.pory"
	.string "Ah, intern.\n You require medical assistance, yes?$"

Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries::
# 450 "data/maps/Ultra_Space/scripts.pory"
	.string "Let me know if you find anything\n significant, okay?$"

Ultra_Space_Text_InvisiblePathHint::
# 455 "data/maps/Ultra_Space/scripts.pory"
	.string "Oh, {PLAYER}. Did you find anything yet?\n In the distance I can see another island.\p But I can't figure out how to get over\n there.\p I almost want to just try and run there\n from here…$"

Ultra_Space_Text_Maniac1::
# 464 "data/maps/Ultra_Space/scripts.pory"
	.string "This wasn't supposed to happen…\n It appears we've been pulled into\l the rift.\p I'm not sure if we'll ever be able\n to return to our world…$"

Ultra_Space_Text_James1::
# 472 "data/maps/Ultra_Space/scripts.pory"
	.string "But I think if we head north we might\n find something.$"

Ultra_Space_Text_Maniac2::
# 477 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: …Intruiging.\n Perhaps you had stumbled across a rift\l in the past…\p Although I've never heard reports of\n such an occurence happening to anyone.$"

Ultra_Space_Text_Maniac3::
# 485 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Hm… Intruiging.\n It appears as though these caves\l are a means of connection to the\l other floating islands…\l Perhaps we can find another rift\l through them…\p I must get a closer look!$"

Ultra_Space_Text_Maniac4::
# 495 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: T-That was close!\n But still! A new discovery!\p This will push my research forward at\n lightspeed!\p Now that we know there's undiscovered\n POKéMON here, we can test the new\l POKé BALL I designed…\p Assistant, please give some of them\n to the intern.$"

Ultra_Space_Text_Maniac5::
# 507 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Now, while that was a riveting\n experience, I'd rather be safe than\l sorry.\p I'll leave the exploration to you two\n while I try to analyze the area as much\l as I can with what I have on hand.\p Call for me if you find anything\n significant or require medical aid.$"

Ultra_Space_Text_JamesGoingToExplore::
# 518 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I'm going to survey this central\n area and make sure the PROF. is safe.\p Maybe there's a clue on how to get\n out of here.$"

Ultra_Space_Text_ThatWasCrazy::
# 525 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I saw you walk across the sky\n and went to get the PROF.\l That was crazy!\p MANIAC: Yes, maniacal indeed…\n Unfortunately, there's still no rift\l over here.$"

Ultra_Space_Text_Maniac6::
# 534 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: You came for us?!\n R-RESPLENDENT!\p I had no idea it had the ability\n to traverse the ULTRA SPACE!\p COSMOG, are you able to take us\n back to the lab?$"
