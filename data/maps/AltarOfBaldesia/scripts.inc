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
	end


AltarOfBaldesia_OnTransition::
# 22 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_TEMP_E
	end


AltarOfBaldesia_RemoveOkidogi::
# 27 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 10
	return


AltarOfBaldesia_EventScript_AltarRitual::
# 56 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 57 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomo
# 58 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 59 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 60 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 61 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_0, MSGBOX_AUTOCLOSE
# 63 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 64 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 65 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 66 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 67 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 68 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 69 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_AUTOCLOSE
# 70 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 71 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 72 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 73 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 74 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 76 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 78 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 85 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 90 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3, MSGBOX_AUTOCLOSE
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 101 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 104 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 105 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 109 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 110 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 113 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 114 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 115 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_KIMONO_DANCE, TRUE
# 116 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_AUTOCLOSE
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 118 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 123 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 124 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 125 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 128 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 132 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 133 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 134 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 135 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 138 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 140 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 141 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 142 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 143 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 147 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_1
# 154 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
	return

AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
# 151 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	return


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 167 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 169 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 171 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 172 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 173 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 181 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 182 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 183 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 184 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 186 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 188 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 189 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 198 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 201 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 207 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 208 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 210 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 213 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 220 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 225 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 302 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 395 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 403 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 413 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 422 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end


# 483 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 488 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger:
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 493 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger:
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 496 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 496 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 497 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 500 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger:
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 507 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 515 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 516 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 520 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 522 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 525 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 527 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 530 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 532 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 533 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 536 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 538 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 541 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 546 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 547 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 552 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 553 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 557 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 560 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 563 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 564 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 566 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 61 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 69 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 73 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your KNIGHT is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI… …\n Please bless our village with peace\l and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_Text_MomoAndLohan::
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the Maiden and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: …………\p MOMO: … I knew it.\n This is bad.$"

AltarOfBaldesia_Text_LohanIntro::
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 467 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
