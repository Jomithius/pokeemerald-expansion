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
	special HealPlayerParty
# 78 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_AUTOCLOSE
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 85 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 90 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 95 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 101 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3, MSGBOX_AUTOCLOSE
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 109 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 110 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 113 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 114 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 115 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 116 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 118 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 119 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 123 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 124 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_DEFAULT
# 125 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 128 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 2
# 129 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 130 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_4, MSGBOX_AUTOCLOSE
# 134 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 135 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance1
# 138 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance2
# 140 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 141 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 142 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 143 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance2
# 144 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 145 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance1
# 146 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 147 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_5, MSGBOX_AUTOCLOSE
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_TEETER_DANCE
# 151 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance3
# 152 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 153 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance3
# 154 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_COSMIC_POWER
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 158 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 159 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 160 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_PECHARUNT, TRUE
# 167 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_6, MSGBOX_AUTOCLOSE
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 171 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	end

AltarOfBaldesia_EventScript_AltarRitual_2:
# 60 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomoRightEntrance
	goto AltarOfBaldesia_EventScript_AltarRitual_1


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 181 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 182 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	end


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 188 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 189 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 193 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 194 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 195 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 196 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 197 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	end


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_2
# 209 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
	end

AltarOfBaldesia_EventScript_DoLohanMultiBattle_2:
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	goto AltarOfBaldesia_EventScript_DoLohanMultiBattle_1


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 217 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 220 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_unset FLAG_SYS_HARD_MODE, AltarOfBaldesia_EventScript_PecharuntAmbush_2
AltarOfBaldesia_EventScript_PecharuntAmbush_1:
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_PECHARUNT, FALSE
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 302 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_set FLAG_SYS_HARD_MODE, AltarOfBaldesia_EventScript_PecharuntAmbush_5
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 80
AltarOfBaldesia_EventScript_PecharuntAmbush_4:
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 394 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 395 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 413 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 450 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 460 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 461 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 467 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 468 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 470 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 475 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 477 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 486 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 487 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 496 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 497 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 499 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 506 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 507 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end

AltarOfBaldesia_EventScript_PecharuntAmbush_2:
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
	goto AltarOfBaldesia_EventScript_PecharuntAmbush_1

AltarOfBaldesia_EventScript_PecharuntAmbush_5:
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 90
	goto AltarOfBaldesia_EventScript_PecharuntAmbush_4


AltarOfBaldesia_EventScript_Jirachi::
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 516 "data/maps/AltarOfBaldesia/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
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
	savebgm MUS_DUMMY
# 629 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 609 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_WEAK
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


# 668 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 670 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 673 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightEntrance:
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 680 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 684 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 685 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 688 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 690 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 693 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 694 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 695 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 698 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 699 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 700 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 703 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 704 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 705 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 709 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 710 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 711 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 714 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 715 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 716 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 719 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 720 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 721 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 725 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 726 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 727 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 730 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 731 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 732 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 733 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 736 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 737 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 738 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 738 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 739 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 742 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance1:
# 743 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 744 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 745 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 748 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance2:
# 749 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 750 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_left
# 751 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 754 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance3:
# 755 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 756 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 756 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 757 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 758 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 758 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 759 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 762 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance4:
# 763 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_down
# 764 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 765 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_right
# 766 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 767 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
# 768 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 769 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_left
# 770 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 771 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
	step_end

AltarOfBaldesia_EventScript_StoneTablet_Text_0:
# 48 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "There's text written on the stone slab…\p “Baldy, baldy, over there!\n What's it like to have no hair?\p “Is it hot? Or is it cold?\n I don't know, 'cause I'm not bald!”$"

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 68 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 78 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_AltarRitual_Text_4:
# 130 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …“MO”?\p LOHAN: MO…\n …………… MO…\p MOCHIIIIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_5:
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMOMOCHIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_6:
# 167 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: ………………………\p I knew it.\n This is bad.$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy, baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your little POOFBALL is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI…\n …\p Please bless our village with peace\n and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 393 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 470 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
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
	.string "JIRACHI fell into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 634 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the MAIDEN and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: MO………$"

AltarOfBaldesia_Text_LohanIntro::
# 644 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 648 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 652 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 659 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
