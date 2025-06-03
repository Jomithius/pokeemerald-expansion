# 1 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 18
# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 25
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 26
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 32
# 5 "data/maps/Route110/scripts.pory"

# 6 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 7 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 8 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 9 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 10 "data/maps/Route110/scripts.pory"
	.byte 0
# 11 "data/maps/Route110/scripts.pory"

# 12 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 13 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 14 "data/maps/Route110/scripts.pory"
	end
# 15 "data/maps/Route110/scripts.pory"

# 16 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 17 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 19 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 20 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_ROUTE110_HIDE_CYCLIST, Route110_EventScript_SaveBikerMusic
# 21 "data/maps/Route110/scripts.pory"
	end
# 22 "data/maps/Route110/scripts.pory"

# 23 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 24 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 25 "data/maps/Route110/scripts.pory"
	return
# 26 "data/maps/Route110/scripts.pory"

# 27 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 28 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 29 "data/maps/Route110/scripts.pory"
	.2byte 0
# 30 "data/maps/Route110/scripts.pory"

# 31 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 32 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 33 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 34 "data/maps/Route110/scripts.pory"
	return
# 35 "data/maps/Route110/scripts.pory"

# 36 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 37 "data/maps/Route110/scripts.pory"
	lock
# 38 "data/maps/Route110/scripts.pory"
	faceplayer
# 39 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 40 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 41 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route110/scripts.pory"
	release
# 43 "data/maps/Route110/scripts.pory"
	end
# 44 "data/maps/Route110/scripts.pory"

# 45 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 46 "data/maps/Route110/scripts.pory"
	lock
# 47 "data/maps/Route110/scripts.pory"
	faceplayer
# 48 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 49 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 50 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route110/scripts.pory"
	release
# 52 "data/maps/Route110/scripts.pory"
	end
# 53 "data/maps/Route110/scripts.pory"

# 54 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 55 "data/maps/Route110/scripts.pory"
	lock
# 56 "data/maps/Route110/scripts.pory"
	faceplayer
# 57 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 58 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 59 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route110/scripts.pory"
	release
# 61 "data/maps/Route110/scripts.pory"
	end
# 62 "data/maps/Route110/scripts.pory"

# 63 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 64 "data/maps/Route110/scripts.pory"
	lock
# 65 "data/maps/Route110/scripts.pory"
	faceplayer
# 66 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 67 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 68 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route110/scripts.pory"
	release
# 70 "data/maps/Route110/scripts.pory"
	end
# 71 "data/maps/Route110/scripts.pory"

# 72 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 73 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 74 "data/maps/Route110/scripts.pory"
	end
# 75 "data/maps/Route110/scripts.pory"

# 76 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 77 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 78 "data/maps/Route110/scripts.pory"
	end
# 79 "data/maps/Route110/scripts.pory"

# 80 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 81 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 82 "data/maps/Route110/scripts.pory"
	end
# 83 "data/maps/Route110/scripts.pory"

# 84 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 85 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 86 "data/maps/Route110/scripts.pory"
	end
# 87 "data/maps/Route110/scripts.pory"

# 88 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 89 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 90 "data/maps/Route110/scripts.pory"
	end
# 91 "data/maps/Route110/scripts.pory"

# 92 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 93 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 94 "data/maps/Route110/scripts.pory"
	end
# 95 "data/maps/Route110/scripts.pory"

# 96 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 97 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 98 "data/maps/Route110/scripts.pory"
	end
# 99 "data/maps/Route110/scripts.pory"

# 100 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 101 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 102 "data/maps/Route110/scripts.pory"
	end
# 103 "data/maps/Route110/scripts.pory"

# 104 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 105 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 106 "data/maps/Route110/scripts.pory"
	end
# 107 "data/maps/Route110/scripts.pory"

# 108 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 109 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 110 "data/maps/Route110/scripts.pory"
	end
# 111 "data/maps/Route110/scripts.pory"

# 112 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 113 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 114 "data/maps/Route110/scripts.pory"
	end
# 115 "data/maps/Route110/scripts.pory"

# 116 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 118 "data/maps/Route110/scripts.pory"
	end
# 119 "data/maps/Route110/scripts.pory"

# 120 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 121 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 122 "data/maps/Route110/scripts.pory"
	end
# 123 "data/maps/Route110/scripts.pory"

# 124 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 125 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 126 "data/maps/Route110/scripts.pory"
	end
# 127 "data/maps/Route110/scripts.pory"

# 128 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 129 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 130 "data/maps/Route110/scripts.pory"
	end
# 131 "data/maps/Route110/scripts.pory"

# 132 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 133 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 134 "data/maps/Route110/scripts.pory"
	end
# 135 "data/maps/Route110/scripts.pory"

# 136 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 137 "data/maps/Route110/scripts.pory"
	lockall
# 138 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 139 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 140 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 141 "data/maps/Route110/scripts.pory"
	releaseall
# 142 "data/maps/Route110/scripts.pory"
	end
# 143 "data/maps/Route110/scripts.pory"

# 144 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 146 "data/maps/Route110/scripts.pory"
	releaseall
# 147 "data/maps/Route110/scripts.pory"
	end
# 148 "data/maps/Route110/scripts.pory"

# 149 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 150 "data/maps/Route110/scripts.pory"
	lock
# 151 "data/maps/Route110/scripts.pory"
	faceplayer
# 152 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 153 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 154 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 155 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 156 "data/maps/Route110/scripts.pory"
	release
