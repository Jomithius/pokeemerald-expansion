# 1 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 2 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RustboroCity_Gym_OnResume
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_Gym_OnTransition
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_Gym/scripts.pory"

# 6 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_OnResume:
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ROXANNE_2, RustboroCity_Gym_EventScript_TryRemoveGymLeaderPkmn
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 9 "data/maps/RustboroCity_Gym/scripts.pory"

# 10 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_OnTransition:
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_set FLAG_HIDE_GYM_LEADERS, RustboroCity_Gym_EventScript_TryRemoveGymLeaderPkmn
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_TryRemoveGymLeaderPkmn:
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	removeobject 6
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_TEMP_7
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 18 "data/maps/RustboroCity_Gym/scripts.pory"

# 19 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_defeated TRAINER_ROXANNE_2, RustboroCity_Gym_EventScript_RoxanneDefeatedFinal2
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_FINAL_REMATCH, RustboroCity_Gym_EventScript_Roxanne_FinalBattle
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 29 "data/maps/RustboroCity_Gym/scripts.pory"

# 30 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 44 "data/maps/RustboroCity_Gym/scripts.pory"

# 45 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
    goto RustboroCity_Gym_EventScript_GiveChillingWater
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Gym/scripts.pory"

# 53 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Gym/scripts.pory"

# 58 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Gym/scripts.pory"

# 63 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 67 "data/maps/RustboroCity_Gym/scripts.pory"

# 68 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 72 "data/maps/RustboroCity_Gym/scripts.pory"

# 73 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 80 "data/maps/RustboroCity_Gym/scripts.pory"

# 81 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 85 "data/maps/RustboroCity_Gym/scripts.pory"

# 86 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 91 "data/maps/RustboroCity_Gym/scripts.pory"

# 92 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 97 "data/maps/RustboroCity_Gym/scripts.pory"

# 98 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 102 "data/maps/RustboroCity_Gym/scripts.pory"

# 103 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 107 "data/maps/RustboroCity_Gym/scripts.pory"

# 108 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 122 "data/maps/RustboroCity_Gym/scripts.pory"

# 123 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "STEVE, the GYM LEADER, is a\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "firefighter.\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "He uses a variety of POKéMON, but\n"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "his ace POKéMON is a FIRE-type.\l"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Isn't that ironic?\p"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!\p"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The level cap is 16.$"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"

# 146 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"

# 158 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"

# 162 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"

# 165 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROCK type POKéMON are also\n"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "strong against fire types!$"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"

# 169 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "FIRE! FIRE! FIRE! FIRE!$"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"

# 172 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm all burnt out…$"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"

# 175 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "STEVE is stronger than me by\n"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"

# 180 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "FLY!\p"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "FIGHT!\p"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "WIN!$"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one cool customer!$"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"

# 189 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Not only is he a firefighter, he\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "also served in the POKéMON WAR.$"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"

# 194 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo! I'm STEVE, the RUSTBORO\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER after my days\n"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "serving our region.\l"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "All right. I'm all fired up!\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come on! Show me your\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON's burning spirit!$"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"

# 203 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Haha!\n"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost!\p"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That was a great battle!\n"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were on fire!\p"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, the LEAGUE's rules state\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So take the official POKéMON\n"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"

# 214 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from STEVE.$"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"

# 218 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE enables your POKéMON\n"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to use the HM move CUT outside of battle.\p"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Take this too!$"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"

# 223 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.$"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"

# 231 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you're so strong, you should\n"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The next GYM is in SLATEPORT, I think.\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Or was it DEWFORD? I don't remember.$"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"

# 237 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"

# 240 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "STEVE'S CERTIFIED TRAINERS:\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
    .string "JAMES\p"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"

# 246 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "STEVE: Yo, {PLAYER}!\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is STEVE from RUSTBORO.\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard that you're moving\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "up through the ranks of\l"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an blazing speed.\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'm glad to hear it!\l"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Me and MAGMORTAR are excited\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to see how strong you'll get.\p"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm fired up!\p"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"

# 261 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER STEVE\n"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"

# 265 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"

# 273 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"

# 283 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"

RustboroCity_Gym_EventScript_GiveChillingWater::
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GiveChillingWater_Text_0, MSGBOX_AUTOCLOSE
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHILLING_WATER
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainChillingWater, MSGBOX_AUTOCLOSE
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_MISA_STATE, 3
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MISA_EMO_RUSTBORO_HOUSE
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_Magmortar::
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 20
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_EventScript_Roxanne_FinalBattle::
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, RustboroCity_Gym_EventScript_Roxanne_FinalBattle_Text_0, RustboroCity_Gym_EventScript_Roxanne_FinalBattle_Text_1, RustboroCity_Gym_EventScript_RoxanneDefeatedFinal
	end


RustboroCity_Gym_EventScript_RoxanneDefeatedFinal::
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_GYM_LEADER_COUNT, 1
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_RoxanneDefeatedFinal_Text_0, MSGBOX_NPC
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_GYM_LEADER_COUNT, 9, EventScript_UnlockEliteFourFinalRematch
	end


RustboroCity_Gym_EventScript_RoxanneDefeatedFinal2::
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_RoxanneDefeatedFinal_Text_0, MSGBOX_NPC
	end


RustboroCity_Gym_EventScript_GiveChillingWater_Text_0:
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And because you were on fire,\n take this to cool off!$"

RustboroCity_Gym_EventScript_Roxanne_FinalBattle_Text_0:
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, {PLAYER}!\nI'm all fired up and ready to go!\pLet's get right to it!$"

RustboroCity_Gym_EventScript_Roxanne_FinalBattle_Text_1:
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Haha!\nI'm all burnt out!$"

RustboroCity_Gym_EventScript_RoxanneDefeatedFinal_Text_0:
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Haha!\n That was a great battle, {PLAYER}!\p You've gotten so strong now.\n You were really on fire!$"

RustboroCity_Gym_Text_ExplainChillingWater::
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM52,\n contains CHILLING WATER.\l It's a good way to put out a POKéMON\l that's on fire!$"
