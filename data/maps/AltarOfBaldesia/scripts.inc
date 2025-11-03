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
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 25 "data/maps/AltarOfBaldesia/scripts.pory"
	call_if_unset FLAG_COMPLETED_BALDESIA, AltarOfBaldesia_ResetAltarEventFlags
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


AltarOfBaldesia_ResetAltarEventFlags::
# 48 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 49 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 50 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 51 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 52 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
	return


AltarOfBaldesia_EventScript_StoneTablet::
# 57 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_StoneTablet_Text_0, MSGBOX_SIGN
	end


AltarOfBaldesia_EventScript_AltarRitual::
# 66 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 67 "data/maps/AltarOfBaldesia/scripts.pory"
	checkobjectat 17, 28
# 68 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AltarOfBaldesia_EventScript_AltarRitual_2
# 72 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomo
AltarOfBaldesia_EventScript_AltarRitual_1:
# 74 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 75 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 76 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_0, MSGBOX_AUTOCLOSE
# 79 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 80 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 81 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 82 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 83 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 84 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 85 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 86 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_1, MSGBOX_AUTOCLOSE
# 88 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 89 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 90 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_2, MSGBOX_AUTOCLOSE
# 92 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 93 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 94 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 95 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 96 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 97 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 98 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 99 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 100 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 101 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 102 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 103 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 104 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 105 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 106 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 107 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, FALSE
# 108 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 109 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 110 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 111 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_3, MSGBOX_AUTOCLOSE
# 115 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 116 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 117 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 118 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 119 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 120 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 121 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 122 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 123 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 124 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 24
# 125 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 126 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 127 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 3
# 128 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 4
# 129 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, Common_Movement_WalkUp6
# 130 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 131 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, Common_Movement_WalkUp6
# 132 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 133 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_MomoAndLohan, MSGBOX_DEFAULT
# 134 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 135 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 136 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_QuestionMark
# 137 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 2
# 138 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_4, MSGBOX_AUTOCLOSE
# 143 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 144 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 145 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 146 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance1
# 147 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 148 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance2
# 149 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 150 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 151 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BELLY_DRUM
# 152 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance2
# 153 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 154 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance1
# 155 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 156 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_5, MSGBOX_AUTOCLOSE
# 158 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 159 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_TEETER_DANCE
# 160 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance3
# 161 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 162 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance3
# 163 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 164 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 165 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_COSMIC_POWER
# 166 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 167 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 168 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 169 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 170 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 3, AltarOfBaldesia_Movement_MochiDance4
# 171 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 172 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 4, AltarOfBaldesia_Movement_MochiDance4
# 173 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 4
# 174 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 175 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_PECHARUNT, TRUE
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_AltarRitual_Text_6, MSGBOX_AUTOCLOSE
# 179 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 180 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	end

AltarOfBaldesia_EventScript_AltarRitual_2:
# 69 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AltarOfBaldesia_Movement_PlayerWalksToMomoRightEntrance
	goto AltarOfBaldesia_EventScript_AltarRitual_1


AltarOfBaldesia_EventScript_MomoICantBeatThemAlone::
# 185 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 186 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 187 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 188 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 189 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 191 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_GetReadyForBattle
	end


AltarOfBaldesia_EventScript_GetReadyForBattle::
# 196 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 197 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 198 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 199 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 200 "data/maps/AltarOfBaldesia/scripts.pory"
	special SavePlayerParty
# 201 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/AltarOfBaldesia/scripts.pory"
	special ChooseHalfPartyForBattle
# 203 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 204 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AltarOfBaldesia_EventScript_DoLohanMultiBattle
# 205 "data/maps/AltarOfBaldesia/scripts.pory"
	special LoadPlayerParty
# 206 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_MomoICantBeatThemAlone
	end


AltarOfBaldesia_EventScript_DoLohanMultiBattle::
# 211 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, TRUE
# 212 "data/maps/AltarOfBaldesia/scripts.pory"
	multi_2_vs_2 TRAINER_LOHAN, AltarOfBaldesia_Text_LohanIntro, TRAINER_LINDSAY, AltarOfBaldesia_Text_LindsayIntro, PARTNER_MOMO
