# 1 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 2 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 3 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 4 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 5 "data/maps/Route114/scripts.pory"
	.byte 0
# 6 "data/maps/Route114/scripts.pory"

# 7 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 8 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 9 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 10 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 11 "data/maps/Route114/scripts.pory"
	end
# 12 "data/maps/Route114/scripts.pory"

# 13 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 14 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 15 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 16 "data/maps/Route114/scripts.pory"
	end
# 17 "data/maps/Route114/scripts.pory"

# 18 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 19 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 20 "data/maps/Route114/scripts.pory"
	.2byte 0
# 21 "data/maps/Route114/scripts.pory"

# 22 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 23 "data/maps/Route114/scripts.pory"
	lock
# 24 "data/maps/Route114/scripts.pory"
	faceplayer
# 25 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 26 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 27 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 28 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 29 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 30 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 31 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 32 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 34 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 35 "data/maps/Route114/scripts.pory"
	release
# 36 "data/maps/Route114/scripts.pory"
	end
# 37 "data/maps/Route114/scripts.pory"

# 38 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 39 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 40 "data/maps/Route114/scripts.pory"
	release
# 41 "data/maps/Route114/scripts.pory"
	end
# 42 "data/maps/Route114/scripts.pory"

# 43 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 44 "data/maps/Route114/scripts.pory"
	lock
# 45 "data/maps/Route114/scripts.pory"
	faceplayer
# 46 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 47 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 48 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 49 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 50 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 51 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 52 "data/maps/Route114/scripts.pory"
	release
# 53 "data/maps/Route114/scripts.pory"
	end
# 54 "data/maps/Route114/scripts.pory"

# 55 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 56 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 57 "data/maps/Route114/scripts.pory"
	release
# 58 "data/maps/Route114/scripts.pory"
	end
# 59 "data/maps/Route114/scripts.pory"

# 60 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 61 "data/maps/Route114/scripts.pory"
	lock
# 62 "data/maps/Route114/scripts.pory"
	faceplayer
# 63 "data/maps/Route114/scripts.pory"
	waitse
# 64 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 65 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 66 "data/maps/Route114/scripts.pory"
	waitmoncry
# 67 "data/maps/Route114/scripts.pory"
	release
# 68 "data/maps/Route114/scripts.pory"
	end
# 69 "data/maps/Route114/scripts.pory"

# 70 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 71 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 72 "data/maps/Route114/scripts.pory"
	end
# 73 "data/maps/Route114/scripts.pory"

# 74 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 75 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 76 "data/maps/Route114/scripts.pory"
	end
# 77 "data/maps/Route114/scripts.pory"

# 78 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 79 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 80 "data/maps/Route114/scripts.pory"
	end
# 81 "data/maps/Route114/scripts.pory"

# 82 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 83 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 84 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route114/scripts.pory"
	end
# 86 "data/maps/Route114/scripts.pory"

# 87 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 88 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 89 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route114/scripts.pory"
	end
# 91 "data/maps/Route114/scripts.pory"

# 92 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 93 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 94 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route114/scripts.pory"
	end
# 96 "data/maps/Route114/scripts.pory"

# 97 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 98 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 99 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route114/scripts.pory"
	end
# 101 "data/maps/Route114/scripts.pory"

# 102 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 103 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 104 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 105 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 106 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 107 "data/maps/Route114/scripts.pory"
	release
# 108 "data/maps/Route114/scripts.pory"
	end
# 109 "data/maps/Route114/scripts.pory"

# 110 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 111 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 112 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 114 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 115 "data/maps/Route114/scripts.pory"
	release
# 116 "data/maps/Route114/scripts.pory"
	end
# 117 "data/maps/Route114/scripts.pory"

# 118 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 119 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 120 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route114/scripts.pory"
	end
# 122 "data/maps/Route114/scripts.pory"

# 123 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 124 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 125 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 126 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 127 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 128 "data/maps/Route114/scripts.pory"
	release
# 129 "data/maps/Route114/scripts.pory"
	end
# 130 "data/maps/Route114/scripts.pory"

# 131 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 132 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 133 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 135 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 136 "data/maps/Route114/scripts.pory"
	release
# 137 "data/maps/Route114/scripts.pory"
	end
# 138 "data/maps/Route114/scripts.pory"

# 139 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 140 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 141 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 142 "data/maps/Route114/scripts.pory"
	end
# 143 "data/maps/Route114/scripts.pory"

# 144 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 145 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 146 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/Route114/scripts.pory"
	end
# 148 "data/maps/Route114/scripts.pory"

# 149 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 150 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 151 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route114/scripts.pory"
	end
# 153 "data/maps/Route114/scripts.pory"

# 154 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 155 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 156 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/Route114/scripts.pory"
	end
# 158 "data/maps/Route114/scripts.pory"

# 159 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 160 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 161 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 162 "data/maps/Route114/scripts.pory"
	end
# 163 "data/maps/Route114/scripts.pory"

