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

Route115_EventScript_TriggerRight_RivalEmo::
# 149 "data/maps/Route115/scripts.pory"
	lockall
# 150 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115MoveLeft
# 151 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceUp
# 153 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Trigger_RivalEmo
	return


Route115_EventScript_TriggerLeft_RivalEmo::
# 158 "data/maps/Route115/scripts.pory"
	lockall
# 159 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115MoveRight
# 160 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceUp
# 162 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_Trigger_RivalEmo
	return


Route115_EventScript_Trigger_RivalEmo::
# 167 "data/maps/Route115/scripts.pory"
	lockall
# 168 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 169 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route115/scripts.pory"
	waitmessage
# 171 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 172 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 173 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route115/scripts.pory"
	waitmessage
# 176 "data/maps/Route115/scripts.pory"
	delay 120
# 177 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 178 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 179 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 180 "data/maps/Route115/scripts.pory"
	delay 20
# 181 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 182 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 183 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 184 "data/maps/Route115/scripts.pory"
	delay 10
# 185 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route115/scripts.pory"
	waitmessage
# 187 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 188 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 189 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route115/scripts.pory"
	delay 60
# 191 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 192 "data/maps/Route115/scripts.pory"
	delay 10
# 193 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115EmoMove1
# 194 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 195 "data/maps/Route115/scripts.pory"
	delay 10
# 196 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route115/scripts.pory"
	waitmessage
# 198 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115FaceUp
# 199 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 200 "data/maps/Route115/scripts.pory"
	delay 180
# 201 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route115/scripts.pory"
	waitmessage
# 203 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 204 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 205 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route115/scripts.pory"
	delay 60
# 207 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route115/scripts.pory"
	waitmessage
# 209 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115FaceDown
# 210 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route115/scripts.pory"
	waitmessage
# 213 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115EmoMove2
# 214 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 215 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 216 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 217 "data/maps/Route115/scripts.pory"
	addobject 25
# 218 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route115/scripts.pory"
	waitmessage
# 220 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route115/scripts.pory"
	waitmessage
# 222 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 223 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115Exclaim
# 224 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 225 "data/maps/Route115/scripts.pory"
	delay 30
# 226 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115EmoMove3
# 227 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 228 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 229 "data/maps/Route115/scripts.pory"
	delay 20
# 230 "data/maps/Route115/scripts.pory"
	applymovement 25, Route115MisaWalkUp
# 231 "data/maps/Route115/scripts.pory"
	waitmovement 25
# 232 "data/maps/Route115/scripts.pory"
	delay 80
# 233 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 234 "data/maps/Route115/scripts.pory"
	waitmessage
# 235 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115FaceLeft
# 236 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 237 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route115/scripts.pory"
	waitmessage
# 239 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route115/scripts.pory"
	waitmessage
# 241 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 242 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115FaceRight
# 243 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 244 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 245 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route115/scripts.pory"
	delay 120
# 247 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115FaceLeft
# 248 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 249 "data/maps/Route115/scripts.pory"
	delay 120
# 250 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 251 "data/maps/Route115/scripts.pory"
	delay 60
# 252 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 253 "data/maps/Route115/scripts.pory"
	delay 60
# 254 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 255 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route115/scripts.pory"
	delay 60
# 257 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 259 "data/maps/Route115/scripts.pory"
	waitmessage
# 260 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115FaceDown
# 261 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 262 "data/maps/Route115/scripts.pory"
	delay 60
# 263 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 264 "data/maps/Route115/scripts.pory"
	delay 20
# 265 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_AUTOCLOSE
# 266 "data/maps/Route115/scripts.pory"
	waitmessage
# 267 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route115/scripts.pory"
	waitmessage
# 269 "data/maps/Route115/scripts.pory"
	applymovement 25, Route115MisaLeave
# 270 "data/maps/Route115/scripts.pory"
	waitmovement 25
# 271 "data/maps/Route115/scripts.pory"
	delay 30
# 272 "data/maps/Route115/scripts.pory"
	removeobject 25
# 273 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115FaceRight
# 274 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 275 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 276 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 277 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route115/scripts.pory"
	waitmessage
# 279 "data/maps/Route115/scripts.pory"
	applymovement 24, Route115MisaLeave
# 280 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 281 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 282 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route115/scripts.pory"
	removeobject 24
# 284 "data/maps/Route115/scripts.pory"
	delay 60
# 285 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 286 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 287 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 288 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 289 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 290 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_RivalBattle::
# 295 "data/maps/Route115/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS, Jomithius_Outro
# 296 "data/maps/Route115/scripts.pory"
	lockall
	return


# 350 "data/maps/Route115/scripts.pory"
Route115EmoMove1:
# 351 "data/maps/Route115/scripts.pory"
	walk_down
# 351 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 354 "data/maps/Route115/scripts.pory"
Route115EmoMove2:
# 355 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 358 "data/maps/Route115/scripts.pory"
Route115EmoMove3:
# 359 "data/maps/Route115/scripts.pory"
	walk_fast_left
# 360 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 363 "data/maps/Route115/scripts.pory"
Route115Exclaim:
# 364 "data/maps/Route115/scripts.pory"
	emote_exclamation_mark
	step_end

# 367 "data/maps/Route115/scripts.pory"
Route115MisaWalkUp:
# 368 "data/maps/Route115/scripts.pory"
	walk_up
