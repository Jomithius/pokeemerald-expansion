# 1 "data/maps/Route112/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 2 "data/maps/Route112/scripts.pory"
.set LOCALID_GRUNT_2, 6
# 3 "data/maps/Route112/scripts.pory"

# 4 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 5 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 6 "data/maps/Route112/scripts.pory"
	.byte 0
# 7 "data/maps/Route112/scripts.pory"

# 8 "data/maps/Route112/scripts.pory"
Route112_OnTransition:
# 9 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 10 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 11 "data/maps/Route112/scripts.pory"
	end
# 12 "data/maps/Route112/scripts.pory"

# 13 "data/maps/Route112/scripts.pory"
Route112_EventScript_MagmaGrunts::
# 14 "data/maps/Route112/scripts.pory"
	lockall
# 15 "data/maps/Route112/scripts.pory"
	delay 40
# 16 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 17 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route112/scripts.pory"
	delay 20
# 19 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 20 "data/maps/Route112/scripts.pory"
	closemessage
# 21 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 22 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route112/scripts.pory"
	delay 40
# 24 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 25 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route112/scripts.pory"
	delay 20
# 27 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 28 "data/maps/Route112/scripts.pory"
	closemessage
# 29 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 30 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route112/scripts.pory"
	delay 40
# 32 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 33 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route112/scripts.pory"
	delay 20
# 35 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 36 "data/maps/Route112/scripts.pory"
	closemessage
# 37 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 38 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route112/scripts.pory"
	delay 40
# 40 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 41 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route112/scripts.pory"
	delay 20
# 43 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 44 "data/maps/Route112/scripts.pory"
	closemessage
# 45 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 46 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route112/scripts.pory"
	releaseall
# 48 "data/maps/Route112/scripts.pory"
	end
# 49 "data/maps/Route112/scripts.pory"

# 50 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 51 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 52 "data/maps/Route112/scripts.pory"
	end
# 53 "data/maps/Route112/scripts.pory"

# 54 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 55 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 56 "data/maps/Route112/scripts.pory"
	end
# 57 "data/maps/Route112/scripts.pory"

# 58 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 59 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 60 "data/maps/Route112/scripts.pory"
	end
# 61 "data/maps/Route112/scripts.pory"

# 62 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 63 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 64 "data/maps/Route112/scripts.pory"
	end
# 65 "data/maps/Route112/scripts.pory"

# 66 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 67 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 68 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route112/scripts.pory"
	end
# 70 "data/maps/Route112/scripts.pory"

# 71 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 72 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 73 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 74 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 75 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 76 "data/maps/Route112/scripts.pory"
	release
# 77 "data/maps/Route112/scripts.pory"
	end
# 78 "data/maps/Route112/scripts.pory"

# 79 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 80 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 81 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 83 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 84 "data/maps/Route112/scripts.pory"
	release
# 85 "data/maps/Route112/scripts.pory"
	end
# 86 "data/maps/Route112/scripts.pory"

# 87 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 88 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 89 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route112/scripts.pory"
	end
# 91 "data/maps/Route112/scripts.pory"

# 92 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 93 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 94 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route112/scripts.pory"
	end
# 96 "data/maps/Route112/scripts.pory"

# 97 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 98 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 99 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route112/scripts.pory"
	end
# 101 "data/maps/Route112/scripts.pory"

# 102 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 103 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 104 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route112/scripts.pory"
	end
# 106 "data/maps/Route112/scripts.pory"

# 107 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 108 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 109 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route112/scripts.pory"
	end
# 111 "data/maps/Route112/scripts.pory"

# 112 "data/maps/Route112/scripts.pory"
Route112_Text_LeaderGoingToAwakenThing:
# 113 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
# 114 "data/maps/Route112/scripts.pory"
	.string "to awaken that thing?$"
# 115 "data/maps/Route112/scripts.pory"

# 116 "data/maps/Route112/scripts.pory"
Route112_Text_YeahWeNeedMeteorite:
# 117 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
# 118 "data/maps/Route112/scripts.pory"
	.string "we need a METEORITE to do it.$"
# 119 "data/maps/Route112/scripts.pory"

# 120 "data/maps/Route112/scripts.pory"
Route112_Text_OhThatsWhyCrewWentToFallarbor:
# 121 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
# 122 "data/maps/Route112/scripts.pory"
	.string "of the crew went out to FALLARBOR.$"
# 123 "data/maps/Route112/scripts.pory"