# 213 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 214 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_DoLohanMultiBattle_2
# 218 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/AltarOfBaldesia/scripts.pory"
	special SetCB2WhiteOut
# 220 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
AltarOfBaldesia_EventScript_DoLohanMultiBattle_1:
	end

AltarOfBaldesia_EventScript_DoLohanMultiBattle_2:
# 215 "data/maps/AltarOfBaldesia/scripts.pory"
	goto AltarOfBaldesia_EventScript_PecharuntAmbush
	goto AltarOfBaldesia_EventScript_DoLohanMultiBattle_1


AltarOfBaldesia_EventScript_PecharuntAmbush::
# 226 "data/maps/AltarOfBaldesia/scripts.pory"
	lockall
# 227 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 228 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 229 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 3
# 230 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 4
# 231 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 232 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0, MSGBOX_AUTOCLOSE
# 234 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 235 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 236 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 237 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 238 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1, MSGBOX_AUTOCLOSE
# 241 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 242 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 243 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 244 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 245 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 246 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 247 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 248 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_PECHARUNT, FALSE
# 249 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_Fezandipiti
# 250 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_Munkidori
# 251 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 252 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, AltarOfBaldesia_Movement_Okidogi
# 253 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 254 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 255 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 256 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, AltarOfBaldesia_Movement_Pecharunt
# 257 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 258 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 259 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2, MSGBOX_AUTOCLOSE
# 263 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 264 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 265 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 266 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 267 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 268 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 269 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 5
# 270 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 271 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 272 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 273 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 6
# 274 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 275 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, AltarOfBaldesia_Movement_FezStepsBack
# 276 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 8
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3, MSGBOX_AUTOCLOSE
# 279 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 280 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaEnters
# 281 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4, MSGBOX_AUTOCLOSE
# 283 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 284 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 285 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkFasterRight
# 286 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, AltarOfBaldesia_Movement_MunkidoriPushedBack
# 287 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 288 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 289 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 290 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 291 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_Bennis, MSGBOX_AUTOCLOSE
# 292 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 293 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 294 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 295 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BALL_OPEN
# 296 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 297 "data/maps/AltarOfBaldesia/scripts.pory"
	addobject 13
# 298 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 299 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 300 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 301 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 302 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 303 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 304 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 7
# 305 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft
# 306 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 307 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 308 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 309 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
# 310 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 311 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_set FLAG_SYS_HARD_MODE, AltarOfBaldesia_EventScript_PecharuntAmbush_2
# 315 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 80
AltarOfBaldesia_EventScript_PecharuntAmbush_1:
# 317 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_RUNNING
# 318 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_NO_CATCHING
# 319 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_OKIDOGI_JIRACHIS_ALTAR
# 320 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 321 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 322 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 323 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_RUNNING
# 324 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_NO_CATCHING
# 325 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_SYS_SMART_WILD_AI
# 326 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_PECHARUNT, CRY_MODE_FAINT
# 327 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 328 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 329 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 330 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 7
# 331 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 332 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5, MSGBOX_AUTOCLOSE
# 334 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 335 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 336 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 337 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 338 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 339 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 9
# 340 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 341 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 342 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 343 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 8
# 344 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 9
# 345 "data/maps/AltarOfBaldesia/scripts.pory"
	special HealPlayerParty
