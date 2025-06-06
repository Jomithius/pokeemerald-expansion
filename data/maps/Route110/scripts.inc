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
	goto Route110_EventScript_MayBattleTorchic
# 378 "data/maps/Route110/scripts.pory"
	end
# 379 "data/maps/Route110/scripts.pory"

# 380 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 381 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 382 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 383 "data/maps/Route110/scripts.pory"
	end
# 384 "data/maps/Route110/scripts.pory"

# 385 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 386 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 387 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 388 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 389 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 390 "data/maps/Route110/scripts.pory"
	end
# 391 "data/maps/Route110/scripts.pory"

# 392 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 393 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 394 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattleTreecko
# 395 "data/maps/Route110/scripts.pory"
	end
# 396 "data/maps/Route110/scripts.pory"

# 397 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 398 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 399 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 400 "data/maps/Route110/scripts.pory"
	end
# 401 "data/maps/Route110/scripts.pory"

# 402 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 403 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 404 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 405 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 406 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 407 "data/maps/Route110/scripts.pory"
	end
# 408 "data/maps/Route110/scripts.pory"

# 409 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 410 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 411 "data/maps/Route110/scripts.pory"
	return
# 412 "data/maps/Route110/scripts.pory"

# 413 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 414 "data/maps/Route110/scripts.pory"
	closemessage
# 415 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 416 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 417 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 418 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 419 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 420 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 421 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 422 "data/maps/Route110/scripts.pory"
	delay 45
# 423 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 424 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 425 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 426 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 427 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 428 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 429 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 430 "data/maps/Route110/scripts.pory"
	releaseall
# 431 "data/maps/Route110/scripts.pory"
	end
# 432 "data/maps/Route110/scripts.pory"

# 433 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 434 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 435 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 436 "data/maps/Route110/scripts.pory"
	return
# 437 "data/maps/Route110/scripts.pory"

# 438 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 439 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 440 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 441 "data/maps/Route110/scripts.pory"
	return
# 442 "data/maps/Route110/scripts.pory"

# 443 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 444 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 445 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 446 "data/maps/Route110/scripts.pory"
	return
# 447 "data/maps/Route110/scripts.pory"

# 448 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 449 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 450 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route110/scripts.pory"
	return
# 452 "data/maps/Route110/scripts.pory"

# 453 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 454 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 455 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route110/scripts.pory"
	return
# 457 "data/maps/Route110/scripts.pory"

# 458 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 459 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 460 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 461 "data/maps/Route110/scripts.pory"
	return
# 462 "data/maps/Route110/scripts.pory"

# 463 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 464 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 465 "data/maps/Route110/scripts.pory"
	return
# 466 "data/maps/Route110/scripts.pory"

# 467 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 468 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 469 "data/maps/Route110/scripts.pory"
	return
# 470 "data/maps/Route110/scripts.pory"

# 471 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 472 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 473 "data/maps/Route110/scripts.pory"
	return
# 474 "data/maps/Route110/scripts.pory"

# 475 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 476 "data/maps/Route110/scripts.pory"
	walk_down
# 477 "data/maps/Route110/scripts.pory"
	walk_left
# 478 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 479 "data/maps/Route110/scripts.pory"
	step_end
# 480 "data/maps/Route110/scripts.pory"

# 481 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 482 "data/maps/Route110/scripts.pory"
	walk_down
# 483 "data/maps/Route110/scripts.pory"
	step_end
# 484 "data/maps/Route110/scripts.pory"

# 485 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 486 "data/maps/Route110/scripts.pory"
	walk_down
# 487 "data/maps/Route110/scripts.pory"
	walk_right
# 488 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 489 "data/maps/Route110/scripts.pory"
	step_end
# 490 "data/maps/Route110/scripts.pory"

# 491 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 492 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 493 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 494 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 495 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 496 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 497 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 498 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 499 "data/maps/Route110/scripts.pory"
	step_end
# 500 "data/maps/Route110/scripts.pory"

