# 1 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 19
# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 26
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 27
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 33
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
	end
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 23 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 24 "data/maps/Route110/scripts.pory"
	return
# 25 "data/maps/Route110/scripts.pory"

# 26 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 27 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 28 "data/maps/Route110/scripts.pory"
	.2byte 0
# 29 "data/maps/Route110/scripts.pory"

# 30 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 31 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 32 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 33 "data/maps/Route110/scripts.pory"
	return
# 34 "data/maps/Route110/scripts.pory"

# 35 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 36 "data/maps/Route110/scripts.pory"
	lock
# 37 "data/maps/Route110/scripts.pory"
	faceplayer
# 38 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 39 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 40 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route110/scripts.pory"
	release
# 42 "data/maps/Route110/scripts.pory"
	end
# 43 "data/maps/Route110/scripts.pory"

# 44 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 45 "data/maps/Route110/scripts.pory"
	lock
# 46 "data/maps/Route110/scripts.pory"
	faceplayer
# 47 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 48 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 49 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route110/scripts.pory"
	release
# 51 "data/maps/Route110/scripts.pory"
	end
# 52 "data/maps/Route110/scripts.pory"

# 53 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 54 "data/maps/Route110/scripts.pory"
	lock
# 55 "data/maps/Route110/scripts.pory"
	faceplayer
# 56 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 57 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 58 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route110/scripts.pory"
	release
# 60 "data/maps/Route110/scripts.pory"
	end
# 61 "data/maps/Route110/scripts.pory"

# 62 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 63 "data/maps/Route110/scripts.pory"
	lock
# 64 "data/maps/Route110/scripts.pory"
	faceplayer
# 65 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 66 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 67 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route110/scripts.pory"
	release
# 69 "data/maps/Route110/scripts.pory"
	end
# 70 "data/maps/Route110/scripts.pory"

# 71 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 72 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 73 "data/maps/Route110/scripts.pory"
	end
# 74 "data/maps/Route110/scripts.pory"

# 75 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 76 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 77 "data/maps/Route110/scripts.pory"
	end
# 78 "data/maps/Route110/scripts.pory"

# 79 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 80 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 81 "data/maps/Route110/scripts.pory"
	end
# 82 "data/maps/Route110/scripts.pory"

# 83 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 84 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 85 "data/maps/Route110/scripts.pory"
	end
# 86 "data/maps/Route110/scripts.pory"

# 87 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 88 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 89 "data/maps/Route110/scripts.pory"
	end
# 90 "data/maps/Route110/scripts.pory"

# 91 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 93 "data/maps/Route110/scripts.pory"
	end
# 94 "data/maps/Route110/scripts.pory"

# 95 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 96 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 97 "data/maps/Route110/scripts.pory"
	end
# 98 "data/maps/Route110/scripts.pory"

# 99 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 101 "data/maps/Route110/scripts.pory"
	end
# 102 "data/maps/Route110/scripts.pory"

# 103 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 104 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 105 "data/maps/Route110/scripts.pory"
	end
# 106 "data/maps/Route110/scripts.pory"

# 107 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 109 "data/maps/Route110/scripts.pory"
	end
# 110 "data/maps/Route110/scripts.pory"

# 111 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 112 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 113 "data/maps/Route110/scripts.pory"
	end
# 114 "data/maps/Route110/scripts.pory"

# 115 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 116 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 117 "data/maps/Route110/scripts.pory"
	end
# 118 "data/maps/Route110/scripts.pory"

# 119 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 124 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 125 "data/maps/Route110/scripts.pory"
	end
# 126 "data/maps/Route110/scripts.pory"

# 127 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 128 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 129 "data/maps/Route110/scripts.pory"
	end
# 130 "data/maps/Route110/scripts.pory"

# 131 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 132 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 133 "data/maps/Route110/scripts.pory"
	end
# 134 "data/maps/Route110/scripts.pory"

# 135 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 136 "data/maps/Route110/scripts.pory"
	lockall
# 137 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 138 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 139 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 140 "data/maps/Route110/scripts.pory"
	releaseall
# 141 "data/maps/Route110/scripts.pory"
	end
# 142 "data/maps/Route110/scripts.pory"

# 143 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 144 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 145 "data/maps/Route110/scripts.pory"
	releaseall
# 146 "data/maps/Route110/scripts.pory"
	end
# 147 "data/maps/Route110/scripts.pory"

# 148 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 149 "data/maps/Route110/scripts.pory"
	lock
# 150 "data/maps/Route110/scripts.pory"
	faceplayer
# 151 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 152 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 153 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 154 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 155 "data/maps/Route110/scripts.pory"
	release
# 156 "data/maps/Route110/scripts.pory"
	end
# 157 "data/maps/Route110/scripts.pory"

