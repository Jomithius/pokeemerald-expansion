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
	setflag FLAG_TEMP_8
	end


Void_OnResume::
# 15 "data/maps/Void/scripts.pory"
	call_if_set FLAG_DEFEATED_CEO, Void_UpdateState
	end


Void_UpdateState::
# 20 "data/maps/Void/scripts.pory"
	removeobject 2
# 21 "data/maps/Void/scripts.pory"
	removeobject 3
	return


Void_EventScript_FinalBattle::
# 26 "data/maps/Void/scripts.pory"
	lockall
# 27 "data/maps/Void/scripts.pory"
	goto_if_eq VAR_FINAL_REMATCH_STATE, 7, Void_EventScript_FinalBattle2
# 28 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 29 "data/maps/Void/scripts.pory"
	waitmovement 0
# 30 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/Void/scripts.pory"
	waitmessage
# 36 "data/maps/Void/scripts.pory"
	applymovement 1, Void_Movement_WalkToEdge
# 37 "data/maps/Void/scripts.pory"
	waitmovement 1
# 38 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 39 "data/maps/Void/scripts.pory"
	waitmovement 0
# 40 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 45 "data/maps/Void/scripts.pory"
	waitmovement 1
# 46 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/Void/scripts.pory"
	waitmessage
# 54 "data/maps/Void/scripts.pory"
	applymovement 1, Void_Movement_WalkToPlayer
# 55 "data/maps/Void/scripts.pory"
	delay 32
# 56 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 57 "data/maps/Void/scripts.pory"
	waitmovement 1
# 58 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_3, MSGBOX_AUTOCLOSE
# 66 "data/maps/Void/scripts.pory"
	waitmessage
# 67 "data/maps/Void/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 7
# 68 "data/maps/Void/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 69 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 70 "data/maps/Void/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 71 "data/maps/Void/scripts.pory"
	call Void_EventScript_PlayerGetsInPosition
# 72 "data/maps/Void/scripts.pory"
	playfirstmoncry
# 73 "data/maps/Void/scripts.pory"
	waitmoncry
# 74 "data/maps/Void/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 75 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle_Text_4, MSGBOX_AUTOCLOSE
# 79 "data/maps/Void/scripts.pory"
	waitmessage
# 80 "data/maps/Void/scripts.pory"
	setflag FLAG_DEFEATED_CEO
# 81 "data/maps/Void/scripts.pory"
	playbgm MUS_NONE, TRUE
# 82 "data/maps/Void/scripts.pory"
	trainerbattle_no_intro TRAINER_JIMMY, Void_EventScript_FinalBattle_Text_5
# 83 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 84 "data/maps/Void/scripts.pory"
	waitmovement 0
# 85 "data/maps/Void/scripts.pory"
	callnative RemoveFollowingPokemon
# 86 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 87 "data/maps/Void/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 88 "data/maps/Void/scripts.pory"
	goto Void_EventScript_GameEnd
# 89 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_FinalBattle2::
# 94 "data/maps/Void/scripts.pory"
	lockall
# 95 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 96 "data/maps/Void/scripts.pory"
	waitmovement 0
# 97 "data/maps/Void/scripts.pory"
	playbgm MUS_ENCOUNTER_EXDEATH, FALSE
# 98 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle2_Text_0, MSGBOX_AUTOCLOSE
# 101 "data/maps/Void/scripts.pory"
	waitmessage
# 102 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 103 "data/maps/Void/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 104 "data/maps/Void/scripts.pory"
	call Void_EventScript_PlayerGetsInPosition
# 105 "data/maps/Void/scripts.pory"
	playfirstmoncry
# 106 "data/maps/Void/scripts.pory"
	waitmoncry
# 107 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_FinalBattle2_Text_1, MSGBOX_AUTOCLOSE
# 108 "data/maps/Void/scripts.pory"
	waitmessage
# 109 "data/maps/Void/scripts.pory"
	setflag FLAG_DEFEATED_CEO
# 110 "data/maps/Void/scripts.pory"
	playbgm MUS_NONE, TRUE
# 111 "data/maps/Void/scripts.pory"
	trainerbattle_no_intro TRAINER_JIMMY, Void_EventScript_FinalBattle_Text_5
# 112 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_EnterPokeball
# 113 "data/maps/Void/scripts.pory"
	waitmovement 0
# 114 "data/maps/Void/scripts.pory"
	callnative RemoveFollowingPokemon