# 501 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 502 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 503 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 504 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 505 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 506 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 507 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 508 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 509 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 510 "data/maps/Route110/scripts.pory"
	step_end
# 511 "data/maps/Route110/scripts.pory"

# 512 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 513 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 514 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 515 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 516 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 517 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 518 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 519 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 520 "data/maps/Route110/scripts.pory"
	step_end
# 521 "data/maps/Route110/scripts.pory"

# 522 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 523 "data/maps/Route110/scripts.pory"
	lockall
# 524 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 525 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 526 "data/maps/Route110/scripts.pory"

# 527 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 528 "data/maps/Route110/scripts.pory"
	lockall
# 529 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 530 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 531 "data/maps/Route110/scripts.pory"

# 532 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 533 "data/maps/Route110/scripts.pory"
	lockall
# 534 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 535 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 536 "data/maps/Route110/scripts.pory"

# 537 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 538 "data/maps/Route110/scripts.pory"
	lockall
# 539 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 540 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 541 "data/maps/Route110/scripts.pory"

# 542 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 543 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 544 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 545 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 546 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 547 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 548 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 549 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 550 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 551 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 552 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 553 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 554 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 555 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 556 "data/maps/Route110/scripts.pory"
	closemessage
# 557 "data/maps/Route110/scripts.pory"
	delay 20
# 558 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 559 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 560 "data/maps/Route110/scripts.pory"
	delay 10
# 561 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 562 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 563 "data/maps/Route110/scripts.pory"
	delay 20
# 564 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 565 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 566 "data/maps/Route110/scripts.pory"
	delay 30
# 567 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 568 "data/maps/Route110/scripts.pory"
	closemessage
# 569 "data/maps/Route110/scripts.pory"
	delay 30
# 570 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 571 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 572 "data/maps/Route110/scripts.pory"
	waitfanfare
# 573 "data/maps/Route110/scripts.pory"
	closemessage
# 574 "data/maps/Route110/scripts.pory"
	delay 30
# 575 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 576 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 577 "data/maps/Route110/scripts.pory"
	closemessage
# 578 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 579 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 580 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 581 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 582 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 583 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 584 "data/maps/Route110/scripts.pory"
	releaseall
# 585 "data/maps/Route110/scripts.pory"
	end
# 586 "data/maps/Route110/scripts.pory"

# 587 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 588 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 589 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 590 "data/maps/Route110/scripts.pory"
	return
# 591 "data/maps/Route110/scripts.pory"

# 592 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 593 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 594 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 595 "data/maps/Route110/scripts.pory"
	return
# 596 "data/maps/Route110/scripts.pory"

# 597 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 598 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 599 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 600 "data/maps/Route110/scripts.pory"
	return
# 601 "data/maps/Route110/scripts.pory"

# 602 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 603 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 604 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 605 "data/maps/Route110/scripts.pory"
	return
# 606 "data/maps/Route110/scripts.pory"

# 607 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 608 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 609 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 610 "data/maps/Route110/scripts.pory"
	return
# 611 "data/maps/Route110/scripts.pory"

# 612 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 613 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 614 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 615 "data/maps/Route110/scripts.pory"
	return
# 616 "data/maps/Route110/scripts.pory"

# 617 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 618 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 619 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 620 "data/maps/Route110/scripts.pory"
	return
# 621 "data/maps/Route110/scripts.pory"

# 622 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 623 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 624 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 625 "data/maps/Route110/scripts.pory"
	return
# 626 "data/maps/Route110/scripts.pory"

# 627 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 628 "data/maps/Route110/scripts.pory"
	walk_down
# 629 "data/maps/Route110/scripts.pory"
	walk_down
# 630 "data/maps/Route110/scripts.pory"
	walk_down
# 631 "data/maps/Route110/scripts.pory"
	step_end
# 632 "data/maps/Route110/scripts.pory"

# 633 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 634 "data/maps/Route110/scripts.pory"
	walk_down
# 635 "data/maps/Route110/scripts.pory"
	walk_left
# 636 "data/maps/Route110/scripts.pory"
	walk_left
