# 1 "data/maps/Route115/scripts.pory"
Route115_MapScripts::
# 2 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 3 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 4 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
# 5 "data/maps/Route115/scripts.pory"
	.byte 0
# 6 "data/maps/Route115/scripts.pory"

# 7 "data/maps/Route115/scripts.pory"
Route115_OnLoad:
# 8 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
# 9 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
# 10 "data/maps/Route115/scripts.pory"
	end
# 11 "data/maps/Route115/scripts.pory"

# 12 "data/maps/Route115/scripts.pory"
Route115_OnTransition:
# 13 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 14 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route115/scripts.pory"
	end
# 17 "data/maps/Route115/scripts.pory"

# 18 "data/maps/Route115/scripts.pory"
Route115_OnFrame:
# 19 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 20 "data/maps/Route115/scripts.pory"
	.2byte 0
# 21 "data/maps/Route115/scripts.pory"

# 22 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 23 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 24 "data/maps/Route115/scripts.pory"
	end
# 25 "data/maps/Route115/scripts.pory"

# 26 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 27 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 28 "data/maps/Route115/scripts.pory"
	end
# 29 "data/maps/Route115/scripts.pory"

# 30 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 31 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 32 "data/maps/Route115/scripts.pory"
	end
# 33 "data/maps/Route115/scripts.pory"

# 34 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 35 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 36 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 37 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchTimothy
# 38 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 39 "data/maps/Route115/scripts.pory"
	release
# 40 "data/maps/Route115/scripts.pory"
	end
# 41 "data/maps/Route115/scripts.pory"

# 42 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 43 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 44 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 46 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 47 "data/maps/Route115/scripts.pory"
	release
# 48 "data/maps/Route115/scripts.pory"
	end
# 49 "data/maps/Route115/scripts.pory"

# 50 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 51 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 52 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route115/scripts.pory"
	end
# 54 "data/maps/Route115/scripts.pory"

# 55 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 56 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 57 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route115/scripts.pory"
	end
# 59 "data/maps/Route115/scripts.pory"

# 60 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 61 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat,
# 62 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 63 "data/maps/Route115/scripts.pory"
	release
# 64 "data/maps/Route115/scripts.pory"
	end
# 65 "data/maps/Route115/scripts.pory"
@ Unused
# 66 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 67 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 68 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 70 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 71 "data/maps/Route115/scripts.pory"
	release
# 72 "data/maps/Route115/scripts.pory"
	end
# 73 "data/maps/Route115/scripts.pory"
@ Unused
# 74 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 75 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 76 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route115/scripts.pory"
	end
# 78 "data/maps/Route115/scripts.pory"

# 79 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 80 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 81 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 82 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 83 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/Route115/scripts.pory"
	release
# 85 "data/maps/Route115/scripts.pory"
	end
# 86 "data/maps/Route115/scripts.pory"

# 87 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 88 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 89 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 91 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 92 "data/maps/Route115/scripts.pory"
	release
# 93 "data/maps/Route115/scripts.pory"
	end
# 94 "data/maps/Route115/scripts.pory"

# 95 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 96 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 97 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route115/scripts.pory"
	end
# 99 "data/maps/Route115/scripts.pory"

# 100 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 101 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 102 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route115/scripts.pory"
	end
# 104 "data/maps/Route115/scripts.pory"

# 105 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 106 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 107 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route115/scripts.pory"
	end
# 109 "data/maps/Route115/scripts.pory"

# 110 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 111 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 112 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route115/scripts.pory"
	end
# 114 "data/maps/Route115/scripts.pory"

# 115 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 116 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 117 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route115/scripts.pory"
	end
# 119 "data/maps/Route115/scripts.pory"

# 120 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 121 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 122 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route115/scripts.pory"
	end
# 124 "data/maps/Route115/scripts.pory"

# 125 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 126 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 127 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route115/scripts.pory"
	end
# 129 "data/maps/Route115/scripts.pory"

# 130 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 131 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 132 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 133 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 134 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 135 "data/maps/Route115/scripts.pory"

# 136 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 137 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 138 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 139 "data/maps/Route115/scripts.pory"

# 140 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 141 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 142 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"

Route115_EventScript_Trigger_RivalEmo::
# 147 "data/maps/Route115/scripts.pory"
	lockall
# 148 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 149 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route115/scripts.pory"
	waitmessage
# 151 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 152 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 153 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route115/scripts.pory"
	waitmessage
