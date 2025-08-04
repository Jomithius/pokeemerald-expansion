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
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_5, MSGBOX_DEFAULT
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	closemessage
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_TEETER_DANCE
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance3
# 167 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance3
# 169 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 171 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_COSMIC_POWER
# 172 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 173 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 175 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 181 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_KIMONO_DANCE, TRUE
# 182 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_6, MSGBOX_AUTOCLOSE
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 186 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 196 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 201 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 207 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 208 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 210 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_1
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
	return

AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	return


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 302 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 395 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 450 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 460 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 461 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 465 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 470 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 471 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 472 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 475 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 477 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 483 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 486 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 487 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 499 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 506 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 507 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end


AltarOfBaldesia_EventScript_Jirachi::
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 518 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 519 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 10, AltarOfBaldesia_EventScript_ShouldntTryAgain
# 520 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_Jirachi_Text_0, MSGBOX_YESNO
# 522 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 523 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, YES, AltarOfBaldesia_EventScript_TryAwakenJirachi
# 524 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_ShouldntTryAgain::
# 529 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 530 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0, MSGBOX_AUTOCLOSE
# 535 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 536 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_TryAwakenJirachi::
# 541 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 545 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 546 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 547 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 551 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
AltarOfBaldesia_EventScript_TryAwakenJirachi_2:
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 7
	goto_if_le AltarOfBaldesia_EventScript_TryAwakenJirachi_4
AltarOfBaldesia_EventScript_TryAwakenJirachi_1:
# 562 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 8
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_9
AltarOfBaldesia_EventScript_TryAwakenJirachi_7:
# 569 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 570 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 571 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_TryAwakenJirachi_3:
# 553 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 555 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 557 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 560 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_2

AltarOfBaldesia_EventScript_TryAwakenJirachi_4:
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_3
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_1

AltarOfBaldesia_EventScript_TryAwakenJirachi_8:
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 564 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 566 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 567 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7

AltarOfBaldesia_EventScript_TryAwakenJirachi_9:
# 562 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_8
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7


AltarOfBaldesia_EventScript_JirachiBattle::
# 577 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 578 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 579 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 580 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 581 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 582 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 583 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 584 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 585 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 586 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 587 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 588 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 589 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 590 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 591 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 592 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 593 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 594 "data/maps/AltarOfBaldesia/scripts.pory"
	faceplayer
# 595 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 596 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 597 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 598 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 599 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_0, MSGBOX_AUTOCLOSE
# 603 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 604 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 75
# 605 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 607 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 608 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 608 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 618 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_3
AltarOfBaldesia_EventScript_JirachiBattle_1:
# 628 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 629 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 609 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 610 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 611 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 612 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 613 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 614 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_1, MSGBOX_AUTOCLOSE
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_JIRACHI_COUNTER, 8
	goto AltarOfBaldesia_EventScript_JirachiBattle_1

AltarOfBaldesia_EventScript_JirachiBattle_3:
# 619 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 620 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 622 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 623 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 624 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_2, MSGBOX_AUTOCLOSE
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_JirachiBattle_1


# 667 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 672 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger:
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 677 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger:
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 679 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 684 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger:
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 691 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 692 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 693 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 695 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 699 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 700 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 704 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 709 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 711 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 714 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 716 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 720 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 725 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 727 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 730 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 731 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 732 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 733 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 736 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 737 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 738 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 741 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 742 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 743 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 744 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 747 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 748 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 749 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 749 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 750 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 753 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance1:
# 754 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 755 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 756 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 759 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance2:
# 760 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 761 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_left
# 762 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 765 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance3:
# 766 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 767 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 767 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 768 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 769 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 769 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 770 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 773 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance4:
# 774 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_down
# 775 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 776 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_right
# 777 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 778 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
# 779 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 780 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_left
# 781 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 782 "data/maps/AltarOfBaldesia/scripts.pory"
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
	.string "MOCHIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_6:
# 182 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: ………………………\p I knew it.\n This is bad.$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your KNIGHT is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI… …\n Please bless our village with peace\l and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 395 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 465 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 472 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_EventScript_Jirachi_Text_0:
# 520 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is in a deep slumber.\n … Try playing the POKé FLUTE?$"

AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0:
# 530 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO's voice echoes…\p “If you ever feel safe, please\n remember that I'm out there.”\p Probably shouldn't try to wake\n JIRACHI again…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0:
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1:
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Nothing happened!\n Try again?$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_0:
# 599 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI woke!\n It looks mad!\l … Maybe it was having a good dream?\p In a rage, JIRACHI attacks!$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_1:
# 614 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep…$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_2:
# 624 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the Maiden and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: MO………$"

AltarOfBaldesia_Text_LohanIntro::
# 643 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 647 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 651 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 658 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
