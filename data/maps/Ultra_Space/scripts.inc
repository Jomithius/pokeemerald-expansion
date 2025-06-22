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
	call_if_ge VAR_ULTRA_SPACE_STATE, 3, UltraSpace_TryRemoveUltraBeast
	end


Ultra_Space_RemoveBlacephalon::
# 21 "data/maps/Ultra_Space/scripts.pory"
	removeobject 4
	return


UltraSpace_TryRemoveUltraBeast::
# 26 "data/maps/Ultra_Space/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Common_EventScript_NopReturn
# 28 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_NopReturn
# 29 "data/maps/Ultra_Space/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, Common_EventScript_NopReturn
# 30 "data/maps/Ultra_Space/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


Ultra_Space_EventScript_ArrivedInUltraSpace::
# 35 "data/maps/Ultra_Space/scripts.pory"
	lock
# 36 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_VISITED_ULTRA_SPACE
# 37 "data/maps/Ultra_Space/scripts.pory"
	setrespawn HEAL_LOCATION_ULTRA_SPACE
# 38 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 39 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 40 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 41 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 42 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 43 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 44 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 45 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacPanic
# 46 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 47 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesLookAround
# 48 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 49 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerLookAround
# 50 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 51 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 53 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_Maniac1
# 54 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 55 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 56 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 57 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 58 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 59 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac1, MSGBOX_AUTOCLOSE
# 60 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 61 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 62 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 63 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 64 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 65 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1, MSGBOX_AUTOCLOSE
# 68 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 69 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 70 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 71 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2, MSGBOX_AUTOCLOSE
# 72 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 73 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 74 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 1
# 75 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_James1, MSGBOX_AUTOCLOSE
# 76 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 77 "data/maps/Ultra_Space/scripts.pory"
	playse SE_BIKE_HOP
# 78 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 79 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 80 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 81 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac2, MSGBOX_AUTOCLOSE
# 82 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 83 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 84 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 2
# 85 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3, MSGBOX_AUTOCLOSE
# 87 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 88 "data/maps/Ultra_Space/scripts.pory"
	applymovement 2, Ultra_Space_Movement_ManiacToCentralArea
# 89 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 90 "data/maps/Ultra_Space/scripts.pory"
	applymovement 1, Ultra_Space_Movement_JamesToCentralArea
# 91 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 92 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 93 "data/maps/Ultra_Space/scripts.pory"
	removeobject 1
# 94 "data/maps/Ultra_Space/scripts.pory"
	removeobject 2
# 95 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 96 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 2
# 97 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Blacephalon::
# 102 "data/maps/Ultra_Space/scripts.pory"
	lock
# 103 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 105 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceUp
# 106 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 107 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ultra_Space_Movement_PlayerToCentralArea
# 108 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 109 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 110 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 111 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_1, MSGBOX_AUTOCLOSE
# 113 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 114 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 115 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 116 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 117 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 118 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacInvestigate
# 119 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 120 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac3, MSGBOX_AUTOCLOSE
# 121 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 122 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacToPortal
# 123 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 124 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 125 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 126 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 127 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 128 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 129 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 130 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 131 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 132 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 133 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 134 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_2, MSGBOX_AUTOCLOSE
# 135 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 136 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 137 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 138 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 139 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 140 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 141 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 142 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_Blacephalon
# 143 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 144 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacRunToPlayer
# 145 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 146 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_3, MSGBOX_AUTOCLOSE
# 149 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 150 "data/maps/Ultra_Space/scripts.pory"
	applymovement 4, Ultra_Space_Movement_BlacephalonApproachesPlayer
# 151 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 4
# 152 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_DEFEATED_BLACEPHALON
# 153 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BLACEPHALON, 75
# 154 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 155 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacFacePlayer
# 156 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 157 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac4, MSGBOX_AUTOCLOSE
# 158 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 159 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkLeft
# 160 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 161 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 162 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 163 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Blacephalon_Text_4, MSGBOX_AUTOCLOSE
# 166 "data/maps/Ultra_Space/scripts.pory"
	giveitem ITEM_BEAST_BALL, 50
# 167 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 168 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 169 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceUp
# 170 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 171 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 172 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 173 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac5, MSGBOX_AUTOCLOSE
# 174 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 175 "data/maps/Ultra_Space/scripts.pory"
	applymovement 17, Ultra_Space_Movement_ManiacGoesToPermSpot
# 176 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 177 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 178 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 179 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceDown
# 180 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 17
# 181 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 182 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 183 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Common_Movement_WalkInPlaceLeft
# 184 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 185 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_JamesGoingToExplore, MSGBOX_AUTOCLOSE
# 186 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 187 "data/maps/Ultra_Space/scripts.pory"
	applymovement 16, Ultra_Space_Movement_JamesGoesToPermSpot
