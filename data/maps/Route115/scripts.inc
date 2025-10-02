# 1 "data/maps/Route115/scripts.pory"
Route115_MapScripts::
# 2 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 3 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 4 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
# 5 "data/maps/Route115/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, Route115_OnResume
# 6 "data/maps/Route115/scripts.pory"
	.byte 0
# 7 "data/maps/Route115/scripts.pory"

# 8 "data/maps/Route115/scripts.pory"
Route115_OnLoad:
# 9 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
# 10 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
# 11 "data/maps/Route115/scripts.pory"
	end
# 12 "data/maps/Route115/scripts.pory"

# 13 "data/maps/Route115/scripts.pory"
Route115_OnTransition:
# 14 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 15 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
# 17 "data/maps/Route115/scripts.pory"
	end
# 18 "data/maps/Route115/scripts.pory"

# 19 "data/maps/Route115/scripts.pory"
Route115_OnFrame:
# 20 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 21 "data/maps/Route115/scripts.pory"
	.2byte 0
# 22 "data/maps/Route115/scripts.pory"

# 23 "data/maps/Route115/scripts.pory"
Route115_OnResume:
# 24 "data/maps/Route115/scripts.pory"
    call_if_defeated TRAINER_JAMES_FINAL, Route115_RemoveJamesPokemon
# 25 "data/maps/Route115/scripts.pory"
    end
# 26 "data/maps/Route115/scripts.pory"

# 27 "data/maps/Route115/scripts.pory"
Route115_RemoveJamesPokemon:
# 28 "data/maps/Route115/scripts.pory"
    removeobject 25
# 29 "data/maps/Route115/scripts.pory"
    return
# 30 "data/maps/Route115/scripts.pory"

# 31 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 32 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 33 "data/maps/Route115/scripts.pory"
	end
# 34 "data/maps/Route115/scripts.pory"

# 35 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 36 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 37 "data/maps/Route115/scripts.pory"
	end
# 38 "data/maps/Route115/scripts.pory"

# 39 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 40 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 41 "data/maps/Route115/scripts.pory"
	end
# 42 "data/maps/Route115/scripts.pory"

# 43 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 44 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 45 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 46 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchTimothy
# 47 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 48 "data/maps/Route115/scripts.pory"
	release
# 49 "data/maps/Route115/scripts.pory"
	end
# 50 "data/maps/Route115/scripts.pory"

# 51 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 52 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 53 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 55 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 56 "data/maps/Route115/scripts.pory"
	release
# 57 "data/maps/Route115/scripts.pory"
	end
# 58 "data/maps/Route115/scripts.pory"

# 59 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 60 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 61 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route115/scripts.pory"
	end
# 63 "data/maps/Route115/scripts.pory"

# 64 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 65 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 66 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route115/scripts.pory"
	end
# 68 "data/maps/Route115/scripts.pory"

# 69 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 70 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat,
# 71 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 72 "data/maps/Route115/scripts.pory"
	release
# 73 "data/maps/Route115/scripts.pory"
	end
# 74 "data/maps/Route115/scripts.pory"
@ Unused
# 75 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 76 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 77 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 79 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 80 "data/maps/Route115/scripts.pory"
	release
# 81 "data/maps/Route115/scripts.pory"
	end
# 82 "data/maps/Route115/scripts.pory"
@ Unused
# 83 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 84 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 85 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route115/scripts.pory"
	end
# 87 "data/maps/Route115/scripts.pory"

# 88 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 89 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 90 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 91 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 92 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 93 "data/maps/Route115/scripts.pory"
	release
# 94 "data/maps/Route115/scripts.pory"
	end
# 95 "data/maps/Route115/scripts.pory"

# 96 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 97 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 98 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 100 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 101 "data/maps/Route115/scripts.pory"
	release
# 102 "data/maps/Route115/scripts.pory"
	end
# 103 "data/maps/Route115/scripts.pory"

# 104 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 105 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 106 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route115/scripts.pory"
	end
# 108 "data/maps/Route115/scripts.pory"

# 109 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 110 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 111 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route115/scripts.pory"
	end
# 113 "data/maps/Route115/scripts.pory"

# 114 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 115 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 116 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route115/scripts.pory"
	end
# 118 "data/maps/Route115/scripts.pory"

# 119 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 120 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 121 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route115/scripts.pory"
	end
# 123 "data/maps/Route115/scripts.pory"

