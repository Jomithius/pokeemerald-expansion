Ultra_Space_MapScripts::
# 9 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ultra_Space_UpdatePCMetatiles
# 10 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Ultra_Space_UpdateUltraBeasts
# 11 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ultra_Space_OnWarp
# 6 "data/maps/Ultra_Space/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ultra_Space_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ultra_Space_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Ultra_Space/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 1, Ultra_Space_EventScript_ArrivedInUltraSpace
	.2byte 0


Ultra_Space_UpdatePCMetatiles::
# 15 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_BLACEPHALON, Ultra_Space_EventScript_AddPC
	end


Ultra_Space_UpdateUltraBeasts::
# 20 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_BLACEPHALON, Ultra_Space_RemoveBlacephalon
# 21 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_NECROZMA, Ultra_Space_RemoveNecrozma
# 22 "data/maps/Ultra_Space/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 3, Ultra_Space_TryRemoveUltraBeast
	end


Ultra_Space_RemoveBlacephalon::
# 27 "data/maps/Ultra_Space/scripts.pory"
	removeobject 4
	return


Ultra_Space_RemoveNecrozma::
# 32 "data/maps/Ultra_Space/scripts.pory"
	removeobject 13
	return


Ultra_Space_TryRemoveUltraBeast::
# 37 "data/maps/Ultra_Space/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 39 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 40 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 41 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 19
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_2
# 41 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 18
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_2
# 41 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 22
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_2
# 45 "data/maps/Ultra_Space/scripts.pory"
	removeobject VAR_LAST_TALKED
Ultra_Space_TryRemoveUltraBeast_1:
	return

Ultra_Space_TryRemoveUltraBeast_2:
# 42 "data/maps/Ultra_Space/scripts.pory"
	goto Common_EventScript_NopReturn
	goto Ultra_Space_TryRemoveUltraBeast_1


# 50 "data/maps/Ultra_Space/scripts.pory"

# 51 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_OnWarp:
# 52 "data/maps/Ultra_Space/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 1, Ultra_Space_EventScript_TurnPlayerNorth
# 53 "data/maps/Ultra_Space/scripts.pory"
	.2byte 0
# 54 "data/maps/Ultra_Space/scripts.pory"

# 55 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_EventScript_TurnPlayerNorth::
# 56 "data/maps/Ultra_Space/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 57 "data/maps/Ultra_Space/scripts.pory"
	end

Ultra_Space_EventScript_ArrivedInUltraSpace::
# 61 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 62 "data/maps/Ultra_Space/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 63 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 64 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 65 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 66 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 67 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 68 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 69 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 70 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacPanic
# 71 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 72 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesLookAround
# 73 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 74 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerLookAround
# 75 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 76 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 78 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_Maniac1
# 79 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 80 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 81 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 82 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 83 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 84 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac1, MSGBOX_AUTOCLOSE
# 85 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 86 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 87 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 88 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 89 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 90 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 93 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 94 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 95 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 96 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2, MSGBOX_AUTOCLOSE
# 97 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 98 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 99 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 100 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_James1, MSGBOX_AUTOCLOSE
# 101 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 102 "data/maps/Ultra_Space/scripts.pory"
	playse SE_BIKE_HOP
# 103 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 104 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 105 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 106 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac2, MSGBOX_AUTOCLOSE
# 107 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 108 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 109 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 110 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3, MSGBOX_AUTOCLOSE
# 112 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 113 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToCentralArea
# 114 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 115 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesToCentralArea
# 116 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 117 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 118 "data/maps/Ultra_Space/scripts.pory"
	removeobject 1
# 119 "data/maps/Ultra_Space/scripts.pory"
	removeobject 2
# 120 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 121 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 2
# 122 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Blacephalon::
# 127 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 128 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_0, MSGBOX_AUTOCLOSE
# 129 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 130 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 131 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 132 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerToCentralArea
# 133 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 134 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 135 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 136 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_1, MSGBOX_AUTOCLOSE
# 138 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 139 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 140 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 141 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 142 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 143 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacInvestigate
# 144 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 145 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac3, MSGBOX_AUTOCLOSE
# 146 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 147 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacToPortal
# 148 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 149 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 150 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 151 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 152 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 153 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 154 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 155 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 156 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 157 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 158 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 159 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_2, MSGBOX_AUTOCLOSE
# 160 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 161 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 162 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 163 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 164 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 165 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 166 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 167 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 168 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 169 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_Blacephalon
# 170 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 171 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacRunToPlayer
# 172 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 173 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_3, MSGBOX_AUTOCLOSE
# 176 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 177 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_BlacephalonApproachesPlayer
# 178 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 4
# 179 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 180 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 75
# 181 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 182 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacFacePlayer
# 183 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 184 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac4, MSGBOX_AUTOCLOSE
# 185 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 186 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 187 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 188 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 189 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 190 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_4, MSGBOX_AUTOCLOSE
# 193 "data/maps/Ultra_Space/scripts.pory"
	giveitem ITEM_BEAST_BALL, 50