# 188 "data/maps/Ultra_Space/scripts.pory"
	delay 32
# 189 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 190 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 16
# 191 "data/maps/Ultra_Space/scripts.pory"
	removeobject 16
# 192 "data/maps/Ultra_Space/scripts.pory"
	removeobject 17
# 193 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_DEFEATED_NECROZMA
# 194 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_EventScript_AddPC
# 195 "data/maps/Ultra_Space/scripts.pory"
	special DrawWholeMapView
# 196 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_ULTRA_SPACE_STATE, 3
# 197 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_James::
# 202 "data/maps/Ultra_Space/scripts.pory"
	lock
# 203 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 204 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_InvisiblePathHint, MSGBOX_NPC
# 205 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 206 "data/maps/Ultra_Space/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 207 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 19
# 208 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Maniac::
# 213 "data/maps/Ultra_Space/scripts.pory"
	lock
# 214 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 215 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_DoYouNeedMedicalAssistance, MSGBOX_AUTOCLOSE
# 216 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 217 "data/maps/Ultra_Space/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 218 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries, MSGBOX_AUTOCLOSE
# 219 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 220 "data/maps/Ultra_Space/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 221 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 18
# 222 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_AddPC::
# 227 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 46, METATILE_DistortionWorld_Ultra_Space_PC_Top, TRUE
# 228 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 47, METATILE_Building_PC_Off, TRUE
# 229 "data/maps/Ultra_Space/scripts.pory"
	setmetatile 26, 48, METATILE_DistortionWorld_Ultra_Space_PC_Bottom, FALSE
	return


Ultra_Space_EventScript_Necrozma::
# 234 "data/maps/Ultra_Space/scripts.pory"
	lock
# 235 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
# 236 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 237 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_NECROZMA, 75, ITEM_ULTRANECROZIUM_Z
# 238 "data/maps/Ultra_Space/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 239 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_0, MSGBOX_AUTOCLOSE
# 240 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 241 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 242 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 243 "data/maps/Ultra_Space/scripts.pory"
	addobject 20
# 244 "data/maps/Ultra_Space/scripts.pory"
	addobject 21
# 245 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 246 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Ultra_Space_Movement_JamesGoesToNecrozma
# 247 "data/maps/Ultra_Space/scripts.pory"
	delay 16
# 248 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Ultra_Space_Movement_ManiacGoesToNecrozma
# 249 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 21
# 250 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_ThatWasCrazy, MSGBOX_AUTOCLOSE
# 251 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 252 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 253 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 254 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 255 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 256 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 257 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 258 "data/maps/Ultra_Space/scripts.pory"
	addobject 15
# 259 "data/maps/Ultra_Space/scripts.pory"
	clearflag FLAG_HIDE_COSMOG_ULTRA_SPACE
# 260 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 261 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 262 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 263 "data/maps/Ultra_Space/scripts.pory"
	playse SE_PIN
# 264 "data/maps/Ultra_Space/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 265 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 266 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 267 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 268 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 269 "data/maps/Ultra_Space/scripts.pory"
	delay 4
# 270 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 271 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 20
# 272 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 273 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_1, MSGBOX_AUTOCLOSE
# 274 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 275 "data/maps/Ultra_Space/scripts.pory"
	applymovement 15, Ultra_Space_Movement_Cosmog
# 276 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 277 "data/maps/Ultra_Space/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 278 "data/maps/Ultra_Space/scripts.pory"
	delay 8
# 279 "data/maps/Ultra_Space/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceLeft
# 280 "data/maps/Ultra_Space/scripts.pory"
	waitmovement 0
# 281 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_Text_Maniac6, MSGBOX_AUTOCLOSE
# 282 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 283 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 284 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 285 "data/maps/Ultra_Space/scripts.pory"
	msgbox Ultra_Space_EventScript_Necrozma_Text_2, MSGBOX_AUTOCLOSE
# 288 "data/maps/Ultra_Space/scripts.pory"
	waitmessage
# 289 "data/maps/Ultra_Space/scripts.pory"
	closemessage
# 290 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_ENCOUNTER
# 291 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 292 "data/maps/Ultra_Space/scripts.pory"
	call Ultra_Space_Shake
# 293 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_RETURNED_FROM_ULTRA_SPACE
# 294 "data/maps/Ultra_Space/scripts.pory"
	setflag FLAG_HIDE_JAMES_ULTRA_SPACE
# 295 "data/maps/Ultra_Space/scripts.pory"
	setobjectxyperm 15, 26, 48
# 296 "data/maps/Ultra_Space/scripts.pory"
	warpwhitefade MAP_ROUTE135_LAB, 7, 8
# 297 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 298 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_EventScript_Buzzwole::
# 303 "data/maps/Ultra_Space/scripts.pory"
	lock
