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
	setflag FLAG_VISITED_ULTRA_SPACE
# 63 "data/maps/Ultra_Space/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 64 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 65 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 66 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 67 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 68 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 69 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 70 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 71 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacPanic
# 72 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 73 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesLookAround
# 74 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 75 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerLookAround
# 76 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 77 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 78 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 79 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_Maniac1
# 80 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 81 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 82 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 83 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 84 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 85 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac1, MSGBOX_AUTOCLOSE
# 86 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 87 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 88 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 89 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 90 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 91 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 94 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 95 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 96 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 97 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2, MSGBOX_AUTOCLOSE
# 98 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 99 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 100 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 101 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_James1, MSGBOX_AUTOCLOSE
# 102 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 103 "data/maps/Ultra_Space/scripts.pory"
	playse SE_BIKE_HOP
# 104 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 105 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 106 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 107 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac2, MSGBOX_AUTOCLOSE
# 108 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 109 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 110 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 111 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3, MSGBOX_AUTOCLOSE
# 113 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 114 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToCentralArea
# 115 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 116 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesToCentralArea
# 117 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 118 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 119 "data/maps/Ultra_Space/scripts.pory"
	removeobject 1
# 120 "data/maps/Ultra_Space/scripts.pory"
	removeobject 2
# 121 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 122 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 2
# 123 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Blacephalon::
# 128 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 129 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 131 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 132 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 133 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerToCentralArea
# 134 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 135 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 136 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 137 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_1, MSGBOX_AUTOCLOSE
# 139 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 140 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 141 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 142 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 143 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 144 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacInvestigate
# 145 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 146 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac3, MSGBOX_AUTOCLOSE
# 147 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 148 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacToPortal
# 149 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 150 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 151 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 152 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 153 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 154 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 155 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 156 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 157 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 158 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 159 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 160 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_2, MSGBOX_AUTOCLOSE
# 161 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 162 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 163 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 164 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 165 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 166 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 167 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 168 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 169 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 170 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_Blacephalon
# 171 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 172 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacRunToPlayer
# 173 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 174 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_3, MSGBOX_AUTOCLOSE
# 177 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 178 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_BlacephalonApproachesPlayer
# 179 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 4
# 180 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 181 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 75
# 182 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 183 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacFacePlayer
# 184 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 185 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac4, MSGBOX_AUTOCLOSE
# 186 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 187 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 188 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 189 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 190 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 191 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_4, MSGBOX_AUTOCLOSE
# 194 "data/maps/Ultra_Space/scripts.pory"
	giveitem ITEM_BEAST_BALL, 50
# 195 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 196 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 197 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 198 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 199 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 200 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 201 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac5, MSGBOX_AUTOCLOSE
# 202 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 203 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacGoesToPermSpot
# 204 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 205 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 206 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 207 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 208 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 209 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 210 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 211 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 212 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 213 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_JamesGoingToExplore, MSGBOX_AUTOCLOSE
# 214 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 215 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Ultra_Space_Movement_JamesGoesToPermSpot
# 216 "data/maps/Ultra_Space/scripts.pory"
	delay 32
# 217 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 218 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 219 "data/maps/Ultra_Space/scripts.pory"
	removeobject 16
# 220 "data/maps/Ultra_Space/scripts.pory"
	removeobject 17
# 221 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_NECROZMA
# 222 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_EventScript_AddPC
# 223 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 224 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 3
# 225 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_James::
# 230 "data/maps/Ultra_Space/scripts.pory"
	lock
# 231 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 232 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_InvisiblePathHint, MSGBOX_NPC
# 233 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 234 "data/maps/Ultra_Space/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 235 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 19
# 236 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Maniac::
# 241 "data/maps/Ultra_Space/scripts.pory"
	lock
