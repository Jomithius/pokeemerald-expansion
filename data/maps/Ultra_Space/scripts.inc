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
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Ultra_Space_TryRemoveUltraBeast_2
Ultra_Space_TryRemoveUltraBeast_1:
	return

Ultra_Space_TryRemoveUltraBeast_2:
# 38 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/Ultra_Space/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 40 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 41 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 42 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 43 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 19
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_4
# 43 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 18
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_4
# 43 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 22
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_4
# 47 "data/maps/Ultra_Space/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Ultra_Space_TryRemoveUltraBeast_1

Ultra_Space_TryRemoveUltraBeast_4:
# 44 "data/maps/Ultra_Space/scripts.pory"
	goto Common_EventScript_NopReturn
	goto Ultra_Space_TryRemoveUltraBeast_1


# 53 "data/maps/Ultra_Space/scripts.pory"

# 54 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_OnWarp:
# 55 "data/maps/Ultra_Space/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 1, Ultra_Space_EventScript_TurnPlayerNorth
# 56 "data/maps/Ultra_Space/scripts.pory"
	.2byte 0
# 57 "data/maps/Ultra_Space/scripts.pory"

# 58 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_EventScript_TurnPlayerNorth::
# 59 "data/maps/Ultra_Space/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 60 "data/maps/Ultra_Space/scripts.pory"
	end

Ultra_Space_EventScript_ArrivedInUltraSpace::
# 64 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 65 "data/maps/Ultra_Space/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 66 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 67 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 68 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 69 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 70 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 71 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 72 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 73 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 74 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacPanic
# 75 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 76 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesLookAround
# 77 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 78 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerLookAround
# 79 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 80 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 82 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_Maniac1
# 83 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 84 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 85 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 86 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 87 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 88 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac1, MSGBOX_AUTOCLOSE
# 89 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 90 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 91 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 92 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 93 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 94 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 97 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 98 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 99 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 100 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2, MSGBOX_AUTOCLOSE
# 101 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 102 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 103 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 104 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_James1, MSGBOX_AUTOCLOSE
# 105 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 106 "data/maps/Ultra_Space/scripts.pory"
	playse SE_BIKE_HOP
# 107 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 108 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 109 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 110 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac2, MSGBOX_AUTOCLOSE
# 111 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 112 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 113 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 114 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3, MSGBOX_AUTOCLOSE
# 116 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 117 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToCentralArea
# 118 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 119 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesToCentralArea
# 120 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 121 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 122 "data/maps/Ultra_Space/scripts.pory"
	removeobject 1
# 123 "data/maps/Ultra_Space/scripts.pory"
	removeobject 2
# 124 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 125 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 2
# 126 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Blacephalon::
# 131 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 132 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_0, MSGBOX_AUTOCLOSE
# 133 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 134 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 135 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 136 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerToCentralArea
# 137 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 138 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 139 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 140 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_1, MSGBOX_AUTOCLOSE
# 142 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 143 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 144 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 145 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 146 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 147 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacInvestigate
# 148 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 149 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac3, MSGBOX_AUTOCLOSE
# 150 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 151 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacToPortal
# 152 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 153 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 154 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 155 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 156 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 157 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 158 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 159 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 160 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 161 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 162 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 163 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_2, MSGBOX_AUTOCLOSE
# 164 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 165 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 166 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 167 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 168 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 169 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 170 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 171 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 172 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 173 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_Blacephalon
# 174 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 175 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacRunToPlayer
# 176 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 177 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_3, MSGBOX_AUTOCLOSE
# 180 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 181 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_BlacephalonApproachesPlayer
# 182 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 4
# 183 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 184 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 75
# 185 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 186 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacFacePlayer
# 187 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 188 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac4, MSGBOX_AUTOCLOSE
# 189 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 190 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 191 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 192 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 193 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 194 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_4, MSGBOX_DEFAULT
# 197 "data/maps/Ultra_Space/scripts.pory"
	giveitem ITEM_BEAST_BALL, 50
# 198 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 199 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 200 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 201 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 202 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 203 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 204 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac5, MSGBOX_AUTOCLOSE
# 205 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 206 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacGoesToPermSpot
# 207 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 208 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 209 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 210 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 211 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 212 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 213 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 214 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 215 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 216 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_JamesGoingToExplore, MSGBOX_AUTOCLOSE
# 217 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 218 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Ultra_Space_Movement_JamesGoesToPermSpot
# 219 "data/maps/Ultra_Space/scripts.pory"
	delay 32
