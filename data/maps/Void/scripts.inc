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
	end


Void_OnResume::
# 16 "data/maps/Void/scripts.pory"
	call_if_set FLAG_DEFEATED_CEO, Void_UpdateState
	end


Void_UpdateState::
# 21 "data/maps/Void/scripts.pory"
	removeobject 2
# 22 "data/maps/Void/scripts.pory"
	removeobject 3
	return


Void_EventScript_FinalBattle::
# 27 "data/maps/Void/scripts.pory"
	lockall
# 28 "data/maps/Void/scripts.pory"
	goto_if_eq VAR_FINAL_REMATCH_STATE, 7, Void_EventScript_FinalBattle2
# 29 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 30 "data/maps/Void/scripts.pory"
	waitmovement 0
# 31 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 36 "data/maps/Void/scripts.pory"
	waitmessage
# 37 "data/maps/Void/scripts.pory"
	applymovement 1, Void_Movement_WalkToEdge
# 38 "data/maps/Void/scripts.pory"
	waitmovement 1
# 39 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 40 "data/maps/Void/scripts.pory"
	waitmovement 0
# 41 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_1, MSGBOX_DEFAULT
# 45 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 46 "data/maps/Void/scripts.pory"
	waitmovement 1
# 47 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 54 "data/maps/Void/scripts.pory"
	waitmessage
# 55 "data/maps/Void/scripts.pory"
	applymovement 1, Void_Movement_WalkToPlayer
# 56 "data/maps/Void/scripts.pory"
	delay 45
# 57 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 58 "data/maps/Void/scripts.pory"
	waitmovement 1
# 59 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 67 "data/maps/Void/scripts.pory"
	waitmessage
# 68 "data/maps/Void/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 7
# 69 "data/maps/Void/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 70 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 71 "data/maps/Void/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 72 "data/maps/Void/scripts.pory"
	call Void_EventScript_PlayerGetsInPosition
# 73 "data/maps/Void/scripts.pory"
	playfirstmoncry
# 74 "data/maps/Void/scripts.pory"
	waitmoncry
# 75 "data/maps/Void/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 76 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 80 "data/maps/Void/scripts.pory"
	waitmessage
# 81 "data/maps/Void/scripts.pory"
	setflag FLAG_DEFEATED_CEO
# 82 "data/maps/Void/scripts.pory"
	playbgm MUS_NONE, TRUE
# 83 "data/maps/Void/scripts.pory"
	trainerbattle_no_intro TRAINER_JIMMY, Void_EventScript_FinalBattle_Text_5
# 84 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 85 "data/maps/Void/scripts.pory"
	waitmovement 0
# 86 "data/maps/Void/scripts.pory"
	callnative RemoveFollowingPokemon
# 87 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 88 "data/maps/Void/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 89 "data/maps/Void/scripts.pory"
	goto Void_EventScript_GameEnd
# 90 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_FinalBattle2::
# 95 "data/maps/Void/scripts.pory"
	lockall
# 96 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 97 "data/maps/Void/scripts.pory"
	waitmovement 0
# 98 "data/maps/Void/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 99 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle2_Text_0, MSGBOX_AUTOCLOSE
# 102 "data/maps/Void/scripts.pory"
	waitmessage
# 103 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 104 "data/maps/Void/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 105 "data/maps/Void/scripts.pory"
	call Void_EventScript_PlayerGetsInPosition
# 106 "data/maps/Void/scripts.pory"
	playfirstmoncry
# 107 "data/maps/Void/scripts.pory"
	waitmoncry
# 108 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle2_Text_1, MSGBOX_AUTOCLOSE
# 109 "data/maps/Void/scripts.pory"
	waitmessage
# 110 "data/maps/Void/scripts.pory"
	setflag FLAG_DEFEATED_CEO
# 111 "data/maps/Void/scripts.pory"
	playbgm MUS_NONE, TRUE
# 112 "data/maps/Void/scripts.pory"
	trainerbattle_no_intro TRAINER_JIMMY, Void_EventScript_FinalBattle_Text_5
# 113 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 114 "data/maps/Void/scripts.pory"
	waitmovement 0