# 242 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 243 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_DoYouNeedMedicalAssistance, MSGBOX_AUTOCLOSE
# 244 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 245 "data/maps/Ultra_Space/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 246 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries, MSGBOX_AUTOCLOSE
# 247 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 248 "data/maps/Ultra_Space/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 249 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 18
# 250 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_AddPC::
# 255 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 46, METATILE_DistortionWorld_Ultra_Space_PC_Top, TRUE
# 256 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 47, METATILE_Building_PC_Off, TRUE
# 257 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 48, METATILE_DistortionWorld_Ultra_Space_PC_Bottom, FALSE
	return


Ultra_Space_EventScript_Necrozma::
# 262 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 263 "data/maps/Ultra_Space/scripts.pory"
	fadenewbgm MUS_NONE
# 264 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 265 "data/maps/Ultra_Space/scripts.pory"
	playse SE_RG_DEOXYS_MOVE
# 266 "data/maps/Ultra_Space/scripts.pory"
	applymovement 13, Ultra_Space_Movement_Necrozma
# 267 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 13
# 268 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 269 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
# 270 "data/maps/Ultra_Space/scripts.pory"
	delay 40
# 271 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 272 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_NECROZMA
# 273 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 75
# 274 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 275 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 276 "data/maps/Ultra_Space/scripts.pory"
	fadedefaultbgm
# 277 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_0, MSGBOX_AUTOCLOSE
# 278 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 279 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerWalksDown
# 280 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 281 "data/maps/Ultra_Space/scripts.pory"
	addobject 20
# 282 "data/maps/Ultra_Space/scripts.pory"
	addobject 21
# 283 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 284 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Ultra_Space_Movement_JamesGoesToNecrozma
# 285 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 286 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Ultra_Space_Movement_ManiacGoesToNecrozma
# 287 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 21
# 288 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_ThatWasCrazy, MSGBOX_AUTOCLOSE
# 289 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 290 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 291 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 292 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 293 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 294 "data/maps/Ultra_Space/scripts.pory"
	playse SE_THUNDER
# 295 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 296 "data/maps/Ultra_Space/scripts.pory"
	addobject 15
# 297 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_BLACEPHALON
# 298 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 299 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 300 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 301 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 302 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 303 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 304 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 305 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 306 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 307 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 308 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 309 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 20
# 310 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 311 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_1, MSGBOX_AUTOCLOSE
# 312 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 313 "data/maps/Ultra_Space/scripts.pory"
	applymovement 15, Ultra_Space_Movement_Cosmog
# 314 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 315 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 316 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 317 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceLeft
# 318 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 319 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac6, MSGBOX_AUTOCLOSE
# 320 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 321 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 322 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 323 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_2, MSGBOX_AUTOCLOSE
# 326 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 327 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 328 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 329 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 330 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 331 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 332 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_COSMOG_ULTRA_SPACE
# 333 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_PROF_ROUTE_135_LAB
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
# 77 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: No, no, no…!$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1:
# 91 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Something…\p Something about this place feels…\n familiar.$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2:
# 97 "data/maps/Ultra_Space/scripts.pory"
	.string "I don't know why…$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3:
# 111 "data/maps/Ultra_Space/scripts.pory"
	.string "Either way, let us follow his intuition\n and keep moving.$"

Ultra_Space_EventScript_Blacephalon_Text_0:
# 129 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}! Over here!$"

Ultra_Space_EventScript_Blacephalon_Text_1:
# 137 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: This area looks promising.\n He's investigating it now.$"

Ultra_Space_EventScript_Blacephalon_Text_2:
# 160 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Look out!$"

Ultra_Space_EventScript_Blacephalon_Text_3:
# 174 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: W-What is that?!\n A POKéMON?!\p Wait, it's attacking!$"

Ultra_Space_EventScript_Blacephalon_Text_4:
# 191 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Here you go.\n They should be effective at catching\l POKéMON from the ULTRA SPACE.$"

Ultra_Space_EventScript_Necrozma_Text_0:
# 277 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}!$"

Ultra_Space_EventScript_Necrozma_Text_1:
# 311 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: C-COSMOG?!$"

Ultra_Space_EventScript_Necrozma_Text_2:
# 323 "data/maps/Ultra_Space/scripts.pory"
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