# 637 "data/maps/Route110/scripts.pory"
	walk_down
# 638 "data/maps/Route110/scripts.pory"
	step_end
# 639 "data/maps/Route110/scripts.pory"

# 640 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 641 "data/maps/Route110/scripts.pory"
	walk_down
# 642 "data/maps/Route110/scripts.pory"
	walk_left
# 643 "data/maps/Route110/scripts.pory"
	walk_down
# 644 "data/maps/Route110/scripts.pory"
	step_end
# 645 "data/maps/Route110/scripts.pory"

# 646 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 647 "data/maps/Route110/scripts.pory"
	walk_down
# 648 "data/maps/Route110/scripts.pory"
	walk_down
# 649 "data/maps/Route110/scripts.pory"
	step_end
# 650 "data/maps/Route110/scripts.pory"

# 651 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 652 "data/maps/Route110/scripts.pory"
	walk_down
# 653 "data/maps/Route110/scripts.pory"
	walk_right
# 654 "data/maps/Route110/scripts.pory"
	walk_down
# 655 "data/maps/Route110/scripts.pory"
	step_end
# 656 "data/maps/Route110/scripts.pory"

# 657 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 658 "data/maps/Route110/scripts.pory"
	walk_up
# 659 "data/maps/Route110/scripts.pory"
	walk_up
# 660 "data/maps/Route110/scripts.pory"
	walk_right
# 661 "data/maps/Route110/scripts.pory"
	walk_up
# 662 "data/maps/Route110/scripts.pory"
	walk_up
# 663 "data/maps/Route110/scripts.pory"
	walk_up
# 664 "data/maps/Route110/scripts.pory"
	step_end
# 665 "data/maps/Route110/scripts.pory"

# 666 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 667 "data/maps/Route110/scripts.pory"
	walk_up
# 668 "data/maps/Route110/scripts.pory"
	walk_up
# 669 "data/maps/Route110/scripts.pory"
	walk_up
# 670 "data/maps/Route110/scripts.pory"
	walk_up
# 671 "data/maps/Route110/scripts.pory"
	walk_up
# 672 "data/maps/Route110/scripts.pory"
	step_end
# 673 "data/maps/Route110/scripts.pory"

# 674 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 675 "data/maps/Route110/scripts.pory"
	walk_up
# 676 "data/maps/Route110/scripts.pory"
	walk_up
# 677 "data/maps/Route110/scripts.pory"
	walk_up
# 678 "data/maps/Route110/scripts.pory"
	walk_up
# 679 "data/maps/Route110/scripts.pory"
	walk_up
# 680 "data/maps/Route110/scripts.pory"
	step_end
# 681 "data/maps/Route110/scripts.pory"

# 682 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 683 "data/maps/Route110/scripts.pory"
	walk_up
# 684 "data/maps/Route110/scripts.pory"
	walk_up
# 685 "data/maps/Route110/scripts.pory"
	walk_up
# 686 "data/maps/Route110/scripts.pory"
	walk_up
# 687 "data/maps/Route110/scripts.pory"
	walk_up
# 688 "data/maps/Route110/scripts.pory"
	step_end
# 689 "data/maps/Route110/scripts.pory"

# 690 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 691 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 692 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 693 "data/maps/Route110/scripts.pory"

# 694 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 695 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 696 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 697 "data/maps/Route110/scripts.pory"

# 698 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 699 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 700 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 701 "data/maps/Route110/scripts.pory"

# 702 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 703 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 704 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 705 "data/maps/Route110/scripts.pory"

# 706 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 707 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 708 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 709 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 710 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 711 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 712 "data/maps/Route110/scripts.pory"

# 713 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 714 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 715 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 716 "data/maps/Route110/scripts.pory"

# 717 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 718 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 719 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 720 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 721 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 722 "data/maps/Route110/scripts.pory"

# 723 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 724 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 725 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 726 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 727 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 728 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 729 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 730 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 731 "data/maps/Route110/scripts.pory"