# 346 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 347 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 348 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 349 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 13, Common_Movement_EnterPokeball
# 350 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 351 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 13
# 352 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 353 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 354 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 355 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 356 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 357 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 358 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 359 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 360 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 361 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_Text_ExplainPecharunt, MSGBOX_AUTOCLOSE
# 362 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 363 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 364 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6, MSGBOX_AUTOCLOSE
# 367 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 368 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 369 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 370 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 371 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 372 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 373 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 374 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 375 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 376 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 377 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 378 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 379 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_SEALED_CHAMBER
# 380 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 381 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7, MSGBOX_AUTOCLOSE
# 384 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 385 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 386 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 387 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 388 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 10
# 389 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 390 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 391 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8, MSGBOX_AUTOCLOSE
# 396 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 397 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 398 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9, MSGBOX_AUTOCLOSE
# 400 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 401 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, AltarOfBaldesia_Movement_AriaNextToMomo
# 402 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 403 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 404 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 405 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10, MSGBOX_AUTOCLOSE
# 410 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 411 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 412 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 413 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 414 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 415 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11, MSGBOX_AUTOCLOSE
# 418 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 419 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 420 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 8
# 421 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 422 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 423 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12, MSGBOX_AUTOCLOSE
# 429 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 430 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_NONE, FALSE
# 431 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 432 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 433 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 434 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13, MSGBOX_AUTOCLOSE
# 436 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 437 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_RESULT, 1
# 438 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_ORB
# 439 "data/maps/AltarOfBaldesia/scripts.pory"
	special DoOrbEffect
# 440 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 441 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 442 "data/maps/AltarOfBaldesia/scripts.pory"
	special FadeOutOrbEffect
# 443 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 444 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 150
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14, MSGBOX_AUTOCLOSE
# 446 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 447 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_BIKE_HOP
# 448 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 449 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 1
# 450 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 451 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 90
# 452 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 453 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_MORNING_SUN
# 454 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 455 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 456 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 457 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 458 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15, MSGBOX_AUTOCLOSE
# 460 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 461 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 462 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16, MSGBOX_AUTOCLOSE
# 464 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 465 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD
# 466 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 60
# 467 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_BLIZZARD2
# 468 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17, MSGBOX_AUTOCLOSE
# 473 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 474 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 475 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18, MSGBOX_AUTOCLOSE
# 479 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 480 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 2, AltarOfBaldesia_Movement_MomoHandsItem
# 481 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 482 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 483 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 484 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 485 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 486 "data/maps/AltarOfBaldesia/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 487 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19, MSGBOX_AUTOCLOSE
# 490 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 491 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_PETAL_DANCE
# 492 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
# 493 "data/maps/AltarOfBaldesia/scripts.pory"
	removeobject 2
# 494 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 3
# 495 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 496 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 497 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20, MSGBOX_AUTOCLOSE
# 502 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 503 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_BENNIS_JIRACHIS_ALTAR
# 504 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOHAN_JIRACHIS_ALTAR
# 505 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_PECHARUNT_JIRACHIS_ALTAR
# 506 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_HIDE_LOYAL_THREE_JIRACHIS_ALTAR
# 507 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_FEZANDIPITI_EASTERN_RUINS
# 508 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_MUNKIDORI_EASTERN_RUINS
# 509 "data/maps/AltarOfBaldesia/scripts.pory"
	clearflag FLAG_PECHARUNT_EASTERN_RUINS
# 510 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 7
# 511 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_BALDESIA_FOREST_STATE, 1
# 512 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 513 "data/maps/AltarOfBaldesia/scripts.pory"
	setflag FLAG_COMPLETED_BALDESIA
# 514 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_FLEE
# 515 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_BLACK
# 516 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 517 "data/maps/AltarOfBaldesia/scripts.pory"
	warpsilent MAP_BALDESIA_MAIN_HOUSE, 13, 7
	end

AltarOfBaldesia_EventScript_PecharuntAmbush_2:
# 312 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_PECHARUNT, 90
	goto AltarOfBaldesia_EventScript_PecharuntAmbush_1


AltarOfBaldesia_EventScript_Jirachi::
# 522 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 523 "data/maps/AltarOfBaldesia/scripts.pory"
	checkitem ITEM_POKE_FLUTE
# 524 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_NopReturn
# 525 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 526 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 10, AltarOfBaldesia_EventScript_ShouldntTryAgain
# 527 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_Jirachi_Text_0, MSGBOX_YESNO
# 529 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 530 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_RESULT, YES, AltarOfBaldesia_EventScript_TryAwakenJirachi
# 531 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_ShouldntTryAgain::
# 536 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0, MSGBOX_AUTOCLOSE
# 542 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 543 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end


