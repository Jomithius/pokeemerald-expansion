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
# 46 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_StoneTablet_Text_0, MSGBOX_SIGN
	end


AltarOfBaldesia_EventScript_AltarRitual::
# 55 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 56 "data/maps/AltarOfBaldesia/scripts.pory"
	checkobjectat 17, 28
# 57 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AltarOfBaldesia_EventScript_AltarRitual_2
# 61 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomo
AltarOfBaldesia_EventScript_AltarRitual_1:
# 63 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 64 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 65 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 66 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 69 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 70 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 71 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 72 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 73 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 74 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_AUTOCLOSE
# 76 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 78 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 85 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 90 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 95 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3, MSGBOX_AUTOCLOSE
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 104 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 105 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 109 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 110 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 113 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 114 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 115 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 116 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 118 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 119 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_DEFAULT
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 123 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 124 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 125 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 2
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_4, MSGBOX_AUTOCLOSE
# 131 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 132 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 133 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 134 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance1
# 135 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance2
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 138 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 140 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance2
# 141 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 142 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance1
# 143 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 144 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 145 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_5, MSGBOX_AUTOCLOSE
# 146 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 147 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_TEETER_DANCE
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance3
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance3
# 151 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 152 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 153 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_COSMIC_POWER
# 154 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 158 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 159 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 160 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_PECHARUNT, TRUE
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_6, MSGBOX_AUTOCLOSE
# 167 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return

AltarOfBaldesia_EventScript_AltarRitual_2:
# 58 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomoRightEntrance
	goto AltarOfBaldesia_EventScript_AltarRitual_1


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 172 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 173 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 175 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 177 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 178 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	return


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 182 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 183 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 184 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 186 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 188 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 189 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 192 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	return


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 196 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 197 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 198 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_1
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
	return

AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	return


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 210 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 212 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 213 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq AltarOfBaldesia_EventScript_PecharuntAmbush_2
AltarOfBaldesia_EventScript_PecharuntAmbush_1:
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 220 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 221 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 222 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 223 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 224 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 225 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_PECHARUNT, FALSE
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 240 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 261 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 262 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 278 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_set FLAG_SYS_HARD_MODE, AltarOfBaldesia_EventScript_PecharuntAmbush_5
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 90
AltarOfBaldesia_EventScript_PecharuntAmbush_4:
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 313 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 314 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 316 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 366 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 383 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 407 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 408 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 409 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 417 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 422 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 425 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 426 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 427 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 428 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 450 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 460 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 461 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 465 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 466 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 467 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 468 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 470 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 471 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 472 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 477 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 478 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 483 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 489 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 496 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 497 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 499 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 500 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 501 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end

AltarOfBaldesia_EventScript_PecharuntAmbush_2:
# 216 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
	goto AltarOfBaldesia_EventScript_PecharuntAmbush_1

AltarOfBaldesia_EventScript_PecharuntAmbush_5:
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 100
	goto AltarOfBaldesia_EventScript_PecharuntAmbush_4


AltarOfBaldesia_EventScript_Jirachi::
# 507 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 10, AltarOfBaldesia_EventScript_ShouldntTryAgain
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_Jirachi_Text_0, MSGBOX_YESNO
# 514 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, YES, AltarOfBaldesia_EventScript_TryAwakenJirachi
# 516 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_ShouldntTryAgain::
# 521 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 522 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0, MSGBOX_AUTOCLOSE
# 527 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 528 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_TryAwakenJirachi::
# 533 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 534 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 535 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 536 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 538 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 539 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 540 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 541 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
AltarOfBaldesia_EventScript_TryAwakenJirachi_2:
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 7
	goto_if_le AltarOfBaldesia_EventScript_TryAwakenJirachi_4
AltarOfBaldesia_EventScript_TryAwakenJirachi_1:
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 8
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_9
AltarOfBaldesia_EventScript_TryAwakenJirachi_7:
# 561 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 562 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_TryAwakenJirachi_3:
# 545 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 546 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 547 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_2

AltarOfBaldesia_EventScript_TryAwakenJirachi_4:
# 544 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_3
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_1

AltarOfBaldesia_EventScript_TryAwakenJirachi_8:
# 555 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 557 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7

AltarOfBaldesia_EventScript_TryAwakenJirachi_9:
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_8
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7


AltarOfBaldesia_EventScript_JirachiBattle::
# 569 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 570 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 571 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 572 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 573 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 574 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 575 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 576 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 577 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 578 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 579 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 580 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 581 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 582 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 583 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 584 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 585 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 586 "data/maps/AltarOfBaldesia/scripts.pory"
	faceplayer
# 587 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 588 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 589 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 590 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 591 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_0, MSGBOX_AUTOCLOSE
# 595 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 596 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 75
# 597 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 598 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 599 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 600 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 600 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 610 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_3
AltarOfBaldesia_EventScript_JirachiBattle_1:
# 620 "data/maps/AltarOfBaldesia/scripts.pory"
	savebgm MUS_DUMMY
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 622 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 601 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_WEAK
# 602 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 603 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 604 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 605 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_1, MSGBOX_AUTOCLOSE
# 607 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 608 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_JIRACHI_COUNTER, 8
	goto AltarOfBaldesia_EventScript_JirachiBattle_1

AltarOfBaldesia_EventScript_JirachiBattle_3:
# 611 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 612 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 613 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 614 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_2, MSGBOX_AUTOCLOSE
# 617 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 618 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_JirachiBattle_1


# 660 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 661 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 662 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 665 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightEntrance:
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 667 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 668 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 669 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 672 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 673 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 674 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 675 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 680 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 685 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 686 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 687 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 690 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 692 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 695 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 697 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 698 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 701 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 703 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 706 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 708 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 711 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 713 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 714 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 717 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 718 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 719 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 722 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 724 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 725 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 728 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 729 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 730 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 731 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 734 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance1:
# 735 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 736 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 737 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 740 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance2:
# 741 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 742 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_left
# 743 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 746 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance3:
# 747 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 748 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 748 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 749 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 750 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 750 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 751 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 754 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance4:
# 755 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_down
# 756 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 757 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_right
# 758 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 759 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
# 760 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 761 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_left
# 762 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 763 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
	step_end

AltarOfBaldesia_EventScript_StoneTablet_Text_0:
# 46 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "There's text written on the stone slab…\p “Baldy, baldy, over there!\n What's it like to have no hair?\l Is it hot? Or is it cold?\l I don't know, 'cause I'm not bald!”$"

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 66 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_AltarRitual_Text_4:
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …“MO”?\p LOHAN: MO…\n …………… MO…\p MOCHIIIIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_5:
# 145 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMOMOCHIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_6:
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: ………………………\p I knew it.\n This is bad.$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 220 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy, baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your little POOFBALL is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI…\n …\p Please bless our village with peace\n and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_EventScript_Jirachi_Text_0:
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is in a deep slumber.\n … Try playing the POKé FLUTE?$"

AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0:
# 522 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO's voice echoes…\p “If you ever feel safe, please\n remember that I'm out there.”\p Probably shouldn't try to wake\n JIRACHI again…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0:
# 535 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1:
# 541 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Nothing happened!\n Try again?$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_0:
# 591 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI woke!\n It looks mad!\l … Maybe it was having a good dream?\p In a rage, JIRACHI attacks!$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_1:
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep…$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_2:
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI fell into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the MAIDEN and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: MO………$"

AltarOfBaldesia_Text_LohanIntro::
# 636 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 640 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 644 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 651 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
