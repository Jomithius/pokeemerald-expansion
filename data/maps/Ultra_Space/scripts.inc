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
	call_if_unset FLAG_HIDE_JAMES_AND_PROF_ULTRA_SPACE, Ultra_Space_EventScript_AddPC
# 16 "data/maps/Ultra_Space/scripts.pory"
	call_if_unset FLAG_HIDE_COSMOG_ULTRA_SPACE, Ultra_Space_EventScript_AddPC
	end


Ultra_Space_UpdateUltraBeasts::
# 21 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_BLACEPHALON, Ultra_Space_RemoveBlacephalon
# 22 "data/maps/Ultra_Space/scripts.pory"
	call_if_set FLAG_DEFEATED_NECROZMA, Ultra_Space_RemoveNecrozma
# 23 "data/maps/Ultra_Space/scripts.pory"
	call_if_ge VAR_ULTRA_SPACE_STATE, 3, Ultra_Space_TryRemoveUltraBeast
	end


Ultra_Space_RemoveBlacephalon::
# 28 "data/maps/Ultra_Space/scripts.pory"
	removeobject 4
	return


Ultra_Space_RemoveNecrozma::
# 33 "data/maps/Ultra_Space/scripts.pory"
	removeobject 13
	return


Ultra_Space_TryRemoveUltraBeast::
# 38 "data/maps/Ultra_Space/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Ultra_Space_TryRemoveUltraBeast_2
Ultra_Space_TryRemoveUltraBeast_1:
	return

Ultra_Space_TryRemoveUltraBeast_2:
# 39 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/Ultra_Space/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 42 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 43 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 44 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 19
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_4
# 44 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 18
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_4
# 44 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_LAST_TALKED, 22
	goto_if_eq Ultra_Space_TryRemoveUltraBeast_4
# 48 "data/maps/Ultra_Space/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Ultra_Space_TryRemoveUltraBeast_1

Ultra_Space_TryRemoveUltraBeast_4:
# 45 "data/maps/Ultra_Space/scripts.pory"
	goto Common_EventScript_NopReturn
	goto Ultra_Space_TryRemoveUltraBeast_1


# 54 "data/maps/Ultra_Space/scripts.pory"

# 55 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_OnWarp:
# 56 "data/maps/Ultra_Space/scripts.pory"
	map_script_2 VAR_ULTRA_SPACE_STATE, 1, Ultra_Space_EventScript_TurnPlayerNorth
# 57 "data/maps/Ultra_Space/scripts.pory"
	.2byte 0
# 58 "data/maps/Ultra_Space/scripts.pory"

# 59 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_EventScript_TurnPlayerNorth::
# 60 "data/maps/Ultra_Space/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 61 "data/maps/Ultra_Space/scripts.pory"
	end

Ultra_Space_EventScript_ArrivedInUltraSpace::
# 65 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 66 "data/maps/Ultra_Space/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 67 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 68 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 69 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 70 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 71 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 72 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 73 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 74 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 75 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacPanic
# 76 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 77 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesLookAround
# 78 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 79 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerLookAround
# 80 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 81 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 82 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 83 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_Maniac1
# 84 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 85 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 86 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 87 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 88 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 89 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac1, MSGBOX_AUTOCLOSE
# 90 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 91 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 92 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 93 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 94 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 95 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 98 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 99 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 100 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 101 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2, MSGBOX_AUTOCLOSE
# 102 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 103 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 104 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 105 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_James1, MSGBOX_AUTOCLOSE
# 106 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 107 "data/maps/Ultra_Space/scripts.pory"
	playse SE_BIKE_HOP
# 108 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 109 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 110 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 111 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac2, MSGBOX_AUTOCLOSE
# 112 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 113 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 114 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 115 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3, MSGBOX_AUTOCLOSE
# 117 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 118 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToCentralArea
# 119 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 120 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesToCentralArea
# 121 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 122 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 123 "data/maps/Ultra_Space/scripts.pory"
	removeobject 1
# 124 "data/maps/Ultra_Space/scripts.pory"
	removeobject 2
