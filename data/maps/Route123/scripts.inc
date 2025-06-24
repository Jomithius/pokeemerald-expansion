# 1 "data/maps/Route123/scripts.pory"
Route123_MapScripts::
# 2 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 3 "data/maps/Route123/scripts.pory"
	.byte 0
# 4 "data/maps/Route123/scripts.pory"

# 5 "data/maps/Route123/scripts.pory"
Route123_OnTransition:
# 6 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 7 "data/maps/Route123/scripts.pory"
	end
# 8 "data/maps/Route123/scripts.pory"

# 9 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 10 "data/maps/Route123/scripts.pory"
	lock
# 11 "data/maps/Route123/scripts.pory"
	faceplayer
# 12 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 13 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 14 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 15 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_EventScript_NoGrassMons
# 16 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 17 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN
# 18 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 19 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 20 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 21 "data/maps/Route123/scripts.pory"
	release
# 22 "data/maps/Route123/scripts.pory"
	end
# 23 "data/maps/Route123/scripts.pory"

# 24 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 25 "data/maps/Route123/scripts.pory"
	release
# 26 "data/maps/Route123/scripts.pory"
	end
# 27 "data/maps/Route123/scripts.pory"

# 28 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 29 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 30 "data/maps/Route123/scripts.pory"
	release
# 31 "data/maps/Route123/scripts.pory"
	end
# 32 "data/maps/Route123/scripts.pory"

# 33 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 34 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 35 "data/maps/Route123/scripts.pory"
	end
# 36 "data/maps/Route123/scripts.pory"

# 37 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 38 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 39 "data/maps/Route123/scripts.pory"
	end
# 40 "data/maps/Route123/scripts.pory"

# 41 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 42 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 43 "data/maps/Route123/scripts.pory"
	end
# 44 "data/maps/Route123/scripts.pory"

# 45 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 46 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 47 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route123/scripts.pory"
	end
# 49 "data/maps/Route123/scripts.pory"

# 50 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 51 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 52 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route123/scripts.pory"
	end
# 54 "data/maps/Route123/scripts.pory"

# 55 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 56 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 57 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route123/scripts.pory"
	end
# 59 "data/maps/Route123/scripts.pory"

# 60 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 61 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
# 62 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 63 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchJacki
# 64 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 65 "data/maps/Route123/scripts.pory"
	release
# 66 "data/maps/Route123/scripts.pory"
	end
# 67 "data/maps/Route123/scripts.pory"

# 68 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 69 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 70 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 72 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 73 "data/maps/Route123/scripts.pory"
	release
# 74 "data/maps/Route123/scripts.pory"
	end
# 75 "data/maps/Route123/scripts.pory"

# 76 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 77 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 78 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route123/scripts.pory"
	end
# 80 "data/maps/Route123/scripts.pory"

# 81 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 82 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 83 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route123/scripts.pory"
	end
# 85 "data/maps/Route123/scripts.pory"

# 86 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 87 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 88 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route123/scripts.pory"
	end
# 90 "data/maps/Route123/scripts.pory"

# 91 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 92 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 93 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route123/scripts.pory"
	end
# 95 "data/maps/Route123/scripts.pory"

# 96 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 97 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 98 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route123/scripts.pory"
	end
# 100 "data/maps/Route123/scripts.pory"

# 101 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 102 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 103 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route123/scripts.pory"
	end
# 105 "data/maps/Route123/scripts.pory"

# 106 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 107 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 108 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route123/scripts.pory"
	end
# 110 "data/maps/Route123/scripts.pory"

# 111 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 112 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 113 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route123/scripts.pory"
	end
# 115 "data/maps/Route123/scripts.pory"

# 116 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 117 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 118 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route123/scripts.pory"
	end
# 120 "data/maps/Route123/scripts.pory"

# 121 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 122 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 123 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route123/scripts.pory"
	end
# 125 "data/maps/Route123/scripts.pory"

# 126 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 127 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 128 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route123/scripts.pory"
	end
# 130 "data/maps/Route123/scripts.pory"

# 131 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 132 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
# 133 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 134 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchFernando
# 135 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 136 "data/maps/Route123/scripts.pory"
	release
# 137 "data/maps/Route123/scripts.pory"
	end
# 138 "data/maps/Route123/scripts.pory"

# 139 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 140 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 141 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 143 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 144 "data/maps/Route123/scripts.pory"
	release
# 145 "data/maps/Route123/scripts.pory"
	end
# 146 "data/maps/Route123/scripts.pory"

# 147 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 148 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 149 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route123/scripts.pory"
	end
# 151 "data/maps/Route123/scripts.pory"

# 152 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 153 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\p"
# 154 "data/maps/Route123/scripts.pory"
	.string "Do you have any GRASS-type POKéMON?$"
# 155 "data/maps/Route123/scripts.pory"

# 156 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 157 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 158 "data/maps/Route123/scripts.pory"
	.string "You like GRASS-type POKéMON, too,\n"
# 159 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 160 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 161 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 162 "data/maps/Route123/scripts.pory"

# 163 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 164 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
# 165 "data/maps/Route123/scripts.pory"
	.string "POKéMON. I'm like a tree doctor.$"
# 166 "data/maps/Route123/scripts.pory"

# 167 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 168 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
# 169 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 118$"
# 170 "data/maps/Route123/scripts.pory"

# 171 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 172 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
# 173 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 174 "data/maps/Route123/scripts.pory"

# 175 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 176 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"

Route123_EventScript_Rob::
# 180 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ROB_2, Route123_Biker_Intro2, Route123_BikerDefeat2
# 181 "data/maps/Route123/scripts.pory"
	msgbox Route123_BikerDefeat, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Dale::
