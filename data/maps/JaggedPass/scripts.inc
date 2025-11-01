# 1 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_HIDEOUT_GUARD, 5
# 2 "data/maps/JaggedPass/scripts.pory"

# 3 "data/maps/JaggedPass/scripts.pory"
JaggedPass_MapScripts::
# 4 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 5 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 6 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
# 7 "data/maps/JaggedPass/scripts.pory"
	.byte 0
# 8 "data/maps/JaggedPass/scripts.pory"

# 9 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 10 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 11 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
# 12 "data/maps/JaggedPass/scripts.pory"
	end
# 13 "data/maps/JaggedPass/scripts.pory"

# 14 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 15 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 16 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 17 "data/maps/JaggedPass/scripts.pory"
	return
# 18 "data/maps/JaggedPass/scripts.pory"

# 19 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 20 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
# 21 "data/maps/JaggedPass/scripts.pory"
	return
# 22 "data/maps/JaggedPass/scripts.pory"

# 23 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition:
# 24 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
# 25 "data/maps/JaggedPass/scripts.pory"
	end
# 26 "data/maps/JaggedPass/scripts.pory"

# 27 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 28 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 29 "data/maps/JaggedPass/scripts.pory"
	doweather
# 30 "data/maps/JaggedPass/scripts.pory"
	return
# 31 "data/maps/JaggedPass/scripts.pory"

# 32 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 33 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
# 34 "data/maps/JaggedPass/scripts.pory"
	end
# 35 "data/maps/JaggedPass/scripts.pory"

# 36 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 37 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 38 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 39 "data/maps/JaggedPass/scripts.pory"
	end
# 40 "data/maps/JaggedPass/scripts.pory"

# 41 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 42 "data/maps/JaggedPass/scripts.pory"
	lockall
# 43 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 44 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 45 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 46 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 47 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 48 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 49 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 50 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 51 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 52 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 53 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 54 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 55 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 56 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 57 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 58 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 59 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 60 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 62 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 63 "data/maps/JaggedPass/scripts.pory"
	waitse
# 64 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 65 "data/maps/JaggedPass/scripts.pory"
	end
# 66 "data/maps/JaggedPass/scripts.pory"

# 67 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 68 "data/maps/JaggedPass/scripts.pory"
	lockall
# 69 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 70 "data/maps/JaggedPass/scripts.pory"
	waitse
# 71 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 72 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 73 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 74 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 75 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 76 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 77 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 78 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 79 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 80 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 81 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 82 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 83 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 84 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 85 "data/maps/JaggedPass/scripts.pory"
	end
# 86 "data/maps/JaggedPass/scripts.pory"

# 87 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 88 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 89 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 90 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 91 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 92 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 93 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 94 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 95 "data/maps/JaggedPass/scripts.pory"
	end
# 96 "data/maps/JaggedPass/scripts.pory"

# 97 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 98 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 99 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/JaggedPass/scripts.pory"
	end
# 101 "data/maps/JaggedPass/scripts.pory"

# 102 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 103 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
# 104 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 105 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
# 106 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 107 "data/maps/JaggedPass/scripts.pory"
	release
# 108 "data/maps/JaggedPass/scripts.pory"
	end
# 109 "data/maps/JaggedPass/scripts.pory"

# 110 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 111 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 112 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 113 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 114 "data/maps/JaggedPass/scripts.pory"
	release
# 115 "data/maps/JaggedPass/scripts.pory"
	end
# 116 "data/maps/JaggedPass/scripts.pory"

# 117 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 118 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 119 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 120 "data/maps/JaggedPass/scripts.pory"
	end
# 121 "data/maps/JaggedPass/scripts.pory"

# 122 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 123 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat
# 124 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 125 "data/maps/JaggedPass/scripts.pory"
	release
# 126 "data/maps/JaggedPass/scripts.pory"
	end
# 127 "data/maps/JaggedPass/scripts.pory"
@ Unused
# 128 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 129 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 130 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 131 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 132 "data/maps/JaggedPass/scripts.pory"
	release
# 133 "data/maps/JaggedPass/scripts.pory"
	end
# 134 "data/maps/JaggedPass/scripts.pory"
@ Unused
# 135 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 136 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 137 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 138 "data/maps/JaggedPass/scripts.pory"
	end
# 139 "data/maps/JaggedPass/scripts.pory"

# 140 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 141 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
# 142 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/JaggedPass/scripts.pory"
	end
# 144 "data/maps/JaggedPass/scripts.pory"

# 145 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 146 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 147 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/JaggedPass/scripts.pory"
	end
# 149 "data/maps/JaggedPass/scripts.pory"

# 150 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 151 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 152 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 153 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 154 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 155 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 156 "data/maps/JaggedPass/scripts.pory"

# 157 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 158 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 159 "data/maps/JaggedPass/scripts.pory"

# 160 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 161 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 162 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 163 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 164 "data/maps/JaggedPass/scripts.pory"

# 165 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 166 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 167 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 168 "data/maps/JaggedPass/scripts.pory"

# 169 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 170 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 171 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 172 "data/maps/JaggedPass/scripts.pory"

# 173 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 174 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 175 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 176 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 177 "data/maps/JaggedPass/scripts.pory"

# 178 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 179 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 180 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 181 "data/maps/JaggedPass/scripts.pory"

# 182 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 183 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 184 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 185 "data/maps/JaggedPass/scripts.pory"