# 368 "data/maps/Route115/scripts.pory"
	walk_up
# 368 "data/maps/Route115/scripts.pory"
	walk_up
# 368 "data/maps/Route115/scripts.pory"
	walk_up
# 368 "data/maps/Route115/scripts.pory"
	walk_up
# 369 "data/maps/Route115/scripts.pory"
	walk_left
# 370 "data/maps/Route115/scripts.pory"
	face_up
	step_end

# 373 "data/maps/Route115/scripts.pory"
Route115MisaLeave:
# 374 "data/maps/Route115/scripts.pory"
	walk_down
# 374 "data/maps/Route115/scripts.pory"
	walk_down
# 374 "data/maps/Route115/scripts.pory"
	walk_down
# 374 "data/maps/Route115/scripts.pory"
	walk_down
# 374 "data/maps/Route115/scripts.pory"
	walk_down
# 375 "data/maps/Route115/scripts.pory"
	walk_right
# 376 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 379 "data/maps/Route115/scripts.pory"
Route115Confused:
# 380 "data/maps/Route115/scripts.pory"
	emote_question_mark
	step_end

# 383 "data/maps/Route115/scripts.pory"
Route115FaceUp:
# 384 "data/maps/Route115/scripts.pory"
	face_up
	step_end

# 387 "data/maps/Route115/scripts.pory"
Route115FaceDown:
# 388 "data/maps/Route115/scripts.pory"
	face_down
	step_end

# 391 "data/maps/Route115/scripts.pory"
Route115FaceRight:
# 392 "data/maps/Route115/scripts.pory"
	face_right
	step_end

# 395 "data/maps/Route115/scripts.pory"
Route115FaceLeft:
# 396 "data/maps/Route115/scripts.pory"
	face_left
	step_end

# 399 "data/maps/Route115/scripts.pory"
Route115MoveLeft:
# 400 "data/maps/Route115/scripts.pory"
	walk_left
	step_end

# 403 "data/maps/Route115/scripts.pory"
Route115MoveRight:
# 404 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

Route115_EventScript_EmoRivalVar0::
# 408 "data/maps/Route115/scripts.pory"
	lock
# 409 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 410 "data/maps/Route115/scripts.pory"
	waitmessage
# 411 "data/maps/Route115/scripts.pory"
	release
	end


Route115_EventScript_Trigger_RivalEmo_Text_0:
# 169 "data/maps/Route115/scripts.pory"
	.string "WAIT! It's dangerous!$"

Route115_EventScript_Trigger_RivalEmo_Text_1:
# 185 "data/maps/Route115/scripts.pory"
	.string "...$"

Route115_EventScript_Trigger_RivalEmo_Text_2:
# 220 "data/maps/Route115/scripts.pory"
	.string "Oh, you're still out here!$"

Route115_EventScript_Trigger_RivalEmo_Text_3:
# 233 "data/maps/Route115/scripts.pory"
	.string "MISA: Are you two having fun?$"

Route115_EventScript_Trigger_RivalEmo_Text_4:
# 257 "data/maps/Route115/scripts.pory"
	.string "MISA: ...Oh! Um.. I mean... JOMITHIUS,\n right?$"

Route115Emo1::
# 300 "data/maps/Route115/scripts.pory"
	.string "Don't come any closer. Hold on..$"

Route115Emo2::
# 302 "data/maps/Route115/scripts.pory"
	.string "Sorry. It's hard to control this power.\n Any closer and you could've been pulled\l into the void...\l Anyways, who are you?\n ...\p {PLAYER}, huh?\n And my mother sent you?\l I see..\l  So that means you're also a trainer...$"

Route115Emo3::
# 312 "data/maps/Route115/scripts.pory"
	.string "$"

Route115Emo4::
# 314 "data/maps/Route115/scripts.pory"
	.string "... I am JOMITHIUS.\n ...This must be the call of fate.\l We are.. destined to be rivals.\l You know what must be done.$"

Route115Emo5::
# 319 "data/maps/Route115/scripts.pory"
	.string "Can you withstand this power?$"

Route115Emo6::
# 321 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: You're lucky I told my\n  POKéMON to only use 10% of their\l power.\l Next time I, JOMITHIUS, will-$"

Route115Emo7::
# 326 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: {PLAYER} is...\n a worthy opponent.$"

Route115Misa1::
# 329 "data/maps/Route115/scripts.pory"
	.string "MISA: I'm glad you two are having fun!\n Oh! By the way, JAMES,\l dinner is almost ready.$"

Route115Emo8::
# 333 "data/maps/Route115/scripts.pory"
	.string "JAMES?: ...\n Yes, Mother.\l I'll be heading back soon.$"

Route115Misa2::
# 337 "data/maps/Route115/scripts.pory"
	.string "MISA: Great! I made a feast since\n tomorrow you're starting your journey.\l Hurry back soon, JAMES.\l {PLAYER}, you're more than welcome\l to stop by anytime!$"

Route115Emo9::
# 343 "data/maps/Route115/scripts.pory"
	.string "Definitely JAMES: ...\p I should head back then.\n {PLAYER}, next time I'll achieve victory.\l See ya.$"

Jomithius_Outro::
# 348 "data/maps/Route115/scripts.pory"
	.string "I'm in my abyss...$"