# 156 "data/maps/Route115/scripts.pory"
	delay 120
# 157 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 158 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 159 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 160 "data/maps/Route115/scripts.pory"
	delay 20
# 161 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 162 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 163 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 164 "data/maps/Route115/scripts.pory"
	delay 10
# 165 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route115/scripts.pory"
	waitmessage
# 167 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 168 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 169 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route115/scripts.pory"
	delay 60
# 171 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 172 "data/maps/Route115/scripts.pory"
	delay 10
# 173 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1
# 174 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 175 "data/maps/Route115/scripts.pory"
	delay 10
# 176 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route115/scripts.pory"
	waitmessage
# 178 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 179 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 180 "data/maps/Route115/scripts.pory"
	delay 180
# 181 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route115/scripts.pory"
	waitmessage
# 183 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 184 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 185 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route115/scripts.pory"
	delay 60
# 187 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route115/scripts.pory"
	waitmessage
# 189 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 190 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route115/scripts.pory"
	waitmessage
# 193 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove2
# 194 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 195 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 196 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 197 "data/maps/Route115/scripts.pory"
	addobject 23
# 198 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route115/scripts.pory"
	waitmessage
# 200 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route115/scripts.pory"
	waitmessage
# 202 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 203 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 204 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 205 "data/maps/Route115/scripts.pory"
	delay 30
# 206 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3
# 207 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 208 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route115/scripts.pory"
	delay 20
# 210 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUp
# 211 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 212 "data/maps/Route115/scripts.pory"
	delay 80
# 213 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 214 "data/maps/Route115/scripts.pory"
	waitmessage
# 215 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 216 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 217 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route115/scripts.pory"
	waitmessage
# 219 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route115/scripts.pory"
	waitmessage
# 221 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 222 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 223 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 224 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 225 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route115/scripts.pory"
	delay 120
# 227 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 228 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 229 "data/maps/Route115/scripts.pory"
	delay 120
# 230 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 231 "data/maps/Route115/scripts.pory"
	delay 60
# 232 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 233 "data/maps/Route115/scripts.pory"
	delay 60
# 234 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 235 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route115/scripts.pory"
	delay 60
# 237 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 239 "data/maps/Route115/scripts.pory"
	waitmessage
# 240 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 241 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 242 "data/maps/Route115/scripts.pory"
	delay 60
# 243 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 244 "data/maps/Route115/scripts.pory"
	delay 20
# 245 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route115/scripts.pory"
	waitmessage
# 247 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route115/scripts.pory"
	waitmessage
# 249 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 250 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 251 "data/maps/Route115/scripts.pory"
	delay 30
# 252 "data/maps/Route115/scripts.pory"
	removeobject 23
# 253 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 254 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 255 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 256 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route115/scripts.pory"
	waitmessage
# 259 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115MisaLeave
# 260 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 261 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 262 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route115/scripts.pory"
	removeobject 22
# 264 "data/maps/Route115/scripts.pory"
	delay 60
# 265 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 266 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 267 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 268 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 269 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 270 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_EventScript_TriggerRight_RivalEmo::
# 275 "data/maps/Route115/scripts.pory"
	lockall
# 276 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 277 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route115/scripts.pory"
	waitmessage
# 279 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 280 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 281 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route115/scripts.pory"
	waitmessage
# 284 "data/maps/Route115/scripts.pory"
	delay 120
# 285 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 286 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 287 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 288 "data/maps/Route115/scripts.pory"
	delay 20
# 289 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 290 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 291 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 292 "data/maps/Route115/scripts.pory"
	delay 10
# 293 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route115/scripts.pory"
	waitmessage
# 295 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 296 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 297 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route115/scripts.pory"
	delay 60
# 299 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 300 "data/maps/Route115/scripts.pory"
	delay 10
# 301 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1Right
# 302 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 303 "data/maps/Route115/scripts.pory"
	delay 10
# 304 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route115/scripts.pory"
	waitmessage
# 306 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 307 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 308 "data/maps/Route115/scripts.pory"
	delay 180
# 309 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 310 "data/maps/Route115/scripts.pory"
	waitmessage
# 311 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 312 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 313 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route115/scripts.pory"
	delay 60
# 315 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 316 "data/maps/Route115/scripts.pory"
	waitmessage
# 317 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 318 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 319 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route115/scripts.pory"
	waitmessage
# 321 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_WalkDown
# 322 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 323 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 324 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 325 "data/maps/Route115/scripts.pory"
	addobject 23
