Ultra_Space_MapScripts::
# 9 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ultra_Space_UpdatePCMetatiles
# 10 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Ultra_Space_UpdateUltraBeasts
# 6 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ultra_Space_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ultra_Space_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Ultra_Space/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 1, Ultra_Space_EventScript_ArrivedInUltraSpace
	.2byte 0


Ultra_Space_UpdatePCMetatiles::
# 14 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_BLACEPHALON, Ultra_Space_EventScript_AddPC
	end


Ultra_Space_UpdateUltraBeasts::
# 19 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_BLACEPHALON, Ultra_Space_RemoveBlacephalon
# 20 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_NECROZMA, Ultra_Space_RemoveNecrozma
# 21 "data/maps/Ultra_Space/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 3, UltraSpace_TryRemoveUltraBeast
	end


Ultra_Space_RemoveBlacephalon::
# 26 "data/maps/Ultra_Space/scripts.pory"
	removeobject 4
	return


Ultra_Space_RemoveNecrozma::
# 31 "data/maps/Ultra_Space/scripts.pory"
	removeobject 13
	return


UltraSpace_TryRemoveUltraBeast::
# 36 "data/maps/Ultra_Space/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 37 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 38 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 39 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 40 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 19
	goto_if_eq UltraSpace_TryRemoveUltraBeast_2
# 40 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 18
	goto_if_eq UltraSpace_TryRemoveUltraBeast_2
# 40 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 22
	goto_if_eq UltraSpace_TryRemoveUltraBeast_2
# 44 "data/maps/Ultra_Space/scripts.pory"
	removeobject VAR_LAST_TALKED
UltraSpace_TryRemoveUltraBeast_1:
	return

UltraSpace_TryRemoveUltraBeast_2:
# 41 "data/maps/Ultra_Space/scripts.pory"
	goto Common_EventScript_NopReturn
	goto UltraSpace_TryRemoveUltraBeast_1


Ultra_Space_EventScript_ArrivedInUltraSpace::
# 50 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 51 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_VISITED_ULTRA_SPACE
# 52 "data/maps/Ultra_Space/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 53 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 54 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 55 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 56 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 57 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 58 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 59 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 60 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacPanic
# 61 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 62 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesLookAround
# 63 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 64 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerLookAround
# 65 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 66 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 68 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_Maniac1
# 69 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 70 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 71 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 72 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 73 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 74 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac1, MSGBOX_AUTOCLOSE
# 75 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 76 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 77 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 78 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 79 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 80 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 83 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 84 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 85 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 86 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2, MSGBOX_AUTOCLOSE
# 87 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 88 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 89 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 90 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_James1, MSGBOX_AUTOCLOSE
# 91 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 92 "data/maps/Ultra_Space/scripts.pory"
	playse SE_BIKE_HOP
# 93 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 94 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 95 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 96 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac2, MSGBOX_AUTOCLOSE
# 97 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 98 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 99 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 100 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3, MSGBOX_AUTOCLOSE
# 102 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 103 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToCentralArea
# 104 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 105 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesToCentralArea
# 106 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 107 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 108 "data/maps/Ultra_Space/scripts.pory"
	removeobject 1
# 109 "data/maps/Ultra_Space/scripts.pory"
	removeobject 2
# 110 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 111 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 2
# 112 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Blacephalon::
# 117 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 118 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 120 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 121 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 122 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerToCentralArea
# 123 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 124 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 125 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 126 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_1, MSGBOX_AUTOCLOSE
# 128 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 129 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 130 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 131 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 132 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 133 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacInvestigate
# 134 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 135 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac3, MSGBOX_AUTOCLOSE
# 136 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 137 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacToPortal
# 138 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 139 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 140 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 141 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 142 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 143 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 144 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 145 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 147 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 148 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 149 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_2, MSGBOX_AUTOCLOSE
# 150 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 151 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 152 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 153 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 154 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 155 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 156 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 157 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 158 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 159 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_Blacephalon
# 160 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 161 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacRunToPlayer
# 162 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 163 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_3, MSGBOX_AUTOCLOSE
# 166 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 167 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_BlacephalonApproachesPlayer
# 168 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 4
# 169 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 170 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 75
# 171 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 172 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacFacePlayer
# 173 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 174 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac4, MSGBOX_AUTOCLOSE
# 175 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 176 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 177 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 178 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 179 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 180 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_4, MSGBOX_AUTOCLOSE
# 183 "data/maps/Ultra_Space/scripts.pory"
	giveitem ITEM_BEAST_BALL, 50