# 124 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 125 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 126 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route115/scripts.pory"
	end
# 128 "data/maps/Route115/scripts.pory"

# 129 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 130 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 131 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route115/scripts.pory"
	end
# 133 "data/maps/Route115/scripts.pory"

# 134 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 135 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 136 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route115/scripts.pory"
	end
# 138 "data/maps/Route115/scripts.pory"

# 139 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 140 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 141 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 142 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 143 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 144 "data/maps/Route115/scripts.pory"

# 145 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 146 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 147 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 148 "data/maps/Route115/scripts.pory"

# 149 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 150 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 151 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"

Route115_EventScript_Trigger_RivalEmo::
# 156 "data/maps/Route115/scripts.pory"
	lockall
# 157 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 158 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route115/scripts.pory"
	waitmessage
# 160 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 161 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 162 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route115/scripts.pory"
	waitmessage
# 165 "data/maps/Route115/scripts.pory"
	delay 120
# 166 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 167 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 168 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 169 "data/maps/Route115/scripts.pory"
	delay 20
# 170 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 171 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 172 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 173 "data/maps/Route115/scripts.pory"
	delay 10
# 174 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route115/scripts.pory"
	waitmessage
# 176 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 177 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 178 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route115/scripts.pory"
	delay 60
# 180 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 181 "data/maps/Route115/scripts.pory"
	delay 10
# 182 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1
# 183 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 184 "data/maps/Route115/scripts.pory"
	delay 10
# 185 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route115/scripts.pory"
	waitmessage
# 187 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 188 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 189 "data/maps/Route115/scripts.pory"
	delay 180
# 190 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 191 "data/maps/Route115/scripts.pory"
	waitmessage
# 192 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 193 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 194 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route115/scripts.pory"
	delay 60
# 196 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route115/scripts.pory"
	waitmessage
# 198 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 199 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route115/scripts.pory"
	waitmessage
# 202 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove2
# 203 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 204 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 205 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 206 "data/maps/Route115/scripts.pory"
	addobject 23
# 207 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_DEFAULT
# 208 "data/maps/Route115/scripts.pory"
	waitmessage
# 209 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route115/scripts.pory"
	waitmessage
# 211 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 212 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 213 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 214 "data/maps/Route115/scripts.pory"
	delay 30
# 215 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3
# 216 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 217 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route115/scripts.pory"
	delay 20
# 219 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUp
# 220 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 221 "data/maps/Route115/scripts.pory"
	delay 80
# 222 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 223 "data/maps/Route115/scripts.pory"
	waitmessage
# 224 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 225 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 226 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_DEFAULT
# 227 "data/maps/Route115/scripts.pory"
	waitmessage
# 228 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route115/scripts.pory"
	waitmessage
# 230 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 231 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 232 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 233 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 234 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route115/scripts.pory"
	delay 120
# 236 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 237 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 238 "data/maps/Route115/scripts.pory"
	delay 120
# 239 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 240 "data/maps/Route115/scripts.pory"
	delay 60
# 241 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 242 "data/maps/Route115/scripts.pory"
	delay 60
# 243 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 244 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route115/scripts.pory"
	delay 60
# 246 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 248 "data/maps/Route115/scripts.pory"
	waitmessage
# 249 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 250 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 251 "data/maps/Route115/scripts.pory"
	delay 60
# 252 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 253 "data/maps/Route115/scripts.pory"
	delay 20
# 254 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_DEFAULT
# 255 "data/maps/Route115/scripts.pory"
	waitmessage
# 256 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route115/scripts.pory"
	waitmessage
# 258 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 259 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 260 "data/maps/Route115/scripts.pory"
	delay 30
# 261 "data/maps/Route115/scripts.pory"
	removeobject 23
# 262 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 263 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 264 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 265 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route115/scripts.pory"
	waitmessage
# 268 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115RivalLeave
# 269 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 270 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 271 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route115/scripts.pory"
	removeobject 22
# 273 "data/maps/Route115/scripts.pory"
	delay 60
# 274 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 275 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 276 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 277 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 278 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
# 279 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 280 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_EventScript_TriggerRight_RivalEmo::
# 285 "data/maps/Route115/scripts.pory"
	lockall
# 286 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 287 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route115/scripts.pory"
	waitmessage
# 289 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 290 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 291 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route115/scripts.pory"
	waitmessage