# 157 "data/maps/Route110/scripts.pory"
	end
# 158 "data/maps/Route110/scripts.pory"

# 159 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	release
# 162 "data/maps/Route110/scripts.pory"
	end
# 163 "data/maps/Route110/scripts.pory"

# 164 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 165 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 166 "data/maps/Route110/scripts.pory"
	release
# 167 "data/maps/Route110/scripts.pory"
	end
# 168 "data/maps/Route110/scripts.pory"

# 169 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 170 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 171 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route110/scripts.pory"
	end
# 173 "data/maps/Route110/scripts.pory"

# 174 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 175 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 176 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route110/scripts.pory"
	end
# 178 "data/maps/Route110/scripts.pory"

# 179 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 180 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 181 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route110/scripts.pory"
	end
# 183 "data/maps/Route110/scripts.pory"

# 184 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 185 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 186 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route110/scripts.pory"
	end
# 188 "data/maps/Route110/scripts.pory"

# 189 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 190 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 191 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 192 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 193 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 194 "data/maps/Route110/scripts.pory"
	release
# 195 "data/maps/Route110/scripts.pory"
	end
# 196 "data/maps/Route110/scripts.pory"

# 197 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 198 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 199 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 201 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 202 "data/maps/Route110/scripts.pory"
	release
# 203 "data/maps/Route110/scripts.pory"
	end
# 204 "data/maps/Route110/scripts.pory"

# 205 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 206 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route110/scripts.pory"
	end
# 209 "data/maps/Route110/scripts.pory"

# 210 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 212 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route110/scripts.pory"
	end
# 214 "data/maps/Route110/scripts.pory"

# 215 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 216 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 217 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 218 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 219 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 220 "data/maps/Route110/scripts.pory"
	release
# 221 "data/maps/Route110/scripts.pory"
	end
# 222 "data/maps/Route110/scripts.pory"

# 223 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 224 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 225 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 227 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 228 "data/maps/Route110/scripts.pory"
	release
# 229 "data/maps/Route110/scripts.pory"
	end
# 230 "data/maps/Route110/scripts.pory"

# 231 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 232 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 233 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route110/scripts.pory"
	end
# 235 "data/maps/Route110/scripts.pory"

# 236 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 237 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 238 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 239 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 240 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 241 "data/maps/Route110/scripts.pory"
	release
# 242 "data/maps/Route110/scripts.pory"
	end
# 243 "data/maps/Route110/scripts.pory"

# 244 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 245 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 246 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 248 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 249 "data/maps/Route110/scripts.pory"
	release
# 250 "data/maps/Route110/scripts.pory"
	end
# 251 "data/maps/Route110/scripts.pory"

# 252 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 253 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 254 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/Route110/scripts.pory"
	end
# 256 "data/maps/Route110/scripts.pory"

# 257 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 258 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 259 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route110/scripts.pory"
	end
# 261 "data/maps/Route110/scripts.pory"

# 262 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 263 "data/maps/Route110/scripts.pory"
	end
# 264 "data/maps/Route110/scripts.pory"

# 265 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 266 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 267 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route110/scripts.pory"
	end
# 269 "data/maps/Route110/scripts.pory"

# 270 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 271 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 272 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/Route110/scripts.pory"
	end
# 274 "data/maps/Route110/scripts.pory"

# 275 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 276 "data/maps/Route110/scripts.pory"
	lockall
# 277 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 278 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 279 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 280 "data/maps/Route110/scripts.pory"
	releaseall
# 281 "data/maps/Route110/scripts.pory"
	end
# 282 "data/maps/Route110/scripts.pory"

# 283 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 284 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 285 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 286 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 287 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 288 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 289 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 290 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 291 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 292 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 293 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 294 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 295 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 296 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 297 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 298 "data/maps/Route110/scripts.pory"
	end
# 299 "data/maps/Route110/scripts.pory"

# 300 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 301 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 302 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 303 "data/maps/Route110/scripts.pory"
	end
# 304 "data/maps/Route110/scripts.pory"

# 305 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 306 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 307 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 308 "data/maps/Route110/scripts.pory"
	end
# 309 "data/maps/Route110/scripts.pory"

# 310 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 311 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 312 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 313 "data/maps/Route110/scripts.pory"
	end
# 314 "data/maps/Route110/scripts.pory"

# 315 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 316 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 317 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 318 "data/maps/Route110/scripts.pory"
	end
# 319 "data/maps/Route110/scripts.pory"

# 320 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 321 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 322 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 323 "data/maps/Route110/scripts.pory"
	end
# 324 "data/maps/Route110/scripts.pory"

# 325 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 326 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 327 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 328 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 329 "data/maps/Route110/scripts.pory"
	return
# 330 "data/maps/Route110/scripts.pory"

# 331 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 332 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 333 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 334 "data/maps/Route110/scripts.pory"
	end
# 335 "data/maps/Route110/scripts.pory"

# 336 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 337 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 338 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 339 "data/maps/Route110/scripts.pory"
	end
# 340 "data/maps/Route110/scripts.pory"

# 341 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 342 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 343 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 344 "data/maps/Route110/scripts.pory"
	end
# 345 "data/maps/Route110/scripts.pory"

# 346 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 347 "data/maps/Route110/scripts.pory"
	lockall
# 348 "data/maps/Route110/scripts.pory"
	checkplayergender
# 349 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 350 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 351 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 352 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 353 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 354 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 355 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 356 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route110/scripts.pory"
	delay 30