# 220 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 221 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 222 "data/maps/Ultra_Space/scripts.pory"
	removeobject 16
# 223 "data/maps/Ultra_Space/scripts.pory"
	removeobject 17
# 224 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_NECROZMA
# 225 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_EventScript_AddPC
# 226 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 227 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 3
# 228 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_James::
# 233 "data/maps/Ultra_Space/scripts.pory"
	lock
# 234 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 235 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_InvisiblePathHint, MSGBOX_NPC
# 236 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 237 "data/maps/Ultra_Space/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 238 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 19
# 239 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Maniac::
# 244 "data/maps/Ultra_Space/scripts.pory"
	lock
# 245 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 246 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_DoYouNeedMedicalAssistance, MSGBOX_AUTOCLOSE
# 247 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 248 "data/maps/Ultra_Space/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 249 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries, MSGBOX_AUTOCLOSE
# 250 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 251 "data/maps/Ultra_Space/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 252 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 18
# 253 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_AddPC::
# 258 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 46, METATILE_DistortionWorld_Ultra_Space_PC_Top, TRUE
# 259 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 47, METATILE_Building_PC_Off, TRUE
# 260 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 48, METATILE_DistortionWorld_Ultra_Space_PC_Bottom, FALSE
	return


Ultra_Space_EventScript_Necrozma::
# 265 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 266 "data/maps/Ultra_Space/scripts.pory"
	fadenewbgm MUS_NONE
# 267 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 268 "data/maps/Ultra_Space/scripts.pory"
	playse SE_RG_DEOXYS_MOVE
# 269 "data/maps/Ultra_Space/scripts.pory"
	applymovement 13, Ultra_Space_Movement_Necrozma
# 270 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 13
# 271 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 272 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
# 273 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 274 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_NECROZMA
# 275 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 75
# 276 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 277 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 278 "data/maps/Ultra_Space/scripts.pory"
	fadedefaultbgm
# 279 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_0, MSGBOX_AUTOCLOSE
# 280 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 281 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerWalksDown
# 282 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 283 "data/maps/Ultra_Space/scripts.pory"
	addobject 20
# 284 "data/maps/Ultra_Space/scripts.pory"
	addobject 21
# 285 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 286 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Ultra_Space_Movement_JamesGoesToNecrozma
# 287 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 288 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Ultra_Space_Movement_ManiacGoesToNecrozma
# 289 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 21
# 290 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_ThatWasCrazy, MSGBOX_AUTOCLOSE
# 291 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 292 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 293 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 294 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 295 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 296 "data/maps/Ultra_Space/scripts.pory"
	playse SE_THUNDER
# 297 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 298 "data/maps/Ultra_Space/scripts.pory"
	addobject 15
# 299 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_BLACEPHALON
# 300 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 301 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 302 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 303 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 304 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 305 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 306 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 307 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 308 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 309 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 310 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 311 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 20
# 312 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 313 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_1, MSGBOX_AUTOCLOSE
# 314 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 315 "data/maps/Ultra_Space/scripts.pory"
	applymovement 15, Ultra_Space_Movement_Cosmog
# 316 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 317 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 318 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 319 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceLeft
# 320 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 321 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac6, MSGBOX_AUTOCLOSE
# 322 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 323 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 324 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 325 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_2, MSGBOX_AUTOCLOSE
# 328 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 329 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 330 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 331 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 332 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 333 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 334 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_COSMOG_ULTRA_SPACE
# 335 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 336 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 337 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 338 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 339 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 7, 9
# 340 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 341 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Buzzwole::
# 346 "data/maps/Ultra_Space/scripts.pory"
	lock
# 347 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 348 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 349 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_BUZZWOLE, CRY_MODE_ENCOUNTER
# 350 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 351 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BUZZWOLE, 75
# 352 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 353 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Pheromosa::
# 358 "data/maps/Ultra_Space/scripts.pory"
	lock
# 359 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 360 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 361 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_PHEROMOSA, CRY_MODE_ENCOUNTER
# 362 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 363 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_PHEROMOSA, 75
# 364 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 365 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Guzzlord::
# 370 "data/maps/Ultra_Space/scripts.pory"
	lock
# 371 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 372 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 373 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_GUZZLORD, CRY_MODE_ENCOUNTER
# 374 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 375 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_GUZZLORD, 75
# 376 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 377 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Stakataka::
# 382 "data/maps/Ultra_Space/scripts.pory"
	lock
