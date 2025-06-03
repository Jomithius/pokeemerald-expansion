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
Route112_EventScript_Larry::
# 72 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 73 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route112/scripts.pory"
	end
# 75 "data/maps/Route112/scripts.pory"

# 76 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 77 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 78 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route112/scripts.pory"
	end
# 80 "data/maps/Route112/scripts.pory"

# 81 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 82 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 83 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route112/scripts.pory"
	end
# 85 "data/maps/Route112/scripts.pory"

# 86 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 87 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 88 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route112/scripts.pory"
	end
# 90 "data/maps/Route112/scripts.pory"

# 91 "data/maps/Route112/scripts.pory"
Route112_Text_LeaderGoingToAwakenThing:
# 92 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
# 93 "data/maps/Route112/scripts.pory"
	.string "to awaken that thing?$"
# 94 "data/maps/Route112/scripts.pory"

# 95 "data/maps/Route112/scripts.pory"
Route112_Text_YeahWeNeedMeteorite:
# 96 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
# 97 "data/maps/Route112/scripts.pory"
	.string "we need a METEORITE to do it.$"
# 98 "data/maps/Route112/scripts.pory"

# 99 "data/maps/Route112/scripts.pory"
Route112_Text_OhThatsWhyCrewWentToFallarbor:
# 100 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
# 101 "data/maps/Route112/scripts.pory"
	.string "of the crew went out to FALLARBOR.$"
# 102 "data/maps/Route112/scripts.pory"

# 103 "data/maps/Route112/scripts.pory"
Route112_Text_CantLetAnyonePassUntilTheyreBack:
# 104 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
# 105 "data/maps/Route112/scripts.pory"
	.string "we're not to let anyone pass, right.$"
# 106 "data/maps/Route112/scripts.pory"

# 107 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 108 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
# 109 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 110 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to LAVARIDGE.$"
# 111 "data/maps/Route112/scripts.pory"

# 112 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 113 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
# 114 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 115 "data/maps/Route112/scripts.pory"

# 116 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 117 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
# 118 "data/maps/Route112/scripts.pory"
	.string "“For LAVARIDGE TOWN or the summit,\n"
# 119 "data/maps/Route112/scripts.pory"
	.string "please take the CABLE CAR.”$"
# 120 "data/maps/Route112/scripts.pory"

# 121 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 122 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
# 123 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"

Route112_Trigger_Emo::
# 129 "data/maps/Route112/scripts.pory"
	lockall
# 130 "data/maps/Route112/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_1
# 131 "data/maps/Route112/scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq Route112_Trigger_Emo_1
# 135 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_Emo_West
	return

Route112_Trigger_Emo_1:
# 132 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_Emo
	return


Route112_EventScript_Emo::
# 140 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_PlayerWalkBack
# 141 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route112/scripts.pory"
	playse SE_EXIT
# 143 "data/maps/Route112/scripts.pory"
	clearflag FLAG_EMO_ROUTE_112
# 144 "data/maps/Route112/scripts.pory"
	addobject 14
# 145 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 146 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 147 "data/maps/Route112/scripts.pory"
	delay 40
# 148 "data/maps/Route112/scripts.pory"
	playse SE_PIN
# 149 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 150 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 151 "data/maps/Route112/scripts.pory"
	delay 40
# 152 "data/maps/Route112/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 153 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 154 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo1, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route112/scripts.pory"
	waitmessage
# 157 "data/maps/Route112/scripts.pory"
	call Route112_EventScript_RivalBattle
# 158 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo2, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route112/scripts.pory"
	waitmessage
# 160 "data/maps/Route112/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 161 "data/maps/Route112/scripts.pory"
	waitmessage
# 162 "data/maps/Route112/scripts.pory"
	delay 10
# 163 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 164 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 165 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo3, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route112/scripts.pory"
	waitmessage
# 167 "data/maps/Route112/scripts.pory"
	delay 20
# 168 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Emo_Text_0, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route112/scripts.pory"
	waitmessage
# 170 "data/maps/Route112/scripts.pory"
	delay 30
# 171 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_FacePlayer
# 172 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 173 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo4, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route112/scripts.pory"
	waitmessage
# 175 "data/maps/Route112/scripts.pory"
	applymovement 14, Route112_Movement_EmoLeave
# 176 "data/maps/Route112/scripts.pory"
	delay 30
# 177 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 178 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 179 "data/maps/Route112/scripts.pory"
	removeobject 14
# 180 "data/maps/Route112/scripts.pory"
	fadedefaultbgm
# 181 "data/maps/Route112/scripts.pory"
	setflag FLAG_EMO_ROUTE_112
# 182 "data/maps/Route112/scripts.pory"
	setvar VAR_MISA_STATE, 5
# 183 "data/maps/Route112/scripts.pory"
	releaseall
	end


Route112_EventScript_Emo_West::
# 188 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_PlayerWalkBackWest
# 189 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route112/scripts.pory"
	playse SE_EXIT
# 191 "data/maps/Route112/scripts.pory"
	clearflag FLAG_EMO_ROUTE_112
# 192 "data/maps/Route112/scripts.pory"
	addobject 14
# 193 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 194 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 195 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
# 196 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 197 "data/maps/Route112/scripts.pory"
	delay 40
# 198 "data/maps/Route112/scripts.pory"
	playse SE_PIN
# 199 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 200 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 201 "data/maps/Route112/scripts.pory"
	delay 40