# 158 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 159 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 160 "data/maps/Route110/scripts.pory"
	release
# 161 "data/maps/Route110/scripts.pory"
	end
# 162 "data/maps/Route110/scripts.pory"

# 163 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 164 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 165 "data/maps/Route110/scripts.pory"
	release
# 166 "data/maps/Route110/scripts.pory"
	end
# 167 "data/maps/Route110/scripts.pory"

# 168 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 169 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 170 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route110/scripts.pory"
	end
# 172 "data/maps/Route110/scripts.pory"

# 173 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 174 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 175 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route110/scripts.pory"
	end
# 177 "data/maps/Route110/scripts.pory"

# 178 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 179 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 180 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 181 "data/maps/Route110/scripts.pory"
	end
# 182 "data/maps/Route110/scripts.pory"

# 183 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 184 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 185 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route110/scripts.pory"
	end
# 187 "data/maps/Route110/scripts.pory"

# 188 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 189 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 190 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 191 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 192 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 193 "data/maps/Route110/scripts.pory"
	release
# 194 "data/maps/Route110/scripts.pory"
	end
# 195 "data/maps/Route110/scripts.pory"

# 196 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 197 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 198 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 200 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 201 "data/maps/Route110/scripts.pory"
	release
# 202 "data/maps/Route110/scripts.pory"
	end
# 203 "data/maps/Route110/scripts.pory"

# 204 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 205 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 206 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route110/scripts.pory"
	end
# 208 "data/maps/Route110/scripts.pory"

# 209 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 210 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 211 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route110/scripts.pory"
	end
# 213 "data/maps/Route110/scripts.pory"

# 214 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 215 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 216 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 217 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 218 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 219 "data/maps/Route110/scripts.pory"
	release
# 220 "data/maps/Route110/scripts.pory"
	end
# 221 "data/maps/Route110/scripts.pory"

# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 223 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 224 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 226 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 227 "data/maps/Route110/scripts.pory"
	release
# 228 "data/maps/Route110/scripts.pory"
	end
# 229 "data/maps/Route110/scripts.pory"

# 230 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 231 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 232 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route110/scripts.pory"
	end
# 234 "data/maps/Route110/scripts.pory"

# 235 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 236 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 237 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 238 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 239 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 240 "data/maps/Route110/scripts.pory"
	release
# 241 "data/maps/Route110/scripts.pory"
	end
# 242 "data/maps/Route110/scripts.pory"

# 243 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 244 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 245 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 247 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 248 "data/maps/Route110/scripts.pory"
	release
# 249 "data/maps/Route110/scripts.pory"
	end
# 250 "data/maps/Route110/scripts.pory"

# 251 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 252 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 253 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route110/scripts.pory"
	end
# 255 "data/maps/Route110/scripts.pory"

# 256 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 257 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 258 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route110/scripts.pory"
	end
# 260 "data/maps/Route110/scripts.pory"

# 261 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 262 "data/maps/Route110/scripts.pory"
	end
# 263 "data/maps/Route110/scripts.pory"

# 264 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 265 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 266 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route110/scripts.pory"
	end
# 268 "data/maps/Route110/scripts.pory"

# 269 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 270 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 271 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route110/scripts.pory"
	end
# 273 "data/maps/Route110/scripts.pory"

# 274 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 275 "data/maps/Route110/scripts.pory"
	lockall
# 276 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 277 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 279 "data/maps/Route110/scripts.pory"
	releaseall
# 280 "data/maps/Route110/scripts.pory"
	end
# 281 "data/maps/Route110/scripts.pory"

# 282 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 283 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 284 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 285 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 287 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 288 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 289 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 290 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 291 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 292 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 293 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 294 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 295 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 296 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 297 "data/maps/Route110/scripts.pory"
	end
# 298 "data/maps/Route110/scripts.pory"

# 299 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 300 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 301 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 302 "data/maps/Route110/scripts.pory"
	end
# 303 "data/maps/Route110/scripts.pory"

# 304 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 305 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 306 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 307 "data/maps/Route110/scripts.pory"
	end
# 308 "data/maps/Route110/scripts.pory"

# 309 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 310 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 311 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 312 "data/maps/Route110/scripts.pory"
	end
# 313 "data/maps/Route110/scripts.pory"

# 314 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 315 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 316 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 317 "data/maps/Route110/scripts.pory"
	end
# 318 "data/maps/Route110/scripts.pory"

# 319 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 320 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 321 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 322 "data/maps/Route110/scripts.pory"
	end
# 323 "data/maps/Route110/scripts.pory"

# 324 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 325 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 326 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 327 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 328 "data/maps/Route110/scripts.pory"
	return
# 329 "data/maps/Route110/scripts.pory"