# 383 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 384 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 385 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_STAKATAKA, CRY_MODE_ENCOUNTER
# 386 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 387 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_STAKATAKA, 75
# 388 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 389 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Kartana::
# 394 "data/maps/Ultra_Space/scripts.pory"
	lock
# 395 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 396 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 397 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_KARTANA, CRY_MODE_ENCOUNTER
# 398 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 399 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_KARTANA, 75
# 400 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 401 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Xurkitree::
# 406 "data/maps/Ultra_Space/scripts.pory"
	lock
# 407 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 408 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 409 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
# 410 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 411 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_XURKITREE, 75
# 412 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 413 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Celesteela::
# 418 "data/maps/Ultra_Space/scripts.pory"
	lock
# 419 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 420 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 421 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_CELESTEELA, CRY_MODE_ENCOUNTER
# 422 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 423 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_CELESTEELA, 75
# 424 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 425 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Lunala::
# 430 "data/maps/Ultra_Space/scripts.pory"
	lock
# 431 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 432 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 433 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_LUNALA, CRY_MODE_ENCOUNTER
# 434 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 435 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_LUNALA, 75
# 436 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 437 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 438 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Solgaleo::
# 443 "data/maps/Ultra_Space/scripts.pory"
	lock
# 444 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 445 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 446 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_SOLGALEO, CRY_MODE_ENCOUNTER
# 447 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 448 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_SOLGALEO, 75
# 449 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 450 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 451 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_Shake::
# 456 "data/maps/Ultra_Space/scripts.pory"
	delay 30
# 457 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8004, 2
# 458 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8005, 6
# 459 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8006, 8
# 460 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8007, 4
# 461 "data/maps/Ultra_Space/scripts.pory"
	special ShakeCamera
# 462 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 463 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 464 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 465 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 466 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 467 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 468 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 469 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 470 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 471 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 472 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 473 "data/maps/Ultra_Space/scripts.pory"
	playse SE_INTRO_BLAST
# 474 "data/maps/Ultra_Space/scripts.pory"
	delay 20
	return


Ultra_Space_EventScript_Cosmog::
# 479 "data/maps/Ultra_Space/scripts.pory"
	lock
# 480 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 481 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 482 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 483 "data/maps/Ultra_Space/scripts.pory"
	msgbox UltraSpace_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 484 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 485 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ultra_Space_EventScript_Cosmog_2
# 492 "data/maps/Ultra_Space/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
Ultra_Space_EventScript_Cosmog_1:
# 494 "data/maps/Ultra_Space/scripts.pory"
	release
	end

Ultra_Space_EventScript_Cosmog_2:
# 486 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 487 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 488 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 489 "data/maps/Ultra_Space/scripts.pory"
	waitstate
	goto Ultra_Space_EventScript_Cosmog_1


# 602 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacPanic:
# 603 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 604 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 605 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_up
# 606 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 607 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_left
# 608 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 609 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_right
# 610 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 611 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
# 612 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 615 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Maniac1:
# 616 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 616 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 617 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 620 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesLookAround:
# 621 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 622 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 623 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 624 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 625 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 628 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerLookAround:
# 629 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
# 630 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
# 632 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 633 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 634 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 635 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 638 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToCentralArea:
# 639 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 639 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 639 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 639 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 640 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 640 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 643 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesToCentralArea:
# 644 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 645 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 645 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 645 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 645 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 646 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 647 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 647 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 650 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerToCentralArea:
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 652 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 655 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToPortal:
# 656 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 656 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 656 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 656 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 659 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacRunToPlayer:
# 660 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 660 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 661 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 661 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 662 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 663 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
	step_end

# 666 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Blacephalon:
# 667 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 667 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 668 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 669 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 669 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 669 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 672 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_BlacephalonApproachesPlayer:
# 673 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 673 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 673 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 674 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 677 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacFacePlayer:
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 678 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 679 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 680 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 681 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 682 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 683 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 683 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 687 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToPermSpot:
# 688 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 690 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 691 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 691 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 691 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 691 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 694 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToPermSpot:
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 696 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 696 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 696 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 696 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 698 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 698 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 698 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 699 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 699 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 702 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToNecrozma:
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 704 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 705 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 708 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToNecrozma:
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 710 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 711 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 714 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Cosmog:
# 715 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 716 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 717 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 717 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 720 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacInvestigate:
# 721 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 722 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 723 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 724 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 725 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 726 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 727 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 728 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 729 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 730 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 731 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 734 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Necrozma:
# 735 "data/maps/Ultra_Space/scripts.pory"
	levitate