# 304 "data/maps/Ultra_Space/scripts.pory"
	faceplayer
# 305 "data/maps/Ultra_Space/scripts.pory"
	playmoncry SPECIES_BUZZWOLE, CRY_MODE_ENCOUNTER
# 306 "data/maps/Ultra_Space/scripts.pory"
	waitmoncry
# 307 "data/maps/Ultra_Space/scripts.pory"
	setwildbattle SPECIES_BUZZWOLE, 75
# 308 "data/maps/Ultra_Space/scripts.pory"
	dowildbattle
# 309 "data/maps/Ultra_Space/scripts.pory"
	release
	end


Ultra_Space_Shake::
# 314 "data/maps/Ultra_Space/scripts.pory"
	delay 30
# 315 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8004, 2
# 316 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8005, 6
# 317 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8006, 8
# 318 "data/maps/Ultra_Space/scripts.pory"
	setvar VAR_0x8007, 4
# 319 "data/maps/Ultra_Space/scripts.pory"
	special ShakeCamera
# 320 "data/maps/Ultra_Space/scripts.pory"
	waitstate
# 321 "data/maps/Ultra_Space/scripts.pory"
	delay 60
# 322 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 323 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 324 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 325 "data/maps/Ultra_Space/scripts.pory"
	delay 20
# 326 "data/maps/Ultra_Space/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 327 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_TO_WHITE
# 328 "data/maps/Ultra_Space/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 329 "data/maps/Ultra_Space/scripts.pory"
	delay 10
# 330 "data/maps/Ultra_Space/scripts.pory"
	waitse
# 331 "data/maps/Ultra_Space/scripts.pory"
	playse SE_INTRO_BLAST
# 332 "data/maps/Ultra_Space/scripts.pory"
	delay 20
	return


# 435 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacPanic:
# 436 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 437 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 438 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_up
# 439 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 440 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_left
# 441 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 442 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_right
# 443 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 444 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
# 445 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 448 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Maniac1:
# 449 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 449 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 450 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 453 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesLookAround:
# 454 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 455 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 456 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 457 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 458 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 461 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerLookAround:
# 462 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
# 463 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 464 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
# 465 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 466 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 467 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 468 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 471 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToCentralArea:
# 472 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 472 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 472 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 472 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 473 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 473 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 476 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesToCentralArea:
# 477 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 478 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 478 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 478 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 478 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 479 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 480 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 480 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 483 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_PlayerToCentralArea:
# 484 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 484 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 484 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 484 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 484 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 484 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 485 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
	step_end

# 488 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacToPortal:
# 489 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 489 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 489 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 489 "data/maps/Ultra_Space/scripts.pory"
	walk_left
	step_end

# 492 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacRunToPlayer:
# 493 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 493 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 494 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 494 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_right
# 495 "data/maps/Ultra_Space/scripts.pory"
	walk_fast_down
# 496 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_fast_up
	step_end

# 499 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Blacephalon:
# 500 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 500 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 501 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 502 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 502 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 502 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 505 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_BlacephalonApproachesPlayer:
# 506 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 506 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 506 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 507 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 510 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacFacePlayer:
# 511 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 511 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 511 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 512 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 513 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 514 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 515 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 516 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 516 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 517 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_down
	step_end

# 520 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToPermSpot:
# 521 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 521 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 522 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 522 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 522 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 522 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 523 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 524 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 524 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 524 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 524 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 527 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToPermSpot:
# 528 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 529 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 529 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 529 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 529 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 530 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 530 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 530 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 530 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 531 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 531 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 531 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 532 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 532 "data/maps/Ultra_Space/scripts.pory"
	walk_up
	step_end

# 535 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_JamesGoesToNecrozma:
# 536 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 536 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 536 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 536 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 536 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 536 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 537 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 538 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 541 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacGoesToNecrozma:
# 542 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 542 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 542 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 542 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 542 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 542 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 542 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 543 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 544 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_up
	step_end

# 547 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_Cosmog:
# 548 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 549 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 549 "data/maps/Ultra_Space/scripts.pory"
	walk_down
# 549 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

# 552 "data/maps/Ultra_Space/scripts.pory"
Ultra_Space_Movement_ManiacInvestigate:
# 553 "data/maps/Ultra_Space/scripts.pory"
	walk_up
# 554 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 555 "data/maps/Ultra_Space/scripts.pory"
	walk_right
# 556 "data/maps/Ultra_Space/scripts.pory"
	delay_8
# 557 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_left
# 558 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 559 "data/maps/Ultra_Space/scripts.pory"
	walk_in_place_right
# 560 "data/maps/Ultra_Space/scripts.pory"
	delay_2
# 561 "data/maps/Ultra_Space/scripts.pory"
	walk_left
# 562 "data/maps/Ultra_Space/scripts.pory"
	delay_16