# 124 "data/maps/Route112/scripts.pory"
Route112_Text_CantLetAnyonePassUntilTheyreBack:
# 125 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
# 126 "data/maps/Route112/scripts.pory"
	.string "we're not to let anyone pass, right.$"
# 127 "data/maps/Route112/scripts.pory"

# 128 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 129 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
# 130 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 131 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to LAVARIDGE.$"
# 132 "data/maps/Route112/scripts.pory"

# 133 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 134 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
# 135 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 136 "data/maps/Route112/scripts.pory"

# 137 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 138 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
# 139 "data/maps/Route112/scripts.pory"
	.string "“For LAVARIDGE TOWN or the summit,\n"
# 140 "data/maps/Route112/scripts.pory"
	.string "please take the CABLE CAR.”$"
# 141 "data/maps/Route112/scripts.pory"

# 142 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 143 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
# 144 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"

Route112_Trigger_Emo::
# 150 "data/maps/Route112/scripts.pory"
	lockall
# 151 "data/maps/Route112/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 152 "data/maps/Route112/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq Route112_Trigger_Emo_1
# 156 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_Emo_West
	return

Route112_Trigger_Emo_1:
# 153 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_Emo
	return


Route112_EventScript_Emo::
# 161 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_PlayerWalkBack
# 162 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route112/scripts.pory"
	playse SE_EXIT
# 164 "data/maps/Route112/scripts.pory"
	clearflag FLAG_EMO_ROUTE_112
# 165 "data/maps/Route112/scripts.pory"
	addobject 15
# 166 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 167 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 168 "data/maps/Route112/scripts.pory"
	delay 40
# 169 "data/maps/Route112/scripts.pory"
	playse SE_PIN
# 170 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 171 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 172 "data/maps/Route112/scripts.pory"
	delay 40
# 173 "data/maps/Route112/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 174 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 175 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo1, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route112/scripts.pory"
	waitmessage
# 178 "data/maps/Route112/scripts.pory"
	call Route112_EventScript_RivalBattle
# 179 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo2, MSGBOX_AUTOCLOSE
# 180 "data/maps/Route112/scripts.pory"
	waitmessage
# 181 "data/maps/Route112/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 182 "data/maps/Route112/scripts.pory"
	waitmessage
# 183 "data/maps/Route112/scripts.pory"
	delay 10
# 184 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 185 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 186 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo3, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route112/scripts.pory"
	waitmessage
# 188 "data/maps/Route112/scripts.pory"
	delay 20
# 189 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Emo_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route112/scripts.pory"
	waitmessage
# 191 "data/maps/Route112/scripts.pory"
	delay 30
# 192 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_FacePlayer
# 193 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 194 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo4, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route112/scripts.pory"
	waitmessage
# 196 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_Movement_EmoLeave
# 197 "data/maps/Route112/scripts.pory"
	delay 30
# 198 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 199 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 200 "data/maps/Route112/scripts.pory"
	removeobject 15
# 201 "data/maps/Route112/scripts.pory"
	fadedefaultbgm
# 202 "data/maps/Route112/scripts.pory"
	setflag FLAG_EMO_ROUTE_112
# 203 "data/maps/Route112/scripts.pory"
	setvar VAR_MISA_STATE, 5
# 204 "data/maps/Route112/scripts.pory"
	releaseall
	end


Route112_EventScript_Emo_West::
# 209 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_PlayerWalkBackWest
# 210 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route112/scripts.pory"
	playse SE_EXIT
# 212 "data/maps/Route112/scripts.pory"
	clearflag FLAG_EMO_ROUTE_112
# 213 "data/maps/Route112/scripts.pory"
	addobject 15
# 214 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 215 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 216 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 217 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 218 "data/maps/Route112/scripts.pory"
	delay 40
# 219 "data/maps/Route112/scripts.pory"
	playse SE_PIN
# 220 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 221 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 222 "data/maps/Route112/scripts.pory"
	delay 40
# 223 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 224 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route112/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 226 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo1, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route112/scripts.pory"
	waitmessage
# 228 "data/maps/Route112/scripts.pory"
	call Route112_EventScript_RivalBattle
# 229 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo2, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route112/scripts.pory"
	waitmessage
# 231 "data/maps/Route112/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 232 "data/maps/Route112/scripts.pory"
	delay 10
# 233 "data/maps/Route112/scripts.pory"
	waitmessage
# 234 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 235 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 236 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo3, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route112/scripts.pory"
	waitmessage
# 238 "data/maps/Route112/scripts.pory"
	delay 20
