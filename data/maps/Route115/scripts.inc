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
	setvar VAR_MISA_STATE, 2
# 279 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_EventScript_TriggerRight_RivalEmo::
# 284 "data/maps/Route115/scripts.pory"
	lockall
# 285 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 286 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route115/scripts.pory"
	waitmessage
# 288 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 289 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 290 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route115/scripts.pory"
	waitmessage
# 293 "data/maps/Route115/scripts.pory"
	delay 120
# 294 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 295 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 296 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 297 "data/maps/Route115/scripts.pory"
	delay 20
# 298 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 299 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 300 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 301 "data/maps/Route115/scripts.pory"
	delay 10
# 302 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 303 "data/maps/Route115/scripts.pory"
	waitmessage
# 304 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 305 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 306 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route115/scripts.pory"
	delay 60
# 308 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 309 "data/maps/Route115/scripts.pory"
	delay 10
# 310 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1Right
# 311 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 312 "data/maps/Route115/scripts.pory"
	delay 10
# 313 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route115/scripts.pory"
	waitmessage
# 315 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 316 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 317 "data/maps/Route115/scripts.pory"
	delay 180
# 318 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route115/scripts.pory"
	waitmessage
# 320 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 321 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 322 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 323 "data/maps/Route115/scripts.pory"
	delay 60
# 324 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 325 "data/maps/Route115/scripts.pory"
	waitmessage
# 326 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 327 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 328 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route115/scripts.pory"
	waitmessage
# 330 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_WalkDown
# 331 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 332 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 333 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 334 "data/maps/Route115/scripts.pory"
	addobject 23
# 335 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_DEFAULT
# 336 "data/maps/Route115/scripts.pory"
	waitmessage
# 337 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 338 "data/maps/Route115/scripts.pory"
	waitmessage
# 339 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 340 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 341 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 342 "data/maps/Route115/scripts.pory"
	delay 30
# 343 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3
# 344 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 345 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route115/scripts.pory"
	delay 20
# 347 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUpRight
# 348 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 349 "data/maps/Route115/scripts.pory"
	delay 80
# 350 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 351 "data/maps/Route115/scripts.pory"
	waitmessage
# 352 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 353 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 354 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_DEFAULT
# 355 "data/maps/Route115/scripts.pory"
	waitmessage
# 356 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route115/scripts.pory"
	waitmessage
# 358 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 359 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 360 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 361 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 362 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 363 "data/maps/Route115/scripts.pory"
	delay 120
# 364 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 365 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 366 "data/maps/Route115/scripts.pory"
	delay 120
# 367 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 368 "data/maps/Route115/scripts.pory"
	delay 60
# 369 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 370 "data/maps/Route115/scripts.pory"
	delay 60
# 371 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 372 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 373 "data/maps/Route115/scripts.pory"
	delay 60
# 374 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 376 "data/maps/Route115/scripts.pory"
	waitmessage
# 377 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 378 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 379 "data/maps/Route115/scripts.pory"
	delay 60
# 380 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 381 "data/maps/Route115/scripts.pory"
	delay 20
# 382 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_DEFAULT
# 383 "data/maps/Route115/scripts.pory"
	waitmessage
# 384 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route115/scripts.pory"
	waitmessage
# 386 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 387 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 388 "data/maps/Route115/scripts.pory"
	delay 30
# 389 "data/maps/Route115/scripts.pory"
	removeobject 23
# 390 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 391 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 392 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceLeft
# 393 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 394 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 395 "data/maps/Route115/scripts.pory"
	waitmessage
# 396 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115RivalLeave
# 397 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 398 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 399 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route115/scripts.pory"
	removeobject 22
# 401 "data/maps/Route115/scripts.pory"
	delay 60
# 402 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 403 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 404 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 405 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 406 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 407 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_EventScript_TriggerLeft_RivalEmo::
# 412 "data/maps/Route115/scripts.pory"
	lockall
# 413 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 414 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_TriggerLeft_RivalEmo_Text_0, MSGBOX_AUTOCLOSE
# 415 "data/maps/Route115/scripts.pory"
	waitmessage
