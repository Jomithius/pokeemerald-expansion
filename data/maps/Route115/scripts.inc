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
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat, Route115_EventScript_RegisterNob
# 62 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 63 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchNob
# 64 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 65 "data/maps/Route115/scripts.pory"
	release
# 66 "data/maps/Route115/scripts.pory"
	end
# 67 "data/maps/Route115/scripts.pory"

# 68 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 69 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 70 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 72 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 73 "data/maps/Route115/scripts.pory"
	release
# 74 "data/maps/Route115/scripts.pory"
	end
# 75 "data/maps/Route115/scripts.pory"

# 76 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 77 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 78 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route115/scripts.pory"
	end
# 80 "data/maps/Route115/scripts.pory"

# 81 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 82 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 83 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 84 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 85 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 86 "data/maps/Route115/scripts.pory"
	release
# 87 "data/maps/Route115/scripts.pory"
	end
# 88 "data/maps/Route115/scripts.pory"

# 89 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 90 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 91 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 93 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 94 "data/maps/Route115/scripts.pory"
	release
# 95 "data/maps/Route115/scripts.pory"
	end
# 96 "data/maps/Route115/scripts.pory"

# 97 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 98 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 99 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route115/scripts.pory"
	end
# 101 "data/maps/Route115/scripts.pory"

# 102 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 103 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 104 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route115/scripts.pory"
	end
# 106 "data/maps/Route115/scripts.pory"

# 107 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 108 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 109 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route115/scripts.pory"
	end
# 111 "data/maps/Route115/scripts.pory"

# 112 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 113 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 114 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route115/scripts.pory"
	end
# 116 "data/maps/Route115/scripts.pory"

# 117 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 118 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 119 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route115/scripts.pory"
	end
# 121 "data/maps/Route115/scripts.pory"

# 122 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 123 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 124 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route115/scripts.pory"
	end
# 126 "data/maps/Route115/scripts.pory"

# 127 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 128 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 129 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route115/scripts.pory"
	end
# 131 "data/maps/Route115/scripts.pory"

# 132 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 133 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 134 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 135 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 136 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 137 "data/maps/Route115/scripts.pory"

# 138 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 139 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 140 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 141 "data/maps/Route115/scripts.pory"

# 142 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 143 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 144 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"

Route115_EventScript_Trigger_RivalEmo::
# 149 "data/maps/Route115/scripts.pory"
	lockall
# 150 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 151 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route115/scripts.pory"
	waitmessage
# 153 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 154 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 155 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 157 "data/maps/Route115/scripts.pory"
	waitmessage
# 158 "data/maps/Route115/scripts.pory"
	delay 120
# 159 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 160 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 161 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 162 "data/maps/Route115/scripts.pory"
	delay 20
# 163 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 164 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 165 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 166 "data/maps/Route115/scripts.pory"
	delay 10
# 167 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route115/scripts.pory"
	waitmessage
# 169 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 170 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 171 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route115/scripts.pory"
	delay 60
# 173 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 174 "data/maps/Route115/scripts.pory"
	delay 10
# 175 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1
# 176 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 177 "data/maps/Route115/scripts.pory"
	delay 10
# 178 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route115/scripts.pory"
	waitmessage
# 180 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 181 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 182 "data/maps/Route115/scripts.pory"
	delay 180
# 183 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route115/scripts.pory"
	waitmessage
# 185 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 186 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 187 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route115/scripts.pory"
	delay 60
# 189 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route115/scripts.pory"
	waitmessage
# 191 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 192 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route115/scripts.pory"
	waitmessage
# 195 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove2
# 196 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 197 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 198 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 199 "data/maps/Route115/scripts.pory"
	addobject 23
# 200 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route115/scripts.pory"
	waitmessage
# 202 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route115/scripts.pory"
	waitmessage
# 204 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 205 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 206 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 207 "data/maps/Route115/scripts.pory"
	delay 30
# 208 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3
# 209 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 210 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route115/scripts.pory"
	delay 20
# 212 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUp
# 213 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 214 "data/maps/Route115/scripts.pory"
	delay 80