# 326 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_AUTOCLOSE
# 327 "data/maps/Route115/scripts.pory"
	waitmessage
# 328 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route115/scripts.pory"
	waitmessage
# 330 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 331 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 332 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 333 "data/maps/Route115/scripts.pory"
	delay 30
# 334 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3
# 335 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 336 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 337 "data/maps/Route115/scripts.pory"
	delay 20
# 338 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUpRight
# 339 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 340 "data/maps/Route115/scripts.pory"
	delay 80
# 341 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 342 "data/maps/Route115/scripts.pory"
	waitmessage
# 343 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 344 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 345 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route115/scripts.pory"
	waitmessage
# 347 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 348 "data/maps/Route115/scripts.pory"
	waitmessage
# 349 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 350 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 351 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 352 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 353 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route115/scripts.pory"
	delay 120
# 355 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 356 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 357 "data/maps/Route115/scripts.pory"
	delay 120
# 358 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 359 "data/maps/Route115/scripts.pory"
	delay 60
# 360 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 361 "data/maps/Route115/scripts.pory"
	delay 60
# 362 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 363 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route115/scripts.pory"
	delay 60
# 365 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 367 "data/maps/Route115/scripts.pory"
	waitmessage
# 368 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 369 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 370 "data/maps/Route115/scripts.pory"
	delay 60
# 371 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 372 "data/maps/Route115/scripts.pory"
	delay 20
# 373 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_AUTOCLOSE
# 374 "data/maps/Route115/scripts.pory"
	waitmessage
# 375 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route115/scripts.pory"
	waitmessage
# 377 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 378 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 379 "data/maps/Route115/scripts.pory"
	delay 30
# 380 "data/maps/Route115/scripts.pory"
	removeobject 23
# 381 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 382 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 383 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 384 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 386 "data/maps/Route115/scripts.pory"
	waitmessage
# 387 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115MisaLeave
# 388 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 389 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 390 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route115/scripts.pory"
	removeobject 22
# 392 "data/maps/Route115/scripts.pory"
	delay 60
# 393 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 394 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 395 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 396 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 397 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 398 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_EventScript_TriggerLeft_RivalEmo::
# 403 "data/maps/Route115/scripts.pory"
	lockall
# 404 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 405 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 406 "data/maps/Route115/scripts.pory"
	waitmessage
# 407 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 408 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 409 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 411 "data/maps/Route115/scripts.pory"
	waitmessage
# 412 "data/maps/Route115/scripts.pory"
	delay 120
# 413 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 414 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 415 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 416 "data/maps/Route115/scripts.pory"
	delay 20
# 417 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 418 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 419 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 420 "data/maps/Route115/scripts.pory"
	delay 10
# 421 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 422 "data/maps/Route115/scripts.pory"
	waitmessage
# 423 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 424 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 425 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route115/scripts.pory"
	delay 60
# 427 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 428 "data/maps/Route115/scripts.pory"
	delay 10
# 429 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1Left
# 430 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 431 "data/maps/Route115/scripts.pory"
	delay 10
# 432 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route115/scripts.pory"
	waitmessage
# 434 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 435 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 436 "data/maps/Route115/scripts.pory"
	delay 180
# 437 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route115/scripts.pory"
	waitmessage
# 439 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 440 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 441 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 442 "data/maps/Route115/scripts.pory"
	delay 60
# 443 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route115/scripts.pory"
	waitmessage
# 445 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 446 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 447 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 448 "data/maps/Route115/scripts.pory"
	waitmessage
# 449 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_WalkDown
# 450 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 451 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 452 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 453 "data/maps/Route115/scripts.pory"
	addobject 23
# 454 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route115/scripts.pory"
	waitmessage
# 456 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 457 "data/maps/Route115/scripts.pory"
	waitmessage
# 458 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 459 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 460 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 461 "data/maps/Route115/scripts.pory"
	delay 30
# 462 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3Left
# 463 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 464 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 465 "data/maps/Route115/scripts.pory"
	delay 20
# 466 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUpRight
# 467 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 468 "data/maps/Route115/scripts.pory"
	delay 80
# 469 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 470 "data/maps/Route115/scripts.pory"
	waitmessage
# 471 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 472 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 473 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_AUTOCLOSE
# 474 "data/maps/Route115/scripts.pory"
	waitmessage
# 475 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 476 "data/maps/Route115/scripts.pory"
	waitmessage