# 416 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 417 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Exclaim
# 418 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 419 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo1, MSGBOX_AUTOCLOSE
# 420 "data/maps/Route115/scripts.pory"
	waitmessage
# 421 "data/maps/Route115/scripts.pory"
	delay 120
# 422 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 423 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 424 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 425 "data/maps/Route115/scripts.pory"
	delay 20
# 426 "data/maps/Route115/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 427 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 428 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 429 "data/maps/Route115/scripts.pory"
	delay 10
# 430 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 431 "data/maps/Route115/scripts.pory"
	waitmessage
# 432 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 433 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 434 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 435 "data/maps/Route115/scripts.pory"
	delay 60
# 436 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 437 "data/maps/Route115/scripts.pory"
	delay 10
# 438 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove1Left
# 439 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 440 "data/maps/Route115/scripts.pory"
	delay 10
# 441 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo2, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route115/scripts.pory"
	waitmessage
# 443 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceUp
# 444 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 445 "data/maps/Route115/scripts.pory"
	delay 180
# 446 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_1, MSGBOX_AUTOCLOSE
# 447 "data/maps/Route115/scripts.pory"
	waitmessage
# 448 "data/maps/Route115/scripts.pory"
	playse SE_BIKE_HOP
# 449 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115Confused
# 450 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route115/scripts.pory"
	delay 60
# 452 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo4, MSGBOX_AUTOCLOSE
# 453 "data/maps/Route115/scripts.pory"
	waitmessage
# 454 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 455 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo5, MSGBOX_AUTOCLOSE
# 457 "data/maps/Route115/scripts.pory"
	waitmessage
# 458 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_WalkDown
# 459 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 460 "data/maps/Route115/scripts.pory"
	call Route115_RivalBattle
# 461 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_ROUTE115
# 462 "data/maps/Route115/scripts.pory"
	addobject 23
# 463 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo6, MSGBOX_DEFAULT
# 464 "data/maps/Route115/scripts.pory"
	waitmessage
# 465 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_2, MSGBOX_AUTOCLOSE
# 466 "data/maps/Route115/scripts.pory"
	waitmessage
# 467 "data/maps/Route115/scripts.pory"
	playse SE_PIN
# 468 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115Exclaim
# 469 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 470 "data/maps/Route115/scripts.pory"
	delay 30
# 471 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115EmoMove3Left
# 472 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 473 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 474 "data/maps/Route115/scripts.pory"
	delay 20
# 475 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaWalkUpRight
# 476 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 477 "data/maps/Route115/scripts.pory"
	delay 80
# 478 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_3
# 479 "data/maps/Route115/scripts.pory"
	waitmessage
# 480 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceRight
# 481 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 482 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo7, MSGBOX_DEFAULT
# 483 "data/maps/Route115/scripts.pory"
	waitmessage
# 484 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa1, MSGBOX_AUTOCLOSE
# 485 "data/maps/Route115/scripts.pory"
	waitmessage
# 486 "data/maps/Route115/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 487 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 488 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 489 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 490 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 491 "data/maps/Route115/scripts.pory"
	delay 120
# 492 "data/maps/Route115/scripts.pory"
	applymovement 22, Common_Movement_FaceRight
# 493 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 494 "data/maps/Route115/scripts.pory"
	delay 120
# 495 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST
# 496 "data/maps/Route115/scripts.pory"
	delay 60
# 497 "data/maps/Route115/scripts.pory"
	playse SE_M_GUST2
# 498 "data/maps/Route115/scripts.pory"
	delay 60
# 499 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 500 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 501 "data/maps/Route115/scripts.pory"
	delay 60
# 502 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_Trigger_RivalEmo_Text_4
# 504 "data/maps/Route115/scripts.pory"
	waitmessage
# 505 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceDown
# 506 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 507 "data/maps/Route115/scripts.pory"
	delay 60
# 508 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 509 "data/maps/Route115/scripts.pory"
	delay 20
# 510 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo8, MSGBOX_DEFAULT
# 511 "data/maps/Route115/scripts.pory"
	waitmessage