AltarOfBaldesia_EventScript_TryAwakenJirachi::
# 548 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 549 "data/maps/AltarOfBaldesia/scripts.pory"
	fadenewbgm MUS_NONE
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 551 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 552 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 553 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 554 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 555 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 558 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
AltarOfBaldesia_EventScript_TryAwakenJirachi_2:
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 7
	goto_if_le AltarOfBaldesia_EventScript_TryAwakenJirachi_4
AltarOfBaldesia_EventScript_TryAwakenJirachi_1:
# 569 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_JIRACHI_COUNTER, 8
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_9
AltarOfBaldesia_EventScript_TryAwakenJirachi_7:
# 576 "data/maps/AltarOfBaldesia/scripts.pory"
	goto_if_eq VAR_JIRACHI_COUNTER, 9, AltarOfBaldesia_EventScript_JirachiBattle
# 577 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 578 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_TryAwakenJirachi_3:
# 560 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 561 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 562 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 563 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 564 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
# 565 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1, MSGBOX_YESNO
# 567 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_2

AltarOfBaldesia_EventScript_TryAwakenJirachi_4:
# 559 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_3
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_1

AltarOfBaldesia_EventScript_TryAwakenJirachi_8:
# 570 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0, MSGBOX_AUTOCLOSE
# 571 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 572 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, FALSE
# 573 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 450
# 574 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7

AltarOfBaldesia_EventScript_TryAwakenJirachi_9:
# 569 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AltarOfBaldesia_EventScript_TryAwakenJirachi_8
	goto AltarOfBaldesia_EventScript_TryAwakenJirachi_7


AltarOfBaldesia_EventScript_JirachiBattle::
# 584 "data/maps/AltarOfBaldesia/scripts.pory"
	lock
# 585 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_PIN
# 586 "data/maps/AltarOfBaldesia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 587 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmovement 0
# 588 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 589 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 16
# 590 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 591 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 592 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 593 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 594 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 595 "data/maps/AltarOfBaldesia/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 596 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_TO_WHITE
# 597 "data/maps/AltarOfBaldesia/scripts.pory"
	waitse
# 598 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 599 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 600 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 601 "data/maps/AltarOfBaldesia/scripts.pory"
	faceplayer
# 602 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 603 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 604 "data/maps/AltarOfBaldesia/scripts.pory"
	delay 30
# 605 "data/maps/AltarOfBaldesia/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_0, MSGBOX_AUTOCLOSE
# 610 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 611 "data/maps/AltarOfBaldesia/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 75
# 612 "data/maps/AltarOfBaldesia/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 613 "data/maps/AltarOfBaldesia/scripts.pory"
	waitstate
# 614 "data/maps/AltarOfBaldesia/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 615 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_2
# 625 "data/maps/AltarOfBaldesia/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AltarOfBaldesia_EventScript_JirachiBattle_3
AltarOfBaldesia_EventScript_JirachiBattle_1:
# 635 "data/maps/AltarOfBaldesia/scripts.pory"
	savebgm MUS_DUMMY
# 636 "data/maps/AltarOfBaldesia/scripts.pory"
	fadedefaultbgm
# 637 "data/maps/AltarOfBaldesia/scripts.pory"
	release
	end

AltarOfBaldesia_EventScript_JirachiBattle_2:
# 616 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_WEAK
# 617 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 618 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 619 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 620 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_1, MSGBOX_AUTOCLOSE
# 622 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 623 "data/maps/AltarOfBaldesia/scripts.pory"
	setvar VAR_JIRACHI_COUNTER, 8
	goto AltarOfBaldesia_EventScript_JirachiBattle_1