# 125 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 126 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 2
# 127 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_Blacephalon::
# 132 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 133 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_0, MSGBOX_AUTOCLOSE
# 134 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 135 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 136 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 137 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerToCentralArea
# 138 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 139 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 140 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 141 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_1, MSGBOX_AUTOCLOSE
# 143 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 144 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 145 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 146 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 147 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 148 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacInvestigate
# 149 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 150 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac3, MSGBOX_AUTOCLOSE
# 151 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 152 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacToPortal
# 153 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 154 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 155 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 156 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 157 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 158 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 159 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 160 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 161 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 162 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 163 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 164 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_2, MSGBOX_AUTOCLOSE
# 165 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 166 "data/maps/Ultra_Space/scripts.pory"
	addobject 4
# 167 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 168 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 169 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 170 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 171 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 172 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 173 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 174 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 175 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_Blacephalon
# 176 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 177 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacRunToPlayer
# 178 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 179 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_3, MSGBOX_AUTOCLOSE
# 182 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 183 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_BlacephalonApproachesPlayer
# 184 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 4
# 185 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 186 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 75
# 187 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 188 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacFacePlayer
# 189 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 190 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac4, MSGBOX_AUTOCLOSE
# 191 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 192 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 193 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 194 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 195 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 196 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_4, MSGBOX_DEFAULT
# 199 "data/maps/Ultra_Space/scripts.pory"
	giveitem ITEM_BEAST_BALL, 50
# 200 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 201 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 202 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 203 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 204 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 205 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 206 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac5, MSGBOX_AUTOCLOSE
# 207 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 208 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacGoesToPermSpot
# 209 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 210 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 211 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 212 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 213 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 214 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 215 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 216 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 217 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 218 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_JamesGoingToExplore, MSGBOX_AUTOCLOSE
# 219 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 220 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Ultra_Space_Movement_JamesGoesToPermSpot
# 221 "data/maps/Ultra_Space/scripts.pory"
	delay 32
# 222 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 223 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 224 "data/maps/Ultra_Space/scripts.pory"
	removeobject 16
# 225 "data/maps/Ultra_Space/scripts.pory"
	removeobject 17
# 226 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_JAMES_AND_PROF_ULTRA_SPACE
# 227 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_EventScript_AddPC
# 228 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 229 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 3
# 230 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end


Ultra_Space_EventScript_James::
# 235 "data/maps/Ultra_Space/scripts.pory"
	lock
# 236 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 237 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_InvisiblePathHint, MSGBOX_NPC
# 238 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 239 "data/maps/Ultra_Space/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 240 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 19
# 241 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Maniac::
# 246 "data/maps/Ultra_Space/scripts.pory"
	lock
# 247 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 248 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_DoYouNeedMedicalAssistance, MSGBOX_AUTOCLOSE
# 249 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 250 "data/maps/Ultra_Space/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 251 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries, MSGBOX_AUTOCLOSE
# 252 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 253 "data/maps/Ultra_Space/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 254 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 18
# 255 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_AddPC::
# 260 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 46, METATILE_DistortionWorld_Ultra_Space_PC_Top, TRUE
# 261 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 47, METATILE_Building_PC_Off, TRUE
# 262 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 48, METATILE_DistortionWorld_Ultra_Space_PC_Bottom, FALSE
	return


Ultra_Space_EventScript_Necrozma::
# 267 "data/maps/Ultra_Space/scripts.pory"
	lockall
# 268 "data/maps/Ultra_Space/scripts.pory"
	goto_if_set FLAG_DEFEATED_NECROZMA, Ultra_Space_EventScript_Necrozma_2
Ultra_Space_EventScript_Necrozma_1:
# 271 "data/maps/Ultra_Space/scripts.pory"
	fadenewbgm MUS_NONE
# 272 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 273 "data/maps/Ultra_Space/scripts.pory"
	playse SE_RG_DEOXYS_MOVE
# 274 "data/maps/Ultra_Space/scripts.pory"
	applymovement 13, Ultra_Space_Movement_Necrozma
# 275 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 13
# 276 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 277 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
# 278 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 279 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_NECROZMA
# 280 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 75
# 281 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 282 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 283 "data/maps/Ultra_Space/scripts.pory"
	fadedefaultbgm