# 512 "data/maps/Route115/scripts.pory"
	msgbox Route115Misa2, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route115/scripts.pory"
	waitmessage
# 514 "data/maps/Route115/scripts.pory"
	applymovement 23, Route115MisaLeave
# 515 "data/maps/Route115/scripts.pory"
	waitmovement 23
# 516 "data/maps/Route115/scripts.pory"
	delay 30
# 517 "data/maps/Route115/scripts.pory"
	removeobject 23
# 518 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115FaceLeft
# 519 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 520 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceRight
# 521 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 522 "data/maps/Route115/scripts.pory"
	msgbox Route115Emo9, MSGBOX_AUTOCLOSE
# 523 "data/maps/Route115/scripts.pory"
	waitmessage
# 524 "data/maps/Route115/scripts.pory"
	applymovement 22, Route115RivalLeave
# 525 "data/maps/Route115/scripts.pory"
	waitmovement 22
# 526 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115FaceDown
# 527 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 528 "data/maps/Route115/scripts.pory"
	removeobject 22
# 529 "data/maps/Route115/scripts.pory"
	delay 60
# 530 "data/maps/Route115/scripts.pory"
	savebgm MUS_DUMMY
# 531 "data/maps/Route115/scripts.pory"
	fadedefaultbgm
# 532 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_RIVAL_ROUTE115
# 533 "data/maps/Route115/scripts.pory"
	setflag FLAG_HIDE_MISA_ROUTE115
# 534 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
# 535 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 2
# 536 "data/maps/Route115/scripts.pory"
	releaseall
	end


Route115_RivalBattle::
# 541 "data/maps/Route115/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS, Jomithius_Outro
# 542 "data/maps/Route115/scripts.pory"
	lockall
	return


Route115_EventScript_JamesBattle::
# 547 "data/maps/Route115/scripts.pory"
	lockall
# 548 "data/maps/Route115/scripts.pory"
	checkobjectat 8, 65
# 549 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_JamesBattle_2
Route115_EventScript_JamesBattle_1:
# 552 "data/maps/Route115/scripts.pory"
	checkobjectat 6, 65
# 553 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_JamesBattle_5
Route115_EventScript_JamesBattle_4:
# 556 "data/maps/Route115/scripts.pory"
	checkobjectat 7, 65
# 557 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_JamesBattle_8
Route115_EventScript_JamesBattle_7:
# 560 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 561 "data/maps/Route115/scripts.pory"
	fadeoutbgm 0
# 562 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_0, MSGBOX_DEFAULT
# 565 "data/maps/Route115/scripts.pory"
	waitmessage
# 566 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceDown
# 567 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 568 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_1, MSGBOX_DEFAULT
# 571 "data/maps/Route115/scripts.pory"
	waitmessage
# 572 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceLeft
# 573 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 574 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_2, MSGBOX_DEFAULT
# 576 "data/maps/Route115/scripts.pory"
	waitmessage
# 577 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceDown
# 578 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 579 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_3, MSGBOX_AUTOCLOSE
# 585 "data/maps/Route115/scripts.pory"
	waitmessage
# 586 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_PlayerGetsInPosition
# 587 "data/maps/Route115/scripts.pory"
	playfirstmoncry
# 588 "data/maps/Route115/scripts.pory"
	waitmoncry
# 589 "data/maps/Route115/scripts.pory"
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
# 590 "data/maps/Route115/scripts.pory"
	waitmoncry
# 591 "data/maps/Route115/scripts.pory"
	playbgm MUS_PYRITE_THEME, FALSE
# 592 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_4, MSGBOX_AUTOCLOSE
# 595 "data/maps/Route115/scripts.pory"
	waitmessage
# 596 "data/maps/Route115/scripts.pory"
	trainerbattle_no_intro TRAINER_JAMES_FINAL, Route115_EventScript_JamesBattle_Text_5
# 597 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 598 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 599 "data/maps/Route115/scripts.pory"
	callnative RemoveFollowingPokemon