# 732 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 733 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 734 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 735 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 736 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 737 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 738 "data/maps/Route110/scripts.pory"

# 739 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 740 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 741 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 742 "data/maps/Route110/scripts.pory"

# 743 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 744 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 745 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 746 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 747 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 748 "data/maps/Route110/scripts.pory"

# 749 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 750 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 751 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 752 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 753 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 754 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 755 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 756 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 757 "data/maps/Route110/scripts.pory"

# 758 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 759 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 760 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 761 "data/maps/Route110/scripts.pory"

# 762 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 763 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 764 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 765 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 766 "data/maps/Route110/scripts.pory"

# 767 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 768 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 769 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 770 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 771 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 772 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 773 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 774 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 775 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 776 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 777 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 778 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 779 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 780 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 781 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 782 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 783 "data/maps/Route110/scripts.pory"

# 784 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 785 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 786 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 787 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 788 "data/maps/Route110/scripts.pory"

# 789 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 790 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 791 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 792 "data/maps/Route110/scripts.pory"

# 793 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 794 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 795 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 796 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 797 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 798 "data/maps/Route110/scripts.pory"

# 799 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 800 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 801 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 802 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 803 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 804 "data/maps/Route110/scripts.pory"

# 805 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 806 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 807 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 808 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 809 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 810 "data/maps/Route110/scripts.pory"

# 811 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 812 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 813 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 814 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 815 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 816 "data/maps/Route110/scripts.pory"

# 817 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 818 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 819 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 820 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 821 "data/maps/Route110/scripts.pory"

# 822 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 823 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 824 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 825 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 826 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 827 "data/maps/Route110/scripts.pory"

# 828 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 829 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 830 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 831 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 832 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 833 "data/maps/Route110/scripts.pory"

# 834 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 835 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 836 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 837 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 838 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 839 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 840 "data/maps/Route110/scripts.pory"

# 841 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 842 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 843 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 844 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 845 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 846 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 847 "data/maps/Route110/scripts.pory"

# 848 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 849 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 850 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 851 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 852 "data/maps/Route110/scripts.pory"

# 853 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 854 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 855 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 856 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 857 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 858 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 859 "data/maps/Route110/scripts.pory"

# 860 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 861 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 862 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 863 "data/maps/Route110/scripts.pory"

# 864 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 865 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 866 "data/maps/Route110/scripts.pory"

# 867 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 868 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 869 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 870 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 871 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 872 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 873 "data/maps/Route110/scripts.pory"

# 874 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 875 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 876 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 877 "data/maps/Route110/scripts.pory"

# 878 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 879 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 880 "data/maps/Route110/scripts.pory"

# 881 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 882 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 883 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 884 "data/maps/Route110/scripts.pory"

# 885 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 886 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 887 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 888 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 889 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 890 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 891 "data/maps/Route110/scripts.pory"

# 892 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 893 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 894 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 895 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 896 "data/maps/Route110/scripts.pory"

# 897 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 898 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 899 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 900 "data/maps/Route110/scripts.pory"

# 901 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 902 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 903 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 904 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 905 "data/maps/Route110/scripts.pory"

# 906 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 907 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 908 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 909 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 910 "data/maps/Route110/scripts.pory"

# 911 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 912 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 913 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 914 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 915 "data/maps/Route110/scripts.pory"

# 916 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 917 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 918 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 919 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 920 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 921 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 922 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 923 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 924 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 925 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 926 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 927 "data/maps/Route110/scripts.pory"

# 928 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 929 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 930 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 931 "data/maps/Route110/scripts.pory"

# 932 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 933 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 934 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 935 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 936 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 937 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

Route110_EventScript_Biker1::
# 941 "data/maps/Route110/scripts.pory"
	lock
# 942 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Biker1_Text_0, MSGBOX_NPC
# 944 "data/maps/Route110/scripts.pory"
	waitmessage
# 945 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Dale::
# 950 "data/maps/Route110/scripts.pory"
	lock
