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
# 24 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 25 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
	end


AltarOfBaldesia_RemoveOkidogi::
# 30 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 10
	return


AltarOfBaldesia_TryRemoveJirachi::
# 35 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 36 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_LAST_TALKED, 1
	goto_if_eq AltarOfBaldesia_TryRemoveJirachi_4
AltarOfBaldesia_TryRemoveJirachi_3:
# 42 "data/maps/AltarOfBaldesia/scripts.pory"
	goto Common_EventScript_NopReturn
AltarOfBaldesia_TryRemoveJirachi_1:
	end

AltarOfBaldesia_TryRemoveJirachi_2:
# 37 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_DEFEATED_JIRACHI
# 39 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_TryRemoveJirachi_1

AltarOfBaldesia_TryRemoveJirachi_4:
# 36 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AltarOfBaldesia_TryRemoveJirachi_2
	goto AltarOfBaldesia_TryRemoveJirachi_3


AltarOfBaldesia_EventScript_StoneTablet::
# 48 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_StoneTablet_Text_0, MSGBOX_SIGN
	end


AltarOfBaldesia_EventScript_AltarRitual::
# 57 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 58 "data/maps/AltarOfBaldesia/scripts.pory"
	checkobjectat 17, 28
# 59 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AltarOfBaldesia_EventScript_AltarRitual_2
# 63 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomo
AltarOfBaldesia_EventScript_AltarRitual_1:
# 65 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 66 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 67 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 68 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 71 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 72 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 73 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 74 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 76 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_AUTOCLOSE
# 78 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 85 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 90 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 95 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 101 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3, MSGBOX_AUTOCLOSE
# 105 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 109 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 110 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 113 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 114 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 115 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 116 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 118 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 119 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 123 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_DEFAULT
# 124 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 125 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 2
# 128 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 129 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_4, MSGBOX_AUTOCLOSE
# 133 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 134 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 135 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance1
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 138 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance2
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 140 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 141 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 142 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance2
# 143 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 144 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance1
# 145 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 146 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 147 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_5, MSGBOX_AUTOCLOSE
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_TEETER_DANCE
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance3
# 151 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 152 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance3
# 153 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 154 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_COSMIC_POWER
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 158 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 159 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 160 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_PECHARUNT, TRUE
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_6, MSGBOX_AUTOCLOSE
# 169 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return

AltarOfBaldesia_EventScript_AltarRitual_2:
# 60 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomoRightEntrance
	goto AltarOfBaldesia_EventScript_AltarRitual_1


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 175 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 184 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 186 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 188 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 189 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 198 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 201 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_1
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 207 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
	return

AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	return


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 212 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 213 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq AltarOfBaldesia_EventScript_PecharuntAmbush_2
AltarOfBaldesia_EventScript_PecharuntAmbush_1:
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 225 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_PECHARUNT, FALSE
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_set FLAG_SYS_HARD_MODE, AltarOfBaldesia_EventScript_PecharuntAmbush_5
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 90
AltarOfBaldesia_EventScript_PecharuntAmbush_4:
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 403 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 422 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 450 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 461 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 467 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 468 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 470 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 471 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 472 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 475 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 483 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 486 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 496 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 497 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 499 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end

AltarOfBaldesia_EventScript_PecharuntAmbush_2:
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
	goto AltarOfBaldesia_EventScript_PecharuntAmbush_1

AltarOfBaldesia_EventScript_PecharuntAmbush_5:
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
	goto AltarOfBaldesia_EventScript_PecharuntAmbush_4


AltarOfBaldesia_EventScript_Jirachi::
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 513 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 10, AltarOfBaldesia_EventScript_ShouldntTryAgain
# 514 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_Jirachi_Text_0, MSGBOX_YESNO
# 516 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, YES, AltarOfBaldesia_EventScript_TryAwakenJirachi
# 518 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_ShouldntTryAgain::
# 523 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 524 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0, MSGBOX_AUTOCLOSE
# 529 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 530 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_TryAwakenJirachi::
# 535 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 536 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 538 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 539 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 540 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 541 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 545 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
AltarOfBaldesia_EventScript_TryAwakenJirachi_2:
# 546 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 7
	goto_if_le AltarOfBaldesia_EventScript_TryAwakenJirachi_4