# 330 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 331 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 332 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 333 "data/maps/Route110/scripts.pory"
	end
# 334 "data/maps/Route110/scripts.pory"

# 335 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 336 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 337 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 338 "data/maps/Route110/scripts.pory"
	end
# 339 "data/maps/Route110/scripts.pory"

# 340 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 341 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 342 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 343 "data/maps/Route110/scripts.pory"
	end
# 344 "data/maps/Route110/scripts.pory"

# 345 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 346 "data/maps/Route110/scripts.pory"
	lockall
# 347 "data/maps/Route110/scripts.pory"
	checkplayergender
# 348 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 349 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 350 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 351 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 353 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 355 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route110/scripts.pory"
	delay 30
# 357 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 358 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 359 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 360 "data/maps/Route110/scripts.pory"
	checkplayergender
# 361 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 362 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 363 "data/maps/Route110/scripts.pory"
	releaseall
# 364 "data/maps/Route110/scripts.pory"
	end
# 365 "data/maps/Route110/scripts.pory"

# 366 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 367 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 368 "data/maps/Route110/scripts.pory"
	return
# 369 "data/maps/Route110/scripts.pory"

# 370 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 371 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 372 "data/maps/Route110/scripts.pory"
	return
# 373 "data/maps/Route110/scripts.pory"

# 374 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 375 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 376 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 377 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 378 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 379 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 380 "data/maps/Route110/scripts.pory"
	end
# 381 "data/maps/Route110/scripts.pory"

# 382 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 383 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 384 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 385 "data/maps/Route110/scripts.pory"
	end
# 386 "data/maps/Route110/scripts.pory"

# 387 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 388 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 389 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 390 "data/maps/Route110/scripts.pory"
	end
# 391 "data/maps/Route110/scripts.pory"

# 392 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 393 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 394 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 395 "data/maps/Route110/scripts.pory"
	end
# 396 "data/maps/Route110/scripts.pory"

# 397 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 398 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 399 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 400 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 401 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 402 "data/maps/Route110/scripts.pory"
	end
# 403 "data/maps/Route110/scripts.pory"

# 404 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 405 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 406 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 407 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 408 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 409 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 410 "data/maps/Route110/scripts.pory"
	end
# 411 "data/maps/Route110/scripts.pory"

# 412 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 413 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 414 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 415 "data/maps/Route110/scripts.pory"
	end
# 416 "data/maps/Route110/scripts.pory"

# 417 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 418 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 419 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 420 "data/maps/Route110/scripts.pory"
	end
# 421 "data/maps/Route110/scripts.pory"

# 422 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 423 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 424 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 425 "data/maps/Route110/scripts.pory"
	end
# 426 "data/maps/Route110/scripts.pory"

# 427 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 428 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 429 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 430 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 431 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 432 "data/maps/Route110/scripts.pory"
	end
# 433 "data/maps/Route110/scripts.pory"

# 434 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 435 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 436 "data/maps/Route110/scripts.pory"
	return
# 437 "data/maps/Route110/scripts.pory"

# 438 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 439 "data/maps/Route110/scripts.pory"
	closemessage
# 440 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 441 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 442 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 443 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 444 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 445 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 446 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 447 "data/maps/Route110/scripts.pory"
	delay 45
# 448 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 449 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 450 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 451 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 452 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 453 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 454 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 455 "data/maps/Route110/scripts.pory"
	releaseall
# 456 "data/maps/Route110/scripts.pory"
	end
# 457 "data/maps/Route110/scripts.pory"

# 458 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 459 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 460 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 461 "data/maps/Route110/scripts.pory"
	return
# 462 "data/maps/Route110/scripts.pory"

# 463 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 464 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 465 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 466 "data/maps/Route110/scripts.pory"
	return
# 467 "data/maps/Route110/scripts.pory"

# 468 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 469 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 470 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route110/scripts.pory"
	return
# 472 "data/maps/Route110/scripts.pory"

# 473 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 474 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 475 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 476 "data/maps/Route110/scripts.pory"
	return
# 477 "data/maps/Route110/scripts.pory"

# 478 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 479 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 480 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 481 "data/maps/Route110/scripts.pory"
	return
# 482 "data/maps/Route110/scripts.pory"

# 483 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 484 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 485 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 486 "data/maps/Route110/scripts.pory"
	return
# 487 "data/maps/Route110/scripts.pory"

# 488 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 489 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 490 "data/maps/Route110/scripts.pory"
	return
# 491 "data/maps/Route110/scripts.pory"

# 492 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 493 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 494 "data/maps/Route110/scripts.pory"
	return
# 495 "data/maps/Route110/scripts.pory"

# 496 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 497 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 498 "data/maps/Route110/scripts.pory"
	return
