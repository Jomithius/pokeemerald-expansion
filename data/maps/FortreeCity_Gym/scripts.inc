# 1 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 2 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/FortreeCity_Gym/scripts.pory"

# 6 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 7 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 10 "data/maps/FortreeCity_Gym/scripts.pory"

# 11 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 12 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 14 "data/maps/FortreeCity_Gym/scripts.pory"

# 15 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 16 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 19 "data/maps/FortreeCity_Gym/scripts.pory"

# 20 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 21 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 28 "data/maps/FortreeCity_Gym/scripts.pory"

# 29 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 30 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
    call FortreeCity_Gym_EventScript_GiveStoneEdge
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
    closemessage
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 54 "data/maps/FortreeCity_Gym/scripts.pory"

# 55 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 62 "data/maps/FortreeCity_Gym/scripts.pory"

# 63 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 69 "data/maps/FortreeCity_Gym/scripts.pory"

# 70 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 74 "data/maps/FortreeCity_Gym/scripts.pory"

# 75 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 79 "data/maps/FortreeCity_Gym/scripts.pory"

# 80 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 84 "data/maps/FortreeCity_Gym/scripts.pory"

# 85 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 89 "data/maps/FortreeCity_Gym/scripts.pory"

# 90 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 94 "data/maps/FortreeCity_Gym/scripts.pory"

# 95 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 99 "data/maps/FortreeCity_Gym/scripts.pory"

# 100 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 104 "data/maps/FortreeCity_Gym/scripts.pory"

# 105 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 112 "data/maps/FortreeCity_Gym/scripts.pory"

# 113 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 117 "data/maps/FortreeCity_Gym/scripts.pory"

# 118 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 123 "data/maps/FortreeCity_Gym/scripts.pory"

# 124 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 129 "data/maps/FortreeCity_Gym/scripts.pory"

# 130 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 134 "data/maps/FortreeCity_Gym/scripts.pory"

# 135 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 139 "data/maps/FortreeCity_Gym/scripts.pory"

# 140 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER MICKEY is\n"
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of dog-type POKéMON.\p"
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "“Dog isn't a type?”\n"
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't let him hear you say that!$"
# 147 "data/maps/FortreeCity_Gym/scripts.pory"

# 148 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Congratulations!$"
# 151 "data/maps/FortreeCity_Gym/scripts.pory"

# 152 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "DOG POKéMON!$"
# 155 "data/maps/FortreeCity_Gym/scripts.pory"

# 156 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What?\n"
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "One of my dogs isn't a dog?$"
# 159 "data/maps/FortreeCity_Gym/scripts.pory"

# 160 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What?\n"
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "One of my dogs isn't a dog?\p"
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What are you talking about?$"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"

# 165 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Honestly?\n"
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm more of a cat person.$"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"

# 169 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Why did I join this GYM…$"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"

# 172 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Why did I join this GYM…$"
# 174 "data/maps/FortreeCity_Gym/scripts.pory"

# 175 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WOLF PACK! WOLF PACK!\n"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "AWOOOOOOO!$"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"

# 179 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A-Awooo…\n"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"

# 183 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm fine as long as I'm with my pack.$"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"

# 186 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"

# 192 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to MICKEY, the people of\n"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"

# 196 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Grrr… WOOF WOOF BARK BARK\n"
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "SNARL RUFF RUFF GRRR AAAA!$"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"

# 200 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "W-Woof!\n"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Guess I'm not a good guard dog.$"
# 203 "data/maps/FortreeCity_Gym/scripts.pory"

# 204 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Grrr…$"
# 206 "data/maps/FortreeCity_Gym/scripts.pory"

# 207 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of dog-type POKéMON.\p"
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"

# 212 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What do you mean dog isn't a type?$"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"

# 215 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEYS's POKéMON are all business.$"
# 219 "data/maps/FortreeCity_Gym/scripts.pory"

# 220 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo! I'm MICKEY, the LEADER of\n"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I really like DOG POKéMON.\n"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "They're a man's best friend.\p"
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the strength\n"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of me and my dogs!$"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"

# 228 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "My dogs…\n"
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Well, take this GYM BADGE.$"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"

# 232 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from MICKEY.$"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"

# 236 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"

# 245 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It's fast!\n"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
    .string "You can have this too!$"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"

# 251 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER MICKEY\n"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"

# 255 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost to you, but I'll still\n"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "stay devoted to DOG POKéMON.$"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"

# 259 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"

# 262 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY'S CERTIFIED TRAINERS:\n"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
    .string "JAMES\p"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"

# 268 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: We humans can never escape\n"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"

# 278 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 280 "data/maps/FortreeCity_Gym/scripts.pory"

# 281 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: Even though I have lost,\n"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"

# 288 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: We humans can never escape\n"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

FortreeCity_Gym_EventScript_Lycanroc::
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_ENCOUNTER
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 24
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	release
	end


FortreeCity_Gym_EventScript_Rockruff::
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 24
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	release
	end


FortreeCity_Gym_EventScript_GiveStoneEdge::
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_STONE_EDGE
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainStoneEdge, MSGBOX_DEFAULT
	return


FortreeCity_Gym_Text_ExplainStoneEdge::
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM62, STONE EDGE, hits your foe\n with sharp rocks and has a high\l chance to crit.\p It's good for knocking birds out\n of the sky!\p … … … … … …$"