# 215 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 216 "data/maps/Route115/scripts.pory"
	waitmessage
# 217 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 218 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 219 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route115/scripts.pory"
	waitmessage
# 221 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 222 "data/maps/Route115/scripts.pory"
	waitmessage
# 223 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 224 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 225 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 226 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 227 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route115/scripts.pory"
	delay 120
# 229 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 230 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 231 "data/maps/Route115/scripts.pory"
	delay 120
# 232 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 233 "data/maps/Route115/scripts.pory"
	delay 60
# 234 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 235 "data/maps/Route115/scripts.pory"
	delay 60
# 236 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 237 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route115/scripts.pory"
	delay 60
# 239 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 241 "data/maps/Route115/scripts.pory"
	waitmessage
# 242 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 243 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 244 "data/maps/Route115/scripts.pory"
	delay 60
# 245 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 246 "data/maps/Route115/scripts.pory"
	delay 20
# 247 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route115/scripts.pory"
	waitmessage
# 249 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route115/scripts.pory"
	waitmessage
# 251 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 252 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 253 "data/maps/Route115/scripts.pory"
	delay 30
# 254 "data/maps/Route115/scripts.pory"
	removeobject 23
# 255 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 256 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 257 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 258 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route115/scripts.pory"
	waitmessage
# 261 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115MisaLeave
# 262 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 263 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 264 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route115/scripts.pory"
	removeobject 22
# 266 "data/maps/Route115/scripts.pory"
	delay 60
# 267 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 268 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 269 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 270 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 271 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 272 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_EventScript_TriggerRight_RivalEmo::
# 277 "data/maps/Route115/scripts.pory"
	lockall
# 278 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 279 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route115/scripts.pory"
	waitmessage
# 281 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 282 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 283 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route115/scripts.pory"
	waitmessage
# 286 "data/maps/Route115/scripts.pory"
	delay 120
# 287 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 288 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 289 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 290 "data/maps/Route115/scripts.pory"
	delay 20
# 291 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 292 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 293 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 294 "data/maps/Route115/scripts.pory"
	delay 10
# 295 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route115/scripts.pory"
	waitmessage
# 297 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 298 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 299 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 300 "data/maps/Route115/scripts.pory"
	delay 60
# 301 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 302 "data/maps/Route115/scripts.pory"
	delay 10
# 303 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1Right
# 304 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 305 "data/maps/Route115/scripts.pory"
	delay 10
# 306 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 307 "data/maps/Route115/scripts.pory"
	waitmessage
# 308 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 309 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 310 "data/maps/Route115/scripts.pory"
	delay 180
# 311 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 312 "data/maps/Route115/scripts.pory"
	waitmessage
# 313 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 314 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 315 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route115/scripts.pory"
	delay 60
# 317 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route115/scripts.pory"
	waitmessage
# 319 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 320 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route115/scripts.pory"
	waitmessage
# 323 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_WalkDown
# 324 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 325 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 326 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 327 "data/maps/Route115/scripts.pory"
	addobject 23
# 328 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route115/scripts.pory"
	waitmessage
# 330 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 331 "data/maps/Route115/scripts.pory"
	waitmessage
# 332 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 333 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 334 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 335 "data/maps/Route115/scripts.pory"
	delay 30
# 336 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3
# 337 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 338 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route115/scripts.pory"
	delay 20
# 340 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUpRight
# 341 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 342 "data/maps/Route115/scripts.pory"
	delay 80
# 343 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 344 "data/maps/Route115/scripts.pory"
	waitmessage
# 345 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 346 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 347 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_AUTOCLOSE
# 348 "data/maps/Route115/scripts.pory"
	waitmessage
# 349 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route115/scripts.pory"
	waitmessage
# 351 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 352 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 353 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 354 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 355 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route115/scripts.pory"
	delay 120
# 357 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 358 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 359 "data/maps/Route115/scripts.pory"
	delay 120
# 360 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 361 "data/maps/Route115/scripts.pory"
	delay 60
# 362 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 363 "data/maps/Route115/scripts.pory"
	delay 60
# 364 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 365 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 366 "data/maps/Route115/scripts.pory"
	delay 60