# 499 "data/maps/Route110/scripts.pory"

# 500 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 501 "data/maps/Route110/scripts.pory"
	walk_down
# 502 "data/maps/Route110/scripts.pory"
	walk_left
# 503 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 504 "data/maps/Route110/scripts.pory"
	step_end
# 505 "data/maps/Route110/scripts.pory"

# 506 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 507 "data/maps/Route110/scripts.pory"
	walk_down
# 508 "data/maps/Route110/scripts.pory"
	step_end
# 509 "data/maps/Route110/scripts.pory"

# 510 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 511 "data/maps/Route110/scripts.pory"
	walk_down
# 512 "data/maps/Route110/scripts.pory"
	walk_right
# 513 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 514 "data/maps/Route110/scripts.pory"
	step_end
# 515 "data/maps/Route110/scripts.pory"

# 516 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 517 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 525 "data/maps/Route110/scripts.pory"

# 526 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 527 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	walk_fast_down
# 535 "data/maps/Route110/scripts.pory"
	step_end
# 536 "data/maps/Route110/scripts.pory"

# 537 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 538 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 546 "data/maps/Route110/scripts.pory"

# 547 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 548 "data/maps/Route110/scripts.pory"
	lockall
# 549 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 550 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 551 "data/maps/Route110/scripts.pory"

# 552 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 553 "data/maps/Route110/scripts.pory"
	lockall
# 554 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 555 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 556 "data/maps/Route110/scripts.pory"

# 557 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 558 "data/maps/Route110/scripts.pory"
	lockall
# 559 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 560 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 561 "data/maps/Route110/scripts.pory"

# 562 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 563 "data/maps/Route110/scripts.pory"
	lockall
# 564 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 565 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 566 "data/maps/Route110/scripts.pory"

# 567 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 568 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 569 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 570 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 571 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 572 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 573 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 574 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 575 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 576 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 577 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 578 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 579 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 580 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 581 "data/maps/Route110/scripts.pory"
	closemessage
# 582 "data/maps/Route110/scripts.pory"
	delay 20
# 583 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 584 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 585 "data/maps/Route110/scripts.pory"
	delay 10
# 586 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 587 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 588 "data/maps/Route110/scripts.pory"
	delay 20
# 589 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 590 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 591 "data/maps/Route110/scripts.pory"
	delay 30
# 592 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 593 "data/maps/Route110/scripts.pory"
	closemessage
# 594 "data/maps/Route110/scripts.pory"
	delay 30
# 595 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 596 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 597 "data/maps/Route110/scripts.pory"
	waitfanfare
# 598 "data/maps/Route110/scripts.pory"
	closemessage
# 599 "data/maps/Route110/scripts.pory"
	delay 30
# 600 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 601 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 602 "data/maps/Route110/scripts.pory"
	closemessage
# 603 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 604 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 605 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 606 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 607 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 608 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 609 "data/maps/Route110/scripts.pory"
	releaseall
# 610 "data/maps/Route110/scripts.pory"
	end
# 611 "data/maps/Route110/scripts.pory"

# 612 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 613 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 614 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 615 "data/maps/Route110/scripts.pory"
	return
# 616 "data/maps/Route110/scripts.pory"

# 617 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 618 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 619 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 620 "data/maps/Route110/scripts.pory"
	return
# 621 "data/maps/Route110/scripts.pory"

# 622 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 623 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 624 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 625 "data/maps/Route110/scripts.pory"
	return
# 626 "data/maps/Route110/scripts.pory"

# 627 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 628 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 629 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route110/scripts.pory"
	return
# 631 "data/maps/Route110/scripts.pory"

# 632 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 633 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 634 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route110/scripts.pory"
	return
# 636 "data/maps/Route110/scripts.pory"

# 637 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 638 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 639 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 640 "data/maps/Route110/scripts.pory"
	return
# 641 "data/maps/Route110/scripts.pory"

# 642 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 643 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 644 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 645 "data/maps/Route110/scripts.pory"
	return
# 646 "data/maps/Route110/scripts.pory"

# 647 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 648 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 649 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 650 "data/maps/Route110/scripts.pory"
	return
# 651 "data/maps/Route110/scripts.pory"

# 652 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 653 "data/maps/Route110/scripts.pory"
	walk_down
# 654 "data/maps/Route110/scripts.pory"
	walk_down
# 655 "data/maps/Route110/scripts.pory"
	walk_down
# 656 "data/maps/Route110/scripts.pory"
	step_end
# 657 "data/maps/Route110/scripts.pory"

# 658 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 659 "data/maps/Route110/scripts.pory"
	walk_down
# 660 "data/maps/Route110/scripts.pory"
	walk_left
# 661 "data/maps/Route110/scripts.pory"
	walk_left