# 194 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 195 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 196 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 197 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 198 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 199 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 200 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac5, MSGBOX_AUTOCLOSE
# 201 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 202 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacGoesToPermSpot
# 203 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 204 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 205 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 206 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 207 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 208 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 209 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 210 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 211 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 212 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_JamesGoingToExplore, MSGBOX_AUTOCLOSE
# 213 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 214 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Ultra_Space_Movement_JamesGoesToPermSpot
# 215 "data/maps/Ultra_Space/scripts.pory"
	delay 32
# 216 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 217 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 218 "data/maps/Ultra_Space/scripts.pory"
	removeobject 16
# 219 "data/maps/Ultra_Space/scripts.pory"
	removeobject 17
# 220 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_NECROZMA
# 221 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_EventScript_AddPC
# 222 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 223 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 3
# 224 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_James::
# 229 "data/maps/Ultra_Space/scripts.pory"
	lock
# 230 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 231 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_InvisiblePathHint, MSGBOX_NPC
# 232 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 233 "data/maps/Ultra_Space/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 234 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 19
# 235 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Maniac::
# 240 "data/maps/Ultra_Space/scripts.pory"
	lock
# 241 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 242 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_DoYouNeedMedicalAssistance, MSGBOX_AUTOCLOSE
# 243 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 244 "data/maps/Ultra_Space/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 245 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries, MSGBOX_AUTOCLOSE
# 246 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 247 "data/maps/Ultra_Space/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 248 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 18
# 249 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_AddPC::
# 254 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 46, METATILE_DistortionWorld_Ultra_Space_PC_Top, TRUE
# 255 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 47, METATILE_Building_PC_Off, TRUE
# 256 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 48, METATILE_DistortionWorld_Ultra_Space_PC_Bottom, FALSE
	return


Ultra_Space_EventScript_Necrozma::
# 261 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 262 "data/maps/Ultra_Space/scripts.pory"
	fadenewbgm MUS_NONE
# 263 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 264 "data/maps/Ultra_Space/scripts.pory"
	playse SE_RG_DEOXYS_MOVE
# 265 "data/maps/Ultra_Space/scripts.pory"
	applymovement 13, Ultra_Space_Movement_Necrozma
# 266 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 13
# 267 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 268 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
# 269 "data/maps/Ultra_Space/scripts.pory"
	delay 40
# 270 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 271 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_NECROZMA
# 272 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 75
# 273 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 274 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 275 "data/maps/Ultra_Space/scripts.pory"
	fadedefaultbgm
# 276 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_0, MSGBOX_AUTOCLOSE
# 277 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 278 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerWalksDown
# 279 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 280 "data/maps/Ultra_Space/scripts.pory"
	addobject 20
# 281 "data/maps/Ultra_Space/scripts.pory"
	addobject 21
# 282 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 283 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Ultra_Space_Movement_JamesGoesToNecrozma
# 284 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 285 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Ultra_Space_Movement_ManiacGoesToNecrozma
# 286 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 21
# 287 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_ThatWasCrazy, MSGBOX_AUTOCLOSE
# 288 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 289 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 290 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 291 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 292 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 293 "data/maps/Ultra_Space/scripts.pory"
	playse SE_THUNDER
# 294 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 295 "data/maps/Ultra_Space/scripts.pory"
	addobject 15
# 296 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_BLACEPHALON
# 297 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 298 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 299 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 300 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 301 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 302 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 303 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 304 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 305 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 306 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 307 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 308 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 20
# 309 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 310 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_1, MSGBOX_AUTOCLOSE
# 311 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 312 "data/maps/Ultra_Space/scripts.pory"
	applymovement 15, Ultra_Space_Movement_Cosmog
# 313 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 314 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 315 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 316 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceLeft
# 317 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 318 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac6, MSGBOX_AUTOCLOSE
# 319 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 320 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 321 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 322 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_2, MSGBOX_AUTOCLOSE
# 325 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 326 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 327 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 328 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 329 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 330 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 331 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_COSMOG_ULTRA_SPACE
# 332 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 333 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 334 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 335 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 336 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 7, 9
# 337 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 338 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Buzzwole::
# 343 "data/maps/Ultra_Space/scripts.pory"
	lock
# 344 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 345 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_BUZZWOLE, CRY_MODE_ENCOUNTER
# 346 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 347 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BUZZWOLE, 75
# 348 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 349 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Pheromosa::
# 354 "data/maps/Ultra_Space/scripts.pory"
	lock