# 294 "data/maps/Route115/scripts.pory"
	delay 120
# 295 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 296 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 297 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 298 "data/maps/Route115/scripts.pory"
	delay 20
# 299 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 300 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 301 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 302 "data/maps/Route115/scripts.pory"
	delay 10
# 303 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route115/scripts.pory"
	waitmessage
# 305 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 306 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 307 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 308 "data/maps/Route115/scripts.pory"
	delay 60
# 309 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 310 "data/maps/Route115/scripts.pory"
	delay 10
# 311 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1Right
# 312 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 313 "data/maps/Route115/scripts.pory"
	delay 10
# 314 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 315 "data/maps/Route115/scripts.pory"
	waitmessage
# 316 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 317 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 318 "data/maps/Route115/scripts.pory"
	delay 180
# 319 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route115/scripts.pory"
	waitmessage
# 321 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 322 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 323 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 324 "data/maps/Route115/scripts.pory"
	delay 60
# 325 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 326 "data/maps/Route115/scripts.pory"
	waitmessage
# 327 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 328 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route115/scripts.pory"
	waitmessage
# 331 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_WalkDown
# 332 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 333 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 334 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 335 "data/maps/Route115/scripts.pory"
	addobject 23
# 336 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_DEFAULT
# 337 "data/maps/Route115/scripts.pory"
	waitmessage
# 338 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route115/scripts.pory"
	waitmessage
# 340 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 341 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 342 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 343 "data/maps/Route115/scripts.pory"
	delay 30
# 344 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3
# 345 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 346 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route115/scripts.pory"
	delay 20
# 348 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUpRight
# 349 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 350 "data/maps/Route115/scripts.pory"
	delay 80
# 351 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 352 "data/maps/Route115/scripts.pory"
	waitmessage
# 353 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 354 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 355 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_DEFAULT
# 356 "data/maps/Route115/scripts.pory"
	waitmessage
# 357 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 358 "data/maps/Route115/scripts.pory"
	waitmessage
# 359 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 360 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 361 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 362 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 363 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route115/scripts.pory"
	delay 120
# 365 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 366 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 367 "data/maps/Route115/scripts.pory"
	delay 120
# 368 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 369 "data/maps/Route115/scripts.pory"
	delay 60
# 370 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 371 "data/maps/Route115/scripts.pory"
	delay 60
# 372 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 373 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route115/scripts.pory"
	delay 60
# 375 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 377 "data/maps/Route115/scripts.pory"
	waitmessage
# 378 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 379 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 380 "data/maps/Route115/scripts.pory"
	delay 60
# 381 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 382 "data/maps/Route115/scripts.pory"
	delay 20
# 383 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_DEFAULT
# 384 "data/maps/Route115/scripts.pory"
	waitmessage
# 385 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 386 "data/maps/Route115/scripts.pory"
	waitmessage
# 387 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 388 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 389 "data/maps/Route115/scripts.pory"
	delay 30
# 390 "data/maps/Route115/scripts.pory"
	removeobject 23
# 391 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 392 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 393 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 394 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 396 "data/maps/Route115/scripts.pory"
	waitmessage
# 397 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115RivalLeave
# 398 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 399 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 400 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route115/scripts.pory"
	removeobject 22
# 402 "data/maps/Route115/scripts.pory"
	delay 60
# 403 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 404 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 405 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 406 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 407 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
# 408 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 409 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_EventScript_TriggerLeft_RivalEmo::
# 414 "data/maps/Route115/scripts.pory"
	lockall
# 415 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 416 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_TriggerLeft_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 417 "data/maps/Route115/scripts.pory"
	waitmessage
# 418 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 419 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 420 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 422 "data/maps/Route115/scripts.pory"
	waitmessage
# 423 "data/maps/Route115/scripts.pory"
	delay 120
# 424 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 425 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 426 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 427 "data/maps/Route115/scripts.pory"
	delay 20
# 428 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 429 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 430 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 431 "data/maps/Route115/scripts.pory"
	delay 10
# 432 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route115/scripts.pory"
	waitmessage
# 434 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 435 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 436 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 437 "data/maps/Route115/scripts.pory"
	delay 60
# 438 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 439 "data/maps/Route115/scripts.pory"
	delay 10
# 440 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1Left
# 441 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 442 "data/maps/Route115/scripts.pory"
	delay 10