# 951 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Dale_Text_0
# 952 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_DALE, Route110_BikerDefeat
# 953 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Dale_Text_1
# 954 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 955 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM
# 956 "data/maps/Route110/scripts.pory"
	delay 30
# 957 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 958 "data/maps/Route110/scripts.pory"
	removeobject 42
# 959 "data/maps/Route110/scripts.pory"
	playse SE_FLEE
# 960 "data/maps/Route110/scripts.pory"
	delay 10
# 961 "data/maps/Route110/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 962 "data/maps/Route110/scripts.pory"
	setflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 963 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 4
# 964 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_PolicemanHelp::
# 969 "data/maps/Route110/scripts.pory"
	lock
# 970 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_ROUTE_110_BIKER_POLICEMAN, Route110_EventScript_PolicemanHelp_2
# 974 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_PolicemanHelp_Text_0, MSGBOX_AUTOCLOSE
Route110_EventScript_PolicemanHelp_1:
# 976 "data/maps/Route110/scripts.pory"
	waitmessage
# 977 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_PolicemanHelp_2:
# 971 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanPleaseHelp, MSGBOX_NPC
	goto Route110_EventScript_PolicemanHelp_1


Route110_EventScript_Biker2::
# 995 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Biker_Intro, Route110_BikerDefeat
# 996 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat2, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker3::
# 1001 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DARWIN, Route110_Biker_Intro3, Route110_BikerDefeat2
# 1002 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker4::
# 1007 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DAN, Route110_Biker_Intro2, Route110_BikerDefeat3
# 1008 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker5::
# 1013 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ROB, Route110_Biker_Intro3, Route110_BikerDefeat2
# 1014 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat3, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker6::
# 1019 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Biker_Intro2, Route110_BikerDefeat
# 1020 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Biker7::
# 1025 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_STEPHEN, Route110_Biker_Intro, Route110_BikerDefeat3
# 1026 "data/maps/Route110/scripts.pory"
	msgbox Route110_BikerDefeat2, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Speedwagon::
# 1031 "data/maps/Route110/scripts.pory"
	lock
# 1032 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Speedwagon, MSGBOX_AUTOCLOSE
# 1033 "data/maps/Route110/scripts.pory"
	waitmessage
# 1034 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEEDWAGON, Route110_SpeedwagonDefeat
# 1035 "data/maps/Route110/scripts.pory"
	lock
# 1036 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Speedwagon_PostBattle, MSGBOX_AUTOCLOSE
# 1037 "data/maps/Route110/scripts.pory"
	waitmessage
# 1038 "data/maps/Route110/scripts.pory"
	delay 30
# 1039 "data/maps/Route110/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 1040 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1041 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM
# 1042 "data/maps/Route110/scripts.pory"
	delay 120
# 1043 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 1044 "data/maps/Route110/scripts.pory"
	delay 20
# 1045 "data/maps/Route110/scripts.pory"
	playse SE_FLEE
# 1046 "data/maps/Route110/scripts.pory"
	removeobject 33
# 1047 "data/maps/Route110/scripts.pory"
	removeobject 34
# 1048 "data/maps/Route110/scripts.pory"
	removeobject 35
# 1049 "data/maps/Route110/scripts.pory"
	removeobject 36
# 1050 "data/maps/Route110/scripts.pory"
	removeobject 37
# 1051 "data/maps/Route110/scripts.pory"
	removeobject 38
# 1052 "data/maps/Route110/scripts.pory"
	removeobject 39
# 1053 "data/maps/Route110/scripts.pory"
	removeobject 40
# 1054 "data/maps/Route110/scripts.pory"
	removeobject 41
# 1055 "data/maps/Route110/scripts.pory"
	removeobject 42
# 1056 "data/maps/Route110/scripts.pory"
	removeobject 43
# 1057 "data/maps/Route110/scripts.pory"
	removeobject 44
# 1058 "data/maps/Route110/scripts.pory"
	removeobject 45
# 1059 "data/maps/Route110/scripts.pory"
	delay 10
# 1060 "data/maps/Route110/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 1061 "data/maps/Route110/scripts.pory"
	delay 10
