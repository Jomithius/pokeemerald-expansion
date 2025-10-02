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
# 29 "data/maps/Void/scripts.pory"
	goto_if_eq VAR_FINAL_REMATCH_STATE, 8, Void_EventScript_FinalBattle2
# 30 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 31 "data/maps/Void/scripts.pory"
	waitmovement 0
# 32 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/Void/scripts.pory"
	waitmessage
# 38 "data/maps/Void/scripts.pory"
	applymovement 1, Void_Movement_WalkToEdge
# 39 "data/maps/Void/scripts.pory"
	waitmovement 1
# 40 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 41 "data/maps/Void/scripts.pory"
	waitmovement 0
# 42 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_1, MSGBOX_DEFAULT
# 46 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 47 "data/maps/Void/scripts.pory"
	waitmovement 1
# 48 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 55 "data/maps/Void/scripts.pory"
	waitmessage
# 56 "data/maps/Void/scripts.pory"
	applymovement 1, Void_Movement_WalkToPlayer
# 57 "data/maps/Void/scripts.pory"
	delay 45
# 58 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 59 "data/maps/Void/scripts.pory"
	waitmovement 1
# 60 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 68 "data/maps/Void/scripts.pory"
	waitmessage
# 69 "data/maps/Void/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 8
# 70 "data/maps/Void/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 71 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 72 "data/maps/Void/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 73 "data/maps/Void/scripts.pory"
	callnative SetBattleScene
# 74 "data/maps/Void/scripts.pory"
	call Void_EventScript_PlayerGetsInPosition
# 75 "data/maps/Void/scripts.pory"
	playfirstmoncry
# 76 "data/maps/Void/scripts.pory"
	waitmoncry
# 77 "data/maps/Void/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 78 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 82 "data/maps/Void/scripts.pory"
	waitmessage
# 83 "data/maps/Void/scripts.pory"
	setflag FLAG_DEFEATED_CEO
# 84 "data/maps/Void/scripts.pory"
	playbgm MUS_NONE, TRUE
# 85 "data/maps/Void/scripts.pory"
	trainerbattle_no_intro TRAINER_JIMMY, Void_EventScript_FinalBattle_Text_5
# 86 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 87 "data/maps/Void/scripts.pory"
	waitmovement 0
# 88 "data/maps/Void/scripts.pory"
	callnative RemoveFollowingPokemon
# 89 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 90 "data/maps/Void/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 91 "data/maps/Void/scripts.pory"
	goto Void_EventScript_GameEnd
# 92 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_FinalBattle2::
# 97 "data/maps/Void/scripts.pory"
	lockall
# 98 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 99 "data/maps/Void/scripts.pory"
	waitmovement 0
# 100 "data/maps/Void/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 101 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle2_Text_0, MSGBOX_AUTOCLOSE
# 104 "data/maps/Void/scripts.pory"
	waitmessage
# 105 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 106 "data/maps/Void/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 107 "data/maps/Void/scripts.pory"
	callnative SetBattleScene
# 108 "data/maps/Void/scripts.pory"
	call Void_EventScript_PlayerGetsInPosition
# 109 "data/maps/Void/scripts.pory"
	playfirstmoncry
# 110 "data/maps/Void/scripts.pory"
	waitmoncry
# 111 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle2_Text_1, MSGBOX_AUTOCLOSE
# 112 "data/maps/Void/scripts.pory"
	waitmessage
# 113 "data/maps/Void/scripts.pory"
	setflag FLAG_DEFEATED_CEO
# 114 "data/maps/Void/scripts.pory"
	playbgm MUS_NONE, TRUE
# 115 "data/maps/Void/scripts.pory"
	trainerbattle_no_intro TRAINER_JIMMY, Void_EventScript_FinalBattle_Text_5
# 116 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 117 "data/maps/Void/scripts.pory"
	waitmovement 0
# 118 "data/maps/Void/scripts.pory"
	callnative RemoveFollowingPokemon
# 119 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 120 "data/maps/Void/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 121 "data/maps/Void/scripts.pory"
	goto Void_EventScript_GameEnd
	end