# 358 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 359 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 360 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 361 "data/maps/Route110/scripts.pory"
	checkplayergender
# 362 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 363 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 364 "data/maps/Route110/scripts.pory"
	releaseall
# 365 "data/maps/Route110/scripts.pory"
	end
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 368 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 369 "data/maps/Route110/scripts.pory"
	return
# 370 "data/maps/Route110/scripts.pory"

# 371 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 372 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 373 "data/maps/Route110/scripts.pory"
	return
# 374 "data/maps/Route110/scripts.pory"

# 375 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 376 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 377 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 378 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 379 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 380 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 381 "data/maps/Route110/scripts.pory"
	end
# 382 "data/maps/Route110/scripts.pory"

# 383 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 384 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 385 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 386 "data/maps/Route110/scripts.pory"
	end
# 387 "data/maps/Route110/scripts.pory"

# 388 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 389 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 390 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 391 "data/maps/Route110/scripts.pory"
	end
# 392 "data/maps/Route110/scripts.pory"

# 393 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 394 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 395 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 396 "data/maps/Route110/scripts.pory"
	end
# 397 "data/maps/Route110/scripts.pory"

# 398 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 399 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 400 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 401 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 402 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 403 "data/maps/Route110/scripts.pory"
	end
# 404 "data/maps/Route110/scripts.pory"

# 405 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 406 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 407 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 408 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 409 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 410 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 411 "data/maps/Route110/scripts.pory"
	end
# 412 "data/maps/Route110/scripts.pory"

# 413 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 414 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 415 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 416 "data/maps/Route110/scripts.pory"
	end
# 417 "data/maps/Route110/scripts.pory"

# 418 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 419 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 420 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 421 "data/maps/Route110/scripts.pory"
	end
# 422 "data/maps/Route110/scripts.pory"

# 423 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 424 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 425 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 426 "data/maps/Route110/scripts.pory"
	end
# 427 "data/maps/Route110/scripts.pory"

# 428 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 429 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 430 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 431 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 432 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 433 "data/maps/Route110/scripts.pory"
	end
# 434 "data/maps/Route110/scripts.pory"

# 435 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 436 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 437 "data/maps/Route110/scripts.pory"
	return
# 438 "data/maps/Route110/scripts.pory"

# 439 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 440 "data/maps/Route110/scripts.pory"
	closemessage
# 441 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 442 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 443 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 444 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 445 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 446 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 447 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 448 "data/maps/Route110/scripts.pory"
	delay 45
# 449 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 450 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 451 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 452 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 453 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 454 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 455 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 456 "data/maps/Route110/scripts.pory"
	releaseall
# 457 "data/maps/Route110/scripts.pory"
	end
# 458 "data/maps/Route110/scripts.pory"

# 459 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 460 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 461 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route110/scripts.pory"
	return
# 463 "data/maps/Route110/scripts.pory"

# 464 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 465 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 466 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 467 "data/maps/Route110/scripts.pory"
	return
# 468 "data/maps/Route110/scripts.pory"

# 469 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 470 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 471 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 472 "data/maps/Route110/scripts.pory"
	return
# 473 "data/maps/Route110/scripts.pory"

# 474 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 475 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 476 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route110/scripts.pory"
	return
# 478 "data/maps/Route110/scripts.pory"

# 479 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 480 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 481 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 482 "data/maps/Route110/scripts.pory"
	return
# 483 "data/maps/Route110/scripts.pory"

# 484 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 485 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 486 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 487 "data/maps/Route110/scripts.pory"
	return
# 488 "data/maps/Route110/scripts.pory"

# 489 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 490 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 491 "data/maps/Route110/scripts.pory"
	return
# 492 "data/maps/Route110/scripts.pory"

# 493 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 494 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 495 "data/maps/Route110/scripts.pory"
	return
# 496 "data/maps/Route110/scripts.pory"

# 497 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 498 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 499 "data/maps/Route110/scripts.pory"
	return
# 500 "data/maps/Route110/scripts.pory"

# 501 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 502 "data/maps/Route110/scripts.pory"
	walk_down
# 503 "data/maps/Route110/scripts.pory"
	walk_left
# 504 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 505 "data/maps/Route110/scripts.pory"
	step_end
# 506 "data/maps/Route110/scripts.pory"

# 507 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 508 "data/maps/Route110/scripts.pory"
	walk_down
# 509 "data/maps/Route110/scripts.pory"
	step_end
# 510 "data/maps/Route110/scripts.pory"

# 511 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 512 "data/maps/Route110/scripts.pory"
	walk_down
# 513 "data/maps/Route110/scripts.pory"
	walk_right
# 514 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 515 "data/maps/Route110/scripts.pory"
	step_end
# 516 "data/maps/Route110/scripts.pory"

# 517 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 518 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 519 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 520 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 521 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 522 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 523 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 524 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 525 "data/maps/Route110/scripts.pory"
	step_end
# 526 "data/maps/Route110/scripts.pory"

# 527 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 528 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 529 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 530 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 531 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 532 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 533 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 534 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 535 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 536 "data/maps/Route110/scripts.pory"
	step_end
# 537 "data/maps/Route110/scripts.pory"

# 538 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 539 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 540 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 541 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 542 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 543 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 544 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 545 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 546 "data/maps/Route110/scripts.pory"
	step_end
# 547 "data/maps/Route110/scripts.pory"

# 548 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 549 "data/maps/Route110/scripts.pory"
	lockall