# 662 "data/maps/Route110/scripts.pory"
	walk_down
# 663 "data/maps/Route110/scripts.pory"
	step_end
# 664 "data/maps/Route110/scripts.pory"

# 665 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 666 "data/maps/Route110/scripts.pory"
	walk_down
# 667 "data/maps/Route110/scripts.pory"
	walk_left
# 668 "data/maps/Route110/scripts.pory"
	walk_down
# 669 "data/maps/Route110/scripts.pory"
	step_end
# 670 "data/maps/Route110/scripts.pory"

# 671 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 672 "data/maps/Route110/scripts.pory"
	walk_down
# 673 "data/maps/Route110/scripts.pory"
	walk_down
# 674 "data/maps/Route110/scripts.pory"
	step_end
# 675 "data/maps/Route110/scripts.pory"

# 676 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 677 "data/maps/Route110/scripts.pory"
	walk_down
# 678 "data/maps/Route110/scripts.pory"
	walk_right
# 679 "data/maps/Route110/scripts.pory"
	walk_down
# 680 "data/maps/Route110/scripts.pory"
	step_end
# 681 "data/maps/Route110/scripts.pory"

# 682 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 683 "data/maps/Route110/scripts.pory"
	walk_up
# 684 "data/maps/Route110/scripts.pory"
	walk_up
# 685 "data/maps/Route110/scripts.pory"
	walk_right
# 686 "data/maps/Route110/scripts.pory"
	walk_up
# 687 "data/maps/Route110/scripts.pory"
	walk_up
# 688 "data/maps/Route110/scripts.pory"
	walk_up
# 689 "data/maps/Route110/scripts.pory"
	step_end
# 690 "data/maps/Route110/scripts.pory"

# 691 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 692 "data/maps/Route110/scripts.pory"
	walk_up
# 693 "data/maps/Route110/scripts.pory"
	walk_up
# 694 "data/maps/Route110/scripts.pory"
	walk_up
# 695 "data/maps/Route110/scripts.pory"
	walk_up
# 696 "data/maps/Route110/scripts.pory"
	walk_up
# 697 "data/maps/Route110/scripts.pory"
	step_end
# 698 "data/maps/Route110/scripts.pory"

# 699 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 700 "data/maps/Route110/scripts.pory"
	walk_up
# 701 "data/maps/Route110/scripts.pory"
	walk_up
# 702 "data/maps/Route110/scripts.pory"
	walk_up
# 703 "data/maps/Route110/scripts.pory"
	walk_up
# 704 "data/maps/Route110/scripts.pory"
	walk_up
# 705 "data/maps/Route110/scripts.pory"
	step_end
# 706 "data/maps/Route110/scripts.pory"

# 707 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 708 "data/maps/Route110/scripts.pory"
	walk_up
# 709 "data/maps/Route110/scripts.pory"
	walk_up
# 710 "data/maps/Route110/scripts.pory"
	walk_up
# 711 "data/maps/Route110/scripts.pory"
	walk_up
# 712 "data/maps/Route110/scripts.pory"
	walk_up
# 713 "data/maps/Route110/scripts.pory"
	step_end
# 714 "data/maps/Route110/scripts.pory"

# 715 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 716 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 717 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 718 "data/maps/Route110/scripts.pory"

# 719 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 720 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 721 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 722 "data/maps/Route110/scripts.pory"

# 723 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 724 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 725 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 726 "data/maps/Route110/scripts.pory"

# 727 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 728 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 729 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 730 "data/maps/Route110/scripts.pory"

# 731 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 732 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 733 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 734 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 735 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 736 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 737 "data/maps/Route110/scripts.pory"

# 738 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 739 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 740 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 741 "data/maps/Route110/scripts.pory"

# 742 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 743 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 744 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 745 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 746 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 747 "data/maps/Route110/scripts.pory"

# 748 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 749 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 750 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 751 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 752 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 753 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 754 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 755 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 756 "data/maps/Route110/scripts.pory"

# 757 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 758 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 759 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 760 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 761 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 762 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 763 "data/maps/Route110/scripts.pory"

# 764 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 765 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 766 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 767 "data/maps/Route110/scripts.pory"

# 768 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 769 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 770 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 771 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 772 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 773 "data/maps/Route110/scripts.pory"

# 774 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 775 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 776 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 777 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 778 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 779 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 780 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 781 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 782 "data/maps/Route110/scripts.pory"

# 783 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 784 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 785 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 786 "data/maps/Route110/scripts.pory"

# 787 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 788 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 789 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 790 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 791 "data/maps/Route110/scripts.pory"

# 792 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 793 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 794 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 795 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 796 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 797 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 798 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 799 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 800 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 801 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 802 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 803 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 804 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 805 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 806 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 807 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 808 "data/maps/Route110/scripts.pory"