# 355 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 356 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_PHEROMOSA, CRY_MODE_ENCOUNTER
# 357 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 358 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_PHEROMOSA, 75
# 359 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 360 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Guzzlord::
# 365 "data/maps/Ultra_Space/scripts.pory"
	lock
# 366 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 367 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_GUZZLORD, CRY_MODE_ENCOUNTER
# 368 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 369 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_GUZZLORD, 75
# 370 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 371 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Stakataka::
# 376 "data/maps/Ultra_Space/scripts.pory"
	lock
# 377 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 378 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_STAKATAKA, CRY_MODE_ENCOUNTER
# 379 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 380 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_STAKATAKA, 75
# 381 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 382 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Kartana::
# 387 "data/maps/Ultra_Space/scripts.pory"
	lock
# 388 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 389 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_KARTANA, CRY_MODE_ENCOUNTER
# 390 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 391 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_KARTANA, 75
# 392 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 393 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Xurkitree::
# 398 "data/maps/Ultra_Space/scripts.pory"
	lock
# 399 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 400 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
# 401 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 402 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_XURKITREE, 75
# 403 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 404 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Celesteela::
# 409 "data/maps/Ultra_Space/scripts.pory"
	lock
# 410 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 411 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_CELESTEELA, CRY_MODE_ENCOUNTER
# 412 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 413 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_CELESTEELA, 75
# 414 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 415 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Lunala::
# 420 "data/maps/Ultra_Space/scripts.pory"
	lock
# 421 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 422 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_LUNALA, CRY_MODE_ENCOUNTER
# 423 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 424 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_LUNALA, 75
# 425 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 426 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 427 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Solgaleo::
# 432 "data/maps/Ultra_Space/scripts.pory"
	lock
# 433 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 434 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_SOLGALEO, CRY_MODE_ENCOUNTER
# 435 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 436 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_SOLGALEO, 75
# 437 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 438 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 439 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_Shake::
# 444 "data/maps/Ultra_Space/scripts.pory"
	delay 30
# 445 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8004, 2
# 446 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8005, 6
# 447 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8006, 8
# 448 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8007, 4
# 449 "data/maps/Ultra_Space/scripts.pory"
	special ShakeCamera
# 450 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 451 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 452 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 453 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 454 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 455 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 456 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 457 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 458 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 459 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 460 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 461 "data/maps/Ultra_Space/scripts.pory"
	playse SE_INTRO_BLAST
# 462 "data/maps/Ultra_Space/scripts.pory"
	delay 20
	return


Ultra_Space_EventScript_Cosmog::
# 467 "data/maps/Ultra_Space/scripts.pory"
	lock
# 468 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 469 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 470 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 471 "data/maps/Ultra_Space/scripts.pory"
	msgbox UltraSpace_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 472 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 473 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ultra_Space_EventScript_Cosmog_2
# 480 "data/maps/Ultra_Space/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
Ultra_Space_EventScript_Cosmog_1:
# 482 "data/maps/Ultra_Space/scripts.pory"
	release
	end

Ultra_Space_EventScript_Cosmog_2:
# 474 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 475 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 476 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 477 "data/maps/Ultra_Space/scripts.pory"
	waitstate
	goto Ultra_Space_EventScript_Cosmog_1


# 588 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacPanic:
# 589 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 590 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 591 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_up
# 592 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 593 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_left
# 594 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 595 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_right
# 596 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 597 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
# 598 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 601 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Maniac1:
# 602 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 602 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 603 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 606 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesLookAround:
# 607 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 608 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 609 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 610 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 611 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 614 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerLookAround:
# 615 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
# 616 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 617 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
# 618 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 619 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 620 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 621 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 624 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToCentralArea:
# 625 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 625 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 625 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 625 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 626 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 626 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 629 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesToCentralArea:
# 630 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 632 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 633 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 633 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 636 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerToCentralArea:
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 638 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 641 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToPortal:
# 642 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 642 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 642 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 642 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 645 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacRunToPlayer:
# 646 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 646 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 647 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 647 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 648 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 649 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
	step_end

# 652 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Blacephalon:
# 653 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 653 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 654 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 655 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 655 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 655 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 658 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_BlacephalonApproachesPlayer:
# 659 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 659 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 659 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 660 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 663 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacFacePlayer:
# 664 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 664 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 664 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 665 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 666 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 667 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 668 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 669 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 669 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 670 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 673 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToPermSpot:
# 674 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 675 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 675 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 675 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 675 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 676 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 677 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 677 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 677 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 677 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 680 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToPermSpot:
# 681 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 682 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 682 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 682 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 682 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 683 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 683 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 683 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 683 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 685 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 685 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 688 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToNecrozma:
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 690 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 691 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 694 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToNecrozma:
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 696 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 700 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Cosmog:
# 701 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 702 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 706 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacInvestigate:
# 707 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 708 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 710 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 711 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 712 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 713 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 714 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 715 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 716 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 717 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 720 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Necrozma:
# 721 "data/maps/Ultra_Space/scripts.pory"
	levitate