# 477 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 478 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 479 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 480 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 481 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 482 "data/maps/Route115/scripts.pory"
	delay 120
# 483 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 484 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 485 "data/maps/Route115/scripts.pory"
	delay 120
# 486 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 487 "data/maps/Route115/scripts.pory"
	delay 60
# 488 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 489 "data/maps/Route115/scripts.pory"
	delay 60
# 490 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 491 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 492 "data/maps/Route115/scripts.pory"
	delay 60
# 493 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 495 "data/maps/Route115/scripts.pory"
	waitmessage
# 496 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 497 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 498 "data/maps/Route115/scripts.pory"
	delay 60
# 499 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 500 "data/maps/Route115/scripts.pory"
	delay 20
# 501 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_AUTOCLOSE
# 502 "data/maps/Route115/scripts.pory"
	waitmessage
# 503 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 504 "data/maps/Route115/scripts.pory"
	waitmessage
# 505 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 506 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 507 "data/maps/Route115/scripts.pory"
	delay 30
# 508 "data/maps/Route115/scripts.pory"
	removeobject 23
# 509 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 510 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 511 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceRight
# 512 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 513 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 514 "data/maps/Route115/scripts.pory"
	waitmessage
# 515 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115MisaLeave
# 516 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 517 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 518 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route115/scripts.pory"
	removeobject 22
# 520 "data/maps/Route115/scripts.pory"
	delay 60
# 521 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 522 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 523 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 524 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 525 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 526 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_RivalBattle::
# 531 "data/maps/Route115/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS, Jomithius_Outro
# 532 "data/maps/Route115/scripts.pory"
	lockall
	return


# 586 "data/maps/Route115/scripts.pory"
Route115EmoMove1:
# 587 "data/maps/Route115/scripts.pory"
	walk_down
# 587 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 590 "data/maps/Route115/scripts.pory"
Route115EmoMove1Right:
# 591 "data/maps/Route115/scripts.pory"
	walk_right
# 592 "data/maps/Route115/scripts.pory"
	walk_down
# 592 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 595 "data/maps/Route115/scripts.pory"
Route115EmoMove1Left:
# 596 "data/maps/Route115/scripts.pory"
	walk_down
# 597 "data/maps/Route115/scripts.pory"
	walk_left
# 598 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 601 "data/maps/Route115/scripts.pory"
Route115EmoMove2:
# 602 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 605 "data/maps/Route115/scripts.pory"
Route115EmoMove3:
# 606 "data/maps/Route115/scripts.pory"
	walk_fast_left
# 607 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 610 "data/maps/Route115/scripts.pory"
Route115EmoMove3Left:
# 611 "data/maps/Route115/scripts.pory"
	walk_fast_right
# 612 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 615 "data/maps/Route115/scripts.pory"
Route115Exclaim:
# 616 "data/maps/Route115/scripts.pory"
	emote_exclamation_mark
	step_end

# 619 "data/maps/Route115/scripts.pory"
Route115MisaWalkUp:
# 620 "data/maps/Route115/scripts.pory"
	walk_up
# 620 "data/maps/Route115/scripts.pory"
	walk_up
# 620 "data/maps/Route115/scripts.pory"
	walk_up
# 620 "data/maps/Route115/scripts.pory"
	walk_up
# 620 "data/maps/Route115/scripts.pory"
	walk_up
# 621 "data/maps/Route115/scripts.pory"
	walk_left
# 622 "data/maps/Route115/scripts.pory"
	face_up
	step_end

# 625 "data/maps/Route115/scripts.pory"
Route115MisaWalkUpRight:
# 626 "data/maps/Route115/scripts.pory"
	walk_up
# 626 "data/maps/Route115/scripts.pory"
	walk_up
# 626 "data/maps/Route115/scripts.pory"
	walk_up
# 626 "data/maps/Route115/scripts.pory"
	walk_up
# 626 "data/maps/Route115/scripts.pory"
	walk_up
	step_end

# 629 "data/maps/Route115/scripts.pory"
Route115MisaLeave:
# 630 "data/maps/Route115/scripts.pory"
	walk_down
# 630 "data/maps/Route115/scripts.pory"
	walk_down
# 630 "data/maps/Route115/scripts.pory"
	walk_down
# 630 "data/maps/Route115/scripts.pory"
	walk_down
# 630 "data/maps/Route115/scripts.pory"
	walk_down