# 809 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 810 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 811 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 812 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 813 "data/maps/Route110/scripts.pory"

# 814 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 815 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 816 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 817 "data/maps/Route110/scripts.pory"

# 818 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 819 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 820 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 821 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 822 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 823 "data/maps/Route110/scripts.pory"

# 824 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 825 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 826 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 827 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 828 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 829 "data/maps/Route110/scripts.pory"

# 830 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 831 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 832 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 833 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 834 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 835 "data/maps/Route110/scripts.pory"

# 836 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 837 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 838 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 839 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 840 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 841 "data/maps/Route110/scripts.pory"

# 842 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 843 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 844 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 845 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 846 "data/maps/Route110/scripts.pory"

# 847 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 848 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 849 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 850 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 851 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 852 "data/maps/Route110/scripts.pory"

# 853 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 854 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 855 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 856 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 857 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 858 "data/maps/Route110/scripts.pory"

# 859 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 860 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 861 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 862 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 863 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 864 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 865 "data/maps/Route110/scripts.pory"

# 866 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 867 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 868 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 869 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 870 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 871 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 872 "data/maps/Route110/scripts.pory"

# 873 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 874 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 875 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 876 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 877 "data/maps/Route110/scripts.pory"

# 878 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 879 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 880 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 881 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 882 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 883 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 884 "data/maps/Route110/scripts.pory"

# 885 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 886 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 887 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 888 "data/maps/Route110/scripts.pory"

# 889 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 890 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 891 "data/maps/Route110/scripts.pory"

# 892 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 893 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 894 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 895 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 896 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 897 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 898 "data/maps/Route110/scripts.pory"

# 899 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 900 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 901 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 902 "data/maps/Route110/scripts.pory"

# 903 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 904 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 905 "data/maps/Route110/scripts.pory"

# 906 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 907 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 908 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 909 "data/maps/Route110/scripts.pory"

# 910 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 911 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 912 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 913 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 914 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 915 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 916 "data/maps/Route110/scripts.pory"

# 917 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 918 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 919 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 920 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 921 "data/maps/Route110/scripts.pory"

# 922 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 923 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 924 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 925 "data/maps/Route110/scripts.pory"

# 926 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 927 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 928 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 929 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 930 "data/maps/Route110/scripts.pory"

# 931 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 932 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 933 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 934 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 935 "data/maps/Route110/scripts.pory"

# 936 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 937 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 938 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 939 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 940 "data/maps/Route110/scripts.pory"

# 941 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 942 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 943 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 944 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 945 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 946 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 947 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 948 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 949 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 950 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 951 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 952 "data/maps/Route110/scripts.pory"

# 953 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 954 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 955 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 956 "data/maps/Route110/scripts.pory"

# 957 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 958 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 959 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 960 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 961 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 962 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

Route110_EventScript_Biker1::
# 966 "data/maps/Route110/scripts.pory"
	lock
# 967 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Biker1_Text_0, MSGBOX_NPC
# 969 "data/maps/Route110/scripts.pory"
	waitmessage
# 970 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Dale::
# 975 "data/maps/Route110/scripts.pory"
	lockall
# 976 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Dale_Text_0
# 977 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_DALE, Route110_BikerDefeat
# 978 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_Dale_Text_1
# 979 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 980 "data/maps/Route110/scripts.pory"
	removeobject 43
# 981 "data/maps/Route110/scripts.pory"
	playse SE_FLEE
# 982 "data/maps/Route110/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 983 "data/maps/Route110/scripts.pory"
	setflag FLAG_ROUTE_110_BIKER_POLICEMAN
# 984 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_PolicemanHelp::
# 989 "data/maps/Route110/scripts.pory"
	lock
# 990 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_ROUTE_110_BIKER_POLICEMAN, Route110_EventScript_PolicemanHelp_2
# 994 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_PolicemanHelp_Text_0, MSGBOX_AUTOCLOSE
Route110_EventScript_PolicemanHelp_1:
# 996 "data/maps/Route110/scripts.pory"
	waitmessage
# 997 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_PolicemanHelp_2:
# 991 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanPleaseHelp, MSGBOX_NPC
	goto Route110_EventScript_PolicemanHelp_1


Route110_EventScript_Biker2::
# 1014 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Biker_Intro, Route110_BikerDefeat
	end


Route110_EventScript_Biker3::
# 1019 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DARWIN, Route110_Biker_Intro3, Route110_BikerDefeat2
	end


Route110_EventScript_Biker4::
# 1024 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DAN, Route110_Biker_Intro2, Route110_BikerDefeat3
	end


Route110_EventScript_Biker5::
# 1029 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ROB, Route110_Biker_Intro3, Route110_BikerDefeat2
	end