# 115 "data/maps/Void/scripts.pory"
	setflag FLAG_TEMP_E
# 116 "data/maps/Void/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 117 "data/maps/Void/scripts.pory"
	goto Void_EventScript_GameEnd
# 118 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_GameEnd::
# 123 "data/maps/Void/scripts.pory"
	playbgm MUS_THE_DAY_WILL_COME, FALSE
# 124 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 125 "data/maps/Void/scripts.pory"
	waitmovement 0
# 126 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_0, MSGBOX_AUTOCLOSE
# 127 "data/maps/Void/scripts.pory"
	waitmessage
# 128 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 129 "data/maps/Void/scripts.pory"
	waitmovement 0
# 130 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/Void/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 133 "data/maps/Void/scripts.pory"
	waitmovement 1
# 134 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_2, MSGBOX_AUTOCLOSE
# 137 "data/maps/Void/scripts.pory"
	waitmessage
# 138 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 139 "data/maps/Void/scripts.pory"
	waitmovement 0
# 140 "data/maps/Void/scripts.pory"
	msgbox Void_EventScript_GameEnd_Text_3, MSGBOX_AUTOCLOSE
# 148 "data/maps/Void/scripts.pory"
	waitmessage
# 149 "data/maps/Void/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 150 "data/maps/Void/scripts.pory"
	checkplayergender
# 151 "data/maps/Void/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 152 "data/maps/Void/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 153 "data/maps/Void/scripts.pory"
	releaseall
	end


Void_EventScript_PlayerGetsInPosition::
# 158 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_PlayerGetsInPositionNorth
# 159 "data/maps/Void/scripts.pory"
	waitmovement 0
# 160 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_E
# 161 "data/maps/Void/scripts.pory"
	callnative UpdateFollowingPokemon
# 162 "data/maps/Void/scripts.pory"
	playse SE_BALL_OPEN
# 163 "data/maps/Void/scripts.pory"
	fadescreen FADE_TO_WHITE
# 164 "data/maps/Void/scripts.pory"
	addobject 3
# 165 "data/maps/Void/scripts.pory"
	clearflag FLAG_TEMP_8
# 166 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExitPokeball
# 167 "data/maps/Void/scripts.pory"
	waitmovement 0
# 168 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BaldesianForestDojo_Movement_FollowerBesidePlayer
# 169 "data/maps/Void/scripts.pory"
	waitmovement 0
# 170 "data/maps/Void/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 171 "data/maps/Void/scripts.pory"
	delay 30
# 172 "data/maps/Void/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EverGrandeCity_Movement_PlayerPokemonGetsInPosition
# 173 "data/maps/Void/scripts.pory"
	waitmovement 0
# 174 "data/maps/Void/scripts.pory"
	delay 30
	return


EventScript_FinalRematchesUnlocked::
# 179 "data/maps/Void/scripts.pory"
	lockall
# 180 "data/maps/Void/scripts.pory"
	pokenavcall PokenavText_FinalMatches
# 181 "data/maps/Void/scripts.pory"
	waitmessage
# 182 "data/maps/Void/scripts.pory"
	delay 30
# 183 "data/maps/Void/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 184 "data/maps/Void/scripts.pory"
	waitfanfare
# 185 "data/maps/Void/scripts.pory"
	msgbox EventScript_FinalRematchesUnlocked_Text_0, MSGBOX_AUTOCLOSE
# 191 "data/maps/Void/scripts.pory"
	waitmessage
# 192 "data/maps/Void/scripts.pory"
	setvar VAR_FINAL_REMATCH_STATE, 5
# 193 "data/maps/Void/scripts.pory"
	setvar VAR_GYM_LEADER_COUNT, 0
# 194 "data/maps/Void/scripts.pory"
	setflag FLAG_SYS_FINAL_REMATCH
# 195 "data/maps/Void/scripts.pory"
	setflag FLAG_HIDE_GYM_LEADERS_NORTHERN_HOENN
# 196 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_GYM_LEADERS
# 197 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 198 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_MOMO_ARIA_MOSSDEEP_CITY
# 199 "data/maps/Void/scripts.pory"
	clearflag FLAG_HIDE_STAFF_EMPLOYEE_MERCHANTS
# 200 "data/maps/Void/scripts.pory"
	setvar VAR_MOMO_ARIA_STATE, 10
# 201 "data/maps/Void/scripts.pory"
	releaseall
	end