# 184 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 185 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 186 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 187 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 188 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 189 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 190 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac5, MSGBOX_AUTOCLOSE
# 191 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 192 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacGoesToPermSpot
# 193 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 194 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 195 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 196 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 197 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 198 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 199 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 200 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 201 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 202 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_JamesGoingToExplore, MSGBOX_AUTOCLOSE
# 203 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 204 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Ultra_Space_Movement_JamesGoesToPermSpot
# 205 "data/maps/Ultra_Space/scripts.pory"
	delay 32
# 206 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 207 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 208 "data/maps/Ultra_Space/scripts.pory"
	removeobject 16
# 209 "data/maps/Ultra_Space/scripts.pory"
	removeobject 17
# 210 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_NECROZMA
# 211 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_EventScript_AddPC
# 212 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 213 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 3
# 214 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_James::
# 219 "data/maps/Ultra_Space/scripts.pory"
	lock
# 220 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 221 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_InvisiblePathHint, MSGBOX_NPC
# 222 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 223 "data/maps/Ultra_Space/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 224 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 19
# 225 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Maniac::
# 230 "data/maps/Ultra_Space/scripts.pory"
	lock
# 231 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 232 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_DoYouNeedMedicalAssistance, MSGBOX_AUTOCLOSE
# 233 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 234 "data/maps/Ultra_Space/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 235 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries, MSGBOX_AUTOCLOSE
# 236 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 237 "data/maps/Ultra_Space/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 238 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 18
# 239 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_AddPC::
# 244 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 46, METATILE_DistortionWorld_Ultra_Space_PC_Top, TRUE
# 245 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 47, METATILE_Building_PC_Off, TRUE
# 246 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 48, METATILE_DistortionWorld_Ultra_Space_PC_Bottom, FALSE
	return


Ultra_Space_EventScript_Necrozma::
# 251 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 252 "data/maps/Ultra_Space/scripts.pory"
	fadenewbgm MUS_NONE
# 253 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 254 "data/maps/Ultra_Space/scripts.pory"
	playse SE_RG_DEOXYS_MOVE
# 255 "data/maps/Ultra_Space/scripts.pory"
	applymovement 13, Ultra_Space_Movement_Necrozma
# 256 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 13
# 257 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 258 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
# 259 "data/maps/Ultra_Space/scripts.pory"
	delay 40
# 260 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 261 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_NECROZMA
# 262 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 75
# 263 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 264 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 265 "data/maps/Ultra_Space/scripts.pory"
	fadedefaultbgm
# 266 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_0, MSGBOX_AUTOCLOSE
# 267 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 268 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerWalksDown
# 269 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 270 "data/maps/Ultra_Space/scripts.pory"
	addobject 20
# 271 "data/maps/Ultra_Space/scripts.pory"
	addobject 21
# 272 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 273 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Ultra_Space_Movement_JamesGoesToNecrozma
# 274 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 275 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Ultra_Space_Movement_ManiacGoesToNecrozma
# 276 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 21
# 277 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_ThatWasCrazy, MSGBOX_AUTOCLOSE
# 278 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 279 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 280 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 281 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 282 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 283 "data/maps/Ultra_Space/scripts.pory"
	playse SE_THUNDER
# 284 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 285 "data/maps/Ultra_Space/scripts.pory"
	addobject 15
# 286 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_BLACEPHALON
# 287 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 288 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 289 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 290 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 291 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 292 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 293 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 294 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 295 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 296 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 297 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 298 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 20
# 299 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 300 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_1, MSGBOX_AUTOCLOSE
# 301 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 302 "data/maps/Ultra_Space/scripts.pory"
	applymovement 15, Ultra_Space_Movement_Cosmog
# 303 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 304 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 305 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 306 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceLeft
# 307 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 308 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac6, MSGBOX_AUTOCLOSE
# 309 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 310 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 311 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 312 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_2, MSGBOX_AUTOCLOSE
# 315 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 316 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 317 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 318 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 319 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 320 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 321 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_COSMOG_ULTRA_SPACE
# 322 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 323 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 324 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 325 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 7, 9
# 326 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 327 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Buzzwole::
# 332 "data/maps/Ultra_Space/scripts.pory"
	lock
# 333 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 334 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_BUZZWOLE, CRY_MODE_ENCOUNTER
# 335 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 336 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BUZZWOLE, 75
# 337 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 338 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Pheromosa::
# 343 "data/maps/Ultra_Space/scripts.pory"
	lock
# 344 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 345 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_PHEROMOSA, CRY_MODE_ENCOUNTER
# 346 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 347 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_PHEROMOSA, 75
# 348 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 349 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Guzzlord::
# 354 "data/maps/Ultra_Space/scripts.pory"
	lock