# 736 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 736 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 737 "data/maps/Ultra_Space/scripts.pory"
	stop_levitate
	step_end

# 740 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerWalksDown:
# 741 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 741 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 741 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0:
# 80 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: No, no, no…!$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1:
# 94 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Something…\p Something about this place feels…\n familiar.$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2:
# 100 "data/maps/Ultra_Space/scripts.pory"
	.string "I don't know why…$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3:
# 114 "data/maps/Ultra_Space/scripts.pory"
	.string "Either way, let us follow his intuition\n and keep moving.$"

Ultra_Space_EventScript_Blacephalon_Text_0:
# 132 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}! Over here!$"

Ultra_Space_EventScript_Blacephalon_Text_1:
# 140 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: This area looks promising.\n He's investigating it now.$"

Ultra_Space_EventScript_Blacephalon_Text_2:
# 163 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Look out!$"

Ultra_Space_EventScript_Blacephalon_Text_3:
# 177 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: W-What is that?!\n A POKéMON?!\p Wait, it's attacking!$"

Ultra_Space_EventScript_Blacephalon_Text_4:
# 194 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Here you go.\n They should be effective at catching\l POKéMON from the ULTRA SPACE.$"

Ultra_Space_EventScript_Necrozma_Text_0:
# 279 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}!$"

Ultra_Space_EventScript_Necrozma_Text_1:
# 313 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: C-COSMOG?!$"

Ultra_Space_EventScript_Necrozma_Text_2:
# 325 "data/maps/Ultra_Space/scripts.pory"
	.string "Quite fortuitous, indeed!\n Now COSMOG, if you will.\l Please get us out of here!$"

UltraSpace_Text_WouldYouLikeToReturn::
# 498 "data/maps/Ultra_Space/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"

Ultra_Space_Text_DoYouNeedMedicalAssistance::
# 502 "data/maps/Ultra_Space/scripts.pory"
	.string "Ah, intern.\n You require medical assistance, yes?$"

Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries::
# 507 "data/maps/Ultra_Space/scripts.pory"
	.string "Let me know if you find anything\n significant, okay?$"

Ultra_Space_Text_InvisiblePathHint::
# 512 "data/maps/Ultra_Space/scripts.pory"
	.string "Oh, {PLAYER}.\n Did you find anything yet?\p In the distance I can just barely\n see another island…\p But I can't figure out how to get over\n there.\p I almost want to just try and run there\n from here.$"

Ultra_Space_Text_Maniac1::
# 523 "data/maps/Ultra_Space/scripts.pory"
	.string "This wasn't supposed to happen…\n It appears we've been pulled into\l the rift.\p I'm not sure if we'll ever be able\n to return to our world…$"

Ultra_Space_Text_James1::
# 531 "data/maps/Ultra_Space/scripts.pory"
	.string "But I think if we head north we might\n find something.$"

Ultra_Space_Text_Maniac2::
# 536 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: … Intruiging.\p Perhaps you had stumbled across a rift\n in the past…\p Although I've never heard reports of\n such an occurence happening to anyone.$"

Ultra_Space_Text_Maniac3::
# 544 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: Hm… Intruiging.\p It appears as though these caves\n are a means of connection to the\l other floating islands…\p Perhaps we can find another rift\n through them…\p I must get a closer look!$"

Ultra_Space_Text_Maniac4::
# 554 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: T-That was close!\n But still! A new discovery!\p This will push my research forward at\n lightspeed!\p Now that we know there's undiscovered\n POKéMON here, we can test the new\l POKé BALL I designed…\p Assistant, please give some of them\n to the intern.$"

Ultra_Space_Text_Maniac5::
# 566 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: Now, while that was a riveting\n experience, I'd rather be safe than\l sorry.\p I'll leave the exploration to you two\n while I try to analyze the area as much\l as I can with what I have on hand.\p Call for me if you find anything\n significant or require medical aid.$"

Ultra_Space_Text_JamesGoingToExplore::
# 577 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I'm going to survey this central\n area and make sure the PROF. is safe.\p Maybe there's a clue on how to get\n out of here.$"

Ultra_Space_Text_ThatWasCrazy::
# 584 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I saw you walk across the sky\n and went to get the PROF.\l That was crazy!\p PROF.: Yes, maniacal indeed…\n Unfortunately, there's still no rift\l over here.$"

Ultra_Space_Text_Maniac6::
# 593 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: You came for us?!\n R-RESPLENDENT!\p I had no idea it had the ability\n to traverse the ULTRA SPACE!\p COSMOG, are you able to take us\n back to the lab?$"
