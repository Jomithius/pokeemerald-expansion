# 1 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 2 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 3 "data/maps/RustboroCity_Gym/scripts.pory"

# 4 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 12 "data/maps/RustboroCity_Gym/scripts.pory"

# 13 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 27 "data/maps/RustboroCity_Gym/scripts.pory"

# 28 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
    goto RustboroCity_Gym_EventScript_GiveChillingWater
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 35 "data/maps/RustboroCity_Gym/scripts.pory"

# 36 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Gym/scripts.pory"

# 41 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 45 "data/maps/RustboroCity_Gym/scripts.pory"

# 46 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 50 "data/maps/RustboroCity_Gym/scripts.pory"

# 51 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 55 "data/maps/RustboroCity_Gym/scripts.pory"

# 56 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Gym/scripts.pory"

# 64 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 68 "data/maps/RustboroCity_Gym/scripts.pory"

# 69 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 74 "data/maps/RustboroCity_Gym/scripts.pory"

# 75 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 80 "data/maps/RustboroCity_Gym/scripts.pory"

# 81 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 85 "data/maps/RustboroCity_Gym/scripts.pory"

# 86 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 105 "data/maps/RustboroCity_Gym/scripts.pory"

# 106 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "STEVE, the GYM LEADER, is a\n"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "firefighter.\p"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "He uses a variety of POKéMON, but\n"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "his ace POKéMON is a fire type.\l"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Isn't that ironic?\p"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"

# 128 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"

# 140 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"

# 144 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"

# 147 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROCK type POKéMON are also\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "strong against fire types!$"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"

# 151 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "FIRE! FIRE! FIRE! FIRE!$"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"

# 154 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm all burnt out…$"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"

# 157 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "STEVE is stronger than me by\n"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"

# 162 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "FLY!\p"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "FIGHT!\p"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "WIN!$"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"

# 167 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one cool customer!$"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Not only is he a firefighter, he\n"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "also served in the POKéMON WAR.$"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"

# 176 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo! I'm STEVE, the RUSTBORO\n"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER after my days\n"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "serving our region.\l"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "All right. I'm all fired up!\p"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come on! Show me you and your\n"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON's burning spirit!$"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Haha!\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost!\p"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That was a great battle!\n"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were on fire!\p"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, the LEAGUE's rules state\n"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So take the official POKéMON\n"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"

# 196 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from STEVE.$"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"

# 200 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE enables your POKéMON\n"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to use the HM move CUT outside of battle.\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Take this too!$"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"

# 205 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.$"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"

# 213 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you're so strong, you should\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The next GYM is in SLATEPORT, I think.$"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"

# 218 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"

# 221 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "STEVE'S CERTIFIED TRAINERS:\n"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
    .string "JAMES\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"

# 227 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "STEVE: Yo, {PLAYER}!\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is STEVE from RUSTBORO.\p"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard that you're moving\n"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "up through the ranks of\l"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an blazing speed.\p"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'm glad to hear it!\l"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Me and MAGMORTAR are excited\n"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to see how strong you'll get.\p"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm fired up!\p"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"

# 242 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER STEVE\n"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"

# 246 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"

# 254 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"

# 258 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"

# 264 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"

RustboroCity_Gym_EventScript_GiveChillingWater::
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GiveChillingWater_Text_0, MSGBOX_AUTOCLOSE
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_CHILLING_WATER
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainChillingWater, MSGBOX_AUTOCLOSE
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_MISA_STATE, 3
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_Magmortar::
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 20
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


RustboroCity_Gym_EventScript_GiveChillingWater_Text_0:
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And because you were on fire,\n take this to cool off!$"

RustboroCity_Gym_Text_ExplainChillingWater::
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM52,\n contains CHILLING WATER.\l It's a good way to put out a POKéMON\l that's on fire!$"