# 186 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 187 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 188 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 189 "data/maps/JaggedPass/scripts.pory"

# 190 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 191 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 192 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 193 "data/maps/JaggedPass/scripts.pory"

# 194 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 195 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 196 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 197 "data/maps/JaggedPass/scripts.pory"

# 198 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 199 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 200 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 201 "data/maps/JaggedPass/scripts.pory"

# 202 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 203 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 204 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 205 "data/maps/JaggedPass/scripts.pory"

# 206 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 207 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 208 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 209 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 210 "data/maps/JaggedPass/scripts.pory"

# 211 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 212 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 213 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 214 "data/maps/JaggedPass/scripts.pory"

# 215 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 216 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 217 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 218 "data/maps/JaggedPass/scripts.pory"

# 219 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 220 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 221 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 222 "data/maps/JaggedPass/scripts.pory"

# 223 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 224 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 225 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 226 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 227 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 228 "data/maps/JaggedPass/scripts.pory"

# 229 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 230 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 231 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 232 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 233 "data/maps/JaggedPass/scripts.pory"

# 234 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 235 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 236 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 237 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 238 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 239 "data/maps/JaggedPass/scripts.pory"

# 240 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 241 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 242 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 243 "data/maps/JaggedPass/scripts.pory"

# 244 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 245 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 246 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 247 "data/maps/JaggedPass/scripts.pory"

# 248 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 249 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 250 "data/maps/JaggedPass/scripts.pory"

# 251 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 252 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 253 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 254 "data/maps/JaggedPass/scripts.pory"

# 255 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 256 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 257 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 258 "data/maps/JaggedPass/scripts.pory"

# 259 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 260 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 261 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 262 "data/maps/JaggedPass/scripts.pory"

# 263 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 264 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 265 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"

JaggedPass_EventScript_Marowak::
# 270 "data/maps/JaggedPass/scripts.pory"
	lock
# 271 "data/maps/JaggedPass/scripts.pory"
	faceplayer
# 272 "data/maps/JaggedPass/scripts.pory"
	playmoncry SPECIES_MAROWAK_ALOLA, CRY_MODE_ENCOUNTER
# 273 "data/maps/JaggedPass/scripts.pory"
	waitmoncry
# 274 "data/maps/JaggedPass/scripts.pory"
	setwildbattle SPECIES_MAROWAK_ALOLA_TOTEM, 32, ITEM_THICK_CLUB
# 275 "data/maps/JaggedPass/scripts.pory"
	dowildbattle
# 276 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 277 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq JaggedPass_EventScript_Marowak_2
# 277 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq JaggedPass_EventScript_Marowak_2
# 283 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 284 "data/maps/JaggedPass/scripts.pory"
	removeobject VAR_LAST_TALKED
# 285 "data/maps/JaggedPass/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 286 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_EventScript_Marowak_Text_0, MSGBOX_AUTOCLOSE
# 287 "data/maps/JaggedPass/scripts.pory"
	waitmessage
JaggedPass_EventScript_Marowak_1:
# 289 "data/maps/JaggedPass/scripts.pory"
	release
	end

JaggedPass_EventScript_Marowak_2:
# 278 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 279 "data/maps/JaggedPass/scripts.pory"
	removeobject VAR_LAST_TALKED
# 280 "data/maps/JaggedPass/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto JaggedPass_EventScript_Marowak_1


JaggedPass_EventScript_Gumshoos::
# 294 "data/maps/JaggedPass/scripts.pory"
	lock
# 295 "data/maps/JaggedPass/scripts.pory"
	faceplayer
# 296 "data/maps/JaggedPass/scripts.pory"
	playmoncry SPECIES_GUMSHOOS, CRY_MODE_ENCOUNTER
# 297 "data/maps/JaggedPass/scripts.pory"
	waitmoncry
# 298 "data/maps/JaggedPass/scripts.pory"
	setwildbattle SPECIES_GUMSHOOS_TOTEM, 30, ITEM_ABILITY_PATCH
# 299 "data/maps/JaggedPass/scripts.pory"
	dowildbattle
# 300 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 301 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq JaggedPass_EventScript_Gumshoos_2
# 301 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq JaggedPass_EventScript_Gumshoos_2
# 307 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 308 "data/maps/JaggedPass/scripts.pory"
	removeobject VAR_LAST_TALKED
# 309 "data/maps/JaggedPass/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
# 310 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_EventScript_Gumshoos_Text_0, MSGBOX_AUTOCLOSE
# 311 "data/maps/JaggedPass/scripts.pory"
	waitmessage
JaggedPass_EventScript_Gumshoos_1:
# 313 "data/maps/JaggedPass/scripts.pory"
	release
	end

JaggedPass_EventScript_Gumshoos_2:
# 302 "data/maps/JaggedPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 303 "data/maps/JaggedPass/scripts.pory"
	removeobject VAR_LAST_TALKED
# 304 "data/maps/JaggedPass/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto JaggedPass_EventScript_Gumshoos_1


JaggedPass_EventScript_Marowak_Text_0:
# 286 "data/maps/JaggedPass/scripts.pory"
	.string "The MAROWAK disappeared…$"

JaggedPass_EventScript_Gumshoos_Text_0:
# 310 "data/maps/JaggedPass/scripts.pory"
	.string "The GUMSHOOS disappeared…$"