# 226 "data/maps/Void/scripts.pory"
Void_Movement_WalkToEdge:
# 227 "data/maps/Void/scripts.pory"
	walk_right
# 227 "data/maps/Void/scripts.pory"
	walk_right
# 228 "data/maps/Void/scripts.pory"
	walk_down
# 229 "data/maps/Void/scripts.pory"
	walk_in_place_right
	step_end

# 232 "data/maps/Void/scripts.pory"
Void_Movement_WalkToPlayer:
# 233 "data/maps/Void/scripts.pory"
	walk_up
# 234 "data/maps/Void/scripts.pory"
	walk_left
# 234 "data/maps/Void/scripts.pory"
	walk_left
# 235 "data/maps/Void/scripts.pory"
	walk_in_place_down
	step_end

Void_EventScript_FinalBattle_Text_0:
# 30 "data/maps/Void/scripts.pory"
	.string "{PLAYER}!\n I'm glad you made it here.\p Welcome to the VOID.\p This place has existed forever, but\n most people don't know about it.$"

Void_EventScript_FinalBattle_Text_1:
# 40 "data/maps/Void/scripts.pory"
	.string "It's an endless abyss. All of those\n stars you see in the distance are\l other worlds, full of POKéMON you've\l never seen before.$"

Void_EventScript_FinalBattle_Text_2:
# 46 "data/maps/Void/scripts.pory"
	.string "Haha, JAMES would probably freak out if\n he knew it was real!\p But MISA would kill me if I showed him\n and he turned back into an edgelord.\p Well, maybe he'll come across it during\n one of his investigations into the\l ULTRA SPACE.$"

Void_EventScript_FinalBattle_Text_3:
# 58 "data/maps/Void/scripts.pory"
	.string "{PLAYER}, I wanted to show you this\n place because there's something\l different about you.\p When we fought for the first time, I\n thought you might have what it takes\l to fight me at my full strength.\p And here, we can go all out without\n worrying about anything.$"

Void_EventScript_FinalBattle_Text_4:
# 75 "data/maps/Void/scripts.pory"
	.string "Your {STR_VAR_1} look ready to go.\n You've raised your POKéMON well.\p {PLAYER}! Show me the strength of you\n and your POKéMON!$"

Void_EventScript_FinalBattle_Text_5:
# 82 "data/maps/Void/scripts.pory"
	.string "You did it…\nYou really did it, {PLAYER}.$"

Void_EventScript_FinalBattle2_Text_0:
# 98 "data/maps/Void/scripts.pory"
	.string "{PLAYER}.\n We can battle as many times\l as you want.$"

Void_EventScript_FinalBattle2_Text_1:
# 107 "data/maps/Void/scripts.pory"
	.string "This is it!$"

Void_EventScript_GameEnd_Text_0:
# 126 "data/maps/Void/scripts.pory"
	.string "… I knew you could do it, {PLAYER}.$"

Void_EventScript_GameEnd_Text_1:
# 130 "data/maps/Void/scripts.pory"
	.string "…\n Well, this is it.$"

Void_EventScript_GameEnd_Text_2:
# 134 "data/maps/Void/scripts.pory"
	.string "All that's left now is registering\n your POKéMON in the HALL OF FAME.\p Come on, I'll teleport you back home.$"

Void_EventScript_GameEnd_Text_3:
# 140 "data/maps/Void/scripts.pory"
	.string "One more thing…\p Thank you, {PLAYER}.\n I really mean it.\l I appreciate you making it this far.\p And I hope it was as fun for you as\n it was for me.\p …\p I hope to see you again one day.$"

EventScript_FinalRematchesUnlocked_Text_0:
# 185 "data/maps/Void/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The GYM LEADERS and ELITE FOUR are now\n ready for their final rematches.\p The GYM LEADERS can be battled in any\n order.\p The ELITE FOUR can't be challenged until\n all GYM LEADERS are defeated.$"

PokenavText_FinalMatches::
# 205 "data/maps/Void/scripts.pory"
	.string "… … … … … …\n … … … … … Beep!\p {PLAYER}!\n It's JIMMY.\p My staff has been giving me\n updates about you!\p Sounds like you've gotten a\n lot done out there, so…\p It's time! I'll tell all the\n LEADERS to get ready!\p And, as an extra bonus, I sent\n some of my staff members out to\l POKéMON CENTERS to help you\l prepare for the battles.\p I'm looking forward to\n seeing how strong you are now!\p … … … … … …\n … … … … … Click!$"