# 443 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route115/scripts.pory"
	waitmessage
# 445 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 446 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 447 "data/maps/Route115/scripts.pory"
	delay 180
# 448 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 449 "data/maps/Route115/scripts.pory"
	waitmessage
# 450 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 451 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 452 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route115/scripts.pory"
	delay 60
# 454 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route115/scripts.pory"
	waitmessage
# 456 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 457 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 459 "data/maps/Route115/scripts.pory"
	waitmessage
# 460 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_WalkDown
# 461 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 462 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 463 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 464 "data/maps/Route115/scripts.pory"
	addobject 23
# 465 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_DEFAULT
# 466 "data/maps/Route115/scripts.pory"
	waitmessage
# 467 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 468 "data/maps/Route115/scripts.pory"
	waitmessage
# 469 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 470 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 471 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 472 "data/maps/Route115/scripts.pory"
	delay 30
# 473 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3Left
# 474 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 475 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 476 "data/maps/Route115/scripts.pory"
	delay 20
# 477 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUpRight
# 478 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 479 "data/maps/Route115/scripts.pory"
	delay 80
# 480 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 481 "data/maps/Route115/scripts.pory"
	waitmessage
# 482 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 483 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 484 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_DEFAULT
# 485 "data/maps/Route115/scripts.pory"
	waitmessage
# 486 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 487 "data/maps/Route115/scripts.pory"
	waitmessage
# 488 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 489 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 490 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 491 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 492 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 493 "data/maps/Route115/scripts.pory"
	delay 120
# 494 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 495 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 496 "data/maps/Route115/scripts.pory"
	delay 120
# 497 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 498 "data/maps/Route115/scripts.pory"
	delay 60
# 499 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 500 "data/maps/Route115/scripts.pory"
	delay 60
# 501 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 502 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route115/scripts.pory"
	delay 60
# 504 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 506 "data/maps/Route115/scripts.pory"
	waitmessage
# 507 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 508 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 509 "data/maps/Route115/scripts.pory"
	delay 60
# 510 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 511 "data/maps/Route115/scripts.pory"
	delay 20
# 512 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_DEFAULT
# 513 "data/maps/Route115/scripts.pory"
	waitmessage
# 514 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 515 "data/maps/Route115/scripts.pory"
	waitmessage
# 516 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 517 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 518 "data/maps/Route115/scripts.pory"
	delay 30
# 519 "data/maps/Route115/scripts.pory"
	removeobject 23
# 520 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 521 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 522 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceRight
# 523 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 525 "data/maps/Route115/scripts.pory"
	waitmessage
# 526 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115RivalLeave
# 527 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 528 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 529 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 530 "data/maps/Route115/scripts.pory"
	removeobject 22
# 531 "data/maps/Route115/scripts.pory"
	delay 60
# 532 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 533 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 534 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 535 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 536 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
# 537 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 538 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_RivalBattle::
# 543 "data/maps/Route115/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS, Jomithius_Outro
# 544 "data/maps/Route115/scripts.pory"
	lockall
	return


Route115_EventScript_JamesBattle::
# 549 "data/maps/Route115/scripts.pory"
	lockall
# 550 "data/maps/Route115/scripts.pory"
	checkobjectat 8, 65
# 551 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_JamesBattle_2
Route115_EventScript_JamesBattle_1:
# 554 "data/maps/Route115/scripts.pory"
	checkobjectat 6, 65
# 555 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_JamesBattle_5
Route115_EventScript_JamesBattle_4:
# 558 "data/maps/Route115/scripts.pory"
	checkobjectat 7, 65
# 559 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_JamesBattle_8
Route115_EventScript_JamesBattle_7:
# 562 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 563 "data/maps/Route115/scripts.pory"
	fadeoutbgm 0
# 564 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_0, MSGBOX_DEFAULT
# 568 "data/maps/Route115/scripts.pory"
	waitmessage
# 569 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceDown
# 570 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 571 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_1, MSGBOX_DEFAULT
# 575 "data/maps/Route115/scripts.pory"
	waitmessage
# 576 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceLeft
# 577 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 578 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_2, MSGBOX_DEFAULT
# 580 "data/maps/Route115/scripts.pory"
	waitmessage
# 581 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceDown
# 582 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 583 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_3, MSGBOX_AUTOCLOSE
# 589 "data/maps/Route115/scripts.pory"
	waitmessage