# 115 "data/maps/Void/scripts.pory"
	callnative RemoveFollowingPokemon
# 116 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 117 "data/maps/Void/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 118 "data/maps/Void/scripts.pory"
	goto Void_EventScript_GameEnd
# 119 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_GameEnd::
# 124 "data/maps/Void/scripts.pory"
	playbgm MUS_THE_DAY_WILL_COME, FALSE
# 125 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 126 "data/maps/Void/scripts.pory"
	waitmovement 0
# 127 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_0, MSGBOX_AUTOCLOSE
# 128 "data/maps/Void/scripts.pory"
	waitmessage
# 129 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 130 "data/maps/Void/scripts.pory"
	waitmovement 0
# 131 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_1, MSGBOX_DEFAULT
# 133 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 134 "data/maps/Void/scripts.pory"
	waitmovement 1
# 135 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_2, MSGBOX_AUTOCLOSE
# 138 "data/maps/Void/scripts.pory"
	waitmessage
# 139 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 140 "data/maps/Void/scripts.pory"
	waitmovement 0
# 141 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_3, MSGBOX_AUTOCLOSE
# 149 "data/maps/Void/scripts.pory"
	waitmessage
# 150 "data/maps/Void/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 151 "data/maps/Void/scripts.pory"
	checkplayergender
# 152 "data/maps/Void/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 153 "data/maps/Void/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 154 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_PlayerGetsInPosition::
# 159 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 160 "data/maps/Void/scripts.pory"
	waitmovement 0
# 161 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 162 "data/maps/Void/scripts.pory"
	callnative UpdateFollowingPokemon
# 163 "data/maps/Void/scripts.pory"
	playse SE_BALL_OPEN
# 164 "data/maps/Void/scripts.pory"
	fadescreen FADE_TO_WHITE
# 165 "data/maps/Void/scripts.pory"
	addobject 3
# 166 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_8
# 167 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 168 "data/maps/Void/scripts.pory"
	waitmovement 0
# 169 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 170 "data/maps/Void/scripts.pory"
	waitmovement 0
# 171 "data/maps/Void/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 172 "data/maps/Void/scripts.pory"
	delay 30
# 173 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 174 "data/maps/Void/scripts.pory"
	waitmovement 0
# 175 "data/maps/Void/scripts.pory"
	delay 30
	return


EventScript_FinalRematchesUnlocked::
# 180 "data/maps/Void/scripts.pory"
	lockall
# 181 "data/maps/Void/scripts.pory"
	pokenavcall PokenavText_FinalMatches
# 182 "data/maps/Void/scripts.pory"
	waitmessage
# 183 "data/maps/Void/scripts.pory"
	delay 30
# 184 "data/maps/Void/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 185 "data/maps/Void/scripts.pory"
	waitfanfare
# 186 "data/maps/Void/scripts.pory"
	msgbox EventScript_FinalRematchesUnlocked_Text_0, MSGBOX_AUTOCLOSE
# 192 "data/maps/Void/scripts.pory"
	waitmessage
# 193 "data/maps/Void/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 5
# 194 "data/maps/Void/scripts.pory"
	setvar VAR_GYM_LEADER_COUNT, 0
# 195 "data/maps/Void/scripts.pory"
	setflag FLAG_SYS_FINAL_REMATCH
# 196 "data/maps/Void/scripts.pory"
	setflag FLAG_HIDE_GYM_LEADERS_NORTHERN_HOENN
# 197 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_GYM_LEADERS
# 198 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 199 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_MOMO_ARIA_MOSSDEEP_CITY
# 200 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_STAFF_EMPLOYEE_MERCHANTS
# 201 "data/maps/Void/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 10
# 202 "data/maps/Void/scripts.pory"
	releaseall
	end


# 227 "data/maps/Void/scripts.pory"
Void_Movement_WalkToEdge:
# 228 "data/maps/Void/scripts.pory"
	walk_right
# 228 "data/maps/Void/scripts.pory"
	walk_right
# 229 "data/maps/Void/scripts.pory"
	walk_down