# 550 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 551 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 552 "data/maps/Route110/scripts.pory"

# 553 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 554 "data/maps/Route110/scripts.pory"
	lockall
# 555 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 556 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 557 "data/maps/Route110/scripts.pory"

# 558 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 559 "data/maps/Route110/scripts.pory"
	lockall
# 560 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 561 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 562 "data/maps/Route110/scripts.pory"

# 563 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 564 "data/maps/Route110/scripts.pory"
	lockall
# 565 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 566 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 567 "data/maps/Route110/scripts.pory"

# 568 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 569 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 570 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 571 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 572 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 573 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 574 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 575 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 576 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 577 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 578 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 579 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 580 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 581 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 582 "data/maps/Route110/scripts.pory"
	closemessage
# 583 "data/maps/Route110/scripts.pory"
	delay 20
# 584 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 585 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 586 "data/maps/Route110/scripts.pory"
	delay 10
# 587 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 588 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 589 "data/maps/Route110/scripts.pory"
	delay 20
# 590 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 591 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 592 "data/maps/Route110/scripts.pory"
	delay 30
# 593 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 594 "data/maps/Route110/scripts.pory"
	closemessage
# 595 "data/maps/Route110/scripts.pory"
	delay 30
# 596 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 597 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 598 "data/maps/Route110/scripts.pory"
	waitfanfare
# 599 "data/maps/Route110/scripts.pory"
	closemessage
# 600 "data/maps/Route110/scripts.pory"
	delay 30
# 601 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 602 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 603 "data/maps/Route110/scripts.pory"
	closemessage
# 604 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 605 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 606 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 607 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 608 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 609 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 610 "data/maps/Route110/scripts.pory"
	releaseall
# 611 "data/maps/Route110/scripts.pory"
	end
# 612 "data/maps/Route110/scripts.pory"

# 613 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 614 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 615 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 616 "data/maps/Route110/scripts.pory"
	return
# 617 "data/maps/Route110/scripts.pory"

# 618 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 619 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 620 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 621 "data/maps/Route110/scripts.pory"
	return
# 622 "data/maps/Route110/scripts.pory"

# 623 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 624 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 625 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 626 "data/maps/Route110/scripts.pory"
	return
# 627 "data/maps/Route110/scripts.pory"

# 628 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 629 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 630 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 631 "data/maps/Route110/scripts.pory"
	return
# 632 "data/maps/Route110/scripts.pory"

# 633 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 634 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 635 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 636 "data/maps/Route110/scripts.pory"
	return
# 637 "data/maps/Route110/scripts.pory"

# 638 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 639 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 640 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 641 "data/maps/Route110/scripts.pory"
	return
# 642 "data/maps/Route110/scripts.pory"

# 643 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 644 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 645 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 646 "data/maps/Route110/scripts.pory"
	return
# 647 "data/maps/Route110/scripts.pory"

# 648 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 649 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 650 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 651 "data/maps/Route110/scripts.pory"
	return
# 652 "data/maps/Route110/scripts.pory"

# 653 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 654 "data/maps/Route110/scripts.pory"
	walk_down
# 655 "data/maps/Route110/scripts.pory"
	walk_down
# 656 "data/maps/Route110/scripts.pory"
	walk_down
# 657 "data/maps/Route110/scripts.pory"
	step_end
# 658 "data/maps/Route110/scripts.pory"

# 659 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 660 "data/maps/Route110/scripts.pory"
	walk_down
# 661 "data/maps/Route110/scripts.pory"
	walk_left
# 662 "data/maps/Route110/scripts.pory"
	walk_left
# 663 "data/maps/Route110/scripts.pory"
	walk_down
# 664 "data/maps/Route110/scripts.pory"
	step_end
# 665 "data/maps/Route110/scripts.pory"

# 666 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 667 "data/maps/Route110/scripts.pory"
	walk_down
# 668 "data/maps/Route110/scripts.pory"
	walk_left
# 669 "data/maps/Route110/scripts.pory"
	walk_down
# 670 "data/maps/Route110/scripts.pory"
	step_end
# 671 "data/maps/Route110/scripts.pory"

# 672 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 673 "data/maps/Route110/scripts.pory"
	walk_down
# 674 "data/maps/Route110/scripts.pory"
	walk_down
# 675 "data/maps/Route110/scripts.pory"
	step_end
# 676 "data/maps/Route110/scripts.pory"

# 677 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 678 "data/maps/Route110/scripts.pory"
	walk_down
# 679 "data/maps/Route110/scripts.pory"
	walk_right
# 680 "data/maps/Route110/scripts.pory"
	walk_down
# 681 "data/maps/Route110/scripts.pory"
	step_end
# 682 "data/maps/Route110/scripts.pory"

# 683 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 684 "data/maps/Route110/scripts.pory"
	walk_up
# 685 "data/maps/Route110/scripts.pory"
	walk_up
# 686 "data/maps/Route110/scripts.pory"
	walk_right
# 687 "data/maps/Route110/scripts.pory"
	walk_up
# 688 "data/maps/Route110/scripts.pory"
	walk_up
# 689 "data/maps/Route110/scripts.pory"
	walk_up
# 690 "data/maps/Route110/scripts.pory"
	step_end
# 691 "data/maps/Route110/scripts.pory"

# 692 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 693 "data/maps/Route110/scripts.pory"
	walk_up
# 694 "data/maps/Route110/scripts.pory"
	walk_up