# 600 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 601 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 602 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_6, MSGBOX_AUTOCLOSE
# 610 "data/maps/Route115/scripts.pory"
	waitmessage
# 611 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceUp
# 612 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 613 "data/maps/Route115/scripts.pory"
	fadeoutbgm 0
# 614 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_7, MSGBOX_DEFAULT
# 615 "data/maps/Route115/scripts.pory"
	waitmessage
# 616 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceDown
# 617 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 618 "data/maps/Route115/scripts.pory"
	msgbox Route115_EventScript_JamesBattle_Text_8, MSGBOX_AUTOCLOSE
# 622 "data/maps/Route115/scripts.pory"
	waitmessage
# 623 "data/maps/Route115/scripts.pory"
	applymovement 24, Common_Movement_WalkInPlaceUp
# 624 "data/maps/Route115/scripts.pory"
	waitmovement 24
# 625 "data/maps/Route115/scripts.pory"
	setfieldeffectargument 0, 1
# 626 "data/maps/Route115/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 627 "data/maps/Route115/scripts.pory"
	delay 15
# 628 "data/maps/Route115/scripts.pory"
	removeobject 24
# 629 "data/maps/Route115/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 630 "data/maps/Route115/scripts.pory"
	fadeinbgm 0
# 631 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_JAMES_ROUTE_135_LAB
# 632 "data/maps/Route115/scripts.pory"
	setvar VAR_MISA_STATE, 12
# 633 "data/maps/Route115/scripts.pory"
	setflag FLAG_SYS_DEFEATED_JAMES
# 634 "data/maps/Route115/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 635 "data/maps/Route115/scripts.pory"
	callnative UpdateFollowingPokemon
# 636 "data/maps/Route115/scripts.pory"
	releaseall
	end

Route115_EventScript_JamesBattle_2:
# 550 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115_Movement_PlayerToJamesRightTrigger
	goto Route115_EventScript_JamesBattle_1

Route115_EventScript_JamesBattle_5:
# 554 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115_Movement_PlayerToJamesLeftTrigger
	goto Route115_EventScript_JamesBattle_4

Route115_EventScript_JamesBattle_8:
# 558 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route115_Movement_PlayerToJamesMiddleTrigger
	goto Route115_EventScript_JamesBattle_7


Route115_EventScript_PlayerGetsInPosition::
# 641 "data/maps/Route115/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 642 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 643 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 644 "data/maps/Route115/scripts.pory"
	callnative UpdateFollowingPokemon
# 645 "data/maps/Route115/scripts.pory"
	playse SE_BALL_OPEN
# 646 "data/maps/Route115/scripts.pory"
	fadescreen FADE_TO_WHITE
# 647 "data/maps/Route115/scripts.pory"
	addobject 25
# 648 "data/maps/Route115/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 7, 64
# 649 "data/maps/Route115/scripts.pory"
	clearflag FLAG_HIDE_TYPHLOSION_ROUTE_115
# 650 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 651 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 652 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 653 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 654 "data/maps/Route115/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 655 "data/maps/Route115/scripts.pory"
	applymovement 25, EverGrandeCity_Movement_EliteFourPokemonGetsInPosition
# 656 "data/maps/Route115/scripts.pory"
	delay 8
# 657 "data/maps/Route115/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 658 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 659 "data/maps/Route115/scripts.pory"
	delay 30
	return


# 713 "data/maps/Route115/scripts.pory"
Route115EmoMove1:
# 714 "data/maps/Route115/scripts.pory"
	walk_down
# 714 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 717 "data/maps/Route115/scripts.pory"
Route115EmoMove1Right:
# 718 "data/maps/Route115/scripts.pory"
	walk_right
# 719 "data/maps/Route115/scripts.pory"
	walk_down
# 719 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 722 "data/maps/Route115/scripts.pory"
Route115EmoMove1Left:
# 723 "data/maps/Route115/scripts.pory"
	walk_down
# 724 "data/maps/Route115/scripts.pory"
	walk_left
