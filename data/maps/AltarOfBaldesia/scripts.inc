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
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_DEFAULT
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 140 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 141 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 142 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 2
# 143 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 144 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_4, MSGBOX_AUTOCLOSE
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 151 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance1
# 152 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 153 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance2
# 154 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance2
# 158 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 159 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance1
# 160 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_5, MSGBOX_AUTOCLOSE
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_TEETER_DANCE
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance3
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 167 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance3
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 169 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_COSMIC_POWER
# 171 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 172 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 173 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 175 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_KIMONO_DANCE, TRUE
# 181 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_6, MSGBOX_AUTOCLOSE
# 184 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 189 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 201 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 207 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 208 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 210 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_1
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
	return

AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	return


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq AltarOfBaldesia_EventScript_PecharuntAmbush_2
AltarOfBaldesia_EventScript_PecharuntAmbush_1:
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 302 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 395 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 403 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 413 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 450 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 460 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 461 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 465 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 466 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 470 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 471 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 472 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 477 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 483 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 487 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 499 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 506 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 507 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 513 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end

AltarOfBaldesia_EventScript_PecharuntAmbush_2:
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
	goto AltarOfBaldesia_EventScript_PecharuntAmbush_1


AltarOfBaldesia_EventScript_Jirachi::
# 518 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 519 "data/maps/AltarOfBaldesia/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 520 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 522 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 10, AltarOfBaldesia_EventScript_ShouldntTryAgain
# 523 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_Jirachi_Text_0, MSGBOX_YESNO
# 525 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, YES, AltarOfBaldesia_EventScript_TryAwakenJirachi
# 527 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_ShouldntTryAgain::
# 532 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 533 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0, MSGBOX_AUTOCLOSE
# 538 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 539 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_TryAwakenJirachi::
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 545 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 546 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 547 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 551 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
AltarOfBaldesia_EventScript_TryAwakenJirachi_2:
# 555 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 7
	goto_if_le AltarOfBaldesia_EventScript_TryAwakenJirachi_4
AltarOfBaldesia_EventScript_TryAwakenJirachi_1:
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 8
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_9
AltarOfBaldesia_EventScript_TryAwakenJirachi_7:
# 572 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 573 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 574 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_TryAwakenJirachi_3:
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 557 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 560 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 561 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_2

AltarOfBaldesia_EventScript_TryAwakenJirachi_4:
# 555 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_3
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_1

AltarOfBaldesia_EventScript_TryAwakenJirachi_8:
# 566 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 567 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 568 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 569 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 570 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7

AltarOfBaldesia_EventScript_TryAwakenJirachi_9:
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_8
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7


AltarOfBaldesia_EventScript_JirachiBattle::
# 580 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 581 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 582 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 583 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 584 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 585 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 586 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 587 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 588 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 589 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 590 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 591 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 592 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 593 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 594 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 595 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 596 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 597 "data/maps/AltarOfBaldesia/scripts.pory"
	faceplayer
# 598 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 599 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 600 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 601 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 602 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_0, MSGBOX_AUTOCLOSE
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 607 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 75
# 608 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 609 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 610 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 611 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 611 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_3
AltarOfBaldesia_EventScript_JirachiBattle_1:
# 631 "data/maps/AltarOfBaldesia/scripts.pory"
	savebgm MUS_DUMMY
# 632 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 612 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 613 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 614 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 617 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_1, MSGBOX_AUTOCLOSE
# 618 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 619 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_JIRACHI_COUNTER, 8
	goto AltarOfBaldesia_EventScript_JirachiBattle_1

AltarOfBaldesia_EventScript_JirachiBattle_3:
# 622 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 623 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 624 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 627 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_2, MSGBOX_AUTOCLOSE
# 628 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 629 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_JirachiBattle_1


# 671 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 672 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 676 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger:
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 681 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger:
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 684 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 684 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 688 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger:
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 690 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 690 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 692 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 695 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 697 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 700 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 703 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 708 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 713 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 718 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 719 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 719 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 719 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 719 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 719 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 719 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 720 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 724 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 729 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 731 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 734 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 735 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 736 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 737 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 740 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 741 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 742 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 745 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 746 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 747 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 748 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 751 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 752 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 753 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 753 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 754 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 757 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance1:
# 758 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 759 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 760 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 763 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance2:
# 764 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 765 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_left
# 766 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 769 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance3:
# 770 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 771 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 771 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 772 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 773 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 773 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 774 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 777 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance4:
# 778 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_down
# 779 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 780 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_right
# 781 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 782 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
# 783 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 784 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_left
# 785 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 786 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
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

AltarOfBaldesia_EventScript_AltarRitual_Text_4:
# 144 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …“MO”?\p LOHAN: MO…\n …………… MO…\p MOCHIIIIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_5:
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMOMOCHIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_6:
# 181 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: ………………………\p I knew it.\n This is bad.$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy, baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your KNIGHT is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI… …\n Please bless our village with peace\l and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 403 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 413 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 460 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 466 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_EventScript_Jirachi_Text_0:
# 523 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is in a deep slumber.\n … Try playing the POKé FLUTE?$"

AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0:
# 533 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO's voice echoes…\p “If you ever feel safe, please\n remember that I'm out there.”\p Probably shouldn't try to wake\n JIRACHI again…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0:
# 546 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1:
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Nothing happened!\n Try again?$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_0:
# 602 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI woke!\n It looks mad!\l … Maybe it was having a good dream?\p In a rage, JIRACHI attacks!$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_1:
# 617 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep…$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_2:
# 627 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 637 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the Maiden and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: MO………$"

AltarOfBaldesia_Text_LohanIntro::
# 647 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 651 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 655 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