# 695 "data/maps/Route110/scripts.pory"
	walk_up
# 696 "data/maps/Route110/scripts.pory"
	walk_up
# 697 "data/maps/Route110/scripts.pory"
	walk_up
# 698 "data/maps/Route110/scripts.pory"
	step_end
# 699 "data/maps/Route110/scripts.pory"

# 700 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 701 "data/maps/Route110/scripts.pory"
	walk_up
# 702 "data/maps/Route110/scripts.pory"
	walk_up
# 703 "data/maps/Route110/scripts.pory"
	walk_up
# 704 "data/maps/Route110/scripts.pory"
	walk_up
# 705 "data/maps/Route110/scripts.pory"
	walk_up
# 706 "data/maps/Route110/scripts.pory"
	step_end
# 707 "data/maps/Route110/scripts.pory"

# 708 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 709 "data/maps/Route110/scripts.pory"
	walk_up
# 710 "data/maps/Route110/scripts.pory"
	walk_up
# 711 "data/maps/Route110/scripts.pory"
	walk_up
# 712 "data/maps/Route110/scripts.pory"
	walk_up
# 713 "data/maps/Route110/scripts.pory"
	walk_up
# 714 "data/maps/Route110/scripts.pory"
	step_end
# 715 "data/maps/Route110/scripts.pory"

# 716 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 717 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 718 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 719 "data/maps/Route110/scripts.pory"

# 720 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 721 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 722 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 723 "data/maps/Route110/scripts.pory"

# 724 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 725 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 726 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 727 "data/maps/Route110/scripts.pory"

# 728 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 729 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 730 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 731 "data/maps/Route110/scripts.pory"

# 732 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 733 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 734 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 735 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 736 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 737 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 738 "data/maps/Route110/scripts.pory"

# 739 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 740 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 741 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 742 "data/maps/Route110/scripts.pory"

# 743 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 744 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 745 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 746 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 747 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 748 "data/maps/Route110/scripts.pory"

# 749 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 750 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 751 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 752 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 753 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 754 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 755 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 756 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 757 "data/maps/Route110/scripts.pory"

# 758 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 759 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 760 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 761 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 762 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 763 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 764 "data/maps/Route110/scripts.pory"

# 765 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 766 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 767 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 768 "data/maps/Route110/scripts.pory"

# 769 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 770 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 771 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 772 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 773 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 774 "data/maps/Route110/scripts.pory"

# 775 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 776 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 777 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 778 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 779 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 780 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 781 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 782 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 783 "data/maps/Route110/scripts.pory"

# 784 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 785 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 786 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 787 "data/maps/Route110/scripts.pory"

# 788 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 789 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 790 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 791 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 792 "data/maps/Route110/scripts.pory"

# 793 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 794 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 795 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 796 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 797 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 798 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 799 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 800 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 801 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 802 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 803 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 804 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 805 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 806 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 807 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 808 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 809 "data/maps/Route110/scripts.pory"

# 810 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 811 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 812 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 813 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 814 "data/maps/Route110/scripts.pory"

# 815 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 816 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 817 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 818 "data/maps/Route110/scripts.pory"

# 819 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 820 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 821 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 822 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 823 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 824 "data/maps/Route110/scripts.pory"

# 825 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 826 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 827 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 828 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 829 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 830 "data/maps/Route110/scripts.pory"

# 831 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 832 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 833 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 834 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 835 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 836 "data/maps/Route110/scripts.pory"

# 837 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 838 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 839 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 840 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 841 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 842 "data/maps/Route110/scripts.pory"

# 843 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 844 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 845 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 846 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 847 "data/maps/Route110/scripts.pory"

# 848 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 849 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 850 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 851 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 852 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 853 "data/maps/Route110/scripts.pory"

# 854 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 855 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 856 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 857 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 858 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 859 "data/maps/Route110/scripts.pory"

# 860 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 861 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 862 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 863 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 864 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 865 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 866 "data/maps/Route110/scripts.pory"

# 867 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 868 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 869 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 870 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 871 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 872 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 873 "data/maps/Route110/scripts.pory"

# 874 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 875 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 876 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 877 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 878 "data/maps/Route110/scripts.pory"

# 879 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 880 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 881 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 882 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 883 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 884 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 885 "data/maps/Route110/scripts.pory"

# 886 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 887 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 888 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 889 "data/maps/Route110/scripts.pory"

# 890 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 891 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 892 "data/maps/Route110/scripts.pory"

# 893 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 894 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 895 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 896 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 897 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 898 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 901 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 902 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 903 "data/maps/Route110/scripts.pory"

# 904 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 905 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 906 "data/maps/Route110/scripts.pory"

# 907 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 908 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 909 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 910 "data/maps/Route110/scripts.pory"

# 911 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 912 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 913 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 914 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 915 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 916 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 917 "data/maps/Route110/scripts.pory"

# 918 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 919 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 920 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 921 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 922 "data/maps/Route110/scripts.pory"

# 923 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 924 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 925 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 926 "data/maps/Route110/scripts.pory"

# 927 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 928 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 929 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 930 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 931 "data/maps/Route110/scripts.pory"

# 932 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 933 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 934 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 935 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 936 "data/maps/Route110/scripts.pory"

# 937 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 938 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 939 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 940 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 941 "data/maps/Route110/scripts.pory"

# 942 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 943 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 944 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 945 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 946 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 947 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 948 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 949 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 950 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 951 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 952 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 953 "data/maps/Route110/scripts.pory"