# 563 "data/maps/Ultra_Space/scripts.pory"
	walk_down
	step_end

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_0:
# 51 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: No, no, no…!$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_1:
# 65 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Something…\p Something about this place feels…\n familiar.$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_2:
# 71 "data/maps/Ultra_Space/scripts.pory"
	.string "I don't know why…$"

Ultra_Space_EventScript_ArrivedInUltraSpace_Text_3:
# 85 "data/maps/Ultra_Space/scripts.pory"
	.string "Either way, let us follow his intuition\n and keep moving.$"

Ultra_Space_EventScript_Blacephalon_Text_0:
# 103 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: {PLAYER}! Over here!$"

Ultra_Space_EventScript_Blacephalon_Text_1:
# 111 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: This area looks promising.\n He's investigating it now.$"

Ultra_Space_EventScript_Blacephalon_Text_2:
# 134 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Look out!$"

Ultra_Space_EventScript_Blacephalon_Text_3:
# 146 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: W-What is that?!\n An undiscovered POKéMON?!\p Wait, it's attacking!$"

Ultra_Space_EventScript_Blacephalon_Text_4:
# 163 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: Here you go.\n They should be effective at catching\l POKéMON from the ULTRA SPACE.$"

Ultra_Space_EventScript_Necrozma_Text_0:
# 239 "data/maps/Ultra_Space/scripts.pory"
	.string "{PLAYER}!$"

Ultra_Space_EventScript_Necrozma_Text_1:
# 273 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: C-COSMOG?!$"

Ultra_Space_EventScript_Necrozma_Text_2:
# 285 "data/maps/Ultra_Space/scripts.pory"
	.string "Quite fortuitous, indeed!\n Now COSMOG, if you will.\l Please get us out of here!$"

Ultra_Space_Text_DoYouNeedMedicalAssistance::
# 336 "data/maps/Ultra_Space/scripts.pory"
	.string "Ah, intern.\n You require medical assistance, yes?$"

Ultra_Space_Text_LetMeKnowIfYouMakeAnyDiscoveries::
# 341 "data/maps/Ultra_Space/scripts.pory"
	.string "Let me know if you find anything\n significant, okay?$"

Ultra_Space_Text_InvisiblePathHint::
# 346 "data/maps/Ultra_Space/scripts.pory"
	.string "Oh, {PLAYER}. Did you find anything\n interesting?\p In the distance I can see another island\n but I can't figure out how to get over\l there.\p I almost wanna just try and run there\n from here…$"

Ultra_Space_Text_Maniac1::
# 356 "data/maps/Ultra_Space/scripts.pory"
	.string "This wasn't supposed to happen…\n It appears we've been pulled into\l the rift.\p I'm not sure if we'll ever be able\n to return to our world…$"

Ultra_Space_Text_James1::
# 364 "data/maps/Ultra_Space/scripts.pory"
	.string "But I think if we head north we might\n find something.$"

Ultra_Space_Text_Maniac2::
# 369 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: …Intruiging.\n Perhaps you had stumbled across a rift\l in the past…\p Although I've never heard reports of\n such an occurance happening to anyone.$"

Ultra_Space_Text_Maniac3::
# 377 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Hm… Intruiging.\n It appears as though these caves\l are a means of connection to the\l other floating islands…\l Perhaps we can find another rift\l through them…\p I must get a closer look!$"

Ultra_Space_Text_Maniac4::
# 387 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: T-That was close!\n But still! A new discovery!\p This will push my research forward at\n lightspeed!\p Now that we know there's undiscovered\n POKéMON here, we can test the new\l POKé BALL I designed…\p Assistant, please give some of them\n to the intern.$"

Ultra_Space_Text_Maniac5::
# 399 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: Now, while that was a riveting\n experience, I'd rather be safe than\l sorry.\p I'll leave the exploration to you two\n while I try to analyze the area as much\l as I can with what I have on hand.\p Call for me if you find anything\n significant or require medical aid.$"

Ultra_Space_Text_JamesGoingToExplore::
# 410 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I'm going to survey this central\n area and make sure the PROF. is safe.\p Maybe there's a clue on how to get\n out of here.$"

Ultra_Space_Text_ThatWasCrazy::
# 417 "data/maps/Ultra_Space/scripts.pory"
	.string "JAMES: I saw you walk across the sky\n and went to get the PROF.\l That was crazy!\p MANIAC: Yes, maniacal indeed…\n Unfortunately, there's still no rift\l over here.$"

Ultra_Space_Text_Maniac6::
# 426 "data/maps/Ultra_Space/scripts.pory"
	.string "MANIAC: You came for us?!\n R-RESPLENDENT!\p I had no idea it had the ability\n to traverse the ULTRA SPACE!\p COSMOG, are you able to take us\n back to the lab?$"