# 1062 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 1063 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 6
# 1064 "data/maps/Route110/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_BIKERS
# 1065 "data/maps/Route110/scripts.pory"
	release
	end


Route110_Policeman_GiveUturn::
# 1089 "data/maps/Route110/scripts.pory"
	lock
# 1090 "data/maps/Route110/scripts.pory"
	msgbox Route110_Policeman_GiveUturn_Text_0, MSGBOX_AUTOCLOSE
# 1091 "data/maps/Route110/scripts.pory"
	waitmessage
# 1092 "data/maps/Route110/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1093 "data/maps/Route110/scripts.pory"
	addobject 46
# 1094 "data/maps/Route110/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 1095 "data/maps/Route110/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq Route110_Policeman_GiveUturn_2
# 1100 "data/maps/Route110/scripts.pory"
	applymovement 46, Route110_Policeman_East
# 1101 "data/maps/Route110/scripts.pory"
	waitmovement 46
# 1102 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 1103 "data/maps/Route110/scripts.pory"
	waitmovement 0
Route110_Policeman_GiveUturn_1:
# 1105 "data/maps/Route110/scripts.pory"
	delay 10
# 1106 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_AUTOCLOSE
# 1107 "data/maps/Route110/scripts.pory"
	waitmessage
# 1108 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 1109 "data/maps/Route110/scripts.pory"
	waitmessage
# 1110 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2, MSGBOX_AUTOCLOSE
# 1111 "data/maps/Route110/scripts.pory"
	waitmessage
# 1112 "data/maps/Route110/scripts.pory"
	applymovement 46, Route110_PolicemanLeave
# 1113 "data/maps/Route110/scripts.pory"
	waitmovement 46
# 1114 "data/maps/Route110/scripts.pory"
	removeobject 46
# 1115 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1116 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 1117 "data/maps/Route110/scripts.pory"
	release
	end

Route110_Policeman_GiveUturn_2:
# 1096 "data/maps/Route110/scripts.pory"
	applymovement 46, Route110_Policeman_South
# 1097 "data/maps/Route110/scripts.pory"
	waitmovement 46
	goto Route110_Policeman_GiveUturn_1


Route110_Policeman_GiveUturnNorth::
# 1122 "data/maps/Route110/scripts.pory"
	lock
# 1123 "data/maps/Route110/scripts.pory"
	msgbox Route110_Policeman_GiveUturn_Text_0, MSGBOX_AUTOCLOSE
# 1124 "data/maps/Route110/scripts.pory"
	waitmessage
# 1125 "data/maps/Route110/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1126 "data/maps/Route110/scripts.pory"
	addobject 47
# 1127 "data/maps/Route110/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 1128 "data/maps/Route110/scripts.pory"
	compare VAR_TEMP_1, DIR_WEST
	goto_if_eq Route110_Policeman_GiveUturnNorth_2
# 1133 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_Policeman_North2
# 1134 "data/maps/Route110/scripts.pory"
	waitmovement 47
# 1135 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1136 "data/maps/Route110/scripts.pory"
	waitmovement 0
Route110_Policeman_GiveUturnNorth_1:
# 1138 "data/maps/Route110/scripts.pory"
	delay 10
# 1139 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_AUTOCLOSE
# 1140 "data/maps/Route110/scripts.pory"
	waitmessage
# 1141 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 1142 "data/maps/Route110/scripts.pory"
	waitmessage
# 1143 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2, MSGBOX_AUTOCLOSE
# 1144 "data/maps/Route110/scripts.pory"
	waitmessage
# 1145 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_PolicemanLeaveNorth
# 1146 "data/maps/Route110/scripts.pory"
	waitmovement 47
# 1147 "data/maps/Route110/scripts.pory"
	removeobject 47
# 1148 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1149 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 8
# 1150 "data/maps/Route110/scripts.pory"
	release
	end

Route110_Policeman_GiveUturnNorth_2:
# 1129 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_Policeman_North
# 1130 "data/maps/Route110/scripts.pory"
	waitmovement 47
	goto Route110_Policeman_GiveUturnNorth_1