# 725 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 728 "data/maps/Route115/scripts.pory"
Route115EmoMove2:
# 729 "data/maps/Route115/scripts.pory"
	walk_down
	step_end

# 732 "data/maps/Route115/scripts.pory"
Route115EmoMove3:
# 733 "data/maps/Route115/scripts.pory"
	walk_fast_left
# 734 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 737 "data/maps/Route115/scripts.pory"
Route115EmoMove3Left:
# 738 "data/maps/Route115/scripts.pory"
	walk_fast_right
# 739 "data/maps/Route115/scripts.pory"
	walk_fast_down
	step_end

# 742 "data/maps/Route115/scripts.pory"
Route115Exclaim:
# 743 "data/maps/Route115/scripts.pory"
	emote_exclamation_mark
	step_end

# 746 "data/maps/Route115/scripts.pory"
Route115MisaWalkUp:
# 747 "data/maps/Route115/scripts.pory"
	walk_up
# 747 "data/maps/Route115/scripts.pory"
	walk_up
# 747 "data/maps/Route115/scripts.pory"
	walk_up
# 747 "data/maps/Route115/scripts.pory"
	walk_up
# 747 "data/maps/Route115/scripts.pory"
	walk_up
# 748 "data/maps/Route115/scripts.pory"
	walk_left
# 749 "data/maps/Route115/scripts.pory"
	face_up
	step_end

# 752 "data/maps/Route115/scripts.pory"
Route115MisaWalkUpRight:
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
	step_end

# 756 "data/maps/Route115/scripts.pory"
Route115MisaLeave:
# 757 "data/maps/Route115/scripts.pory"
	walk_down
# 757 "data/maps/Route115/scripts.pory"
	walk_down
# 757 "data/maps/Route115/scripts.pory"
	walk_down
# 757 "data/maps/Route115/scripts.pory"
	walk_down
# 758 "data/maps/Route115/scripts.pory"
	walk_right
# 758 "data/maps/Route115/scripts.pory"
	walk_right
# 758 "data/maps/Route115/scripts.pory"
	walk_right
# 758 "data/maps/Route115/scripts.pory"
	walk_right
# 759 "data/maps/Route115/scripts.pory"
	walk_up
# 759 "data/maps/Route115/scripts.pory"
	walk_up
# 759 "data/maps/Route115/scripts.pory"
	walk_up
# 759 "data/maps/Route115/scripts.pory"
	walk_up
# 760 "data/maps/Route115/scripts.pory"
	walk_right
# 760 "data/maps/Route115/scripts.pory"
	walk_right
# 760 "data/maps/Route115/scripts.pory"
	walk_right
# 760 "data/maps/Route115/scripts.pory"
	walk_right
# 760 "data/maps/Route115/scripts.pory"
	walk_right
# 760 "data/maps/Route115/scripts.pory"
	walk_right
# 760 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

# 763 "data/maps/Route115/scripts.pory"
Route115RivalLeave:
# 764 "data/maps/Route115/scripts.pory"
	walk_down
# 764 "data/maps/Route115/scripts.pory"
	walk_down
# 764 "data/maps/Route115/scripts.pory"
	walk_down
# 764 "data/maps/Route115/scripts.pory"
	walk_down
# 764 "data/maps/Route115/scripts.pory"
	walk_down
# 765 "data/maps/Route115/scripts.pory"
	walk_right
# 766 "data/maps/Route115/scripts.pory"
	walk_down
# 767 "data/maps/Route115/scripts.pory"
	walk_right
# 767 "data/maps/Route115/scripts.pory"
	walk_right
# 767 "data/maps/Route115/scripts.pory"
	walk_right
# 768 "data/maps/Route115/scripts.pory"
	walk_up
# 768 "data/maps/Route115/scripts.pory"
	walk_up
# 768 "data/maps/Route115/scripts.pory"
	walk_up
# 768 "data/maps/Route115/scripts.pory"
	walk_up
# 769 "data/maps/Route115/scripts.pory"
	walk_right
# 769 "data/maps/Route115/scripts.pory"
	walk_right
# 769 "data/maps/Route115/scripts.pory"
	walk_right