AltarOfBaldesia_EventScript_JirachiBattle_3:
# 626 "data/maps/AltarOfBaldesia/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 627 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmoncry
# 628 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 629 "data/maps/AltarOfBaldesia/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_NONE
# 630 "data/maps/AltarOfBaldesia/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 631 "data/maps/AltarOfBaldesia/scripts.pory"
	msgbox AltarOfBaldesia_EventScript_JirachiBattle_Text_2, MSGBOX_AUTOCLOSE
# 632 "data/maps/AltarOfBaldesia/scripts.pory"
	waitmessage
# 633 "data/maps/AltarOfBaldesia/scripts.pory"
	addvar VAR_JIRACHI_COUNTER, 1
	goto AltarOfBaldesia_EventScript_JirachiBattle_1


# 675 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomo:
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 676 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 677 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 680 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_PlayerWalksToMomoRightEntrance:
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 681 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 682 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 683 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 684 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_right
	step_end

# 687 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiLevitate:
# 688 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 689 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 690 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 691 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 692 "data/maps/AltarOfBaldesia/scripts.pory"
	destroy_extra_task
	step_end

# 695 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_JirachiEndLevitate:
# 696 "data/maps/AltarOfBaldesia/scripts.pory"
	levitate
# 697 "data/maps/AltarOfBaldesia/scripts.pory"
	stop_levitate
	step_end

# 700 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Pecharunt:
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 701 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 702 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 705 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Okidogi:
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 706 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_down
# 707 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 710 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Munkidori:
# 711 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 711 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 711 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 711 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 711 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 711 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
# 712 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 713 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_left
	step_end

# 716 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_Fezandipiti:
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 717 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_right
# 718 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_up
	step_end

# 721 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaEnters:
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 722 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_fast_up
# 723 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_fast_right
	step_end

# 726 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MunkidoriPushedBack:
# 727 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 728 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 729 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 732 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MomoHandsItem:
# 733 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_down
# 734 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 737 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_FezStepsBack:
# 738 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 739 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 740 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 743 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_AriaNextToMomo:
# 744 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_left
# 745 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 745 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_up
# 746 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_left
	step_end

# 749 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance1:
# 750 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 751 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_right
# 752 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 755 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance2:
# 756 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 757 "data/maps/AltarOfBaldesia/scripts.pory"
	jump_2_left
# 758 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 761 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance3:
# 762 "data/maps/AltarOfBaldesia/scripts.pory"
	lock_facing_direction
# 763 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 763 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_down
# 764 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_16
# 765 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 765 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_faster_up
# 766 "data/maps/AltarOfBaldesia/scripts.pory"
	unlock_facing_direction
	step_end

# 769 "data/maps/AltarOfBaldesia/scripts.pory"
AltarOfBaldesia_Movement_MochiDance4:
# 770 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_down
# 771 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 772 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_right
# 773 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 774 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
# 775 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 776 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_left
# 777 "data/maps/AltarOfBaldesia/scripts.pory"
	delay_4
# 778 "data/maps/AltarOfBaldesia/scripts.pory"
	walk_in_place_faster_up
	step_end

AltarOfBaldesia_EventScript_StoneTablet_Text_0:
# 57 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "There's text written on the stone slab…\p “Baldy, baldy, over there!\n What's it like to have no hair?\p “Is it hot? Or is it cold?\n I don't know, 'cause I'm not bald!”$"

AltarOfBaldesia_EventScript_AltarRitual_Text_0:
# 77 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… You made it.\n There's no time. I'll start right away.$"

AltarOfBaldesia_EventScript_AltarRitual_Text_1:
# 87 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO begins to play the POKé FLUTE…$"

AltarOfBaldesia_EventScript_AltarRitual_Text_2:
# 91 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is awakening!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_3:
# 112 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … Now I just need to make the\n wish and we're done.\p We always wish for-$"

AltarOfBaldesia_EventScript_AltarRitual_Text_4:
# 139 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …“MO”?\p LOHAN: MO…\n …………… MO…\p MOCHIIIIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_5:
# 157 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMOMOCHIIIII!$"

AltarOfBaldesia_EventScript_AltarRitual_Text_6:
# 176 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: ………………………\p I knew it.\n This is bad.$"