Route110_EventScript_BikerSouthCyclingRoad::
# 1169 "data/maps/Route110/scripts.pory"
	lock
# 1170 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_BikerSouthCyclingRoad_Text_0
# 1172 "data/maps/Route110/scripts.pory"
	waitmessage
# 1173 "data/maps/Route110/scripts.pory"
	release
	end


# 1203 "data/maps/Route110/scripts.pory"
Route110_Policeman_North:
# 1204 "data/maps/Route110/scripts.pory"
	walk_right
# 1204 "data/maps/Route110/scripts.pory"
	walk_right
# 1204 "data/maps/Route110/scripts.pory"
	walk_right
# 1204 "data/maps/Route110/scripts.pory"
	walk_right
# 1204 "data/maps/Route110/scripts.pory"
	walk_right
# 1204 "data/maps/Route110/scripts.pory"
	walk_right
# 1204 "data/maps/Route110/scripts.pory"
	walk_right
# 1204 "data/maps/Route110/scripts.pory"
	walk_right
	step_end

# 1207 "data/maps/Route110/scripts.pory"
Route110_Policeman_North2:
# 1208 "data/maps/Route110/scripts.pory"
	walk_down
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
# 1209 "data/maps/Route110/scripts.pory"
	walk_right
	step_end

# 1212 "data/maps/Route110/scripts.pory"
Route110_PolicemanLeaveNorth:
# 1213 "data/maps/Route110/scripts.pory"
	walk_left
# 1213 "data/maps/Route110/scripts.pory"
	walk_left
# 1214 "data/maps/Route110/scripts.pory"
	walk_up
# 1214 "data/maps/Route110/scripts.pory"
	walk_up
# 1214 "data/maps/Route110/scripts.pory"
	walk_up
# 1214 "data/maps/Route110/scripts.pory"
	walk_up
# 1214 "data/maps/Route110/scripts.pory"
	walk_up
# 1214 "data/maps/Route110/scripts.pory"
	walk_up
# 1214 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1217 "data/maps/Route110/scripts.pory"
Route110_Policeman_South:
# 1218 "data/maps/Route110/scripts.pory"
	walk_up
# 1218 "data/maps/Route110/scripts.pory"
	walk_up
# 1218 "data/maps/Route110/scripts.pory"
	walk_up
# 1218 "data/maps/Route110/scripts.pory"
	walk_up
# 1218 "data/maps/Route110/scripts.pory"
	walk_up
# 1218 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1221 "data/maps/Route110/scripts.pory"
Route110_Policeman_East:
# 1222 "data/maps/Route110/scripts.pory"
	walk_left
# 1223 "data/maps/Route110/scripts.pory"
	walk_up
# 1223 "data/maps/Route110/scripts.pory"
	walk_up
# 1223 "data/maps/Route110/scripts.pory"
	walk_up
# 1223 "data/maps/Route110/scripts.pory"
	walk_up
# 1223 "data/maps/Route110/scripts.pory"
	walk_up
# 1223 "data/maps/Route110/scripts.pory"
	walk_up
# 1223 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1226 "data/maps/Route110/scripts.pory"
Route110_PolicemanLeave:
# 1227 "data/maps/Route110/scripts.pory"
	walk_down
# 1227 "data/maps/Route110/scripts.pory"
	walk_down
# 1227 "data/maps/Route110/scripts.pory"
	walk_down
# 1227 "data/maps/Route110/scripts.pory"
	walk_down
# 1227 "data/maps/Route110/scripts.pory"
	walk_down
# 1227 "data/maps/Route110/scripts.pory"
	walk_down
# 1227 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

Route110_EventScript_PolicemanHelpTrigger1::
# 1231 "data/maps/Route110/scripts.pory"
	lock
# 1232 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_PolicemanHelp_Text_0, MSGBOX_AUTOCLOSE
# 1233 "data/maps/Route110/scripts.pory"
	waitmessage