# 590 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_PlayerGetsInPosition
# 591 "data/maps/Route115/scripts.pory"
	playfirstmoncry
# 592 "data/maps/Route115/scripts.pory"
	waitmoncry
# 593 "data/maps/Route115/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 594 "data/maps/Route115/scripts.pory"
	waitmoncry
# 595 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 596 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_4, MSGBOX_AUTOCLOSE
# 599 "data/maps/Route115/scripts.pory"
	waitmessage
# 600 "data/maps/Route115/scripts.pory"
	trainerbattle_no_intro TRAINER_JAMES_FINAL, Route115_EventScript_JamesBattle_Text_5
# 601 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 602 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 603 "data/maps/Route115/scripts.pory"
	callnative RemoveFollowingPokemon
# 604 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 605 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 606 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_6, MSGBOX_AUTOCLOSE
# 614 "data/maps/Route115/scripts.pory"
	waitmessage
# 615 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceUp
# 616 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 617 "data/maps/Route115/scripts.pory"
	fadeoutbgm 0
# 618 "data/maps/Route115/scripts.pory"
	delay 24
# 619 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_7, MSGBOX_DEFAULT
# 620 "data/maps/Route115/scripts.pory"
	waitmessage
# 621 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceDown
# 622 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 623 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_8, MSGBOX_AUTOCLOSE
# 627 "data/maps/Route115/scripts.pory"
	waitmessage
# 628 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceUp
# 629 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 630 "data/maps/Route115/scripts.pory"
	setfieldeffectargument 0, 1
# 631 "data/maps/Route115/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 632 "data/maps/Route115/scripts.pory"
	delay 15
# 633 "data/maps/Route115/scripts.pory"
	removeobject 24
# 634 "data/maps/Route115/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 635 "data/maps/Route115/scripts.pory"
	fadeinbgm 0
# 636 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 637 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 12
# 638 "data/maps/Route115/scripts.pory"
	setflag FLAG_SYS_DEFEATED_JAMES
# 639 "data/maps/Route115/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 640 "data/maps/Route115/scripts.pory"
	callnative UpdateFollowingPokemon
# 641 "data/maps/Route115/scripts.pory"
	releaseall
	end

Route115_EventScript_JamesBattle_2:
# 552 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115_Movement_PlayerToJamesRightTrigger
	goto Route115_EventScript_JamesBattle_1

Route115_EventScript_JamesBattle_5:
# 556 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115_Movement_PlayerToJamesLeftTrigger
	goto Route115_EventScript_JamesBattle_4

Route115_EventScript_JamesBattle_8:
# 560 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115_Movement_PlayerToJamesMiddleTrigger
	goto Route115_EventScript_JamesBattle_7


Route115_EventScript_PlayerGetsInPosition::
# 646 "data/maps/Route115/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 647 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 648 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 649 "data/maps/Route115/scripts.pory"
	callnative UpdateFollowingPokemon
# 650 "data/maps/Route115/scripts.pory"
	playse SE_BALL_OPEN
# 651 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 652 "data/maps/Route115/scripts.pory"
	addobject 25
# 653 "data/maps/Route115/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 7, 64
# 655 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 656 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 657 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 658 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 659 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 660 "data/maps/Route115/scripts.pory"
	applymovement 25, EverGrandeCity_Movement_EliteFourPokemonGetsInPosition
# 661 "data/maps/Route115/scripts.pory"
	delay 8
# 662 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 663 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 664 "data/maps/Route115/scripts.pory"
	delay 30
	return


# 719 "data/maps/Route115/scripts.pory"
Route115EmoMove1:
# 720 "data/maps/Route115/scripts.pory"
	walk_down
# 720 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 723 "data/maps/Route115/scripts.pory"
Route115EmoMove1Right:
# 724 "data/maps/Route115/scripts.pory"
	walk_right
# 725 "data/maps/Route115/scripts.pory"
	walk_down
# 725 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 728 "data/maps/Route115/scripts.pory"
Route115EmoMove1Left:
# 729 "data/maps/Route115/scripts.pory"
	walk_down
# 730 "data/maps/Route115/scripts.pory"
	walk_left
# 731 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 734 "data/maps/Route115/scripts.pory"
Route115EmoMove2:
# 735 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 738 "data/maps/Route115/scripts.pory"
Route115EmoMove3:
# 739 "data/maps/Route115/scripts.pory"
	walk_fast_left