AltarOfBaldesia_EventScript_MomoICantBeatThemAlone_Text_0:
# 189 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … I can't beat them alone.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_0:
# 233 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … They ran.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_1:
# 239 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… They're being controlled.\n Something's been weird ever since-$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_2:
# 260 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …!\p ???: Baldy, baldy, over there!\n What's it like to have no hair?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_3:
# 277 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "???: Hold on, my shiny crystal ball!\n Your little POOFBALL is here!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_4:
# 282 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: AAAARGGHH!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_5:
# 333 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "The weakened PECHARUNT fled!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_6:
# 365 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Their hideout should be close by.\n We should have time to hunt them down.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_7:
# 382 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Oh… yeah. My Lady.\n You should finish the ritual.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_8:
# 392 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: JIRACHI…\n …\p Please bless our village with peace\n and prosperity for many years to come.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_9:
# 399 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI stares at MOMO…$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_10:
# 406 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "ARIA: It looks like it still wants to\n grant another wish…\p Maybe it's grateful to us for\n protecting it?$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_11:
# 416 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: My Lady. If you have\n a wish of your own, now's the time.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_12:
# 424 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: … … … …\n … … … …\l … … …\l I…\l ……… want hair.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_13:
# 435 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI begins gathering power!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_14:
# 445 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… … … …$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_15:
# 459 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… But nothing happened!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_16:
# 463 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_17:
# 469 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … It's okay.\n Bald is beautiful too, my Lady.\p ARIA: W-Wow! Not even JIRACHI's power\n can give you hair…!$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_18:
# 476 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "But… Um…\n Maybe we can get you a wig?\p MOMO: ………………$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_19:
# 488 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: …… I don't want that anymore.\n I'm leaving.$"

AltarOfBaldesia_EventScript_PecharuntAmbush_Text_20:
# 498 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: … Hm.\n Just give her some time.\p We should head back to the MAIN HOUSE.\n The Chief and Madam should be waiting.$"

AltarOfBaldesia_EventScript_Jirachi_Text_0:
# 527 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI is in a deep slumber.\n … Try playing the POKé FLUTE?$"

AltarOfBaldesia_EventScript_ShouldntTryAgain_Text_0:
# 537 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO's voice echoes…\p “If you ever feel safe, please\n remember that I'm out there.”\p Probably shouldn't try to wake\n JIRACHI up again…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_0:
# 550 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "{PLAYER} begins playing the POKé FLUTE…$"

AltarOfBaldesia_EventScript_TryAwakenJirachi_Text_1:
# 556 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "Nothing happened!\n Try again?$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_0:
# 606 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI woke!\n It looks mad!\l … Maybe it was having a good dream?\p In a rage, JIRACHI attacks!$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_1:
# 621 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI went back to sleep…$"

AltarOfBaldesia_EventScript_JirachiBattle_Text_2:
# 631 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "JIRACHI fell into a deep slumber…$"

AltarOfBaldesia_Text_MomoAndLohan::
# 641 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MOMO: B-Brother…?!\n ……\l Why are you here?\p Only the MAIDEN and her guards are\n allowed to be at the altar during\l the ritual.\p LOHAN: MO………$"

AltarOfBaldesia_Text_LohanIntro::
# 651 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "… Just… give… us what… we want…$"

AltarOfBaldesia_Text_LindsayIntro::
# 655 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "…… Don't… try to stop us…$"

AltarOfBaldesia_Text_Bennis::
# 659 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: Young Lady.\n The Chief and Madam are brainwashed.\p I can explain after we take care of\n these POKéMON.$"

AltarOfBaldesia_Text_ExplainPecharunt::
# 666 "data/maps/AltarOfBaldesia/scripts.pory"
	.string "MASTER BENNIS: So they fled…\p I thought it was only a myth… but\n that POKéMON, PECHARUNT, was the one\l who brainwashed the Chief and Madam.\p {PLAYER} weakened it, so it probably\n can't keep its control over them.$"