# 284 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_AND_PROF_ULTRA_SPACE
# 285 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_0, MSGBOX_AUTOCLOSE
# 286 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 287 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerWalksDown
# 288 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 289 "data/maps/Ultra_Space/scripts.pory"
	addobject 20
# 290 "data/maps/Ultra_Space/scripts.pory"
	addobject 21
# 291 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 292 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Ultra_Space_Movement_JamesGoesToNecrozma
# 293 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 294 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Ultra_Space_Movement_ManiacGoesToNecrozma
# 295 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 21
# 296 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_ThatWasCrazy, MSGBOX_AUTOCLOSE
# 297 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 298 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 299 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 300 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 301 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 302 "data/maps/Ultra_Space/scripts.pory"
	playse SE_THUNDER
# 303 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 304 "data/maps/Ultra_Space/scripts.pory"
	addobject 15
# 305 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_BLACEPHALON
# 306 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 307 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 308 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 309 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 310 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 311 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 312 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 313 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 314 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 315 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 316 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 317 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 20
# 318 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 319 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_1, MSGBOX_AUTOCLOSE
# 320 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 321 "data/maps/Ultra_Space/scripts.pory"
	applymovement 15, Ultra_Space_Movement_Cosmog
# 322 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 323 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 324 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 325 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceLeft
# 326 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 327 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac6, MSGBOX_AUTOCLOSE
# 328 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 329 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 330 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 331 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_2, MSGBOX_AUTOCLOSE
# 334 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 335 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 336 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 337 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 338 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 339 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_NPCS_RETURNED_FROM_ULTRA_SPACE
# 340 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_COSMOG_ULTRA_SPACE
# 341 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_PROF_ROUTE_135_LAB
# 342 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 343 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 344 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 345 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 7, 9
# 346 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 347 "data/maps/Ultra_Space/scripts.pory"
	releaseall
	end

Ultra_Space_EventScript_Necrozma_2:
# 269 "data/maps/Ultra_Space/scripts.pory"
	addobject 13
	goto Ultra_Space_EventScript_Necrozma_1


Ultra_Space_EventScript_Buzzwole::
# 352 "data/maps/Ultra_Space/scripts.pory"
	lock
# 353 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 354 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 355 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_BUZZWOLE, CRY_MODE_ENCOUNTER
# 356 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 357 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BUZZWOLE, 75
# 358 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 359 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Pheromosa::
# 364 "data/maps/Ultra_Space/scripts.pory"
	lock
# 365 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 366 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 367 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_PHEROMOSA, CRY_MODE_ENCOUNTER
# 368 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 369 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_PHEROMOSA, 75
# 370 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 371 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Guzzlord::
# 376 "data/maps/Ultra_Space/scripts.pory"
	lock
# 377 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 378 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 379 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_GUZZLORD, CRY_MODE_ENCOUNTER
# 380 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 381 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_GUZZLORD, 75
# 382 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 383 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Stakataka::
# 388 "data/maps/Ultra_Space/scripts.pory"
	lock
# 389 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 390 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 391 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_STAKATAKA, CRY_MODE_ENCOUNTER
# 392 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 393 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_STAKATAKA, 75
# 394 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 395 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Kartana::
# 400 "data/maps/Ultra_Space/scripts.pory"
	lock
# 401 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 402 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 403 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_KARTANA, CRY_MODE_ENCOUNTER
# 404 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 405 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_KARTANA, 75
# 406 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 407 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Xurkitree::
# 412 "data/maps/Ultra_Space/scripts.pory"
	lock
# 413 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 414 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 415 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
# 416 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 417 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_XURKITREE, 75
# 418 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 419 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Celesteela::
# 424 "data/maps/Ultra_Space/scripts.pory"
	lock
# 425 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 426 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 427 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_CELESTEELA, CRY_MODE_ENCOUNTER
# 428 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 429 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_CELESTEELA, 75
# 430 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 431 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Lunala::
# 436 "data/maps/Ultra_Space/scripts.pory"
	lock
# 437 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 438 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 439 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_LUNALA, CRY_MODE_ENCOUNTER
# 440 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 441 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_LUNALA, 75
# 442 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 443 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 444 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Solgaleo::
# 449 "data/maps/Ultra_Space/scripts.pory"
	lock
