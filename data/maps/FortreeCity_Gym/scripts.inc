# 1 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 2 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_Gym_OnResume
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FortreeCity_Gym_OnLoad
# 6 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 7 "data/maps/FortreeCity_Gym/scripts.pory"

# 8 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 11 "data/maps/FortreeCity_Gym/scripts.pory"
	call_if_set FLAG_HIDE_GYM_LEADERS, FortreeCity_Gym_EventScript_RemoveGymLeaderPkmn
# 12 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 13 "data/maps/FortreeCity_Gym/scripts.pory"

# 14 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 15 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 16 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 17 "data/maps/FortreeCity_Gym/scripts.pory"

# 18 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnResume:
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	call_if_defeated TRAINER_WINONA_2, FortreeCity_Gym_EventScript_RemoveGymLeaderPkmn
# 20 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 21 "data/maps/FortreeCity_Gym/scripts.pory"

# 22 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnLoad:
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_FINAL_REMATCH, FortreeCity_Gym_UpdateMetatiles
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 25 "data/maps/FortreeCity_Gym/scripts.pory"

# 26 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RemoveGymLeaderPkmn:
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	removeobject 10
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 29 "data/maps/FortreeCity_Gym/scripts.pory"

# 30 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 34 "data/maps/FortreeCity_Gym/scripts.pory"

# 35 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_defeated TRAINER_WINONA_2, FortreeCity_Gym_EventScript_WinonaDefeatedFinal2
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, FortreeCity_Gym_EventScript_Winona_FinalBattle
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 45 "data/maps/FortreeCity_Gym/scripts.pory"

# 46 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
    call FortreeCity_Gym_EventScript_GiveStoneEdge
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
    closemessage
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 71 "data/maps/FortreeCity_Gym/scripts.pory"

# 72 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 79 "data/maps/FortreeCity_Gym/scripts.pory"

# 80 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 86 "data/maps/FortreeCity_Gym/scripts.pory"

# 87 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 91 "data/maps/FortreeCity_Gym/scripts.pory"

# 92 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 96 "data/maps/FortreeCity_Gym/scripts.pory"

# 97 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 101 "data/maps/FortreeCity_Gym/scripts.pory"

# 102 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 106 "data/maps/FortreeCity_Gym/scripts.pory"

# 107 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 111 "data/maps/FortreeCity_Gym/scripts.pory"

# 112 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 116 "data/maps/FortreeCity_Gym/scripts.pory"

# 117 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 121 "data/maps/FortreeCity_Gym/scripts.pory"

# 122 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 129 "data/maps/FortreeCity_Gym/scripts.pory"

# 130 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 134 "data/maps/FortreeCity_Gym/scripts.pory"

# 135 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 140 "data/maps/FortreeCity_Gym/scripts.pory"

# 141 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 146 "data/maps/FortreeCity_Gym/scripts.pory"

# 147 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 151 "data/maps/FortreeCity_Gym/scripts.pory"

# 152 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 156 "data/maps/FortreeCity_Gym/scripts.pory"

# 157 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER MICKEY is\n"
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of dog-type POKéMON.\p"
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "“Dog isn't a type?”\n"
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't let him hear you say that!$"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"

# 165 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Congratulations!$"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"

# 169 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "DOG POKéMON!$"
# 172 "data/maps/FortreeCity_Gym/scripts.pory"

# 173 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What?\n"
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "One of my dogs isn't a dog?$"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"

# 177 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What?\n"
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "One of my dogs isn't a dog?\p"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What are you talking about?$"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"

# 182 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Honestly?\n"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm more of a cat person.$"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"

# 186 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Why did I join this GYM…$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Why did I join this GYM…$"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"

# 192 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WOLF PACK! WOLF PACK!\n"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "AWOOOOOOO!$"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"

# 196 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A-Awooo…\n"
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"

# 200 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm fine as long as I'm with my pack.$"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"

# 203 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 205 "data/maps/FortreeCity_Gym/scripts.pory"

# 206 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to MICKEY, the people of\n"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"

# 213 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Grrr… WOOF WOOF BARK BARK\n"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "SNARL RUFF RUFF GRRR AAAA!$"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"

# 217 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "W-Woof!\n"
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Guess I'm not a good guard dog.$"
# 220 "data/maps/FortreeCity_Gym/scripts.pory"

# 221 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Grrr…$"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"

# 224 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of dog-type POKéMON.\p"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"

# 229 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What do you mean dog isn't a type?$"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"

# 232 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEYS's POKéMON are all business.$"
# 236 "data/maps/FortreeCity_Gym/scripts.pory"

# 237 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo! I'm MICKEY, the LEADER of\n"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I really like DOG POKéMON.\n"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "They're a man's best friend.\p"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the strength\n"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of me and my dogs!$"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"

# 245 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "My dogs…\n"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Well, take this GYM BADGE.$"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"

# 249 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from MICKEY.$"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"

# 253 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"

# 262 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It's fast!\n"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
    .string "You can have this too!$"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"

# 268 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER MICKEY\n"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"

# 272 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost to you, but I'll still\n"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "stay devoted to DOG POKéMON.$"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"

# 276 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"

# 279 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY'S CERTIFIED TRAINERS:\n"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
    .string "JAMES\p"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"

# 285 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: We humans can never escape\n"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"

# 295 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"

# 298 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: Even though I have lost,\n"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"

# 305 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: We humans can never escape\n"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

FortreeCity_Gym_EventScript_Lycanroc::
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_ENCOUNTER
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 24
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	release
	end


FortreeCity_Gym_EventScript_Rockruff::
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 24
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	release
	end


FortreeCity_Gym_EventScript_GiveStoneEdge::
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_STONE_EDGE
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainStoneEdge, MSGBOX_DEFAULT
	return


FortreeCity_Gym_UpdateMetatiles::
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_FortreeGym_FloorTile, FALSE
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	setmetatile 15, 12, METATILE_FortreeGym_FloorTile, FALSE
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	setmetatile 15, 6, METATILE_FortreeGym_FloorTile, FALSE
	return


FortreeCity_Gym_EventScript_Winona_FinalBattle::
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_2, FortreeCity_Gym_EventScript_Winona_FinalBattle_Text_0, FortreeCity_Gym_EventScript_Winona_FinalBattle_Text_1, FortreeCity_Gym_EventScript_WinonaDefeatedFinal
	end


FortreeCity_Gym_EventScript_WinonaDefeatedFinal::
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 365 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_EventScript_WinonaDefeatedFinal_Text_0, MSGBOX_NPC
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


FortreeCity_Gym_EventScript_WinonaDefeatedFinal2::
# 373 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_EventScript_WinonaDefeatedFinal_Text_0, MSGBOX_NPC
	end


FortreeCity_Gym_EventScript_Winona_FinalBattle_Text_0:
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}!\nGood to see you again!\pIt's time to let the dogs out!$"

FortreeCity_Gym_EventScript_Winona_FinalBattle_Text_1:
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Doggone it…$"

FortreeCity_Gym_EventScript_WinonaDefeatedFinal_Text_0:
# 365 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You beat me again, {PLAYER}!\p Well, at least I got my dogs with\n me! AWOOOOOOOO!$"

FortreeCity_Gym_Text_ExplainStoneEdge::
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM62, STONE EDGE, hits your foe\n with sharp rocks and has a high\l chance to crit.\p It's good for knocking birds out\n of the sky!\p … … … … … …$"