# 1234 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1235 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1236 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_PolicemanHelpTrigger2::
# 1241 "data/maps/Route110/scripts.pory"
	lock
# 1242 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_PolicemanHelp_Text_0, MSGBOX_AUTOCLOSE
# 1243 "data/maps/Route110/scripts.pory"
	waitmessage
# 1244 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1245 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1246 "data/maps/Route110/scripts.pory"
	release
	end


# 1250 "data/maps/Route110/scripts.pory"
Route110_WalkUp:
# 1251 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1254 "data/maps/Route110/scripts.pory"
Route110_WalkLeft:
# 1255 "data/maps/Route110/scripts.pory"
	walk_left
	step_end

Route110_EventScript_SaveBikerMusic::
# 1259 "data/maps/Route110/scripts.pory"
	fadenewbgm MUS_RG_SILPH
# 1260 "data/maps/Route110/scripts.pory"
	savebgm MUS_RG_SILPH
	return


Route110_EventScript_Biker1_Text_0:
# 942 "data/maps/Route110/scripts.pory"
	.string "The CYCLING ROAD belongs\n to us now!$"

Route110_EventScript_Dale_Text_0:
# 951 "data/maps/Route110/scripts.pory"
	.string "Don't get in my way!$"

Route110_EventScript_Dale_Text_1:
# 953 "data/maps/Route110/scripts.pory"
	.string "I'll remember this!$"

Route110_EventScript_PolicemanHelp_Text_0:
# 974 "data/maps/Route110/scripts.pory"
	.string "Help!$"

Route110_Policeman_GiveUturn_Text_0:
# 1090 "data/maps/Route110/scripts.pory"
	.string "Wait!$"

Route110_EventScript_BikerSouthCyclingRoad_Text_0:
# 1170 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRRUB\n BRRRUBRUBRRRRUB!$"

Route110_Text_PolicemanPleaseHelp::
# 981 "data/maps/Route110/scripts.pory"
	.string "Thank you for saving me.\n You're a strong TRAINER.\l Though the situation is urgent!\p Backup isn't coming, and I can't\n do this alone.\p Their boss is currently riding at\n end of CYCLING ROAD.\p If you can defeat him, all these\n other cowards should flee!\l You have a bike, right?$"

Route110_Text_Speedwagon::
# 1069 "data/maps/Route110/scripts.pory"
	.string "Huh?\n Who's this brat?\p HUH?\n You're telling US to leave?\p You can't stop us from riding!\n Don't try to be a hero!$"

Route110_SpeedwagonDefeat::
# 1078 "data/maps/Route110/scripts.pory"
	.string "Dress for the slide,\n not the ride...$"

Route110_Text_Speedwagon_PostBattle::
# 1083 "data/maps/Route110/scripts.pory"
	.string "H-how are you so strong?!\n Let's get outta here, boys!$"

Route110_Text_PolicemanThankYou::
# 1154 "data/maps/Route110/scripts.pory"
	.string "Thank you for helping me.\n Please, take this as thanks.\p One of those thugs dropped it\n as they fled.$"

Route110_Text_PolicemanThankYou2::
# 1161 "data/maps/Route110/scripts.pory"
	.string "Well, I need to go file a report\n and help gather forces to hunt down\l all the bikers that got away.\p Take care.$"

Route110_Biker_Intro::
# 1177 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRRUB\n BRRRUBRUBRRRRUB!$"

Route110_Biker_Intro2::
# 1182 "data/maps/Route110/scripts.pory"
	.string "Get out of my way!$"

Route110_Biker_Intro3::
# 1186 "data/maps/Route110/scripts.pory"
	.string "The CYCLING ROAD belongs\n to us now!$"

Route110_BikerDefeat::
# 1191 "data/maps/Route110/scripts.pory"
	.string "All outta gas...$"

Route110_BikerDefeat2::
# 1195 "data/maps/Route110/scripts.pory"
	.string "You messed up my ride!$"

Route110_BikerDefeat3::
# 1199 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRUB....$"