# 367 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 369 "data/maps/Route115/scripts.pory"
	waitmessage
# 370 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 371 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 372 "data/maps/Route115/scripts.pory"
	delay 60
# 373 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 374 "data/maps/Route115/scripts.pory"
	delay 20
# 375 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route115/scripts.pory"
	waitmessage
# 377 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route115/scripts.pory"
	waitmessage
# 379 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 380 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 381 "data/maps/Route115/scripts.pory"
	delay 30
# 382 "data/maps/Route115/scripts.pory"
	removeobject 23
# 383 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 384 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 385 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 386 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 387 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 388 "data/maps/Route115/scripts.pory"
	waitmessage
# 389 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115MisaLeave
# 390 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 391 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 392 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 393 "data/maps/Route115/scripts.pory"
	removeobject 22
# 394 "data/maps/Route115/scripts.pory"
	delay 60
# 395 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 396 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 397 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 398 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 399 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 400 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_EventScript_TriggerLeft_RivalEmo::
# 405 "data/maps/Route115/scripts.pory"
	lockall
# 406 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 407 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 408 "data/maps/Route115/scripts.pory"
	waitmessage
# 409 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 410 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 411 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 413 "data/maps/Route115/scripts.pory"
	waitmessage
# 414 "data/maps/Route115/scripts.pory"
	delay 120
# 415 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 416 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 417 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 418 "data/maps/Route115/scripts.pory"
	delay 20
# 419 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 420 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 421 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 422 "data/maps/Route115/scripts.pory"
	delay 10
# 423 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 424 "data/maps/Route115/scripts.pory"
	waitmessage
# 425 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 426 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 427 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route115/scripts.pory"
	delay 60
# 429 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 430 "data/maps/Route115/scripts.pory"
	delay 10
# 431 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1Left
# 432 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 433 "data/maps/Route115/scripts.pory"
	delay 10
# 434 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 435 "data/maps/Route115/scripts.pory"
	waitmessage
# 436 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 437 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 438 "data/maps/Route115/scripts.pory"
	delay 180
# 439 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 440 "data/maps/Route115/scripts.pory"
	waitmessage
# 441 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 442 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 443 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 444 "data/maps/Route115/scripts.pory"
	delay 60
# 445 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 446 "data/maps/Route115/scripts.pory"
	waitmessage
# 447 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 448 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 449 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 450 "data/maps/Route115/scripts.pory"
	waitmessage
# 451 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_WalkDown
# 452 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 453 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 454 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 455 "data/maps/Route115/scripts.pory"
	addobject 23
# 456 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_AUTOCLOSE
# 457 "data/maps/Route115/scripts.pory"
	waitmessage
# 458 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 459 "data/maps/Route115/scripts.pory"
	waitmessage
# 460 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 461 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 462 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 463 "data/maps/Route115/scripts.pory"
	delay 30
# 464 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3Left
# 465 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 466 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 467 "data/maps/Route115/scripts.pory"
	delay 20
# 468 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUpRight
# 469 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 470 "data/maps/Route115/scripts.pory"
	delay 80
# 471 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 472 "data/maps/Route115/scripts.pory"
	waitmessage
# 473 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 474 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 475 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_AUTOCLOSE
# 476 "data/maps/Route115/scripts.pory"
	waitmessage
# 477 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 478 "data/maps/Route115/scripts.pory"
	waitmessage
# 479 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 480 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 481 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 482 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 483 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 484 "data/maps/Route115/scripts.pory"
	delay 120
# 485 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 486 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 487 "data/maps/Route115/scripts.pory"
	delay 120
# 488 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 489 "data/maps/Route115/scripts.pory"
	delay 60
# 490 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 491 "data/maps/Route115/scripts.pory"
	delay 60
# 492 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 493 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 494 "data/maps/Route115/scripts.pory"
	delay 60
# 495 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 497 "data/maps/Route115/scripts.pory"
	waitmessage
# 498 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 499 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 500 "data/maps/Route115/scripts.pory"
	delay 60
# 501 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 502 "data/maps/Route115/scripts.pory"
	delay 20
