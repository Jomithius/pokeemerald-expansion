# 1 "data/maps/Void/scripts.pory"
Void_MapScripts::
# 2 "data/maps/Void/scripts.pory"
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 3 "data/maps/Void/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, Void_OnResume
# 4 "data/maps/Void/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Void_OnTransition
# 5 "data/maps/Void/scripts.pory"
    .byte 0

Void_OnTransition::
# 9 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 10 "data/maps/Void/scripts.pory"
	clearflag FLAG_SYS_DYNAMIC_LEVELS
# 11 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_8
# 12 "data/maps/Void/scripts.pory"
	setrespawn HEAL_LOCATION_VOID
	end


Void_OnResume::
# 17 "data/maps/Void/scripts.pory"
	call_if_set FLAG_DEFEATED_CEO, Void_UpdateState
	end


Void_UpdateState::
# 22 "data/maps/Void/scripts.pory"
	removeobject 2
# 23 "data/maps/Void/scripts.pory"
	removeobject 3
	return


Void_EventScript_FinalBattle::
# 28 "data/maps/Void/scripts.pory"
	lockall
# 30 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 31 "data/maps/Void/scripts.pory"
	waitmovement 0
# 32 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/Void/scripts.pory"
	waitmessage
# 41 "data/maps/Void/scripts.pory"
	applymovement 1, Void_Movement_WalkToEdge
# 42 "data/maps/Void/scripts.pory"
	waitmovement 1
# 43 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 44 "data/maps/Void/scripts.pory"
	waitmovement 0
# 45 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 50 "data/maps/Void/scripts.pory"
	waitmovement 1
# 51 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/Void/scripts.pory"
	waitmessage
# 59 "data/maps/Void/scripts.pory"
	applymovement 1, Void_Movement_WalkToPlayer
# 60 "data/maps/Void/scripts.pory"
	delay 45
# 61 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 62 "data/maps/Void/scripts.pory"
	waitmovement 1
# 63 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 71 "data/maps/Void/scripts.pory"
	waitmessage
# 72 "data/maps/Void/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 8
# 73 "data/maps/Void/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 74 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 75 "data/maps/Void/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 76 "data/maps/Void/scripts.pory"
	callnative SetBattleScene
# 77 "data/maps/Void/scripts.pory"
	call Void_EventScript_PlayerGetsInPosition
# 78 "data/maps/Void/scripts.pory"
	playfirstmoncry
# 79 "data/maps/Void/scripts.pory"
	waitmoncry
# 80 "data/maps/Void/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 81 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 85 "data/maps/Void/scripts.pory"
	waitmessage
# 86 "data/maps/Void/scripts.pory"
	setflag FLAG_DEFEATED_CEO
# 87 "data/maps/Void/scripts.pory"
	playbgm MUS_NONE, TRUE
# 88 "data/maps/Void/scripts.pory"
	trainerbattle_no_intro TRAINER_JIMMY, Void_EventScript_FinalBattle_Text_5
# 89 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 90 "data/maps/Void/scripts.pory"
	waitmovement 0
# 91 "data/maps/Void/scripts.pory"
	callnative RemoveFollowingPokemon
# 92 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 93 "data/maps/Void/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 94 "data/maps/Void/scripts.pory"
	goto Void_EventScript_GameEnd
# 95 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_FinalBattle2::
# 100 "data/maps/Void/scripts.pory"
	lockall
# 101 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 102 "data/maps/Void/scripts.pory"
	waitmovement 0
# 103 "data/maps/Void/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 104 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle2_Text_0, MSGBOX_AUTOCLOSE
# 107 "data/maps/Void/scripts.pory"
	waitmessage
# 108 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 109 "data/maps/Void/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 110 "data/maps/Void/scripts.pory"
	callnative SetBattleScene
# 111 "data/maps/Void/scripts.pory"
	call Void_EventScript_PlayerGetsInPosition
# 112 "data/maps/Void/scripts.pory"
	playfirstmoncry
# 113 "data/maps/Void/scripts.pory"
	waitmoncry
# 114 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle2_Text_1, MSGBOX_AUTOCLOSE
# 115 "data/maps/Void/scripts.pory"
	waitmessage
# 116 "data/maps/Void/scripts.pory"
	setflag FLAG_DEFEATED_CEO
# 117 "data/maps/Void/scripts.pory"
	playbgm MUS_NONE, TRUE