# 450 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 451 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 452 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_SOLGALEO, CRY_MODE_ENCOUNTER
# 453 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 454 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_SOLGALEO, 75
# 455 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 456 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 457 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_Shake::
# 462 "data/maps/Ultra_Space/scripts.pory"
	delay 30
# 463 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8004, 2
# 464 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8005, 6
# 465 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8006, 8
# 466 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8007, 4
# 467 "data/maps/Ultra_Space/scripts.pory"
	special ShakeCamera
# 468 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 469 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 470 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 471 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 472 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 473 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 474 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 475 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 476 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 477 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 478 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 479 "data/maps/Ultra_Space/scripts.pory"
	playse SE_INTRO_BLAST
# 480 "data/maps/Ultra_Space/scripts.pory"
	delay 20
	return


Ultra_Space_EventScript_Cosmog::
# 485 "data/maps/Ultra_Space/scripts.pory"
	lock
# 486 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 487 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 488 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 489 "data/maps/Ultra_Space/scripts.pory"
	msgbox UltraSpace_Text_WouldYouLikeToReturn, MSGBOX_YESNO
# 490 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 491 "data/maps/Ultra_Space/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ultra_Space_EventScript_Cosmog_2
# 498 "data/maps/Ultra_Space/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
Ultra_Space_EventScript_Cosmog_1:
# 500 "data/maps/Ultra_Space/scripts.pory"
	release
	end

Ultra_Space_EventScript_Cosmog_2:
# 492 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 493 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 494 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 10, 9
# 495 "data/maps/Ultra_Space/scripts.pory"
	waitstate
	goto Ultra_Space_EventScript_Cosmog_1


# 608 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacPanic:
# 609 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 610 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 611 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_up
# 612 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 613 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_left
# 614 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 615 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 617 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
# 618 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 621 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Maniac1:
# 622 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 622 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 623 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 626 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesLookAround:
# 627 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 628 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 629 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 630 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 631 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 634 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerLookAround:
# 635 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
# 636 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 637 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
# 638 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 639 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 640 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 641 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 644 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToCentralArea:
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
# 646 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 649 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesToCentralArea:
# 650 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 651 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 652 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 653 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 653 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 656 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerToCentralArea:
# 657 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 657 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 657 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 657 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 657 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 657 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 658 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 661 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToPortal:
# 662 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 662 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 662 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 662 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 665 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacRunToPlayer:
# 666 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 666 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 667 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 667 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 668 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 669 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
	step_end

# 672 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Blacephalon:
# 673 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 673 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 674 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 675 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 675 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 675 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 678 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_BlacephalonApproachesPlayer:
# 679 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 679 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 679 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 680 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 683 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacFacePlayer:
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 684 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 685 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 686 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 687 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 688 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 689 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 690 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 693 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToPermSpot:
# 694 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 695 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 696 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 697 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 700 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToPermSpot:
# 701 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 702 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 702 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 702 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 702 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 703 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 704 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 704 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 704 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 705 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 705 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 708 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToNecrozma:
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 709 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 710 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 711 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 711 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 714 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToNecrozma:
# 715 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 715 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 715 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 715 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 715 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 716 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 717 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 717 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 720 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Cosmog:
# 721 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 722 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 723 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 723 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 726 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacInvestigate:
# 727 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 728 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 729 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 730 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 731 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 732 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 733 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 734 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 735 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 736 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 737 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 740 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Necrozma:
# 741 "data/maps/Ultra_Space/scripts.pory"
	levitate
# 742 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 742 "data/maps/Ultra_Space/scripts.pory"
	walk_slow_down
# 743 "data/maps/Ultra_Space/scripts.pory"
	stop_levitate
	step_end

# 746 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerWalksDown:
# 747 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 747 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 747 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0:
# 81 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: No, no, no…!$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1:
# 95 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Something…\p Something about this place feels…\n familiar.$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2:
# 101 "data/maps/Ultra_Space/scripts.pory"
	.string "I don't know why…$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3:
# 115 "data/maps/Ultra_Space/scripts.pory"
	.string "Either way, let us follow his intuition\n and keep moving.$"