# 722 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 722 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 723 "data/maps/Ultra_Space/scripts.pory"
	stop_levitate
	step_end

# 726 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerWalksDown:
# 727 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 727 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 727 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0:
# 76 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: No, no, no…!$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1:
# 90 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Something…\p Something about this place feels…\n familiar.$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2:
# 96 "data/maps/Ultra_Space/scripts.pory"
	.string "I don't know why…$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3:
# 110 "data/maps/Ultra_Space/scripts.pory"
	.string "Either way, let us follow his intuition\n and keep moving.$"

Ultra_Space_EventScript_Blacephalon_Text_0:
# 128 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}! Over here!$"

Ultra_Space_EventScript_Blacephalon_Text_1:
# 136 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: This area looks promising.\n He's investigating it now.$"

Ultra_Space_EventScript_Blacephalon_Text_2:
# 159 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Look out!$"

Ultra_Space_EventScript_Blacephalon_Text_3:
# 173 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: W-What is that?!\n A POKéMON?!\p Wait, it's attacking!$"

Ultra_Space_EventScript_Blacephalon_Text_4:
# 190 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Here you go.\n They should be effective at catching\l POKéMON from the ULTRA SPACE.$"

Ultra_Space_EventScript_Necrozma_Text_0:
# 276 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}!$"

Ultra_Space_EventScript_Necrozma_Text_1:
# 310 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: C-COSMOG?!$"

Ultra_Space_EventScript_Necrozma_Text_2:
# 322 "data/maps/Ultra_Space/scripts.pory"
	.string "Quite fortuitous, indeed!\n Now COSMOG, if you will.\l Please get us out of here!$"

UltraSpace_Text_WouldYouLikeToReturn::
# 486 "data/maps/Ultra_Space/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"

Ultra_Space_Text_DoYouNeedMedicalAssistance::
# 490 "data/maps/Ultra_Space/scripts.pory"
	.string "Ah, intern.\n You require medical assistance, yes?$"

Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries::
# 495 "data/maps/Ultra_Space/scripts.pory"
	.string "Let me know if you find anything\n significant, okay?$"

Ultra_Space_Text_InvisiblePathHint::
# 500 "data/maps/Ultra_Space/scripts.pory"
	.string "Oh, {PLAYER}. Did you find anything yet?\n In the distance I can see another island.\p But I can't figure out how to get over\n there.\p I almost want to just try and run there\n from here…$"

Ultra_Space_Text_Maniac1::
# 509 "data/maps/Ultra_Space/scripts.pory"
	.string "This wasn't supposed to happen…\n It appears we've been pulled into\l the rift.\p I'm not sure if we'll ever be able\n to return to our world…$"

Ultra_Space_Text_James1::
# 517 "data/maps/Ultra_Space/scripts.pory"
	.string "But I think if we head north we might\n find something.$"

Ultra_Space_Text_Maniac2::
# 522 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: …Intruiging.\n Perhaps you had stumbled across a rift\l in the past…\p Although I've never heard reports of\n such an occurence happening to anyone.$"

Ultra_Space_Text_Maniac3::
# 530 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Hm… Intruiging.\n It appears as though these caves\l are a means of connection to the\l other floating islands…\l Perhaps we can find another rift\l through them…\p I must get a closer look!$"

Ultra_Space_Text_Maniac4::
# 540 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: T-That was close!\n But still! A new discovery!\p This will push my research forward at\n lightspeed!\p Now that we know there's undiscovered\n POKéMON here, we can test the new\l POKé BALL I designed…\p Assistant, please give some of them\n to the intern.$"

Ultra_Space_Text_Maniac5::
# 552 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Now, while that was a riveting\n experience, I'd rather be safe than\l sorry.\p I'll leave the exploration to you two\n while I try to analyze the area as much\l as I can with what I have on hand.\p Call for me if you find anything\n significant or require medical aid.$"

Ultra_Space_Text_JamesGoingToExplore::
# 563 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I'm going to survey this central\n area and make sure the PROF. is safe.\p Maybe there's a clue on how to get\n out of here.$"

Ultra_Space_Text_ThatWasCrazy::
# 570 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I saw you walk across the sky\n and went to get the PROF.\l That was crazy!\p MANIAC: Yes, maniacal indeed…\n Unfortunately, there's still no rift\l over here.$"

Ultra_Space_Text_Maniac6::
# 579 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: You came for us?!\n R-RESPLENDENT!\p I had no idea it had the ability\n to traverse the ULTRA SPACE!\p COSMOG, are you able to take us\n back to the lab?$"