# 954 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 955 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 956 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 957 "data/maps/Route110/scripts.pory"

# 958 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 959 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 960 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 961 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 962 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 963 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

Route110_EventScript_Biker1::
# 967 "data/maps/Route110/scripts.pory"
	lock
# 968 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Biker1_Text_0, MSGBOX_NPC
# 970 "data/maps/Route110/scripts.pory"
	waitmessage
# 971 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Dale::
# 976 "data/maps/Route110/scripts.pory"
	lock
# 977 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Dale_Text_0
# 978 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_DALE, Route110_BikerDefeat
# 979 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Dale_Text_1
# 980 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 981 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM
# 982 "data/maps/Route110/scripts.pory"
	delay 30
# 983 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 984 "data/maps/Route110/scripts.pory"
	removeobject 43
# 985 "data/maps/Route110/scripts.pory"
	playse SE_FLEE
# 986 "data/maps/Route110/scripts.pory"
	delay 10
# 987 "data/maps/Route110/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 988 "data/maps/Route110/scripts.pory"
	setflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 989 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 4
# 990 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_PolicemanHelp::
# 995 "data/maps/Route110/scripts.pory"
	lock
# 996 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_ROUTE_110_BIKER_POLICEMAN, Route110_EventScript_PolicemanHelp_2
# 1000 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_PolicemanHelp_Text_0, MSGBOX_AUTOCLOSE
Route110_EventScript_PolicemanHelp_1:
# 1002 "data/maps/Route110/scripts.pory"
	waitmessage
# 1003 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_PolicemanHelp_2:
# 997 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanPleaseHelp, MSGBOX_NPC
	goto Route110_EventScript_PolicemanHelp_1


Route110_EventScript_Biker2::
# 1021 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Biker_Intro, Route110_BikerDefeat
# 1022 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat2, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker3::
# 1027 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DARWIN, Route110_Biker_Intro3, Route110_BikerDefeat2
# 1028 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker4::
# 1033 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DAN, Route110_Biker_Intro2, Route110_BikerDefeat3
# 1034 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker5::
# 1039 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ROB, Route110_Biker_Intro3, Route110_BikerDefeat2
# 1040 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat3, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker6::
# 1045 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Biker_Intro2, Route110_BikerDefeat
# 1046 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker7::
# 1051 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_STEPHEN, Route110_Biker_Intro, Route110_BikerDefeat3
# 1052 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat2, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Speedwagon::
# 1057 "data/maps/Route110/scripts.pory"
	lock
# 1058 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Speedwagon, MSGBOX_AUTOCLOSE
# 1059 "data/maps/Route110/scripts.pory"
	waitmessage
# 1060 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEEDWAGON, Route110_SpeedwagonDefeat
# 1061 "data/maps/Route110/scripts.pory"
	lock
# 1062 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Speedwagon_PostBattle, MSGBOX_AUTOCLOSE
# 1063 "data/maps/Route110/scripts.pory"
	waitmessage
# 1064 "data/maps/Route110/scripts.pory"
	delay 30
# 1065 "data/maps/Route110/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 1066 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1067 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM
# 1068 "data/maps/Route110/scripts.pory"
	delay 120
# 1069 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 1070 "data/maps/Route110/scripts.pory"
	delay 20
# 1071 "data/maps/Route110/scripts.pory"
	playse SE_FLEE
# 1072 "data/maps/Route110/scripts.pory"
	removeobject 34
# 1073 "data/maps/Route110/scripts.pory"
	removeobject 35
# 1074 "data/maps/Route110/scripts.pory"
	removeobject 36
# 1075 "data/maps/Route110/scripts.pory"
	removeobject 37
# 1076 "data/maps/Route110/scripts.pory"
	removeobject 38
# 1077 "data/maps/Route110/scripts.pory"
	removeobject 39
# 1078 "data/maps/Route110/scripts.pory"
	removeobject 40
# 1079 "data/maps/Route110/scripts.pory"
	removeobject 41
# 1080 "data/maps/Route110/scripts.pory"
	removeobject 42
# 1081 "data/maps/Route110/scripts.pory"
	removeobject 43
# 1082 "data/maps/Route110/scripts.pory"
	removeobject 44
# 1083 "data/maps/Route110/scripts.pory"
	removeobject 45
# 1084 "data/maps/Route110/scripts.pory"
	removeobject 33
# 1085 "data/maps/Route110/scripts.pory"
	delay 10
# 1086 "data/maps/Route110/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 1087 "data/maps/Route110/scripts.pory"
	delay 10
# 1088 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 1089 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 6
# 1090 "data/maps/Route110/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_BIKERS
# 1091 "data/maps/Route110/scripts.pory"
	release
	end


Route110_Policeman_GiveUturn::
# 1115 "data/maps/Route110/scripts.pory"
	lock
# 1116 "data/maps/Route110/scripts.pory"
	msgbox Route110_Policeman_GiveUturn_Text_0, MSGBOX_AUTOCLOSE
# 1117 "data/maps/Route110/scripts.pory"
	waitmessage
# 1118 "data/maps/Route110/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1119 "data/maps/Route110/scripts.pory"
	addobject 47
# 1120 "data/maps/Route110/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 1121 "data/maps/Route110/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq Route110_Policeman_GiveUturn_2
# 1126 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_Policeman_East
# 1127 "data/maps/Route110/scripts.pory"
	waitmovement 47
# 1128 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 1129 "data/maps/Route110/scripts.pory"
	waitmovement 0