Void_EventScript_GameEnd::
# 126 "data/maps/Void/scripts.pory"
	playbgm MUS_THE_DAY_WILL_COME, FALSE
# 127 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 128 "data/maps/Void/scripts.pory"
	waitmovement 0
# 129 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/Void/scripts.pory"
	waitmessage
# 131 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 132 "data/maps/Void/scripts.pory"
	waitmovement 0
# 133 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_1, MSGBOX_DEFAULT
# 135 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 136 "data/maps/Void/scripts.pory"
	waitmovement 1
# 137 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_2, MSGBOX_AUTOCLOSE
# 140 "data/maps/Void/scripts.pory"
	waitmessage
# 141 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 142 "data/maps/Void/scripts.pory"
	waitmovement 0
# 143 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_3, MSGBOX_AUTOCLOSE
# 151 "data/maps/Void/scripts.pory"
	waitmessage
# 152 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_JIMMY_SNOWDRIFT_CITY
# 153 "data/maps/Void/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 154 "data/maps/Void/scripts.pory"
	goto_if_set FLAG_SYS_STARTED_AS_MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 155 "data/maps/Void/scripts.pory"
	goto_if_set FLAG_SYS_STARTED_AS_FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 156 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_PlayerGetsInPosition::
# 161 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 162 "data/maps/Void/scripts.pory"
	waitmovement 0
# 163 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 164 "data/maps/Void/scripts.pory"
	callnative UpdateFollowingPokemon
# 165 "data/maps/Void/scripts.pory"
	playse SE_BALL_OPEN
# 166 "data/maps/Void/scripts.pory"
	fadescreen FADE_TO_WHITE
# 167 "data/maps/Void/scripts.pory"
	addobject 3
# 168 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_8
# 169 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 170 "data/maps/Void/scripts.pory"
	waitmovement 0
# 171 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 172 "data/maps/Void/scripts.pory"
	waitmovement 0
# 173 "data/maps/Void/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 174 "data/maps/Void/scripts.pory"
	delay 30
# 175 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 176 "data/maps/Void/scripts.pory"
	waitmovement 0
# 177 "data/maps/Void/scripts.pory"
	delay 30
	return


EventScript_FinalRematchesUnlocked::
# 182 "data/maps/Void/scripts.pory"
	lockall
# 183 "data/maps/Void/scripts.pory"
	pokenavcall PokenavText_FinalMatches
# 184 "data/maps/Void/scripts.pory"
	waitmessage
# 185 "data/maps/Void/scripts.pory"
	delay 30
# 186 "data/maps/Void/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 187 "data/maps/Void/scripts.pory"
	waitfanfare
# 188 "data/maps/Void/scripts.pory"
	msgbox EventScript_FinalRematchesUnlocked_Text_0, MSGBOX_AUTOCLOSE
# 194 "data/maps/Void/scripts.pory"
	waitmessage
# 195 "data/maps/Void/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 6
# 196 "data/maps/Void/scripts.pory"
	setvar VAR_GYM_LEADER_COUNT, 0
# 197 "data/maps/Void/scripts.pory"
	setflag FLAG_SYS_FINAL_REMATCH
# 198 "data/maps/Void/scripts.pory"
	setflag FLAG_HIDE_GYM_LEADERS_NORTHERN_HOENN
# 199 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_GYM_LEADERS
# 200 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 201 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_MOMO_ARIA_MOSSDEEP_CITY
# 202 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_STAFF_EMPLOYEE_MERCHANTS
# 203 "data/maps/Void/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NPC_RATDUARDO_SIDEQUEST
# 204 "data/maps/Void/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 10
# 205 "data/maps/Void/scripts.pory"
	releaseall
	end


# 230 "data/maps/Void/scripts.pory"
Void_Movement_WalkToEdge:
# 231 "data/maps/Void/scripts.pory"
	walk_right
# 231 "data/maps/Void/scripts.pory"
	walk_right
# 232 "data/maps/Void/scripts.pory"
	walk_down