# 740 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 743 "data/maps/Route115/scripts.pory"
Route115EmoMove3Left:
# 744 "data/maps/Route115/scripts.pory"
	walk_fast_right
# 745 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 748 "data/maps/Route115/scripts.pory"
Route115Exclaim:
# 749 "data/maps/Route115/scripts.pory"
	emote_exclamation_mark
	step_end

# 752 "data/maps/Route115/scripts.pory"
Route115MisaWalkUp:
# 753 "data/maps/Route115/scripts.pory"
	walk_up
# 753 "data/maps/Route115/scripts.pory"
	walk_up
# 753 "data/maps/Route115/scripts.pory"
	walk_up
# 753 "data/maps/Route115/scripts.pory"
	walk_up
# 753 "data/maps/Route115/scripts.pory"
	walk_up
# 754 "data/maps/Route115/scripts.pory"
	walk_left
# 755 "data/maps/Route115/scripts.pory"
	face_up
	step_end

# 758 "data/maps/Route115/scripts.pory"
Route115MisaWalkUpRight:
# 759 "data/maps/Route115/scripts.pory"
	walk_up
# 759 "data/maps/Route115/scripts.pory"
	walk_up
# 759 "data/maps/Route115/scripts.pory"
	walk_up
# 759 "data/maps/Route115/scripts.pory"
	walk_up
# 759 "data/maps/Route115/scripts.pory"
	walk_up
	step_end

# 762 "data/maps/Route115/scripts.pory"
Route115MisaLeave:
# 763 "data/maps/Route115/scripts.pory"
	walk_down
# 763 "data/maps/Route115/scripts.pory"
	walk_down
# 763 "data/maps/Route115/scripts.pory"
	walk_down
# 763 "data/maps/Route115/scripts.pory"
	walk_down
# 764 "data/maps/Route115/scripts.pory"
	walk_right
# 764 "data/maps/Route115/scripts.pory"
	walk_right
# 764 "data/maps/Route115/scripts.pory"
	walk_right
# 764 "data/maps/Route115/scripts.pory"
	walk_right
# 765 "data/maps/Route115/scripts.pory"
	walk_up
# 765 "data/maps/Route115/scripts.pory"
	walk_up
# 765 "data/maps/Route115/scripts.pory"
	walk_up
# 765 "data/maps/Route115/scripts.pory"
	walk_up
# 766 "data/maps/Route115/scripts.pory"
	walk_right
# 766 "data/maps/Route115/scripts.pory"
	walk_right
# 766 "data/maps/Route115/scripts.pory"
	walk_right
# 766 "data/maps/Route115/scripts.pory"
	walk_right
# 766 "data/maps/Route115/scripts.pory"
	walk_right
# 766 "data/maps/Route115/scripts.pory"
	walk_right
# 766 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

# 769 "data/maps/Route115/scripts.pory"
Route115RivalLeave:
# 770 "data/maps/Route115/scripts.pory"
	walk_down
# 770 "data/maps/Route115/scripts.pory"
	walk_down
# 770 "data/maps/Route115/scripts.pory"
	walk_down
# 770 "data/maps/Route115/scripts.pory"
	walk_down
# 770 "data/maps/Route115/scripts.pory"
	walk_down
# 771 "data/maps/Route115/scripts.pory"
	walk_right
# 772 "data/maps/Route115/scripts.pory"
	walk_down
# 773 "data/maps/Route115/scripts.pory"
	walk_right
# 773 "data/maps/Route115/scripts.pory"
	walk_right
# 773 "data/maps/Route115/scripts.pory"
	walk_right
# 774 "data/maps/Route115/scripts.pory"
	walk_up
# 774 "data/maps/Route115/scripts.pory"
	walk_up
# 774 "data/maps/Route115/scripts.pory"
	walk_up
# 774 "data/maps/Route115/scripts.pory"
	walk_up
# 775 "data/maps/Route115/scripts.pory"
	walk_right
# 775 "data/maps/Route115/scripts.pory"
	walk_right
# 775 "data/maps/Route115/scripts.pory"
	walk_right
# 775 "data/maps/Route115/scripts.pory"
	walk_right
# 775 "data/maps/Route115/scripts.pory"
	walk_right
# 775 "data/maps/Route115/scripts.pory"
	walk_right
# 775 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