# 186 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DALE_2, Route123_Dale_Intro, Route123_BikerDefeat
# 187 "data/maps/Route123/scripts.pory"
	msgbox Route123_DaleDefeat, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Stephen::
# 192 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_STEPHEN_2, Route123_Biker_Intro, Route123_BikerDefeat3
# 193 "data/maps/Route123/scripts.pory"
	msgbox Route123_BikerDefeat3, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_BikerMob::
# 198 "data/maps/Route123/scripts.pory"
	msgbox Route123_Biker_Intro, MSGBOX_NPC
	end


Route123_EventScript_Speedwagon::
# 203 "data/maps/Route123/scripts.pory"
	lock
# 204 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_Speedwagon1, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route123/scripts.pory"
	waitmessage
# 206 "data/maps/Route123/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEEDWAGON_2, Route123_SpeedwagonDefeat
# 207 "data/maps/Route123/scripts.pory"
	lock
# 208 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_Speedwagon2, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route123/scripts.pory"
	waitmessage
# 210 "data/maps/Route123/scripts.pory"
	delay 30
# 211 "data/maps/Route123/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 212 "data/maps/Route123/scripts.pory"
	fadescreen FADE_TO_BLACK
# 213 "data/maps/Route123/scripts.pory"
	playse SE_THUNDERSTORM
# 214 "data/maps/Route123/scripts.pory"
	delay 120
# 215 "data/maps/Route123/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 216 "data/maps/Route123/scripts.pory"
	delay 20
# 217 "data/maps/Route123/scripts.pory"
	playse SE_FLEE
# 218 "data/maps/Route123/scripts.pory"
	removeobject 44
# 219 "data/maps/Route123/scripts.pory"
	removeobject 45
# 220 "data/maps/Route123/scripts.pory"
	removeobject 46
# 221 "data/maps/Route123/scripts.pory"
	removeobject 47
# 222 "data/maps/Route123/scripts.pory"
	removeobject 48
# 223 "data/maps/Route123/scripts.pory"
	removeobject 49
# 224 "data/maps/Route123/scripts.pory"
	delay 10
# 225 "data/maps/Route123/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 226 "data/maps/Route123/scripts.pory"
	fadedefaultbgm
# 227 "data/maps/Route123/scripts.pory"
	delay 10
# 228 "data/maps/Route123/scripts.pory"
	setflag FLAG_HIDE_BIKERS_ROUTE_123
# 229 "data/maps/Route123/scripts.pory"
	release
	end


Route123_EventScript_ZapdosGalar::
# 234 "data/maps/Route123/scripts.pory"
	lock
# 235 "data/maps/Route123/scripts.pory"
	playmoncry SPECIES_ZAPDOS_GALAR, CRY_MODE_ENCOUNTER
# 236 "data/maps/Route123/scripts.pory"
	delay 40
# 237 "data/maps/Route123/scripts.pory"
	waitmoncry
# 238 "data/maps/Route123/scripts.pory"
	setwildbattle SPECIES_ZAPDOS_GALAR, 75
# 239 "data/maps/Route123/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 240 "data/maps/Route123/scripts.pory"
	waitstate
# 241 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 242 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route123_EventScript_ZapdosGalar_2
# 242 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route123_EventScript_ZapdosGalar_2
# 247 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route123_EventScript_ZapdosGalar_3
# 247 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route123_EventScript_ZapdosGalar_3
Route123_EventScript_ZapdosGalar_1:
# 250 "data/maps/Route123/scripts.pory"
	release
	end

Route123_EventScript_ZapdosGalar_2:
# 243 "data/maps/Route123/scripts.pory"
	fadescreen FADE_TO_BLACK
# 244 "data/maps/Route123/scripts.pory"
	removeobject VAR_LAST_TALKED
# 245 "data/maps/Route123/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 5
	goto Route123_EventScript_ZapdosGalar_1

Route123_EventScript_ZapdosGalar_3:
# 248 "data/maps/Route123/scripts.pory"
	goto Common_EventScript_NopReturn
	goto Route123_EventScript_ZapdosGalar_1


Route123_Text_Speedwagon1::
# 254 "data/maps/Route123/scripts.pory"
	.string "SPEEDWAGON: Huh?\n YOU again?!\p Some of my members got arrested\n because of you!\p This is for them!\n Come on!$"

Route123_Text_Speedwagon2::
# 263 "data/maps/Route123/scripts.pory"
	.string "H-How are you still stronger?!\n Let's get out of here, boys!$"

Route123_Dale_Intro::
# 268 "data/maps/Route123/scripts.pory"
	.string "You!\n My friend's locked up because of you!$"

Route123_DaleDefeat::
# 273 "data/maps/Route123/scripts.pory"
	.string "I won't forget this!$"

Route123_Biker_Intro::
# 277 "data/maps/Route123/scripts.pory"
	.string "BRRRRUBBB BRRRRUB\n BRRRUBRUBRRRRUB!$"

Route123_Biker_Intro2::
# 282 "data/maps/Route123/scripts.pory"
	.string "Get out of my way!$"

Route123_BikerDefeat::
# 286 "data/maps/Route123/scripts.pory"
	.string "All outta gas…$"

Route123_BikerDefeat2::
# 290 "data/maps/Route123/scripts.pory"
	.string "You messed up my ride!$"

Route123_BikerDefeat3::
# 294 "data/maps/Route123/scripts.pory"
	.string "BRRRRUBBB BRRRUB….$"

Route123_SpeedwagonDefeat::
# 298 "data/maps/Route123/scripts.pory"
	.string "Dress for the slide,\n not the ride…$"