# 233 "data/maps/Void/scripts.pory"
	walk_in_place_right
	step_end

# 236 "data/maps/Void/scripts.pory"
Void_Movement_WalkToPlayer:
# 237 "data/maps/Void/scripts.pory"
	walk_up
# 238 "data/maps/Void/scripts.pory"
	walk_left
# 238 "data/maps/Void/scripts.pory"
	walk_left
# 239 "data/maps/Void/scripts.pory"
	walk_in_place_down
	step_end

Void_EventScript_FinalBattle_Text_0:
# 32 "data/maps/Void/scripts.pory"
	.string "{PLAYER}!\n I'm glad you made it here.\p Welcome to the VOID.\p This place has existed forever, but\n most people don't know about it.$"

Void_EventScript_FinalBattle_Text_1:
# 42 "data/maps/Void/scripts.pory"
	.string "It's an endless abyss. All of those\n stars you see in the distance are\l other worlds, full of POKéMON you've\l never seen before.$"

Void_EventScript_FinalBattle_Text_2:
# 48 "data/maps/Void/scripts.pory"
	.string "Haha, JAMES would probably freak out if\n he knew it was real!\p But MISA would kill me if I showed him\n and he started full larping again.\p Well, maybe he'll come across it during\n one of his investigations into the\l ULTRA SPACE.$"

Void_EventScript_FinalBattle_Text_3:
# 60 "data/maps/Void/scripts.pory"
	.string "{PLAYER}, I wanted to show you this\n place because there's something\l different about you.\p When we fought for the first time, I\n thought you might have what it takes\l to fight me at my full strength.\p And here, we can go all out without\n worrying about anything.$"

Void_EventScript_FinalBattle_Text_4:
# 78 "data/maps/Void/scripts.pory"
	.string "Your {STR_VAR_1} looks ready to go.\n You've raised your POKéMON well.\p Okay! Show me what you've learned\n on your journey!$"

Void_EventScript_FinalBattle_Text_5:
# 85 "data/maps/Void/scripts.pory"
	.string "You did it…\nYou really did it, {PLAYER}.$"

Void_EventScript_FinalBattle2_Text_0:
# 101 "data/maps/Void/scripts.pory"
	.string "{PLAYER}.\p We can battle as many times\n as you want.$"

Void_EventScript_FinalBattle2_Text_1:
# 111 "data/maps/Void/scripts.pory"
	.string "Come on!$"

Void_EventScript_GameEnd_Text_0:
# 129 "data/maps/Void/scripts.pory"
	.string "… I knew you could do it, {PLAYER}.$"

Void_EventScript_GameEnd_Text_1:
# 133 "data/maps/Void/scripts.pory"
	.string "…\n Well, this is it.$"

Void_EventScript_GameEnd_Text_2:
# 137 "data/maps/Void/scripts.pory"
	.string "All that's left now is registering\n your POKéMON in the HALL OF FAME.\p Come on, I'll teleport you back home.$"

Void_EventScript_GameEnd_Text_3:
# 143 "data/maps/Void/scripts.pory"
	.string "One more thing…\p Thank you, {PLAYER}.\n I really mean it.\l I appreciate you making it this far.\p And I hope it was as fun for you as\n it was for me.\p …\p I hope to see you again one day.$"

EventScript_FinalRematchesUnlocked_Text_0:
# 188 "data/maps/Void/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The GYM LEADERS and ELITE FOUR are now\n ready for their final rematches.\p The GYM LEADERS can be battled in any\n order.\p The ELITE FOUR can't be challenged until\n all GYM LEADERS are defeated.$"

PokenavText_FinalMatches::
# 209 "data/maps/Void/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}!\n It's JIMMY.\p My staff has been giving me\n updates about you!\p Sounds like you've gotten a\n lot done out there, so…\p It's time! I'll tell all the\n LEADERS to get ready!\p And, as an extra bonus, I sent\n some of my staff members out to\l POKéMON CENTERS to help you\l prepare for the battles.\p I'm looking forward to\n seeing how strong you are now!\p … … … … … …\n … … … … … Click!$"