# 164 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 165 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 166 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route114/scripts.pory"
	end
# 168 "data/maps/Route114/scripts.pory"

# 169 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 170 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 171 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route114/scripts.pory"
	end
# 173 "data/maps/Route114/scripts.pory"

# 174 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 175 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 176 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route114/scripts.pory"
	end
# 178 "data/maps/Route114/scripts.pory"

# 179 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 180 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 181 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 182 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 183 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 184 "data/maps/Route114/scripts.pory"

# 185 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 186 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 187 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 188 "data/maps/Route114/scripts.pory"

# 189 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 190 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 191 "data/maps/Route114/scripts.pory"

# 192 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 193 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 194 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 195 "data/maps/Route114/scripts.pory"

# 196 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 197 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 198 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 199 "data/maps/Route114/scripts.pory"

# 200 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 201 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_Bennis_Trigger_1::
# 206 "data/maps/Route114/scripts.pory"
	lockall
# 207 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_1, 1
# 208 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_Bennis
	return


Route114_Bennis_Trigger_2::
# 212 "data/maps/Route114/scripts.pory"
	lockall
# 213 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_1, 2
# 214 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_Bennis
	return


Route114_Bennis_Trigger_3::
# 218 "data/maps/Route114/scripts.pory"
	lockall
# 219 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_1, 3
# 220 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_Bennis
	return


Route114_EventScript_Bennis::
# 224 "data/maps/Route114/scripts.pory"
	lockall
# 225 "data/maps/Route114/scripts.pory"
	playbgm MUS_NONE, FALSE
# 226 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Bennis_Text_0, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route114/scripts.pory"
	waitmessage
# 229 "data/maps/Route114/scripts.pory"
	playbgm MUS_BENNIS_DOJO, TRUE
# 230 "data/maps/Route114/scripts.pory"
	delay 20
# 231 "data/maps/Route114/scripts.pory"
	call BennisFollowersMovementVar
# 232 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ASAK1, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route114/scripts.pory"
	waitmessage
# 234 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Bennis_Text_1, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route114/scripts.pory"
	waitmessage
# 236 "data/maps/Route114/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 237 "data/maps/Route114/scripts.pory"
	waitmovement 30
# 238 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ASAK2, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route114/scripts.pory"
	waitmessage
# 240 "data/maps/Route114/scripts.pory"
	delay 20
# 241 "data/maps/Route114/scripts.pory"
	applymovement 30, Common_Movement_FaceUp
# 242 "data/maps/Route114/scripts.pory"
	waitmovement 30
# 243 "data/maps/Route114/scripts.pory"
	call BennisMovementVar
# 244 "data/maps/Route114/scripts.pory"
	msgbox Route114_Bennis_Intro, MSGBOX_AUTOCLOSE
# 245 "data/maps/Route114/scripts.pory"
	waitmessage
# 246 "data/maps/Route114/scripts.pory"
	trainerbattle_no_intro TRAINER_BENNIS_2, Route114_BennisDefeat
# 247 "data/maps/Route114/scripts.pory"
	lockall
# 248 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Bennis_Text_2, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route114/scripts.pory"
	waitmessage
# 251 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Bennis_Text_3, MSGBOX_AUTOCLOSE
# 252 "data/maps/Route114/scripts.pory"
	waitmessage
# 253 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ASAK3, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route114/scripts.pory"
	waitmessage
# 255 "data/maps/Route114/scripts.pory"
	playbgm MUS_NONE, FALSE
# 256 "data/maps/Route114/scripts.pory"
	delay 10
# 257 "data/maps/Route114/scripts.pory"
	fadescreen FADE_TO_BLACK
# 258 "data/maps/Route114/scripts.pory"
	removeobject 28
# 259 "data/maps/Route114/scripts.pory"
	removeobject 29
# 260 "data/maps/Route114/scripts.pory"
	removeobject 30
# 261 "data/maps/Route114/scripts.pory"
	setflag FLAG_BENNIS_ROUTE_114
# 262 "data/maps/Route114/scripts.pory"
	setvar VAR_BENNIS_DOJO_STATE, 3
# 263 "data/maps/Route114/scripts.pory"
	playse SE_FLEE
# 264 "data/maps/Route114/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 265 "data/maps/Route114/scripts.pory"
	delay 20
# 266 "data/maps/Route114/scripts.pory"
	fadedefaultbgm
# 267 "data/maps/Route114/scripts.pory"
	releaseall
	end


BennisFollowersMovementVar::
# 272 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq BennisFollowersMovementVar_2
# 279 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq BennisFollowersMovementVar_3
# 287 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_BennisFollowers
# 288 "data/maps/Route114/scripts.pory"
	delay 30
# 289 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_BennisFollowers
# 290 "data/maps/Route114/scripts.pory"
	delay 20
# 291 "data/maps/Route114/scripts.pory"
	applymovement 30, Route114_Movement_BennisFollowers
BennisFollowersMovementVar_1:
# 293 "data/maps/Route114/scripts.pory"
	waitmovement 0
	return