# 355 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 356 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_GUZZLORD, CRY_MODE_ENCOUNTER
# 357 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 358 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_GUZZLORD, 75
# 359 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 360 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Stakataka::
# 365 "data/maps/Ultra_Space/scripts.pory"
	lock
# 366 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 367 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_STAKATAKA, CRY_MODE_ENCOUNTER
# 368 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 369 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_STAKATAKA, 75
# 370 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 371 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Kartana::
# 376 "data/maps/Ultra_Space/scripts.pory"
	lock
# 377 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 378 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_KARTANA, CRY_MODE_ENCOUNTER
# 379 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 380 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_KARTANA, 75
# 381 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 382 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Xurkitree::
# 387 "data/maps/Ultra_Space/scripts.pory"
	lock
# 388 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 389 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
# 390 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 391 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_XURKITREE, 75
# 392 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 393 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Celesteela::
# 398 "data/maps/Ultra_Space/scripts.pory"
	lock
# 399 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 400 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_CELESTEELA, CRY_MODE_ENCOUNTER
# 401 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 402 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_CELESTEELA, 75
# 403 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 404 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Lunala::
# 409 "data/maps/Ultra_Space/scripts.pory"
	lock
# 410 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 411 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_LUNALA, CRY_MODE_ENCOUNTER
# 412 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 413 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_LUNALA, 75
# 414 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 415 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 416 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Solgaleo::
# 421 "data/maps/Ultra_Space/scripts.pory"
	lock
# 422 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 423 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_SOLGALEO, CRY_MODE_ENCOUNTER
# 424 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 425 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_SOLGALEO, 75
# 426 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 427 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 428 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_Shake::
# 433 "data/maps/Ultra_Space/scripts.pory"
	delay 30
# 434 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8004, 2
# 435 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8005, 6
# 436 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8006, 8
# 437 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8007, 4
# 438 "data/maps/Ultra_Space/scripts.pory"
	special ShakeCamera
# 439 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 440 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 441 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 442 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 443 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 444 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 445 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 446 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 447 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 448 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 449 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 450 "data/maps/Ultra_Space/scripts.pory"
	playse SE_INTRO_BLAST
# 451 "data/maps/Ultra_Space/scripts.pory"
	delay 20
	return


Ultra_Space_EventScript_Cosmog::
# 456 "data/maps/Ultra_Space/scripts.pory"
	lock
# 457 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 458 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 459 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 460 "data/maps/Ultra_Space/scripts.pory"
	msgbox UltraSpace_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 461 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 462 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ultra_Space_EventScript_Cosmog_2
# 469 "data/maps/Ultra_Space/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
Ultra_Space_EventScript_Cosmog_1:
# 471 "data/maps/Ultra_Space/scripts.pory"
	release
	end

Ultra_Space_EventScript_Cosmog_2:
# 463 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 464 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 465 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 466 "data/maps/Ultra_Space/scripts.pory"
	waitstate
	goto Ultra_Space_EventScript_Cosmog_1


# 577 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacPanic:
# 578 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 579 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 580 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_up
# 581 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 582 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_left
# 583 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 584 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_right
# 585 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 586 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
# 587 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 590 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Maniac1:
# 591 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 591 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 592 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 595 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesLookAround:
# 596 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 597 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 598 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 599 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 600 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 603 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerLookAround:
# 604 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
# 605 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 606 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
# 607 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 608 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 609 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 610 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 613 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToCentralArea:
# 614 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 614 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 614 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 614 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 615 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 615 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 618 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesToCentralArea:
# 619 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 620 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 620 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 620 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 620 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 621 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 622 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 622 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 625 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerToCentralArea:
# 626 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 626 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 626 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 626 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 626 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 626 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 627 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 630 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToPortal:
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 634 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacRunToPlayer:
# 635 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 635 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 636 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 636 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 638 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
	step_end

# 641 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Blacephalon:
# 642 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 642 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 643 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 647 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_BlacephalonApproachesPlayer:
# 648 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 648 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 648 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 649 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 652 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacFacePlayer:
# 653 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 653 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 653 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 654 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 655 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 656 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 657 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 658 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 658 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 659 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 662 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToPermSpot:
# 663 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 664 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 664 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 664 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 664 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 665 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 666 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 666 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 666 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 666 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 669 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToPermSpot:
# 670 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 671 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 671 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 671 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 671 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 672 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 672 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 672 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 672 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 673 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 673 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 673 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 674 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 674 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 677 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToNecrozma:
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 679 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 680 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 683 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToNecrozma:
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 685 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 686 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 689 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Cosmog:
# 690 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 691 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 692 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 692 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 695 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacInvestigate:
# 696 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 697 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 698 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 699 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 700 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 701 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 702 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 703 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 704 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 705 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 706 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 709 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Necrozma:
# 710 "data/maps/Ultra_Space/scripts.pory"
	levitate