Route110_Policeman_GiveUturn_1:
# 1131 "data/maps/Route110/scripts.pory"
	delay 10
# 1132 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_AUTOCLOSE
# 1133 "data/maps/Route110/scripts.pory"
	waitmessage
# 1134 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 1135 "data/maps/Route110/scripts.pory"
	waitmessage
# 1136 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2, MSGBOX_AUTOCLOSE
# 1137 "data/maps/Route110/scripts.pory"
	waitmessage
# 1138 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_PolicemanLeave
# 1139 "data/maps/Route110/scripts.pory"
	waitmovement 47
# 1140 "data/maps/Route110/scripts.pory"
	removeobject 47
# 1141 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1142 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 1143 "data/maps/Route110/scripts.pory"
	release
	end

Route110_Policeman_GiveUturn_2:
# 1122 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_Policeman_South
# 1123 "data/maps/Route110/scripts.pory"
	waitmovement 47
	goto Route110_Policeman_GiveUturn_1


Route110_Policeman_GiveUturnNorth::
# 1148 "data/maps/Route110/scripts.pory"
	lock
# 1149 "data/maps/Route110/scripts.pory"
	msgbox Route110_Policeman_GiveUturn_Text_0, MSGBOX_AUTOCLOSE
# 1150 "data/maps/Route110/scripts.pory"
	waitmessage
# 1151 "data/maps/Route110/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1152 "data/maps/Route110/scripts.pory"
	addobject 48
# 1153 "data/maps/Route110/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 1154 "data/maps/Route110/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq Route110_Policeman_GiveUturnNorth_2
# 1159 "data/maps/Route110/scripts.pory"
	applymovement 48, Route110_Policeman_North2
# 1160 "data/maps/Route110/scripts.pory"
	waitmovement 48
# 1161 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1162 "data/maps/Route110/scripts.pory"
	waitmovement 0
Route110_Policeman_GiveUturnNorth_1:
# 1164 "data/maps/Route110/scripts.pory"
	delay 10
# 1165 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_AUTOCLOSE
# 1166 "data/maps/Route110/scripts.pory"
	waitmessage
# 1167 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 1168 "data/maps/Route110/scripts.pory"
	waitmessage
# 1169 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2, MSGBOX_AUTOCLOSE
# 1170 "data/maps/Route110/scripts.pory"
	waitmessage
# 1171 "data/maps/Route110/scripts.pory"
	applymovement 48, Route110_PolicemanLeaveNorth
# 1172 "data/maps/Route110/scripts.pory"
	waitmovement 48
# 1173 "data/maps/Route110/scripts.pory"
	removeobject 48
# 1174 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1175 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 1176 "data/maps/Route110/scripts.pory"
	release
	end

Route110_Policeman_GiveUturnNorth_2:
# 1155 "data/maps/Route110/scripts.pory"
	applymovement 48, Route110_Policeman_North
# 1156 "data/maps/Route110/scripts.pory"
	waitmovement 48
	goto Route110_Policeman_GiveUturnNorth_1


Route110_EventScript_BikerSouthCyclingRoad::
# 1195 "data/maps/Route110/scripts.pory"
	lock
# 1196 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_BikerSouthCyclingRoad_Text_0
# 1198 "data/maps/Route110/scripts.pory"
	waitmessage
# 1199 "data/maps/Route110/scripts.pory"
	release
	end


# 1229 "data/maps/Route110/scripts.pory"
Route110_Policeman_North:
# 1230 "data/maps/Route110/scripts.pory"
	walk_right
# 1230 "data/maps/Route110/scripts.pory"
	walk_right
# 1230 "data/maps/Route110/scripts.pory"
	walk_right
# 1230 "data/maps/Route110/scripts.pory"
	walk_right
# 1230 "data/maps/Route110/scripts.pory"
	walk_right
# 1230 "data/maps/Route110/scripts.pory"
	walk_right
# 1230 "data/maps/Route110/scripts.pory"
	walk_right
# 1230 "data/maps/Route110/scripts.pory"
	walk_right
	step_end

# 1233 "data/maps/Route110/scripts.pory"
Route110_Policeman_North2:
# 1234 "data/maps/Route110/scripts.pory"
	walk_down
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
# 1235 "data/maps/Route110/scripts.pory"
	walk_right
	step_end

# 1238 "data/maps/Route110/scripts.pory"
Route110_PolicemanLeaveNorth:
# 1239 "data/maps/Route110/scripts.pory"
	walk_left
# 1239 "data/maps/Route110/scripts.pory"
	walk_left
# 1240 "data/maps/Route110/scripts.pory"
	walk_up
# 1240 "data/maps/Route110/scripts.pory"
	walk_up
# 1240 "data/maps/Route110/scripts.pory"
	walk_up
# 1240 "data/maps/Route110/scripts.pory"
	walk_up
# 1240 "data/maps/Route110/scripts.pory"
	walk_up
# 1240 "data/maps/Route110/scripts.pory"
	walk_up
# 1240 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1243 "data/maps/Route110/scripts.pory"
Route110_Policeman_South:
# 1244 "data/maps/Route110/scripts.pory"
	walk_up
# 1244 "data/maps/Route110/scripts.pory"
	walk_up
# 1244 "data/maps/Route110/scripts.pory"
	walk_up
# 1244 "data/maps/Route110/scripts.pory"
	walk_up
# 1244 "data/maps/Route110/scripts.pory"
	walk_up