BennisFollowersMovementVar_2:
# 273 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_BennisFollowers3
# 274 "data/maps/Route114/scripts.pory"
	delay 30
# 275 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_BennisFollowers3
# 276 "data/maps/Route114/scripts.pory"
	delay 20
# 277 "data/maps/Route114/scripts.pory"
	applymovement 30, Route114_Movement_BennisFollowers3
	goto BennisFollowersMovementVar_1

BennisFollowersMovementVar_3:
# 280 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_BennisFollowers3
# 281 "data/maps/Route114/scripts.pory"
	delay 30
# 282 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_BennisFollowers3
# 283 "data/maps/Route114/scripts.pory"
	delay 20
# 284 "data/maps/Route114/scripts.pory"
	applymovement 30, Route114_Movement_BennisFollowers3
	goto BennisFollowersMovementVar_1


BennisMovementVar::
# 298 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq BennisMovementVar_2
# 302 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq BennisMovementVar_3
# 306 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq BennisMovementVar_4
# 311 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_Bennis
# 312 "data/maps/Route114/scripts.pory"
	waitmovement 28
BennisMovementVar_1:
	return

BennisMovementVar_2:
# 299 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_Bennis
# 300 "data/maps/Route114/scripts.pory"
	waitmovement 28
	goto BennisMovementVar_1

BennisMovementVar_3:
# 303 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_Bennis2
# 304 "data/maps/Route114/scripts.pory"
	waitmovement 28
	goto BennisMovementVar_1

BennisMovementVar_4:
# 307 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_Bennis1
# 308 "data/maps/Route114/scripts.pory"
	waitmovement 28
	goto BennisMovementVar_1


# 341 "data/maps/Route114/scripts.pory"
Route114_Movement_BennisFollowers:
# 342 "data/maps/Route114/scripts.pory"
	walk_up
# 342 "data/maps/Route114/scripts.pory"
	walk_up
# 342 "data/maps/Route114/scripts.pory"
	walk_up
# 342 "data/maps/Route114/scripts.pory"
	walk_up
# 342 "data/maps/Route114/scripts.pory"
	walk_up
	step_end

# 345 "data/maps/Route114/scripts.pory"
Route114_Movement_BennisFollowers3:
# 346 "data/maps/Route114/scripts.pory"
	walk_up
# 346 "data/maps/Route114/scripts.pory"
	walk_up
# 346 "data/maps/Route114/scripts.pory"
	walk_up
# 346 "data/maps/Route114/scripts.pory"
	walk_up
# 346 "data/maps/Route114/scripts.pory"
	walk_up
# 347 "data/maps/Route114/scripts.pory"
	walk_left
# 348 "data/maps/Route114/scripts.pory"
	face_up
	step_end

# 351 "data/maps/Route114/scripts.pory"
Route114_Movement_Bennis:
# 352 "data/maps/Route114/scripts.pory"
	walk_up
	step_end

# 355 "data/maps/Route114/scripts.pory"
Route114_Movement_Bennis1:
# 356 "data/maps/Route114/scripts.pory"
	walk_up
# 357 "data/maps/Route114/scripts.pory"
	walk_left
# 358 "data/maps/Route114/scripts.pory"
	face_up
	step_end

# 361 "data/maps/Route114/scripts.pory"
Route114_Movement_Bennis2:
# 362 "data/maps/Route114/scripts.pory"
	walk_up
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 364 "data/maps/Route114/scripts.pory"
	face_up
	step_end

Route114_EventScript_Bennis_Text_0:
# 226 "data/maps/Route114/scripts.pory"
	.string "Baldy baldy over there, what's it like\n to have no hair?$"

Route114_EventScript_Bennis_Text_1:
# 234 "data/maps/Route114/scripts.pory"
	.string "PANINI: Panini!$"

Route114_EventScript_Bennis_Text_2:
# 248 "data/maps/Route114/scripts.pory"
	.string "MASTER BENNIS: Hm.\n Still beefy.$"

Route114_EventScript_Bennis_Text_3:
# 251 "data/maps/Route114/scripts.pory"
	.string "PANINI: P-Panini?!$"

Route114_Text_ASAK1::
# 317 "data/maps/Route114/scripts.pory"
	.string "ASAK: There you are!\n It's time for MASTER BENNIS to regain\l his honor!$"

Route114_Text_ASAK2::
# 323 "data/maps/Route114/scripts.pory"
	.string "ASAK: Now, MASTER BENNIS!$"

Route114_Bennis_Intro::
# 327 "data/maps/Route114/scripts.pory"
	.string "MASTER BENNIS: Oho. I'm gettin' good\n vibrations from this place.$"

Route114_BennisDefeat::
# 332 "data/maps/Route114/scripts.pory"
	.string "Everyone's so mean to me...$"

Route114_Text_ASAK3::
# 336 "data/maps/Route114/scripts.pory"
	.string "ASAK: Kuh... W-We won't forget\n this humiliation!$"