Route110_EventScript_Biker6::
# 1034 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_STEPHEN, Route110_Biker_Intro2, Route110_BikerDefeat
	end


Route110_EventScript_Biker7::
# 1039 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Biker_Intro, Route110_BikerDefeat3
	end


Route110_EventScript_Speedwagon::
# 1044 "data/maps/Route110/scripts.pory"
	lock
# 1045 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Speedwagon, MSGBOX_AUTOCLOSE
# 1046 "data/maps/Route110/scripts.pory"
	waitmessage
# 1047 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEEDWAGON, Route110_SpeedwagonDefeat
# 1048 "data/maps/Route110/scripts.pory"
	lock
# 1049 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Speedwagon_PostBattle, MSGBOX_AUTOCLOSE
# 1050 "data/maps/Route110/scripts.pory"
	waitmessage
# 1051 "data/maps/Route110/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 1052 "data/maps/Route110/scripts.pory"
	delay 10
# 1053 "data/maps/Route110/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1054 "data/maps/Route110/scripts.pory"
	playse SE_THUNDERSTORM
# 1055 "data/maps/Route110/scripts.pory"
	delay 20
# 1056 "data/maps/Route110/scripts.pory"
	playse SE_FLEE
# 1057 "data/maps/Route110/scripts.pory"
	removeobject 34
# 1058 "data/maps/Route110/scripts.pory"
	removeobject 35
# 1059 "data/maps/Route110/scripts.pory"
	removeobject 36
# 1060 "data/maps/Route110/scripts.pory"
	removeobject 37
# 1061 "data/maps/Route110/scripts.pory"
	removeobject 38
# 1062 "data/maps/Route110/scripts.pory"
	removeobject 39
# 1063 "data/maps/Route110/scripts.pory"
	removeobject 40
# 1064 "data/maps/Route110/scripts.pory"
	removeobject 41
# 1065 "data/maps/Route110/scripts.pory"
	removeobject 42
# 1066 "data/maps/Route110/scripts.pory"
	removeobject 43
# 1067 "data/maps/Route110/scripts.pory"
	removeobject 44
# 1068 "data/maps/Route110/scripts.pory"
	removeobject 45
# 1069 "data/maps/Route110/scripts.pory"
	removeobject 46
# 1070 "data/maps/Route110/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 1071 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 1072 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 5
# 1073 "data/maps/Route110/scripts.pory"
	setflag FLAG_ROUTE110_HIDE_BIKERS
# 1074 "data/maps/Route110/scripts.pory"
	clearflag FLAG_ROUTE110_HIDE_CYCLIST
# 1075 "data/maps/Route110/scripts.pory"
	release
	end


Route110_Policeman_GiveBrickBreak::
# 1099 "data/maps/Route110/scripts.pory"
	lock
# 1100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Policeman_GiveBrickBreak_Text_0, MSGBOX_AUTOCLOSE
# 1101 "data/maps/Route110/scripts.pory"
	waitmessage
# 1102 "data/maps/Route110/scripts.pory"
	clearflag FLAG_HIDE_POLICEMAN_ROUTE_110
# 1103 "data/maps/Route110/scripts.pory"
	addobject 47
# 1104 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1105 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1106 "data/maps/Route110/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 1107 "data/maps/Route110/scripts.pory"
	compare VAR_TEMP_1, DIR_SOUTH
	goto_if_eq Route110_Policeman_GiveBrickBreak_2
# 1111 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_Policeman_East
Route110_Policeman_GiveBrickBreak_1:
# 1113 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou, MSGBOX_AUTOCLOSE
# 1114 "data/maps/Route110/scripts.pory"
	waitmessage
# 1115 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 1116 "data/maps/Route110/scripts.pory"
	waitmessage
# 1117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PolicemanThankYou2
# 1118 "data/maps/Route110/scripts.pory"
	waitmessage
# 1119 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_PolicemanLeave
# 1120 "data/maps/Route110/scripts.pory"
	waitmovement 47
# 1121 "data/maps/Route110/scripts.pory"
	setvar VAR_SPEEDWAGON_STATE, 7
# 1122 "data/maps/Route110/scripts.pory"
	release
	end

Route110_Policeman_GiveBrickBreak_2:
# 1108 "data/maps/Route110/scripts.pory"
	applymovement 47, Route110_Policeman_South
	goto Route110_Policeman_GiveBrickBreak_1


Route110_EventScript_BikerSouthCyclingRoad::
# 1141 "data/maps/Route110/scripts.pory"
	lock
# 1142 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_BikerSouthCyclingRoad_Text_0
# 1144 "data/maps/Route110/scripts.pory"
	waitmessage
