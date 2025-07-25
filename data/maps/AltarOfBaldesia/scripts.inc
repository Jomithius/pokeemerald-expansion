AltarOfBaldesia_MapScripts::
# 10 "data/maps/AltarOfBaldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AltarOfBaldesia_OnResume
# 11 "data/maps/AltarOfBaldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AltarOfBaldesia_OnTransition
# 12 "data/maps/AltarOfBaldesia/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AltarOfBaldesia_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AltarOfBaldesia_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/AltarOfBaldesia/scripts.pory"
	map_script_2 VAR_MOMO_ARIA_STATE, 6, AltarOfBaldesia_EventScript_AltarRitual
	.2byte 0


AltarOfBaldesia_OnResume::
# 17 "data/maps/AltarOfBaldesia/scripts.pory"
	call_if_set FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR, AltarOfBaldesia_RemoveOkidogi
# 18 "data/maps/AltarOfBaldesia/scripts.pory"
	call_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_TryRemoveJirachi
	end


AltarOfBaldesia_OnTransition::
# 23 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_TEMP_E
	end


AltarOfBaldesia_RemoveOkidogi::
# 28 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 10
	return


AltarOfBaldesia_TryRemoveJirachi::
# 33 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_LAST_TALKED, 1
	goto_if_eq AltarOfBaldesia_TryRemoveJirachi_4
AltarOfBaldesia_TryRemoveJirachi_3:
# 40 "data/maps/AltarOfBaldesia/scripts.pory"
	goto Common_EventScript_NopReturn
AltarOfBaldesia_TryRemoveJirachi_1:
	end

AltarOfBaldesia_TryRemoveJirachi_2:
# 35 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_DEFEATED_JIRACHI
# 37 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_TryRemoveJirachi_1

AltarOfBaldesia_TryRemoveJirachi_4:
# 34 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AltarOfBaldesia_TryRemoveJirachi_2
	goto AltarOfBaldesia_TryRemoveJirachi_3


AltarOfBaldesia_EventScript_StoneTablet::
# 70 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_StoneTablet_Text_0, MSGBOX_SIGN
	end


AltarOfBaldesia_EventScript_AltarRitual::
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomo
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_0, MSGBOX_AUTOCLOSE
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 90 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_AUTOCLOSE
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 95 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 101 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 104 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 105 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 109 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 110 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 113 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 114 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 115 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 116 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3, MSGBOX_AUTOCLOSE
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 123 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 124 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 125 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 128 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 129 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 130 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 131 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 132 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 133 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 134 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 135 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 138 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_KIMONO_DANCE, TRUE
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_AUTOCLOSE
# 140 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 141 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 145 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 146 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 147 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 151 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 158 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 159 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 160 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 171 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 172 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 173 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_1
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
	return

AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	return


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 184 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 186 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 188 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 189 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 196 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 197 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 201 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 207 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 208 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 210 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 212 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 213 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 225 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 302 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 395 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 403 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 413 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 460 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 461 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 465 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 466 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 467 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end


AltarOfBaldesia_EventScript_Jirachi::
# 472 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 10, AltarOfBaldesia_EventScript_ShouldntTryAgain
# 475 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_Jirachi_Text_0, MSGBOX_YESNO
# 477 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, YES, AltarOfBaldesia_EventScript_TryAwakenJirachi
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_ShouldntTryAgain::
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0, MSGBOX_AUTOCLOSE
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_TryAwakenJirachi::
# 496 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 497 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 499 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 506 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
AltarOfBaldesia_EventScript_TryAwakenJirachi_2:
# 507 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 7
	goto_if_le AltarOfBaldesia_EventScript_TryAwakenJirachi_4
AltarOfBaldesia_EventScript_TryAwakenJirachi_1:
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 8
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_9
AltarOfBaldesia_EventScript_TryAwakenJirachi_7:
# 524 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 525 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_TryAwakenJirachi_3:
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 513 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_2

AltarOfBaldesia_EventScript_TryAwakenJirachi_4:
# 507 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_3
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_1

AltarOfBaldesia_EventScript_TryAwakenJirachi_8:
# 518 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 519 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 520 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 522 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7

AltarOfBaldesia_EventScript_TryAwakenJirachi_9:
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_8
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7


AltarOfBaldesia_EventScript_JirachiBattle::
# 532 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 533 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 534 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 535 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 536 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 538 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 539 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 540 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 541 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 545 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 546 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 547 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	faceplayer
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 551 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 553 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_0, MSGBOX_AUTOCLOSE
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 75
# 560 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 561 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 562 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 573 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_3
AltarOfBaldesia_EventScript_JirachiBattle_1:
# 583 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 584 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 564 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 566 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 567 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 568 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 569 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_1, MSGBOX_AUTOCLOSE
# 570 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 571 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_JIRACHI_COUNTER, 8
	goto AltarOfBaldesia_EventScript_JirachiBattle_1

AltarOfBaldesia_EventScript_JirachiBattle_3:
# 574 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 575 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 576 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 577 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 578 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 579 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_2, MSGBOX_AUTOCLOSE
# 580 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 581 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_JirachiBattle_1


# 624 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 629 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger:
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 631 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 634 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger:
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 636 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 637 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 637 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 638 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 641 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger:
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 643 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 643 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 644 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 644 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 645 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 648 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 649 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 650 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 651 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 652 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 656 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 657 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 661 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 666 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 667 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 667 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 667 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 667 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 667 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 667 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 667 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 671 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 677 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 679 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 682 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 684 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 687 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 690 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 693 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 695 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 698 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 700 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 704 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

AltarOfBaldesia_EventScript_StoneTablet_Text_0:
# 70 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "There's text written on the stone slab…\p “Baldy, baldy, over there!\n What's it like to have no hair?\l Is it hot? Or is it cold?\l I don't know, 'cause I'm not bald!”$"

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 197 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your KNIGHT is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI… …\n Please bless our village with peace\l and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_EventScript_Jirachi_Text_0:
# 475 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is in a deep slumber.\n … Try playing the POKé FLUTE?$"

AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0:
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO's voice echoes…\p “If you ever feel safe, please\n remember that I'm out there.”\p Probably shouldn't try to wake\n JIRACHI again…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0:
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1:
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Nothing happened!\n Try again?$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_0:
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI woke!\n It looks mad!\l … Maybe it was having a good dream?\p In a rage, JIRACHI attacks!$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_1:
# 569 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep…$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_2:
# 579 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 588 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the Maiden and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: …………\p MOMO: … I knew it.\n This is bad.$"

AltarOfBaldesia_Text_LohanIntro::
# 600 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 604 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 608 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
