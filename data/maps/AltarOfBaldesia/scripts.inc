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
	special HealPlayerParty
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 302 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 395 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 413 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 450 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 460 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 461 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 468 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 470 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 471 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 475 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 477 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 483 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 486 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 487 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 497 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 499 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 506 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 507 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end


AltarOfBaldesia_EventScript_Jirachi::
# 516 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 518 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 519 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 520 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 10, AltarOfBaldesia_EventScript_ShouldntTryAgain
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_Jirachi_Text_0, MSGBOX_YESNO
# 523 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 524 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, YES, AltarOfBaldesia_EventScript_TryAwakenJirachi
# 525 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_ShouldntTryAgain::
# 530 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0, MSGBOX_AUTOCLOSE
# 536 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_TryAwakenJirachi::
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 545 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 546 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 547 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
AltarOfBaldesia_EventScript_TryAwakenJirachi_2:
# 553 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 7
	goto_if_le AltarOfBaldesia_EventScript_TryAwakenJirachi_4
AltarOfBaldesia_EventScript_TryAwakenJirachi_1:
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 8
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_9
AltarOfBaldesia_EventScript_TryAwakenJirachi_7:
# 570 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 571 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 572 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_TryAwakenJirachi_3:
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 555 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 557 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 561 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_2

AltarOfBaldesia_EventScript_TryAwakenJirachi_4:
# 553 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_3
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_1

AltarOfBaldesia_EventScript_TryAwakenJirachi_8:
# 564 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 566 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 567 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 568 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7

AltarOfBaldesia_EventScript_TryAwakenJirachi_9:
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_8
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7


AltarOfBaldesia_EventScript_JirachiBattle::
# 578 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 579 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 580 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 581 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 582 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 583 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 584 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 585 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 586 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 587 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 588 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 589 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 590 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 591 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 592 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 593 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 594 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 595 "data/maps/AltarOfBaldesia/scripts.pory"
	faceplayer
# 596 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 597 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 598 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 599 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 600 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_0, MSGBOX_AUTOCLOSE
# 604 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 605 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 75
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 607 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 608 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 609 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 609 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 619 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_3
AltarOfBaldesia_EventScript_JirachiBattle_1:
# 629 "data/maps/AltarOfBaldesia/scripts.pory"
	savebgm MUS_DUMMY
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 631 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 610 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 611 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 612 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 613 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 614 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_1, MSGBOX_AUTOCLOSE
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 617 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_JIRACHI_COUNTER, 8
	goto AltarOfBaldesia_EventScript_JirachiBattle_1

AltarOfBaldesia_EventScript_JirachiBattle_3:
# 620 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 622 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 623 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 624 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_2, MSGBOX_AUTOCLOSE
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 627 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_JirachiBattle_1


# 669 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 671 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 674 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoLeftTrigger:
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 679 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoMiddleTrigger:
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 680 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 686 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightTrigger:
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 690 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 693 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 695 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 697 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 701 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 703 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 706 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 708 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 711 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 713 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 716 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 718 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 719 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 722 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 724 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 727 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 728 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 728 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 728 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 728 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 728 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 728 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 728 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 729 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 732 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 733 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 734 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 735 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 738 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 739 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 740 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 743 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 744 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 745 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 746 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 749 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 750 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 751 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 751 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 752 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 755 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance1:
# 756 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 757 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 758 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 761 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance2:
# 762 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 763 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_left
# 764 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 767 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance3:
# 768 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 769 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 769 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 770 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 771 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 771 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 772 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 775 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance4:
# 776 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_down
# 777 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 778 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_right
# 779 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 780 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
# 781 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 782 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_left
# 783 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 784 "data/maps/AltarOfBaldesia/scripts.pory"
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
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy, baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your KNIGHT is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI… …\n Please bless our village with peace\l and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 471 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 483 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_EventScript_Jirachi_Text_0:
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is in a deep slumber.\n … Try playing the POKé FLUTE?$"

AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0:
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO's voice echoes…\p “If you ever feel safe, please\n remember that I'm out there.”\p Probably shouldn't try to wake\n JIRACHI again…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0:
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1:
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Nothing happened!\n Try again?$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_0:
# 600 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI woke!\n It looks mad!\l … Maybe it was having a good dream?\p In a rage, JIRACHI attacks!$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_1:
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep…$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_2:
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the Maiden and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: MO………$"

AltarOfBaldesia_Text_LohanIntro::
# 645 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 649 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 660 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