Ultra_Space_EventScript_Blacephalon_Text_0:
# 133 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}! Over here!$"

Ultra_Space_EventScript_Blacephalon_Text_1:
# 141 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: This area looks promising.\n He's investigating it now.$"

Ultra_Space_EventScript_Blacephalon_Text_2:
# 164 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Look out!$"

Ultra_Space_EventScript_Blacephalon_Text_3:
# 179 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: W-What is that?!\n A POKéMON?!\p Wait, it's attacking!$"

Ultra_Space_EventScript_Blacephalon_Text_4:
# 196 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Here you go.\p They should be effective at catching\n POKéMON from the ULTRA SPACE.$"

Ultra_Space_EventScript_Necrozma_Text_0:
# 285 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}!$"

Ultra_Space_EventScript_Necrozma_Text_1:
# 319 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: C-COSMOG?!$"

Ultra_Space_EventScript_Necrozma_Text_2:
# 331 "data/maps/Ultra_Space/scripts.pory"
	.string "Quite fortuitous, indeed!\n Now COSMOG, if you will.\l Please get us out of here!$"

UltraSpace_Text_WouldYouLikeToReturn::
# 504 "data/maps/Ultra_Space/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Would you like to return to the LAB?$"

Ultra_Space_Text_DoYouNeedMedicalAssistance::
# 508 "data/maps/Ultra_Space/scripts.pory"
	.string "Ah, intern.\n You require medical assistance, yes?$"

Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries::
# 513 "data/maps/Ultra_Space/scripts.pory"
	.string "Let me know if you find anything\n significant, okay?$"

Ultra_Space_Text_InvisiblePathHint::
# 518 "data/maps/Ultra_Space/scripts.pory"
	.string "Oh, {PLAYER}.\n Did you find anything yet?\p In the distance I can just barely\n see another island…\p But I can't figure out how to get over\n there.\p I almost want to just try and run there\n from here.$"

Ultra_Space_Text_Maniac1::
# 529 "data/maps/Ultra_Space/scripts.pory"
	.string "This wasn't supposed to happen…\p It appears we've been pulled into\n the rift.\p I'm not sure if we'll ever be able\n to return to our world…$"

Ultra_Space_Text_James1::
# 537 "data/maps/Ultra_Space/scripts.pory"
	.string "But I think if we head north we might\n find something.$"

Ultra_Space_Text_Maniac2::
# 542 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: That's… quite perplexing.\p Perhaps you had stumbled across a rift\n in the past…\p Although I've never heard reports of\n such an occurence happening to anyone.$"

Ultra_Space_Text_Maniac3::
# 550 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: Hm… Perplexing…\p It appears as though these caves\n are a means of connection to the\l other floating islands…\p Perhaps we can find another rift\n through them…\p I must get a closer look!$"

Ultra_Space_Text_Maniac4::
# 560 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: T-That was close!\n But still! A new discovery!\p This will push my research forward at\n lightspeed!\p Now that we know there's undiscovered\n POKéMON here, we can test the new\l POKé BALL I designed…\p Assistant, please give some of them\n to the intern.$"

Ultra_Space_Text_Maniac5::
# 572 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: Now, while that was a riveting\n experience, I'd rather be safe than\l sorry.\p I'll leave the exploration to you two\n while I try to analyze the area as much\l as I can with what I have on hand.\p Call for me if you find anything\n significant or require medical aid.$"

Ultra_Space_Text_JamesGoingToExplore::
# 583 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I'm going to survey this central\n area and make sure the PROF. is safe.\p Maybe there's a clue on how to get\n out of here.$"

Ultra_Space_Text_ThatWasCrazy::
# 590 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I saw you walk across the sky\n and went to get the PROF.\l That was crazy!\p PROF.: Yes, maniacal indeed…\n Unfortunately, there's still no rift\l over here.$"

Ultra_Space_Text_Maniac6::
# 599 "data/maps/Ultra_Space/scripts.pory"
	.string "PROF.: You came for us?!\n R-RESPLENDENT!\p I had no idea it had the ability\n to traverse the ULTRA SPACE!\p COSMOG, are you able to take us\n back to the lab?$"