# 118 "data/maps/Void/scripts.pory"
	trainerbattle_no_intro TRAINER_JIMMY, Void_EventScript_FinalBattle_Text_5
# 119 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 120 "data/maps/Void/scripts.pory"
	waitmovement 0
# 121 "data/maps/Void/scripts.pory"
	callnative RemoveFollowingPokemon
# 122 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 123 "data/maps/Void/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 124 "data/maps/Void/scripts.pory"
	goto Void_EventScript_GameEnd
	end


Void_EventScript_GameEnd::
# 129 "data/maps/Void/scripts.pory"
	playbgm MUS_THE_DAY_WILL_COME, FALSE
# 130 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 131 "data/maps/Void/scripts.pory"
	waitmovement 1
# 132 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_0, MSGBOX_AUTOCLOSE
# 134 "data/maps/Void/scripts.pory"
	waitmessage
# 135 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 136 "data/maps/Void/scripts.pory"
	waitmovement 1
# 139 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_1, MSGBOX_AUTOCLOSE
# 144 "data/maps/Void/scripts.pory"
	waitmessage
# 145 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 146 "data/maps/Void/scripts.pory"
	waitmovement 0
# 147 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_2, MSGBOX_AUTOCLOSE
# 155 "data/maps/Void/scripts.pory"
	waitmessage
# 156 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_JIMMY_SNOWDRIFT_CITY
# 157 "data/maps/Void/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 158 "data/maps/Void/scripts.pory"
	goto_if_set FLAG_SYS_STARTED_AS_MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 159 "data/maps/Void/scripts.pory"
	goto_if_set FLAG_SYS_STARTED_AS_FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 160 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_PlayerGetsInPosition::
# 165 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 166 "data/maps/Void/scripts.pory"
	waitmovement 0
# 167 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 168 "data/maps/Void/scripts.pory"
	callnative UpdateFollowingPokemon
# 169 "data/maps/Void/scripts.pory"
	playse SE_BALL_OPEN
# 170 "data/maps/Void/scripts.pory"
	fadescreen FADE_TO_WHITE
# 171 "data/maps/Void/scripts.pory"
	addobject 3
# 172 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_8
# 173 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 174 "data/maps/Void/scripts.pory"
	waitmovement 0
# 175 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 176 "data/maps/Void/scripts.pory"
	waitmovement 0
# 177 "data/maps/Void/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 178 "data/maps/Void/scripts.pory"
	delay 30
# 179 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 180 "data/maps/Void/scripts.pory"
	waitmovement 0
# 181 "data/maps/Void/scripts.pory"
	delay 30
	return


EventScript_FinalRematchesUnlocked::
# 186 "data/maps/Void/scripts.pory"
	lockall
# 187 "data/maps/Void/scripts.pory"
	pokenavcall PokenavText_FinalMatches
# 188 "data/maps/Void/scripts.pory"
	waitmessage
# 189 "data/maps/Void/scripts.pory"
	delay 30
# 190 "data/maps/Void/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 191 "data/maps/Void/scripts.pory"
	waitfanfare
# 192 "data/maps/Void/scripts.pory"
	msgbox EventScript_FinalRematchesUnlocked_Text_0, MSGBOX_AUTOCLOSE
# 198 "data/maps/Void/scripts.pory"
	waitmessage
# 199 "data/maps/Void/scripts.pory"
	addpcitem ITEM_MASTER_BALL, 25
# 200 "data/maps/Void/scripts.pory"
	addpcitem ITEM_BIG_NUGGET, 33
# 201 "data/maps/Void/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 6
# 202 "data/maps/Void/scripts.pory"
	setvar VAR_GYM_LEADER_COUNT, 0
# 203 "data/maps/Void/scripts.pory"
	setflag FLAG_SYS_FINAL_REMATCH
# 204 "data/maps/Void/scripts.pory"
	setflag FLAG_HIDE_GYM_LEADERS_NORTHERN_HOENN
# 205 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_GYM_LEADERS
# 206 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 207 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_MOMO_ARIA_MOSSDEEP_CITY
# 208 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_STAFF_EMPLOYEE_MERCHANTS
# 209 "data/maps/Void/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NPC_RATDUARDO_SIDEQUEST
# 210 "data/maps/Void/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 10
# 211 "data/maps/Void/scripts.pory"
	releaseall
	end


# 239 "data/maps/Void/scripts.pory"
Void_Movement_WalkToEdge:
# 240 "data/maps/Void/scripts.pory"
	walk_right