AltarOfBaldesia_EventScript_TryAwakenJirachi_1:
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 8
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_9
AltarOfBaldesia_EventScript_TryAwakenJirachi_7:
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 564 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_TryAwakenJirachi_3:
# 547 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 551 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_2

AltarOfBaldesia_EventScript_TryAwakenJirachi_4:
# 546 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_3
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_1

AltarOfBaldesia_EventScript_TryAwakenJirachi_8:
# 557 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 560 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 561 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7

AltarOfBaldesia_EventScript_TryAwakenJirachi_9:
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_8
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7


AltarOfBaldesia_EventScript_JirachiBattle::
# 571 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 572 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 573 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 574 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 575 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 576 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 577 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 578 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 579 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 580 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 581 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 582 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 583 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 584 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 585 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 586 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 587 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 588 "data/maps/AltarOfBaldesia/scripts.pory"
	faceplayer
# 589 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 590 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 591 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 592 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 593 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_0, MSGBOX_AUTOCLOSE
# 597 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 598 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 75
# 599 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 600 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 601 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 602 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 602 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 612 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_3
AltarOfBaldesia_EventScript_JirachiBattle_1:
# 622 "data/maps/AltarOfBaldesia/scripts.pory"
	savebgm MUS_DUMMY
# 623 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 624 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 603 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_WEAK
# 604 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 605 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 607 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 608 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_1, MSGBOX_AUTOCLOSE
# 609 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 610 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_JIRACHI_COUNTER, 8
	goto AltarOfBaldesia_EventScript_JirachiBattle_1

AltarOfBaldesia_EventScript_JirachiBattle_3:
# 613 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 614 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 617 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 618 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_2, MSGBOX_AUTOCLOSE
# 619 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 620 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_JirachiBattle_1


# 662 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 663 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 664 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 667 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightEntrance:
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
	walk_left
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 671 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 674 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 678 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 679 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 682 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 684 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 687 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 692 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 693 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 693 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 693 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 693 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 693 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 693 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 693 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 697 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 700 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 703 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 708 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 709 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 713 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 716 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 719 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 720 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 724 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 727 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 730 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 731 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 732 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 732 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 733 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 736 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance1:
# 737 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 738 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 739 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 742 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance2:
# 743 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 744 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_left
# 745 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 748 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance3:
# 749 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 750 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 750 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 751 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 752 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 752 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 753 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 756 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance4:
# 757 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_down
# 758 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 759 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_right
# 760 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 761 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
# 762 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 763 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_left
# 764 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 765 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
	step_end

AltarOfBaldesia_EventScript_StoneTablet_Text_0:
# 48 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "There's text written on the stone slab…\p “Baldy, baldy, over there!\n What's it like to have no hair?\l Is it hot? Or is it cold?\l I don't know, 'cause I'm not bald!”$"

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 68 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_AltarRitual_Text_4:
# 129 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …“MO”?\p LOHAN: MO…\n …………… MO…\p MOCHIIIIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_5:
# 147 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMOMOCHIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_6:
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: ………………………\p I knew it.\n This is bad.$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy, baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your little POOFBALL is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI…\n …\p Please bless our village with peace\n and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 486 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_EventScript_Jirachi_Text_0:
# 514 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is in a deep slumber.\n … Try playing the POKé FLUTE?$"

AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0:
# 524 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO's voice echoes…\p “If you ever feel safe, please\n remember that I'm out there.”\p Probably shouldn't try to wake\n JIRACHI again…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0:
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1:
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Nothing happened!\n Try again?$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_0:
# 593 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI woke!\n It looks mad!\l … Maybe it was having a good dream?\p In a rage, JIRACHI attacks!$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_1:
# 608 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep…$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_2:
# 618 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI fell into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 628 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the MAIDEN and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: MO………$"

AltarOfBaldesia_Text_LohanIntro::
# 638 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 642 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 646 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 653 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