# 778 "data/maps/Route115/scripts.pory"
Route115MisaLeaveLeftTrigger:
# 779 "data/maps/Route115/scripts.pory"
	walk_down
# 779 "data/maps/Route115/scripts.pory"
	walk_down
# 779 "data/maps/Route115/scripts.pory"
	walk_down
# 779 "data/maps/Route115/scripts.pory"
	walk_down
# 779 "data/maps/Route115/scripts.pory"
	walk_down
# 780 "data/maps/Route115/scripts.pory"
	walk_right
# 781 "data/maps/Route115/scripts.pory"
	walk_down
# 782 "data/maps/Route115/scripts.pory"
	walk_right
# 782 "data/maps/Route115/scripts.pory"
	walk_right
# 782 "data/maps/Route115/scripts.pory"
	walk_right
# 783 "data/maps/Route115/scripts.pory"
	walk_right
# 783 "data/maps/Route115/scripts.pory"
	walk_right
# 783 "data/maps/Route115/scripts.pory"
	walk_right
# 783 "data/maps/Route115/scripts.pory"
	walk_right
# 783 "data/maps/Route115/scripts.pory"
	walk_right
# 783 "data/maps/Route115/scripts.pory"
	walk_right
# 783 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

# 786 "data/maps/Route115/scripts.pory"
Route115Confused:
# 787 "data/maps/Route115/scripts.pory"
	emote_question_mark
	step_end

# 790 "data/maps/Route115/scripts.pory"
Route115FaceUp:
# 791 "data/maps/Route115/scripts.pory"
	walk_in_place_up
	step_end

# 794 "data/maps/Route115/scripts.pory"
Route115FaceDown:
# 795 "data/maps/Route115/scripts.pory"
	walk_in_place_down
	step_end

# 798 "data/maps/Route115/scripts.pory"
Route115FaceRight:
# 799 "data/maps/Route115/scripts.pory"
	walk_in_place_right
	step_end

# 802 "data/maps/Route115/scripts.pory"
Route115FaceLeft:
# 803 "data/maps/Route115/scripts.pory"
	walk_in_place_left
	step_end

# 806 "data/maps/Route115/scripts.pory"
Route115MoveLeft:
# 807 "data/maps/Route115/scripts.pory"
	walk_left
	step_end

# 810 "data/maps/Route115/scripts.pory"
Route115MoveRight:
# 811 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

# 814 "data/maps/Route115/scripts.pory"
Route115_Movement_PlayerToJamesRightTrigger:
# 815 "data/maps/Route115/scripts.pory"
	walk_up
# 815 "data/maps/Route115/scripts.pory"
	walk_up
# 816 "data/maps/Route115/scripts.pory"
	walk_left
# 817 "data/maps/Route115/scripts.pory"
	walk_up
	step_end

# 820 "data/maps/Route115/scripts.pory"
Route115_Movement_PlayerToJamesLeftTrigger:
# 821 "data/maps/Route115/scripts.pory"
	walk_up
# 821 "data/maps/Route115/scripts.pory"
	walk_up
# 822 "data/maps/Route115/scripts.pory"
	walk_right
# 823 "data/maps/Route115/scripts.pory"
	walk_up
	step_end

# 826 "data/maps/Route115/scripts.pory"
Route115_Movement_PlayerToJamesMiddleTrigger:
# 827 "data/maps/Route115/scripts.pory"
	walk_up
# 827 "data/maps/Route115/scripts.pory"
	walk_up
# 827 "data/maps/Route115/scripts.pory"
	walk_up
	step_end

Route115_EventScript_Trigger_RivalEmo_Text_0:
# 158 "data/maps/Route115/scripts.pory"
	.string "???: WAIT!\nIt's dangerous!$"

Route115_EventScript_Trigger_RivalEmo_Text_1:
# 174 "data/maps/Route115/scripts.pory"
	.string "…$"

Route115_EventScript_Trigger_RivalEmo_Text_2:
# 209 "data/maps/Route115/scripts.pory"
	.string "???: Oh, you're still out here!$"

Route115_EventScript_Trigger_RivalEmo_Text_3:
# 222 "data/maps/Route115/scripts.pory"
	.string "MISA: Are you two having fun?$"

Route115_EventScript_Trigger_RivalEmo_Text_4:
# 246 "data/maps/Route115/scripts.pory"
	.string "MISA: …Oh! Um… I mean… JOMITHIUS,\n right?$"