# 239 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Emo_Text_0, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route112/scripts.pory"
	waitmessage
# 241 "data/maps/Route112/scripts.pory"
	delay 30
# 242 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_FacePlayer
# 243 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 244 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo4, MSGBOX_AUTOCLOSE
# 245 "data/maps/Route112/scripts.pory"
	waitmessage
# 246 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_Movement_EmoLeaveWest
# 247 "data/maps/Route112/scripts.pory"
	delay 30
# 248 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 249 "data/maps/Route112/scripts.pory"
	delay 20
# 250 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 251 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 252 "data/maps/Route112/scripts.pory"
	removeobject 15
# 253 "data/maps/Route112/scripts.pory"
	fadedefaultbgm
# 254 "data/maps/Route112/scripts.pory"
	setflag FLAG_EMO_ROUTE_112
# 255 "data/maps/Route112/scripts.pory"
	setvar VAR_MISA_STATE, 5
# 256 "data/maps/Route112/scripts.pory"
	releaseall
	end


Route112_EventScript_RivalBattle::
# 261 "data/maps/Route112/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_2, Route112_EmoDefeat
	return


# 305 "data/maps/Route112/scripts.pory"
Route112_Movement_EmoLeave:
# 306 "data/maps/Route112/scripts.pory"
	walk_right
# 306 "data/maps/Route112/scripts.pory"
	walk_right
# 306 "data/maps/Route112/scripts.pory"
	walk_right
# 306 "data/maps/Route112/scripts.pory"
	walk_right
# 306 "data/maps/Route112/scripts.pory"
	walk_right
# 306 "data/maps/Route112/scripts.pory"
	walk_right
# 307 "data/maps/Route112/scripts.pory"
	walk_down
# 307 "data/maps/Route112/scripts.pory"
	walk_down
# 308 "data/maps/Route112/scripts.pory"
	walk_right
# 308 "data/maps/Route112/scripts.pory"
	walk_right
	step_end

# 311 "data/maps/Route112/scripts.pory"
Route112_Movement_EmoLeaveWest:
# 312 "data/maps/Route112/scripts.pory"
	walk_down
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 313 "data/maps/Route112/scripts.pory"
	walk_right
# 314 "data/maps/Route112/scripts.pory"
	walk_down
# 314 "data/maps/Route112/scripts.pory"
	walk_down
# 314 "data/maps/Route112/scripts.pory"
	walk_down
	step_end

# 317 "data/maps/Route112/scripts.pory"
Route112_PlayerWalkBack:
# 318 "data/maps/Route112/scripts.pory"
	lock_facing_direction
# 319 "data/maps/Route112/scripts.pory"
	walk_down
# 320 "data/maps/Route112/scripts.pory"
	delay_16
# 321 "data/maps/Route112/scripts.pory"
	unlock_facing_direction
	step_end

# 324 "data/maps/Route112/scripts.pory"
Route112_PlayerWalkBackWest:
# 325 "data/maps/Route112/scripts.pory"
	lock_facing_direction
# 326 "data/maps/Route112/scripts.pory"
	walk_right
# 327 "data/maps/Route112/scripts.pory"
	delay_16
# 328 "data/maps/Route112/scripts.pory"
	unlock_facing_direction
	step_end

Route112_EventScript_Emo_Text_0:
# 189 "data/maps/Route112/scripts.pory"
	.string "...$"

Route112_Text_Emo1::
# 266 "data/maps/Route112/scripts.pory"
	.string "JAMES: {PLAYER}...\n We meet again.\p My power has increased since we\n last battled.\p My eye... It now burns hotter than\n the FIERY PATH..\p This time, I, JOMITHIUS, will\n achieve victory!$"

Route112_EmoDefeat::
# 277 "data/maps/Route112/scripts.pory"
	.string "I'm in my abyss...$"

Route112_Text_Emo2::
# 281 "data/maps/Route112/scripts.pory"
	.string "JAMES: So victory still eludes\n me...\l You're a worthy adversary.\p Out of respect for your\n power, I'll give you this.$"

Route112_Text_Emo3::
# 289 "data/maps/Route112/scripts.pory"
	.string "I'm going to challenge the\n LAVARIDGE GYM after exploring\l the DESERT.\p If you're going to head north,\n be careful.\p There's been a lot of weirdos\n lurking around here lately.$"

Route112_Text_Emo4::
# 299 "data/maps/Route112/scripts.pory"
	.string "JAMES: .. What?\p Well, see ya, {PLAYER}.\n Next time, I won't lose.$"
