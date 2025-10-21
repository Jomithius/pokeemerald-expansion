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
	call_if_defeated TRAINER_WINONA_2, FortreeCity_Gym_EventScript_RemoveGymLeaderPkmn2
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
	setflag FLAG_TEMP_7
# 29 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 30 "data/maps/FortreeCity_Gym/scripts.pory"

# 31 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RemoveGymLeaderPkmn2:
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	removeobject 10
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 34 "data/maps/FortreeCity_Gym/scripts.pory"

# 35 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 39 "data/maps/FortreeCity_Gym/scripts.pory"

# 40 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_defeated TRAINER_WINONA_2, FortreeCity_Gym_EventScript_WinonaDefeatedFinal2
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, FortreeCity_Gym_EventScript_Winona_FinalBattle
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	@ specialvar VAR_RESULT, ShouldTryRematchBattle
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	@ goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	@ goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 50 "data/maps/FortreeCity_Gym/scripts.pory"

# 51 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
    call FortreeCity_Gym_EventScript_GiveStoneEdge
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
    closemessage
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 76 "data/maps/FortreeCity_Gym/scripts.pory"

# 77 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 84 "data/maps/FortreeCity_Gym/scripts.pory"

# 85 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 91 "data/maps/FortreeCity_Gym/scripts.pory"

# 92 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 96 "data/maps/FortreeCity_Gym/scripts.pory"

# 97 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 101 "data/maps/FortreeCity_Gym/scripts.pory"

# 102 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 106 "data/maps/FortreeCity_Gym/scripts.pory"

# 107 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 111 "data/maps/FortreeCity_Gym/scripts.pory"

# 112 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 116 "data/maps/FortreeCity_Gym/scripts.pory"

# 117 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 121 "data/maps/FortreeCity_Gym/scripts.pory"

# 122 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 126 "data/maps/FortreeCity_Gym/scripts.pory"

# 127 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 134 "data/maps/FortreeCity_Gym/scripts.pory"

# 135 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 139 "data/maps/FortreeCity_Gym/scripts.pory"

# 140 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 145 "data/maps/FortreeCity_Gym/scripts.pory"

# 146 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 151 "data/maps/FortreeCity_Gym/scripts.pory"

# 152 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 156 "data/maps/FortreeCity_Gym/scripts.pory"

# 157 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 161 "data/maps/FortreeCity_Gym/scripts.pory"

# 162 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER MICKEY is\n"
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of DOG-type POKéMON.\p"
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "“Dog isn't a type?”\n"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't let him hear you say that!\p"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap is 38.$"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"

# 171 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Congratulations!$"
# 174 "data/maps/FortreeCity_Gym/scripts.pory"

# 175 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "DOG-type POKéMON!$"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"

# 179 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What?\n"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "One of my dogs isn't a dog?$"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"

# 183 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What?\n"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "One of my dogs isn't a dog?\p"
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What are you talking about?$"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"

# 188 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Honestly?\n"
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm more of a cat person.$"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"

# 192 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Why did I join this GYM…$"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"

# 195 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Why did I join this GYM…$"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"

# 198 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WOLF PACK! WOLF PACK!\n"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "AWOOOOOOO!$"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"

# 202 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A-Awooo…\n"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 205 "data/maps/FortreeCity_Gym/scripts.pory"

# 206 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm fine as long as I'm with my pack.$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"

# 212 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"

# 215 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to MICKEY, the people of\n"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"

# 219 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Grrr… WOOF WOOF BARK BARK\n"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "SNARL RUFF RUFF GRRR AAAA!$"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"

# 223 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "W-Woof!\n"
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Guess I'm not a good guard dog.$"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"

# 227 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Grrr…$"
# 229 "data/maps/FortreeCity_Gym/scripts.pory"

# 230 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of DOG-type POKéMON.\p"
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"

# 235 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What do you mean there's no DOG-type?$"
# 237 "data/maps/FortreeCity_Gym/scripts.pory"

# 238 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEYS's POKéMON are all business.$"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"

# 243 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo! I'm MICKEY, the LEADER of\n"
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I really like DOG-type POKéMON.\n"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "They're a man's best friend.\p"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the strength\n"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of me and my dogs!$"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"

# 251 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "My dogs…\n"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Well, take this GYM BADGE.$"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"

# 255 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from MICKEY.$"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"

# 259 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"

# 268 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It's fast!\n"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
    .string "You can have this too!$"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"

# 274 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER MICKEY\n"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 277 "data/maps/FortreeCity_Gym/scripts.pory"

# 278 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost to you, but I'll still\n"
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "stay devoted to DOG-type POKéMON.$"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"

# 282 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"

# 285 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY'S CERTIFIED TRAINERS:\n"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
    .string "JAMES\p"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"

# 291 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: We humans can never escape\n"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"

# 301 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"

# 304 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: Even though I have lost,\n"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"

# 311 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "MICKEY: We humans can never escape\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

FortreeCity_Gym_EventScript_Lycanroc::
# 327 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_ENCOUNTER
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmoncry
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	release
	end


FortreeCity_Gym_EventScript_Rockruff::
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmoncry
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	release
	end


FortreeCity_Gym_EventScript_GiveStoneEdge::
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_STONE_EDGE
# 344 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_ROUTE120_STATE, 1
# 345 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainStoneEdge, MSGBOX_DEFAULT
	return


FortreeCity_Gym_UpdateMetatiles::
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_FortreeGym_FloorTile, FALSE
# 360 "data/maps/FortreeCity_Gym/scripts.pory"
	setmetatile 15, 12, METATILE_FortreeGym_FloorTile, FALSE
# 361 "data/maps/FortreeCity_Gym/scripts.pory"
	setmetatile 15, 6, METATILE_FortreeGym_FloorTile, FALSE
	return


FortreeCity_Gym_EventScript_Winona_FinalBattle::
# 366 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_2, FortreeCity_Gym_EventScript_Winona_FinalBattle_Text_0, FortreeCity_Gym_EventScript_Winona_FinalBattle_Text_1, FortreeCity_Gym_EventScript_WinonaDefeatedFinal
	end


FortreeCity_Gym_EventScript_WinonaDefeatedFinal::
# 371 "data/maps/FortreeCity_Gym/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 372 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_EventScript_WinonaDefeatedFinal_Text_0, MSGBOX_NPC
# 375 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


FortreeCity_Gym_EventScript_WinonaDefeatedFinal2::
# 380 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_EventScript_WinonaDefeatedFinal_Text_0, MSGBOX_NPC
	end


FortreeCity_Gym_EventScript_Winona_FinalBattle_Text_0:
# 366 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}!\nGood to see you again!\pIt's time to let the dogs out!$"

FortreeCity_Gym_EventScript_Winona_FinalBattle_Text_1:
# 366 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Doggone it…$"

FortreeCity_Gym_EventScript_WinonaDefeatedFinal_Text_0:
# 372 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You beat me again, {PLAYER}!\p Well, at least I got my dogs with\n me! AWOOOOOOOO!$"

FortreeCity_Gym_Text_ExplainStoneEdge::
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM62, STONE EDGE, hits your foe\n with sharp rocks and has a high\l chance to crit.\p It's good for knocking birds out\n of the sky!\p … … … … … …$"