# 769 "data/maps/Route115/scripts.pory"
	walk_right
# 769 "data/maps/Route115/scripts.pory"
	walk_right
# 769 "data/maps/Route115/scripts.pory"
	walk_right
# 769 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

# 772 "data/maps/Route115/scripts.pory"
Route115MisaLeaveLeftTrigger:
# 773 "data/maps/Route115/scripts.pory"
	walk_down
# 773 "data/maps/Route115/scripts.pory"
	walk_down
# 773 "data/maps/Route115/scripts.pory"
	walk_down
# 773 "data/maps/Route115/scripts.pory"
	walk_down
# 773 "data/maps/Route115/scripts.pory"
	walk_down
# 774 "data/maps/Route115/scripts.pory"
	walk_right
# 775 "data/maps/Route115/scripts.pory"
	walk_down
# 776 "data/maps/Route115/scripts.pory"
	walk_right
# 776 "data/maps/Route115/scripts.pory"
	walk_right
# 776 "data/maps/Route115/scripts.pory"
	walk_right
# 777 "data/maps/Route115/scripts.pory"
	walk_right
# 777 "data/maps/Route115/scripts.pory"
	walk_right
# 777 "data/maps/Route115/scripts.pory"
	walk_right
# 777 "data/maps/Route115/scripts.pory"
	walk_right
# 777 "data/maps/Route115/scripts.pory"
	walk_right
# 777 "data/maps/Route115/scripts.pory"
	walk_right
# 777 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

# 780 "data/maps/Route115/scripts.pory"
Route115Confused:
# 781 "data/maps/Route115/scripts.pory"
	emote_question_mark
	step_end

# 784 "data/maps/Route115/scripts.pory"
Route115FaceUp:
# 785 "data/maps/Route115/scripts.pory"
	walk_in_place_up
	step_end

# 788 "data/maps/Route115/scripts.pory"
Route115FaceDown:
# 789 "data/maps/Route115/scripts.pory"
	walk_in_place_down
	step_end

# 792 "data/maps/Route115/scripts.pory"
Route115FaceRight:
# 793 "data/maps/Route115/scripts.pory"
	walk_in_place_right
	step_end

# 796 "data/maps/Route115/scripts.pory"
Route115FaceLeft:
# 797 "data/maps/Route115/scripts.pory"
	walk_in_place_left
	step_end

# 800 "data/maps/Route115/scripts.pory"
Route115MoveLeft:
# 801 "data/maps/Route115/scripts.pory"
	walk_left
	step_end

# 804 "data/maps/Route115/scripts.pory"
Route115MoveRight:
# 805 "data/maps/Route115/scripts.pory"
	walk_right
	step_end

# 808 "data/maps/Route115/scripts.pory"
Route115_Movement_PlayerToJamesRightTrigger:
# 809 "data/maps/Route115/scripts.pory"
	walk_up
# 809 "data/maps/Route115/scripts.pory"
	walk_up
# 810 "data/maps/Route115/scripts.pory"
	walk_left
# 811 "data/maps/Route115/scripts.pory"
	walk_up
	step_end

# 814 "data/maps/Route115/scripts.pory"
Route115_Movement_PlayerToJamesLeftTrigger:
# 815 "data/maps/Route115/scripts.pory"
	walk_up
# 815 "data/maps/Route115/scripts.pory"
	walk_up
# 816 "data/maps/Route115/scripts.pory"
	walk_right
# 817 "data/maps/Route115/scripts.pory"
	walk_up
	step_end

# 820 "data/maps/Route115/scripts.pory"
Route115_Movement_PlayerToJamesMiddleTrigger:
# 821 "data/maps/Route115/scripts.pory"
	walk_up
# 821 "data/maps/Route115/scripts.pory"
	walk_up
# 821 "data/maps/Route115/scripts.pory"
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
# 414 "data/maps/Route115/scripts.pory"
	.string "???: WAIT! It's dangerous!$"

Route115_EventScript_JamesBattle_Text_0:
# 562 "data/maps/Route115/scripts.pory"
	.string "This is kind of nostalgic, isn't it?\p It really feels like it's been forever\n since I've been out here.$"