# 1145 "data/maps/Route110/scripts.pory"
	release
	end


# 1176 "data/maps/Route110/scripts.pory"
Route110_Policeman_South:
# 1177 "data/maps/Route110/scripts.pory"
	walk_up
# 1177 "data/maps/Route110/scripts.pory"
	walk_up
# 1177 "data/maps/Route110/scripts.pory"
	walk_up
# 1177 "data/maps/Route110/scripts.pory"
	walk_up
# 1177 "data/maps/Route110/scripts.pory"
	walk_up
# 1177 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1180 "data/maps/Route110/scripts.pory"
Route110_Policeman_East:
# 1181 "data/maps/Route110/scripts.pory"
	walk_left
# 1182 "data/maps/Route110/scripts.pory"
	walk_up
# 1182 "data/maps/Route110/scripts.pory"
	walk_up
# 1182 "data/maps/Route110/scripts.pory"
	walk_up
# 1182 "data/maps/Route110/scripts.pory"
	walk_up
# 1182 "data/maps/Route110/scripts.pory"
	walk_up
# 1182 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1185 "data/maps/Route110/scripts.pory"
Route110_PolicemanLeave:
# 1186 "data/maps/Route110/scripts.pory"
	walk_down
# 1186 "data/maps/Route110/scripts.pory"
	walk_down
# 1186 "data/maps/Route110/scripts.pory"
	walk_down
# 1186 "data/maps/Route110/scripts.pory"
	walk_down
# 1186 "data/maps/Route110/scripts.pory"
	walk_down
# 1186 "data/maps/Route110/scripts.pory"
	walk_down
# 1186 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

Route110_EventScript_Biker1_Text_0:
# 967 "data/maps/Route110/scripts.pory"
	.string "The CYCLING ROAD belongs\n to us now!$"

Route110_EventScript_Dale_Text_0:
# 976 "data/maps/Route110/scripts.pory"
	.string "Don't get in my way!$"

Route110_EventScript_Dale_Text_1:
# 978 "data/maps/Route110/scripts.pory"
	.string "I'll remember this!$"

Route110_EventScript_PolicemanHelp_Text_0:
# 994 "data/maps/Route110/scripts.pory"
	.string "Help!$"

Route110_Policeman_GiveBrickBreak_Text_0:
# 1100 "data/maps/Route110/scripts.pory"
	.string "Wait!$"

Route110_EventScript_BikerSouthCyclingRoad_Text_0:
# 1142 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRRUB\n BRRRUBRUBRRRRUB!$"

Route110_Text_PolicemanPleaseHelp::
# 1001 "data/maps/Route110/scripts.pory"
	.string "Thanks you for saving me.\n You're a strong TRAINER.\l Though, the situation is urgent!\p Backup isn't coming, and\n I can't do this alone.\p Their boss is currently riding at\n end of CYCLING ROAD.\p If you can defeat him, all these\n other cowards should flee!$"

Route110_Text_Speedwagon::
# 1079 "data/maps/Route110/scripts.pory"
	.string "Huh?\n Who's this brat?\p Huh?\n You're telling US to leave?\p You can't stop us from riding!\p Don't try to be a hero!$"

Route110_SpeedwagonDefeat::
# 1088 "data/maps/Route110/scripts.pory"
	.string "Dress for the slide,\n not the ride...$"

Route110_Text_Speedwagon_PostBattle::
# 1093 "data/maps/Route110/scripts.pory"
	.string "H-how are you so strong?! Let's get outta here, boys!$"

Route110_Text_PolicemanThankYou::
# 1126 "data/maps/Route110/scripts.pory"
	.string "Thank you for helping me.\n Please, take this as thanks.$"

Route110_Text_PolicemanThankYou2::
# 1131 "data/maps/Route110/scripts.pory"
	.string "TM31, BRICK BREAK, deals damage\n and also breaks screens.\p Well, I need to go file a report\n and help gather forces to hunt\l down all the bikers that got away.\p Take care.$"

Route110_Biker_Intro::
# 1149 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRRUB\n BRRRUBRUBRRRRUB!$"

Route110_Biker_Intro2::
# 1154 "data/maps/Route110/scripts.pory"
	.string "Get out of my way!$"

Route110_Biker_Intro3::
# 1158 "data/maps/Route110/scripts.pory"
	.string "The CYCLING ROAD belongs\n to us now!$"

Route110_BikerDefeat::
# 1163 "data/maps/Route110/scripts.pory"
	.string "All outta gas...$"

Route110_BikerDefeat2::
# 1167 "data/maps/Route110/scripts.pory"
	.string "You messed up my ride!$"

Route110_BikerDefeat3::
# 1171 "data/maps/Route110/scripts.pory"
	.string "BRRRRUBBB BRRRUB....$"