# 503 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_AUTOCLOSE
# 504 "data/maps/Route115/scripts.pory"
	waitmessage
# 505 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 506 "data/maps/Route115/scripts.pory"
	waitmessage
# 507 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 508 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 509 "data/maps/Route115/scripts.pory"
	delay 30
# 510 "data/maps/Route115/scripts.pory"
	removeobject 23
# 511 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 512 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 513 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceRight
# 514 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 515 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 516 "data/maps/Route115/scripts.pory"
	waitmessage
# 517 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115MisaLeave
# 518 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 519 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 520 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 521 "data/maps/Route115/scripts.pory"
	removeobject 22
# 522 "data/maps/Route115/scripts.pory"
	delay 60
# 523 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 524 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 525 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 526 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 527 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 528 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_RivalBattle::
# 533 "data/maps/Route115/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS, Jomithius_Outro
# 534 "data/maps/Route115/scripts.pory"
	lockall
	return


# 588 "data/maps/Route115/scripts.pory"
Route115EmoMove1:
# 589 "data/maps/Route115/scripts.pory"
	walk_down
# 589 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 592 "data/maps/Route115/scripts.pory"
Route115EmoMove1Right:
# 593 "data/maps/Route115/scripts.pory"
	walk_right
# 594 "data/maps/Route115/scripts.pory"
	walk_down
# 594 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 597 "data/maps/Route115/scripts.pory"
Route115EmoMove1Left:
# 598 "data/maps/Route115/scripts.pory"
	walk_down
# 599 "data/maps/Route115/scripts.pory"
	walk_left
# 600 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 603 "data/maps/Route115/scripts.pory"
Route115EmoMove2:
# 604 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 607 "data/maps/Route115/scripts.pory"
Route115EmoMove3:
# 608 "data/maps/Route115/scripts.pory"
	walk_fast_left
# 609 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 612 "data/maps/Route115/scripts.pory"
Route115EmoMove3Left:
# 613 "data/maps/Route115/scripts.pory"
	walk_fast_right
# 614 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 617 "data/maps/Route115/scripts.pory"
Route115Exclaim:
# 618 "data/maps/Route115/scripts.pory"
	emote_exclamation_mark
	step_end

# 621 "data/maps/Route115/scripts.pory"
Route115MisaWalkUp:
# 622 "data/maps/Route115/scripts.pory"
	walk_up
# 622 "data/maps/Route115/scripts.pory"
	walk_up
# 622 "data/maps/Route115/scripts.pory"
	walk_up
# 622 "data/maps/Route115/scripts.pory"
	walk_up
# 622 "data/maps/Route115/scripts.pory"
	walk_up
# 623 "data/maps/Route115/scripts.pory"
	walk_left
# 624 "data/maps/Route115/scripts.pory"
	face_up
	step_end

# 627 "data/maps/Route115/scripts.pory"
Route115MisaWalkUpRight:
# 628 "data/maps/Route115/scripts.pory"
	walk_up
# 628 "data/maps/Route115/scripts.pory"
	walk_up
# 628 "data/maps/Route115/scripts.pory"
	walk_up
# 628 "data/maps/Route115/scripts.pory"
	walk_up
# 628 "data/maps/Route115/scripts.pory"
	walk_up
	step_end

# 631 "data/maps/Route115/scripts.pory"
Route115MisaLeave:
# 632 "data/maps/Route115/scripts.pory"
	walk_down
# 632 "data/maps/Route115/scripts.pory"
	walk_down
# 632 "data/maps/Route115/scripts.pory"
	walk_down
# 632 "data/maps/Route115/scripts.pory"
	walk_down
# 632 "data/maps/Route115/scripts.pory"
	walk_down
# 633 "data/maps/Route115/scripts.pory"
	walk_right
# 634 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 637 "data/maps/Route115/scripts.pory"
Route115Confused:
# 638 "data/maps/Route115/scripts.pory"
	emote_question_mark
	step_end

# 641 "data/maps/Route115/scripts.pory"
Route115FaceUp:
# 642 "data/maps/Route115/scripts.pory"
	walk_in_place_up
	step_end