# 631 "data/maps/Route115/scripts.pory"
	walk_right
# 632 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 635 "data/maps/Route115/scripts.pory"
Route115Confused:
# 636 "data/maps/Route115/scripts.pory"
	emote_question_mark
	step_end

# 639 "data/maps/Route115/scripts.pory"
Route115FaceUp:
# 640 "data/maps/Route115/scripts.pory"
	walk_in_place_up
	step_end

# 643 "data/maps/Route115/scripts.pory"
Route115FaceDown:
# 644 "data/maps/Route115/scripts.pory"
	walk_in_place_down
	step_end

# 647 "data/maps/Route115/scripts.pory"
Route115FaceRight:
# 648 "data/maps/Route115/scripts.pory"
	walk_in_place_right
	step_end

# 651 "data/maps/Route115/scripts.pory"
Route115FaceLeft:
# 652 "data/maps/Route115/scripts.pory"
	walk_in_place_left
	step_end

# 655 "data/maps/Route115/scripts.pory"
Route115MoveLeft:
# 656 "data/maps/Route115/scripts.pory"
	walk_left
	step_end

# 659 "data/maps/Route115/scripts.pory"
Route115MoveRight:
# 660 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

Route115_EventScript_EmoRivalVar0::
# 664 "data/maps/Route115/scripts.pory"
	lock
# 665 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 666 "data/maps/Route115/scripts.pory"
	waitmessage
# 667 "data/maps/Route115/scripts.pory"
	release
	end


Route115_EventScript_Trigger_RivalEmo_Text_0:
# 149 "data/maps/Route115/scripts.pory"
	.string "WAIT! It's dangerous!$"

Route115_EventScript_Trigger_RivalEmo_Text_1:
# 165 "data/maps/Route115/scripts.pory"
	.string "…$"

Route115_EventScript_Trigger_RivalEmo_Text_2:
# 200 "data/maps/Route115/scripts.pory"
	.string "Oh, you're still out here!$"

Route115_EventScript_Trigger_RivalEmo_Text_3:
# 213 "data/maps/Route115/scripts.pory"
	.string "MISA: Are you two having fun?$"

Route115_EventScript_Trigger_RivalEmo_Text_4:
# 237 "data/maps/Route115/scripts.pory"
	.string "MISA: …Oh! Um… I mean… JOMITHIUS,\n right?$"

Route115Emo1::
# 536 "data/maps/Route115/scripts.pory"
	.string "Don't come any closer. Hold on…$"

Route115Emo2::
# 538 "data/maps/Route115/scripts.pory"
	.string "Sorry. It's hard to control this power.\n Any closer and you could've been\l pulled into the void…\p Anyways, who are you?\n …\p {PLAYER}, huh?\n And my mother sent you?\l I see…\l  So that means you're also a trainer…$"

Route115Emo3::
# 548 "data/maps/Route115/scripts.pory"
	.string "$"

Route115Emo4::
# 550 "data/maps/Route115/scripts.pory"
	.string "… I am JOMITHIUS.\n …This must be the call of fate.\l We are.. destined to be rivals.\l You know what must be done.$"

Route115Emo5::
# 555 "data/maps/Route115/scripts.pory"
	.string "Can you withstand this power?$"

Route115Emo6::
# 557 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: You're lucky I told my\n  POKéMON to only use 10% of their\l power.\l Next time I, JOMITHIUS, will-$"

Route115Emo7::
# 562 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: {PLAYER} is…\n a worthy opponent.$"

Route115Misa1::
# 565 "data/maps/Route115/scripts.pory"
	.string "MISA: I'm glad you two are having fun!\n Oh! By the way, JAMES,\l dinner is almost ready.$"

Route115Emo8::
# 569 "data/maps/Route115/scripts.pory"
	.string "JAMES?: …\n Yes, Mother.\l I'll be heading back soon.$"

Route115Misa2::
# 573 "data/maps/Route115/scripts.pory"
	.string "MISA: Great! I made a feast since\n you're starting your journey tomorrow.\l Hurry back soon, JAMES.\l {PLAYER}, you're more than welcome\l to stop by anytime!$"

Route115Emo9::
# 579 "data/maps/Route115/scripts.pory"
	.string "Definitely JAMES: …\p I should head back then.\n {PLAYER}, next time I'll achieve victory.\l See ya.$"

Jomithius_Outro::
# 584 "data/maps/Route115/scripts.pory"
	.string "I'm in my abyss…$"