# 202 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 203 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route112/scripts.pory"
	playbgm MUS_PYRITE_THEME, TRUE
# 205 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo1, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route112/scripts.pory"
	waitmessage
# 207 "data/maps/Route112/scripts.pory"
	call Route112_EventScript_RivalBattle
# 208 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo2, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route112/scripts.pory"
	waitmessage
# 210 "data/maps/Route112/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 211 "data/maps/Route112/scripts.pory"
	delay 10
# 212 "data/maps/Route112/scripts.pory"
	waitmessage
# 213 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceDown
# 214 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 215 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo3, MSGBOX_AUTOCLOSE
# 216 "data/maps/Route112/scripts.pory"
	waitmessage
# 217 "data/maps/Route112/scripts.pory"
	delay 20
# 218 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Emo_Text_0, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route112/scripts.pory"
	waitmessage
# 220 "data/maps/Route112/scripts.pory"
	delay 30
# 221 "data/maps/Route112/scripts.pory"
	applymovement 14, Common_Movement_FacePlayer
# 222 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 223 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_Emo4, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route112/scripts.pory"
	waitmessage
# 225 "data/maps/Route112/scripts.pory"
	applymovement 14, Route112_Movement_EmoLeaveWest
# 226 "data/maps/Route112/scripts.pory"
	delay 30
# 227 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 228 "data/maps/Route112/scripts.pory"
	delay 20
# 229 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 230 "data/maps/Route112/scripts.pory"
	waitmovement 14
# 231 "data/maps/Route112/scripts.pory"
	removeobject 14
# 232 "data/maps/Route112/scripts.pory"
	fadedefaultbgm
# 233 "data/maps/Route112/scripts.pory"
	setflag FLAG_EMO_ROUTE_112
# 234 "data/maps/Route112/scripts.pory"
	setvar VAR_MISA_STATE, 5
# 235 "data/maps/Route112/scripts.pory"
	releaseall
	end


Route112_EventScript_RivalBattle::
# 240 "data/maps/Route112/scripts.pory"
	trainerbattle_no_intro TRAINER_JOMITHIUS_2, Route112_EmoDefeat
	return


# 284 "data/maps/Route112/scripts.pory"
Route112_Movement_EmoLeave:
# 285 "data/maps/Route112/scripts.pory"
	walk_right
# 285 "data/maps/Route112/scripts.pory"
	walk_right
# 285 "data/maps/Route112/scripts.pory"
	walk_right
# 285 "data/maps/Route112/scripts.pory"
	walk_right
# 285 "data/maps/Route112/scripts.pory"
	walk_right
# 285 "data/maps/Route112/scripts.pory"
	walk_right
# 286 "data/maps/Route112/scripts.pory"
	walk_down
# 286 "data/maps/Route112/scripts.pory"
	walk_down
# 287 "data/maps/Route112/scripts.pory"
	walk_right
# 287 "data/maps/Route112/scripts.pory"
	walk_right
	step_end

# 290 "data/maps/Route112/scripts.pory"
Route112_Movement_EmoLeaveWest:
# 291 "data/maps/Route112/scripts.pory"
	walk_down
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 292 "data/maps/Route112/scripts.pory"
	walk_right
# 293 "data/maps/Route112/scripts.pory"
	walk_down
# 293 "data/maps/Route112/scripts.pory"
	walk_down
# 293 "data/maps/Route112/scripts.pory"
	walk_down
	step_end

# 296 "data/maps/Route112/scripts.pory"
Route112_PlayerWalkBack:
# 297 "data/maps/Route112/scripts.pory"
	lock_facing_direction
# 298 "data/maps/Route112/scripts.pory"
	walk_down
# 299 "data/maps/Route112/scripts.pory"
	delay_16
# 300 "data/maps/Route112/scripts.pory"
	unlock_facing_direction
	step_end

# 303 "data/maps/Route112/scripts.pory"
Route112_PlayerWalkBackWest:
# 304 "data/maps/Route112/scripts.pory"
	lock_facing_direction
# 305 "data/maps/Route112/scripts.pory"
	walk_right
# 306 "data/maps/Route112/scripts.pory"
	delay_16
# 307 "data/maps/Route112/scripts.pory"
	unlock_facing_direction
	step_end

Route112_EventScript_Emo_Text_0:
# 168 "data/maps/Route112/scripts.pory"
	.string "...$"

Route112_Text_Emo1::
# 245 "data/maps/Route112/scripts.pory"
	.string "JAMES: {PLAYER}...\n We meet again.\p My power has increased since we\n last battled.\p My eye... It now burns hotter than\n the FIERY PATH..\p This time, I, JOMITHIUS, will\n achieve victory!$"

Route112_EmoDefeat::
# 256 "data/maps/Route112/scripts.pory"
	.string "I'm in my abyss...$"

Route112_Text_Emo2::
# 260 "data/maps/Route112/scripts.pory"
	.string "JAMES: So victory still eludes\n me...\l You're a worthy adversary.\p Out of respect for your\n power, I'll give you this.$"

Route112_Text_Emo3::
# 268 "data/maps/Route112/scripts.pory"
	.string "I'm going to challenge the\n LAVARIDGE GYM after exploring\l the DESERT.\p If you're going to head north,\n be careful.\p There's been a lot of weirdos\n lurking around here lately.$"

Route112_Text_Emo4::
# 278 "data/maps/Route112/scripts.pory"
	.string "JAMES: .. What?\p Well, see ya, {PLAYER}.\n Next time, I won't lose.$"