# 645 "data/maps/Route115/scripts.pory"
Route115FaceDown:
# 646 "data/maps/Route115/scripts.pory"
	walk_in_place_down
	step_end

# 649 "data/maps/Route115/scripts.pory"
Route115FaceRight:
# 650 "data/maps/Route115/scripts.pory"
	walk_in_place_right
	step_end

# 653 "data/maps/Route115/scripts.pory"
Route115FaceLeft:
# 654 "data/maps/Route115/scripts.pory"
	walk_in_place_left
	step_end

# 657 "data/maps/Route115/scripts.pory"
Route115MoveLeft:
# 658 "data/maps/Route115/scripts.pory"
	walk_left
	step_end

# 661 "data/maps/Route115/scripts.pory"
Route115MoveRight:
# 662 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

Route115_EventScript_EmoRivalVar0::
# 666 "data/maps/Route115/scripts.pory"
	lock
# 667 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 668 "data/maps/Route115/scripts.pory"
	waitmessage
# 669 "data/maps/Route115/scripts.pory"
	release
	end


Route115_EventScript_Trigger_RivalEmo_Text_0:
# 151 "data/maps/Route115/scripts.pory"
	.string "WAIT! It's dangerous!$"

Route115_EventScript_Trigger_RivalEmo_Text_1:
# 167 "data/maps/Route115/scripts.pory"
	.string "...$"

Route115_EventScript_Trigger_RivalEmo_Text_2:
# 202 "data/maps/Route115/scripts.pory"
	.string "Oh, you're still out here!$"

Route115_EventScript_Trigger_RivalEmo_Text_3:
# 215 "data/maps/Route115/scripts.pory"
	.string "MISA: Are you two having fun?$"

Route115_EventScript_Trigger_RivalEmo_Text_4:
# 239 "data/maps/Route115/scripts.pory"
	.string "MISA: ...Oh! Um.. I mean... JOMITHIUS,\n right?$"

Route115Emo1::
# 538 "data/maps/Route115/scripts.pory"
	.string "Don't come any closer. Hold on..$"

Route115Emo2::
# 540 "data/maps/Route115/scripts.pory"
	.string "Sorry. It's hard to control this power.\n Any closer and you could've been\l pulled into the void...\p Anyways, who are you?\n ...\p {PLAYER}, huh?\n And my mother sent you?\l I see..\l  So that means you're also a trainer...$"

Route115Emo3::
# 550 "data/maps/Route115/scripts.pory"
	.string "$"

Route115Emo4::
# 552 "data/maps/Route115/scripts.pory"
	.string "... I am JOMITHIUS.\n ...This must be the call of fate.\l We are.. destined to be rivals.\l You know what must be done.$"

Route115Emo5::
# 557 "data/maps/Route115/scripts.pory"
	.string "Can you withstand this power?$"

Route115Emo6::
# 559 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: You're lucky I told my\n  POKéMON to only use 10% of their\l power.\l Next time I, JOMITHIUS, will-$"

Route115Emo7::
# 564 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: {PLAYER} is...\n a worthy opponent.$"

Route115Misa1::
# 567 "data/maps/Route115/scripts.pory"
	.string "MISA: I'm glad you two are having fun!\n Oh! By the way, JAMES,\l dinner is almost ready.$"

Route115Emo8::
# 571 "data/maps/Route115/scripts.pory"
	.string "JAMES?: ...\n Yes, Mother.\l I'll be heading back soon.$"

Route115Misa2::
# 575 "data/maps/Route115/scripts.pory"
	.string "MISA: Great! I made a feast since\n tomorrow you're starting your journey.\l Hurry back soon, JAMES.\l {PLAYER}, you're more than welcome\l to stop by anytime!$"

Route115Emo9::
# 581 "data/maps/Route115/scripts.pory"
	.string "Definitely JAMES: ...\p I should head back then.\n {PLAYER}, next time I'll achieve victory.\l See ya.$"

Jomithius_Outro::
# 586 "data/maps/Route115/scripts.pory"
	.string "I'm in my abyss...$"
