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


AltarOfBaldesia_EventScript_AltarRitual::
# 70 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 71 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomo
# 72 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 73 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 74 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 78 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_AUTOCLOSE
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 85 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 90 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 95 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 101 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 104 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 105 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3, MSGBOX_AUTOCLOSE
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 113 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 114 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 115 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 116 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 118 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 119 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 123 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 124 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 125 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 128 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 129 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_KIMONO_DANCE, TRUE
# 130 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_AUTOCLOSE
# 131 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 132 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 138 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 140 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 141 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 142 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 146 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 147 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 151 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 152 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 154 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_1
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 169 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
	return

AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	return


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 175 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 181 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 182 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 183 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 184 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 186 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 188 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 196 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 197 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 198 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 201 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 207 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 208 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 212 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 213 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 220 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 225 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 302 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 395 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 403 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 422 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 450 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end


AltarOfBaldesia_EventScript_Jirachi::
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 465 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 10, AltarOfBaldesia_EventScript_ShouldntTryAgain
# 466 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_Jirachi_Text_0, MSGBOX_YESNO
# 468 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, YES, AltarOfBaldesia_EventScript_TryAwakenJirachi
# 470 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_ShouldntTryAgain::
# 475 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0, MSGBOX_AUTOCLOSE
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_TryAwakenJirachi::
# 487 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 497 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
AltarOfBaldesia_EventScript_TryAwakenJirachi_2:
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 7
	goto_if_le AltarOfBaldesia_EventScript_TryAwakenJirachi_4
AltarOfBaldesia_EventScript_TryAwakenJirachi_1:
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 8
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_9
AltarOfBaldesia_EventScript_TryAwakenJirachi_7:
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 516 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_TryAwakenJirachi_3:
# 499 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 506 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_2

AltarOfBaldesia_EventScript_TryAwakenJirachi_4:
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_3
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_1

AltarOfBaldesia_EventScript_TryAwakenJirachi_8:
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 513 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7

AltarOfBaldesia_EventScript_TryAwakenJirachi_9:
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_8
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7


AltarOfBaldesia_EventScript_JirachiBattle::
# 523 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 524 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 525 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 527 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 528 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 529 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 530 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 532 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 533 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 534 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 535 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 536 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 538 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 539 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 540 "data/maps/AltarOfBaldesia/scripts.pory"
	faceplayer
# 541 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 545 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_0, MSGBOX_AUTOCLOSE
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 75
# 551 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 553 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 564 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_3
AltarOfBaldesia_EventScript_JirachiBattle_1:
# 574 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 575 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 555 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 557 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 560 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_1, MSGBOX_AUTOCLOSE
# 561 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 562 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_JIRACHI_COUNTER, 8
	goto AltarOfBaldesia_EventScript_JirachiBattle_1

AltarOfBaldesia_EventScript_JirachiBattle_3:
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 566 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 567 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 568 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 569 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 570 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_2, MSGBOX_AUTOCLOSE
# 571 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 572 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_JirachiBattle_1


# 615 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 617 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 620 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger:
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 622 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 625 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger:
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 627 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 628 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 628 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 629 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 632 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger:
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 634 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 634 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 636 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 639 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 640 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 641 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 643 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 644 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 647 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 648 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 649 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 652 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 654 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 657 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 659 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 662 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 664 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 665 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 668 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 673 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 678 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 679 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 684 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 689 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 690 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 692 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 695 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 697 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 697 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 140 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 182 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 188 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 225 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your KNIGHT is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI… …\n Please bless our village with peace\l and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_EventScript_Jirachi_Text_0:
# 466 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is in a deep slumber.\n … Try playing the POKé FLUTE?$"

AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0:
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO's voice echoes…\p “If you ever feel safe, please\n remember that I'm out there.”\p Probably shouldn't try to wake\n JIRACHI again…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0:
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1:
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Nothing happened!\n Try again?$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_0:
# 545 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI woke!\n It looks mad!\l … Maybe it was having a good dream?\p In a rage, JIRACHI attacked!$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_1:
# 560 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep…$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_2:
# 570 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 579 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the Maiden and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: …………\p MOMO: … I knew it.\n This is bad.$"

AltarOfBaldesia_Text_LohanIntro::
# 591 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 595 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 599 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