# 711 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 711 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 712 "data/maps/Ultra_Space/scripts.pory"
	stop_levitate
	step_end

# 715 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerWalksDown:
# 716 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 716 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 716 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0:
# 66 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: No, no, no…!$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1:
# 80 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Something…\p Something about this place feels…\n familiar.$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2:
# 86 "data/maps/Ultra_Space/scripts.pory"
	.string "I don't know why…$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3:
# 100 "data/maps/Ultra_Space/scripts.pory"
	.string "Either way, let us follow his intuition\n and keep moving.$"

Ultra_Space_EventScript_Blacephalon_Text_0:
# 118 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}! Over here!$"

Ultra_Space_EventScript_Blacephalon_Text_1:
# 126 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: This area looks promising.\n He's investigating it now.$"

Ultra_Space_EventScript_Blacephalon_Text_2:
# 149 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Look out!$"

Ultra_Space_EventScript_Blacephalon_Text_3:
# 163 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: W-What is that?!\n A POKéMON?!\p Wait, it's attacking!$"

Ultra_Space_EventScript_Blacephalon_Text_4:
# 180 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Here you go.\n They should be effective at catching\l POKéMON from the ULTRA SPACE.$"

Ultra_Space_EventScript_Necrozma_Text_0:
# 266 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}!$"

Ultra_Space_EventScript_Necrozma_Text_1:
# 300 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: C-COSMOG?!$"

Ultra_Space_EventScript_Necrozma_Text_2:
# 312 "data/maps/Ultra_Space/scripts.pory"
	.string "Quite fortuitous, indeed!\n Now COSMOG, if you will.\l Please get us out of here!$"

UltraSpace_Text_WouldYouLikeToReturn::
# 475 "data/maps/Ultra_Space/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"

Ultra_Space_Text_DoYouNeedMedicalAssistance::
# 479 "data/maps/Ultra_Space/scripts.pory"
	.string "Ah, intern.\n You require medical assistance, yes?$"

Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries::
# 484 "data/maps/Ultra_Space/scripts.pory"
	.string "Let me know if you find anything\n significant, okay?$"

Ultra_Space_Text_InvisiblePathHint::
# 489 "data/maps/Ultra_Space/scripts.pory"
	.string "Oh, {PLAYER}. Did you find anything yet?\n In the distance I can see another island.\p But I can't figure out how to get over\n there.\p I almost want to just try and run there\n from here…$"

Ultra_Space_Text_Maniac1::
# 498 "data/maps/Ultra_Space/scripts.pory"
	.string "This wasn't supposed to happen…\n It appears we've been pulled into\l the rift.\p I'm not sure if we'll ever be able\n to return to our world…$"

Ultra_Space_Text_James1::
# 506 "data/maps/Ultra_Space/scripts.pory"
	.string "But I think if we head north we might\n find something.$"

Ultra_Space_Text_Maniac2::
# 511 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: …Intruiging.\n Perhaps you had stumbled across a rift\l in the past…\p Although I've never heard reports of\n such an occurence happening to anyone.$"

Ultra_Space_Text_Maniac3::
# 519 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Hm… Intruiging.\n It appears as though these caves\l are a means of connection to the\l other floating islands…\l Perhaps we can find another rift\l through them…\p I must get a closer look!$"

Ultra_Space_Text_Maniac4::
# 529 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: T-That was close!\n But still! A new discovery!\p This will push my research forward at\n lightspeed!\p Now that we know there's undiscovered\n POKéMON here, we can test the new\l POKé BALL I designed…\p Assistant, please give some of them\n to the intern.$"

Ultra_Space_Text_Maniac5::
# 541 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Now, while that was a riveting\n experience, I'd rather be safe than\l sorry.\p I'll leave the exploration to you two\n while I try to analyze the area as much\l as I can with what I have on hand.\p Call for me if you find anything\n significant or require medical aid.$"

Ultra_Space_Text_JamesGoingToExplore::
# 552 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I'm going to survey this central\n area and make sure the PROF. is safe.\p Maybe there's a clue on how to get\n out of here.$"

Ultra_Space_Text_ThatWasCrazy::
# 559 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I saw you walk across the sky\n and went to get the PROF.\l That was crazy!\p MANIAC: Yes, maniacal indeed…\n Unfortunately, there's still no rift\l over here.$"

Ultra_Space_Text_Maniac6::
# 568 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: You came for us?!\n R-RESPLENDENT!\p I had no idea it had the ability\n to traverse the ULTRA SPACE!\p COSMOG, are you able to take us\n back to the lab?$"