Route115_EventScript_TriggerLeft_RivalEmo_Text_0:
# 416 "data/maps/Route115/scripts.pory"
	.string "???: WAIT! It's dangerous!$"

Route115_EventScript_JamesBattle_Text_0:
# 564 "data/maps/Route115/scripts.pory"
	.string "JAMES: …\n This is kind of nostalgic, isn't it?\p It really feels like it's been forever\n since I've been out here.$"

Route115_EventScript_JamesBattle_Text_1:
# 571 "data/maps/Route115/scripts.pory"
	.string "I used to come out here every time I\n was bullied.\p It was the same on the day\n that we met.$"

Route115_EventScript_JamesBattle_Text_2:
# 578 "data/maps/Route115/scripts.pory"
	.string "God, I wish I could forget how cringe\n I was…$"

Route115_EventScript_JamesBattle_Text_3:
# 583 "data/maps/Route115/scripts.pory"
	.string "But still, the battle we had that day\n helped me get my mind off of things.\p And now, all those worries I had back\n then seem so insignificant.\p Haha, sorry for yapping so much.\n You came here for a battle.$"

Route115_EventScript_JamesBattle_Text_4:
# 596 "data/maps/Route115/scripts.pory"
	.string "All right, rival!\n For real this time!\p One last battle!$"

Route115_EventScript_JamesBattle_Text_5:
# 600 "data/maps/Route115/scripts.pory"
	.string "You're still as strong as\never, {PLAYER}.$"

Route115_EventScript_JamesBattle_Text_6:
# 606 "data/maps/Route115/scripts.pory"
	.string "That was fun!\n I'm glad you asked me to battle again.\p It's not every day the CHAMPION\n asks you for a battle!\p All right! That was a good break\n from all the research, but I should\l get back to the lab now.\p See ya, {PLAYER}.$"

Route115_EventScript_JamesBattle_Text_7:
# 619 "data/maps/Route115/scripts.pory"
	.string "Actually, one more thing.$"

Route115_EventScript_JamesBattle_Text_8:
# 623 "data/maps/Route115/scripts.pory"
	.string "Thanks for being my friend, {PLAYER}.\n It… really means a lot to me.\l …\p Okay, see ya.$"

Route115Emo1::
# 668 "data/maps/Route115/scripts.pory"
	.string "Don't come any closer. Hold on…$"

Route115Emo2::
# 670 "data/maps/Route115/scripts.pory"
	.string "Sorry.\n It's hard to control this power.\p Any closer and you could've been\n pulled into the void…\p Anyways, who are you?\n …\p {PLAYER}, huh?\n And my mother sent you?\p I see…\n  So that means you're also a TRAINER…$"

Route115Emo3::
# 681 "data/maps/Route115/scripts.pory"
	.string "$"

Route115Emo4::
# 683 "data/maps/Route115/scripts.pory"
	.string "… I am JOMITHIUS.\n …This must be the call of fate.\l We are… destined to be rivals.\l You know what must be done.$"

Route115Emo5::
# 688 "data/maps/Route115/scripts.pory"
	.string "Can you withstand this power?$"

Route115Emo6::
# 690 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: You're lucky I told my\n  POKéMON to only use 10% of their\l power.\l Next time I, JOMITHIUS, will-$"

Route115Emo7::
# 695 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: {PLAYER} is…\n a worthy opponent.$"

Route115Misa1::
# 698 "data/maps/Route115/scripts.pory"
	.string "MISA: I'm glad you two are having fun!\n Oh! By the way, JAMES,\l dinner is almost ready.$"

Route115Emo8::
# 702 "data/maps/Route115/scripts.pory"
	.string "JAMES?: …\n Yes, Mother.\l I'll be heading back soon.$"

Route115Misa2::
# 706 "data/maps/Route115/scripts.pory"
	.string "MISA: Great! I made a feast since\n you're starting your journey tomorrow.\l Hurry back soon, JAMES.\p {PLAYER}, you're more than welcome\n to stop by as well!$"

Route115Emo9::
# 712 "data/maps/Route115/scripts.pory"
	.string "Definitely JAMES: …\n I should head back then.\p {PLAYER}, next time I'll achieve victory.\n See ya.$"

Jomithius_Outro::
# 717 "data/maps/Route115/scripts.pory"
	.string "I'm in my abyss…$"