# 1244 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1247 "data/maps/Route110/scripts.pory"
Route110_Policeman_East:
# 1248 "data/maps/Route110/scripts.pory"
	walk_left
# 1249 "data/maps/Route110/scripts.pory"
	walk_up
# 1249 "data/maps/Route110/scripts.pory"
	walk_up
# 1249 "data/maps/Route110/scripts.pory"
	walk_up
# 1249 "data/maps/Route110/scripts.pory"
	walk_up
# 1249 "data/maps/Route110/scripts.pory"
	walk_up
# 1249 "data/maps/Route110/scripts.pory"
	walk_up
# 1249 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1252 "data/maps/Route110/scripts.pory"
Route110_PolicemanLeave:
# 1253 "data/maps/Route110/scripts.pory"
	walk_down
# 1253 "data/maps/Route110/scripts.pory"
	walk_down
# 1253 "data/maps/Route110/scripts.pory"
	walk_down
# 1253 "data/maps/Route110/scripts.pory"
	walk_down
# 1253 "data/maps/Route110/scripts.pory"
	walk_down
# 1253 "data/maps/Route110/scripts.pory"
	walk_down
# 1253 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

Route110_EventScript_PolicemanHelpTrigger1::
# 1257 "data/maps/Route110/scripts.pory"
	lock
# 1258 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_PolicemanHelp_Text_0, MSGBOX_AUTOCLOSE
# 1259 "data/maps/Route110/scripts.pory"
	waitmessage
# 1260 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1261 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1262 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_PolicemanHelpTrigger2::
# 1267 "data/maps/Route110/scripts.pory"
	lock
# 1268 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_PolicemanHelp_Text_0, MSGBOX_AUTOCLOSE
# 1269 "data/maps/Route110/scripts.pory"
	waitmessage
# 1270 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1271 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1272 "data/maps/Route110/scripts.pory"
	release
	end


# 1276 "data/maps/Route110/scripts.pory"
Route110_WalkUp:
# 1277 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1280 "data/maps/Route110/scripts.pory"
Route110_WalkLeft:
# 1281 "data/maps/Route110/scripts.pory"
	walk_left
	step_end

Route110_EventScript_SaveBikerMusic::
# 1285 "data/maps/Route110/scripts.pory"
	fadenewbgm MUS_RG_SILPH
# 1286 "data/maps/Route110/scripts.pory"
	savebgm MUS_RG_SILPH
	return


Route110_EventScript_Biker1_Text_0:
# 968 "data/maps/Route110/scripts.pory"
	.string "The CYCLING ROAD belongs\n to us now!$"

Route110_EventScript_Dale_Text_0:
# 977 "data/maps/Route110/scripts.pory"
	.string "Don't get in my way!$"

Route110_EventScript_Dale_Text_1:
# 979 "data/maps/Route110/scripts.pory"
	.string "I'll remember this!$"

Route110_EventScript_PolicemanHelp_Text_0:
# 1000 "data/maps/Route110/scripts.pory"
	.string "Help!$"

Route110_Policeman_GiveUturn_Text_0:
# 1116 "data/maps/Route110/scripts.pory"
	.string "Wait!$"

Route110_EventScript_BikerSouthCyclingRoad_Text_0:
# 1196 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRRUB\n BRRRUBRUBRRRRUB!$"

Route110_Text_PolicemanPleaseHelp::
# 1007 "data/maps/Route110/scripts.pory"
	.string "Thank you for saving me.\n You're a strong TRAINER.\l Though the situation is urgent!\p Backup isn't coming, and\n I can't do this alone.\p Their boss is currently riding at\n end of CYCLING ROAD.\p If you can defeat him, all these\n other cowards should flee!\l You have a bike, right?$"

Route110_Text_Speedwagon::
# 1095 "data/maps/Route110/scripts.pory"
	.string "Huh?\n Who's this brat?\p HUH?\n You're telling US to leave?\p You can't stop us from riding!\n Don't try to be a hero!$"

Route110_SpeedwagonDefeat::
# 1104 "data/maps/Route110/scripts.pory"
	.string "Dress for the slide,\n not the ride...$"

Route110_Text_Speedwagon_PostBattle::
# 1109 "data/maps/Route110/scripts.pory"
	.string "H-how are you so strong?!\n Let's get outta here, boys!$"

Route110_Text_PolicemanThankYou::
# 1180 "data/maps/Route110/scripts.pory"
	.string "Thank you for helping me.\n Please, take this as thanks.\p One of those thugs dropped it\n as they fled.$"

Route110_Text_PolicemanThankYou2::
# 1187 "data/maps/Route110/scripts.pory"
	.string "Well, I need to go file a report\n and help gather forces to hunt down\l all the bikers that got away.\p Take care.$"

Route110_Biker_Intro::
# 1203 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRRUB\n BRRRUBRUBRRRRUB!$"

Route110_Biker_Intro2::
# 1208 "data/maps/Route110/scripts.pory"
	.string "Get out of my way!$"

Route110_Biker_Intro3::
# 1212 "data/maps/Route110/scripts.pory"
	.string "The CYCLING ROAD belongs\n to us now!$"

Route110_BikerDefeat::
# 1217 "data/maps/Route110/scripts.pory"
	.string "All outta gas...$"

Route110_BikerDefeat2::
# 1221 "data/maps/Route110/scripts.pory"
	.string "You messed up my ride!$"

Route110_BikerDefeat3::
# 1225 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRUB....$"