Route115_EventScript_JamesBattle_Text_1:
# 568 "data/maps/Route115/scripts.pory"
	.string "I used to come out here every time I\n was bullied. It was the same on the\l day that we met.$"

Route115_EventScript_JamesBattle_Text_2:
# 574 "data/maps/Route115/scripts.pory"
	.string "God, I wish I could forget how cringe\n I was…$"

Route115_EventScript_JamesBattle_Text_3:
# 579 "data/maps/Route115/scripts.pory"
	.string "But still, the battle we had that day\n helped me get my mind off of things.\p And now, all those worries I had back\n then seem so insignificant.\p Haha, sorry for yapping so much.\n You came here for a battle.$"

Route115_EventScript_JamesBattle_Text_4:
# 592 "data/maps/Route115/scripts.pory"
	.string "All right, rival!\n For real this time!\p One last battle.$"

Route115_EventScript_JamesBattle_Text_5:
# 596 "data/maps/Route115/scripts.pory"
	.string "You're still strong as\never, {PLAYER}.$"

Route115_EventScript_JamesBattle_Text_6:
# 602 "data/maps/Route115/scripts.pory"
	.string "That was fun!\n I'm glad you asked me to battle again.\p It's not every day the CHAMPION\n asks you for a battle!\p All right! That was a good break\n from all the research, but I should\l get back to the lab now.\p See ya, {PLAYER}.$"

Route115_EventScript_JamesBattle_Text_7:
# 614 "data/maps/Route115/scripts.pory"
	.string "Actually, one more thing.$"

Route115_EventScript_JamesBattle_Text_8:
# 618 "data/maps/Route115/scripts.pory"
	.string "Thanks for being my friend, {PLAYER}.\n It… really means a lot to me.\l …\p Okay, see ya.$"

Route115Emo1::
# 663 "data/maps/Route115/scripts.pory"
	.string "Don't come any closer. Hold on…$"

Route115Emo2::
# 665 "data/maps/Route115/scripts.pory"
	.string "Sorry. It's hard to control this power.\n Any closer and you could've been\l pulled into the void…\p Anyways, who are you?\n …\p {PLAYER}, huh?\n And my mother sent you?\l I see…\l  So that means you're also a TRAINER…$"

Route115Emo3::
# 675 "data/maps/Route115/scripts.pory"
	.string "$"

Route115Emo4::
# 677 "data/maps/Route115/scripts.pory"
	.string "… I am JOMITHIUS.\n …This must be the call of fate.\l We are.. destined to be rivals.\l You know what must be done.$"

Route115Emo5::
# 682 "data/maps/Route115/scripts.pory"
	.string "Can you withstand this power?$"

Route115Emo6::
# 684 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: You're lucky I told my\n  POKéMON to only use 10% of their\l power.\l Next time I, JOMITHIUS, will-$"

Route115Emo7::
# 689 "data/maps/Route115/scripts.pory"
	.string "JOMITHIUS: {PLAYER} is…\n a worthy opponent.$"

Route115Misa1::
# 692 "data/maps/Route115/scripts.pory"
	.string "MISA: I'm glad you two are having fun!\n Oh! By the way, JAMES,\l dinner is almost ready.$"

Route115Emo8::
# 696 "data/maps/Route115/scripts.pory"
	.string "JAMES?: …\n Yes, Mother.\l I'll be heading back soon.$"

Route115Misa2::
# 700 "data/maps/Route115/scripts.pory"
	.string "MISA: Great! I made a feast since\n you're starting your journey tomorrow.\l Hurry back soon, JAMES.\l {PLAYER}, you're more than welcome\l to stop by anytime!$"

Route115Emo9::
# 706 "data/maps/Route115/scripts.pory"
	.string "Definitely JAMES: …\p I should head back then.\n {PLAYER}, next time I'll achieve victory.\l See ya.$"

Jomithius_Outro::
# 711 "data/maps/Route115/scripts.pory"
	.string "I'm in my abyss…$"