# 240 "data/maps/Void/scripts.pory"
	walk_right
# 241 "data/maps/Void/scripts.pory"
	walk_down
# 242 "data/maps/Void/scripts.pory"
	walk_in_place_right
	step_end

# 245 "data/maps/Void/scripts.pory"
Void_Movement_WalkToPlayer:
# 246 "data/maps/Void/scripts.pory"
	walk_up
# 247 "data/maps/Void/scripts.pory"
	walk_left
# 247 "data/maps/Void/scripts.pory"
	walk_left
# 248 "data/maps/Void/scripts.pory"
	walk_in_place_down
	step_end

Void_EventScript_FinalBattle_Text_0:
# 32 "data/maps/Void/scripts.pory"
	.string "JIMMY: {PLAYER}!\n I'm glad you made it here.\p DAVE's a good actor, isn't he?\n He'd never actually get toxic like that!\p Anyways… I'm sure you already know,\n but welcome to the void.\p This place has existed forever, but\n most people don't know about it.$"

Void_EventScript_FinalBattle_Text_1:
# 45 "data/maps/Void/scripts.pory"
	.string "It's an endless abyss. All of those\n stars you see in the distance are\l other worlds, full of POKéMON you've\l never seen before.$"

Void_EventScript_FinalBattle_Text_2:
# 51 "data/maps/Void/scripts.pory"
	.string "Haha, JAMES would probably freak out if\n he knew it was real!\p But MISA would kill me if I showed him\n and he started full larping again.\p Well, maybe he'll come across it during\n one of his investigations into the\l ULTRA SPACE.$"

Void_EventScript_FinalBattle_Text_3:
# 63 "data/maps/Void/scripts.pory"
	.string "{PLAYER}, I wanted to show you this\n place because there's something\l different about you.\p When we fought for the first time, I\n thought you might have what it takes\l to fight me at my full strength.\p And here, we can go all out without\n worrying about anything.$"

Void_EventScript_FinalBattle_Text_4:
# 81 "data/maps/Void/scripts.pory"
	.string "Your {STR_VAR_1} looks ready to go.\n You've raised your POKéMON well.\p Okay! Show me what you've learned\n on your journey!$"

Void_EventScript_FinalBattle_Text_5:
# 88 "data/maps/Void/scripts.pory"
	.string "You did it…\nYou really did it, {PLAYER}.$"

Void_EventScript_FinalBattle2_Text_0:
# 104 "data/maps/Void/scripts.pory"
	.string "JIMMY: {PLAYER}.\p We can battle as many times\n as you want.$"

Void_EventScript_FinalBattle2_Text_1:
# 114 "data/maps/Void/scripts.pory"
	.string "Come on!$"

Void_EventScript_GameEnd_Text_0:
# 132 "data/maps/Void/scripts.pory"
	.string "JIMMY: …\n I knew you could do it, {PLAYER}.$"

Void_EventScript_GameEnd_Text_1:
# 139 "data/maps/Void/scripts.pory"
	.string "…\n Well, this is it.\p All that's left now is registering\n your POKéMON in the HALL OF FAME.\p Come on, I'll teleport you back home.$"

Void_EventScript_GameEnd_Text_2:
# 147 "data/maps/Void/scripts.pory"
	.string "One more thing…\p Thank you, {PLAYER}.\n I really mean it.\l I appreciate you making it this far.\p And I hope it was as fun for you as\n it was for me.\p …\p I hope to see you again one day.$"

EventScript_FinalRematchesUnlocked_Text_0:
# 192 "data/maps/Void/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The GYM LEADERS and ELITE FOUR are now\n ready for their final rematches.\p The GYM LEADERS can be battled in any\n order.\p The ELITE FOUR can't be challenged until\n all GYM LEADERS are defeated.$"

PokenavText_FinalMatches::
# 215 "data/maps/Void/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p JIMMY: {PLAYER}!\n It's JIMMY.\p My staff has been giving me\n updates about you!\p Sounds like you've gotten a\n lot done out there, so…\p It's time! I'll tell all the\n LEADERS to get ready!\p And, as an extra bonus, I sent\n some of my staff members out to\l POKéMON CENTERS to help you\l prepare for the battles.\p Also, I wired some MASTER BALLS\n and money to your PC in case you\l need to prepare more.\p I'm looking forward to seeing\n how strong you are now!\p … … … … … …\n … … … … … Click!$"