# 230 "data/maps/Void/scripts.pory"
	walk_in_place_right
	step_end

# 233 "data/maps/Void/scripts.pory"
Void_Movement_WalkToPlayer:
# 234 "data/maps/Void/scripts.pory"
	walk_up
# 235 "data/maps/Void/scripts.pory"
	walk_left
# 235 "data/maps/Void/scripts.pory"
	walk_left
# 236 "data/maps/Void/scripts.pory"
	walk_in_place_down
	step_end

Void_EventScript_FinalBattle_Text_0:
# 31 "data/maps/Void/scripts.pory"
	.string "{PLAYER}!\n I'm glad you made it here.\p Welcome to the VOID.\p This place has existed forever, but\n most people don't know about it.$"

Void_EventScript_FinalBattle_Text_1:
# 41 "data/maps/Void/scripts.pory"
	.string "It's an endless abyss. All of those\n stars you see in the distance are\l other worlds, full of POKéMON you've\l never seen before.$"

Void_EventScript_FinalBattle_Text_2:
# 47 "data/maps/Void/scripts.pory"
	.string "Haha, JAMES would probably freak out if\n he knew it was real!\p But MISA would kill me if I showed him\n and he turned back into an edgelord.\p Well, maybe he'll come across it during\n one of his investigations into the\l ULTRA SPACE.$"

Void_EventScript_FinalBattle_Text_3:
# 59 "data/maps/Void/scripts.pory"
	.string "{PLAYER}, I wanted to show you this\n place because there's something\l different about you.\p When we fought for the first time, I\n thought you might have what it takes\l to fight me at my full strength.\p And here, we can go all out without\n worrying about anything.$"

Void_EventScript_FinalBattle_Text_4:
# 76 "data/maps/Void/scripts.pory"
	.string "Your {STR_VAR_1} look ready to go.\n You've raised your POKéMON well.\p {PLAYER}! Show me the strength of you\n and your POKéMON!$"

Void_EventScript_FinalBattle_Text_5:
# 83 "data/maps/Void/scripts.pory"
	.string "You did it…\nYou really did it, {PLAYER}.$"

Void_EventScript_FinalBattle2_Text_0:
# 99 "data/maps/Void/scripts.pory"
	.string "{PLAYER}.\n We can battle as many times\l as you want.$"

Void_EventScript_FinalBattle2_Text_1:
# 108 "data/maps/Void/scripts.pory"
	.string "This is it!$"

Void_EventScript_GameEnd_Text_0:
# 127 "data/maps/Void/scripts.pory"
	.string "… I knew you could do it, {PLAYER}.$"

Void_EventScript_GameEnd_Text_1:
# 131 "data/maps/Void/scripts.pory"
	.string "…\n Well, this is it.$"

Void_EventScript_GameEnd_Text_2:
# 135 "data/maps/Void/scripts.pory"
	.string "All that's left now is registering\n your POKéMON in the HALL OF FAME.\p Come on, I'll teleport you back home.$"

Void_EventScript_GameEnd_Text_3:
# 141 "data/maps/Void/scripts.pory"
	.string "One more thing…\p Thank you, {PLAYER}.\n I really mean it.\l I appreciate you making it this far.\p And I hope it was as fun for you as\n it was for me.\p …\p I hope to see you again one day.$"

EventScript_FinalRematchesUnlocked_Text_0:
# 186 "data/maps/Void/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The GYM LEADERS and ELITE FOUR are now\n ready for their final rematches.\p The GYM LEADERS can be battled in any\n order.\p The ELITE FOUR can't be challenged until\n all GYM LEADERS are defeated.$"

PokenavText_FinalMatches::
# 206 "data/maps/Void/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}!\n It's JIMMY.\p My staff has been giving me\n updates about you!\p Sounds like you've gotten a\n lot done out there, so…\p It's time! I'll tell all the\n LEADERS to get ready!\p And, as an extra bonus, I sent\n some of my staff members out to\l POKéMON CENTERS to help you\l prepare for the battles.\p I'm looking forward to\n seeing how strong you are now!\p … … … … … …\n … … … … … Click!$"
