# 1 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 6 "data/maps/PetalburgCity/scripts.pory"

# 7 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 8 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 10 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 11 "data/maps/PetalburgCity/scripts.pory"

# 12 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 13 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 14 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 18 "data/maps/PetalburgCity/scripts.pory"
	end
# 19 "data/maps/PetalburgCity/scripts.pory"

# 20 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 21 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 22 "data/maps/PetalburgCity/scripts.pory"
	return
# 23 "data/maps/PetalburgCity/scripts.pory"

# 24 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 25 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 26 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 27 "data/maps/PetalburgCity/scripts.pory"
	return
# 28 "data/maps/PetalburgCity/scripts.pory"

# 29 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 30 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 31 "data/maps/PetalburgCity/scripts.pory"
	return
# 32 "data/maps/PetalburgCity/scripts.pory"

# 33 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 34 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 35 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 36 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 37 "data/maps/PetalburgCity/scripts.pory"

# 38 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 39 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 40 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 41 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 42 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 43 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 44 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 47 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 48 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 49 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 50 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 51 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 53 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 54 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 55 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 56 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 57 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 58 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 59 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 60 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 61 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 62 "data/maps/PetalburgCity/scripts.pory"
	end
# 63 "data/maps/PetalburgCity/scripts.pory"

# 64 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 65 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 66 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 67 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 68 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 69 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 71 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 72 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 73 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 74 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 75 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 76 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 78 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 79 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 80 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 81 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 83 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 84 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 85 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 86 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 87 "data/maps/PetalburgCity/scripts.pory"
	end
# 88 "data/maps/PetalburgCity/scripts.pory"

# 89 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 90 "data/maps/PetalburgCity/scripts.pory"
	lock
# 91 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 92 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 94 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 95 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/PetalburgCity/scripts.pory"
	release
# 97 "data/maps/PetalburgCity/scripts.pory"
	end
# 98 "data/maps/PetalburgCity/scripts.pory"

# 99 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 100 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 101 "data/maps/PetalburgCity/scripts.pory"
	end
# 102 "data/maps/PetalburgCity/scripts.pory"

# 103 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 104 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 105 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 122 "data/maps/PetalburgCity/scripts.pory"

# 123 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 127 "data/maps/PetalburgCity/scripts.pory"

# 128 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 129 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 147 "data/maps/PetalburgCity/scripts.pory"

# 148 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 150 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 151 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 152 "data/maps/PetalburgCity/scripts.pory"

# 153 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 154 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 187 "data/maps/PetalburgCity/scripts.pory"

# 188 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 189 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 222 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 223 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 226 "data/maps/PetalburgCity/scripts.pory"

# 227 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 228 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 229 "data/maps/PetalburgCity/scripts.pory"
	end
# 230 "data/maps/PetalburgCity/scripts.pory"

# 231 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 232 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 233 "data/maps/PetalburgCity/scripts.pory"
	end
# 234 "data/maps/PetalburgCity/scripts.pory"

# 235 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 236 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 237 "data/maps/PetalburgCity/scripts.pory"
	end
# 238 "data/maps/PetalburgCity/scripts.pory"

# 239 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 240 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 241 "data/maps/PetalburgCity/scripts.pory"
	end
# 242 "data/maps/PetalburgCity/scripts.pory"

# 243 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 244 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 245 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 246 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 247 "data/maps/PetalburgCity/scripts.pory"
	end
# 248 "data/maps/PetalburgCity/scripts.pory"

# 249 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 250 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 251 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 252 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 253 "data/maps/PetalburgCity/scripts.pory"
	end
# 254 "data/maps/PetalburgCity/scripts.pory"

# 255 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 256 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 257 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 258 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 259 "data/maps/PetalburgCity/scripts.pory"
	end
# 260 "data/maps/PetalburgCity/scripts.pory"

# 261 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 262 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 263 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 264 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 265 "data/maps/PetalburgCity/scripts.pory"
	end
# 266 "data/maps/PetalburgCity/scripts.pory"

# 267 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 268 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 269 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 270 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 271 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 272 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 273 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 275 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 276 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 277 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 278 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 279 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 280 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 281 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 282 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 283 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 284 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 285 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 286 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 287 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 288 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 289 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 291 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 293 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 295 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 296 "data/maps/PetalburgCity/scripts.pory"
	end
# 297 "data/maps/PetalburgCity/scripts.pory"

# 298 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 300 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 302 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/PetalburgCity/scripts.pory"
	return
# 304 "data/maps/PetalburgCity/scripts.pory"

# 305 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 306 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 307 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/PetalburgCity/scripts.pory"
	return
# 309 "data/maps/PetalburgCity/scripts.pory"

# 310 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 312 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 314 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/PetalburgCity/scripts.pory"
	return
# 316 "data/maps/PetalburgCity/scripts.pory"

# 317 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 318 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 319 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 321 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/PetalburgCity/scripts.pory"
	return
# 323 "data/maps/PetalburgCity/scripts.pory"

# 324 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 325 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	return
# 329 "data/maps/PetalburgCity/scripts.pory"

# 330 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 331 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 332 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 333 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/PetalburgCity/scripts.pory"
	return
# 335 "data/maps/PetalburgCity/scripts.pory"

# 336 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 337 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 339 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/PetalburgCity/scripts.pory"
	return
# 341 "data/maps/PetalburgCity/scripts.pory"

# 342 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 344 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 345 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/PetalburgCity/scripts.pory"
	return
# 347 "data/maps/PetalburgCity/scripts.pory"

# 348 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 349 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 350 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 351 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 352 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 353 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 354 "data/maps/PetalburgCity/scripts.pory"

# 355 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 360 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 361 "data/maps/PetalburgCity/scripts.pory"

# 362 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 365 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 366 "data/maps/PetalburgCity/scripts.pory"

# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 372 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 373 "data/maps/PetalburgCity/scripts.pory"

# 374 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 380 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 381 "data/maps/PetalburgCity/scripts.pory"

# 382 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 393 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 394 "data/maps/PetalburgCity/scripts.pory"

# 395 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 409 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 410 "data/maps/PetalburgCity/scripts.pory"

# 411 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 423 "data/maps/PetalburgCity/scripts.pory"

# 424 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 436 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 437 "data/maps/PetalburgCity/scripts.pory"

# 438 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 451 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 452 "data/maps/PetalburgCity/scripts.pory"

# 453 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 463 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 464 "data/maps/PetalburgCity/scripts.pory"

# 465 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 466 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 467 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 479 "data/maps/PetalburgCity/scripts.pory"

# 480 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 490 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 491 "data/maps/PetalburgCity/scripts.pory"

# 492 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 503 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 504 "data/maps/PetalburgCity/scripts.pory"

# 505 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 506 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 507 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 508 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 509 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 510 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 511 "data/maps/PetalburgCity/scripts.pory"
	end
# 512 "data/maps/PetalburgCity/scripts.pory"

# 513 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 514 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 515 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 516 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 517 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 518 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 519 "data/maps/PetalburgCity/scripts.pory"
	end
# 520 "data/maps/PetalburgCity/scripts.pory"

# 521 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 522 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 523 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 524 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 525 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 526 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 527 "data/maps/PetalburgCity/scripts.pory"
	end
# 528 "data/maps/PetalburgCity/scripts.pory"

# 529 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 530 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 531 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 532 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 533 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 534 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 535 "data/maps/PetalburgCity/scripts.pory"
	end
# 536 "data/maps/PetalburgCity/scripts.pory"

# 537 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 538 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 539 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 541 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 542 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 544 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 546 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 548 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 550 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 551 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 552 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 553 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 555 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 556 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 560 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 561 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 562 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 563 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 564 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 565 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 566 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 567 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 568 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 569 "data/maps/PetalburgCity/scripts.pory"
	end
# 570 "data/maps/PetalburgCity/scripts.pory"

# 571 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 572 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 573 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 574 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/PetalburgCity/scripts.pory"
	return
# 576 "data/maps/PetalburgCity/scripts.pory"

# 577 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 578 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 579 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 580 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/PetalburgCity/scripts.pory"
	return
# 582 "data/maps/PetalburgCity/scripts.pory"

# 583 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 584 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 585 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 586 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 587 "data/maps/PetalburgCity/scripts.pory"
	return
# 588 "data/maps/PetalburgCity/scripts.pory"

# 589 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 590 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 591 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 592 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 593 "data/maps/PetalburgCity/scripts.pory"
	return
# 594 "data/maps/PetalburgCity/scripts.pory"

# 595 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 601 "data/maps/PetalburgCity/scripts.pory"

# 602 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 608 "data/maps/PetalburgCity/scripts.pory"

# 609 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 624 "data/maps/PetalburgCity/scripts.pory"

# 625 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 626 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 630 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 632 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 633 "data/maps/PetalburgCity/scripts.pory"

# 634 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 648 "data/maps/PetalburgCity/scripts.pory"

# 649 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 650 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 652 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 653 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 655 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 656 "data/maps/PetalburgCity/scripts.pory"

# 657 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 671 "data/maps/PetalburgCity/scripts.pory"

# 672 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 673 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 675 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 676 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 678 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 679 "data/maps/PetalburgCity/scripts.pory"

# 680 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 694 "data/maps/PetalburgCity/scripts.pory"

# 695 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 696 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 698 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 699 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 701 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 702 "data/maps/PetalburgCity/scripts.pory"

# 703 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 704 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 705 "data/maps/PetalburgCity/scripts.pory"
	end
# 706 "data/maps/PetalburgCity/scripts.pory"

# 707 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 711 "data/maps/PetalburgCity/scripts.pory"

# 712 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 719 "data/maps/PetalburgCity/scripts.pory"

# 720 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 722 "data/maps/PetalburgCity/scripts.pory"

# 723 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 739 "data/maps/PetalburgCity/scripts.pory"

# 740 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: LUNA\l"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of fantasia!”$"
# 744 "data/maps/PetalburgCity/scripts.pory"

# 745 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 748 "data/maps/PetalburgCity/scripts.pory"

# 749 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 751 "data/maps/PetalburgCity/scripts.pory"

# 752 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 756 "data/maps/PetalburgCity/scripts.pory"

# 757 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 763 "data/maps/PetalburgCity/scripts.pory"

# 764 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_LunaLeftTrigger::
# 771 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_RatCaveTriggerLeft
# 772 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 773 "data/maps/PetalburgCity/scripts.pory"
	delay 10
# 774 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Luna
	return


PetalburgCity_EventScript_LunaRightTrigger::
# 778 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_RatCaveTriggerRight
# 779 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/PetalburgCity/scripts.pory"
	delay 10
# 781 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Luna
	return


PetalburgCity_EventScript_Luna::
# 785 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 786 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_LUNA_PETALBURG
# 787 "data/maps/PetalburgCity/scripts.pory"
	addobject 9
# 788 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Luna_Text_0, MSGBOX_AUTOCLOSE
# 789 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 790 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgFaceDown
# 791 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/PetalburgCity/scripts.pory"
	applymovement 9, PetalburgCity_LunaMove1
# 793 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 9
# 794 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_LunaText1, MSGBOX_AUTOCLOSE
# 795 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 796 "data/maps/PetalburgCity/scripts.pory"
	applymovement 9, PetalburgWalkUp
# 797 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 9
# 798 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_LunaBattle
# 799 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 800 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_LunaText2, MSGBOX_AUTOCLOSE
# 801 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 802 "data/maps/PetalburgCity/scripts.pory"
	applymovement 9, PetalburgFaceDown
# 803 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 9
# 804 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_LunaText3, MSGBOX_AUTOCLOSE
# 805 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 806 "data/maps/PetalburgCity/scripts.pory"
	applymovement 9, PetalburgCity_LunaLeave
# 807 "data/maps/PetalburgCity/scripts.pory"
	delay 20
# 808 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgFaceLeft
# 809 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 9
# 810 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 811 "data/maps/PetalburgCity/scripts.pory"
	removeobject 9
# 812 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_LUNA_PETALBURG
# 813 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 814 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_RAT_CAVE_STATE, 3
# 815 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgFaceUp
# 816 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 817 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_LunaBattle::
# 822 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_PETALBURG, PetalburgCity_LunaOutro
# 823 "data/maps/PetalburgCity/scripts.pory"
	lockall
	return


PetalburgCity_EventScript_Exterminator::
# 855 "data/maps/PetalburgCity/scripts.pory"
	lock
# 856 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, PetalburgCityFacePlayer
# 857 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 10
# 858 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Exterminator_Text_0, MSGBOX_NPC
# 860 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 861 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_EventScript_NPC_GYM::
# 866 "data/maps/PetalburgCity/scripts.pory"
	lock
# 867 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, PetalburgCityFacePlayer
# 868 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 11
# 869 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RAT_CAVE_STATE, 2
	goto_if_eq PetalburgCity_EventScript_NPC_GYM_1
# 876 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RAT_CAVE_STATE, 3
	goto_if_eq PetalburgCity_EventScript_NPC_GYM_2
# 883 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_NPC_GYM_Text_0, MSGBOX_NPC
# 885 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 886 "data/maps/PetalburgCity/scripts.pory"
	release
	end

PetalburgCity_EventScript_NPC_GYM_1:
# 870 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_NPC_GYM_Text_0, MSGBOX_NPC
# 872 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 873 "data/maps/PetalburgCity/scripts.pory"
	release
	end

PetalburgCity_EventScript_NPC_GYM_2:
# 877 "data/maps/PetalburgCity/scripts.pory"
	msgbox LunaGone_FantasiaHint, MSGBOX_NPC
# 878 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 879 "data/maps/PetalburgCity/scripts.pory"
	release
	end


# 899 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_LunaMove1:
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 901 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 904 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_LunaLeave:
# 905 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 909 "data/maps/PetalburgCity/scripts.pory"
PetalburgFaceUp:
# 909 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 910 "data/maps/PetalburgCity/scripts.pory"
PetalburgFaceDown:
# 910 "data/maps/PetalburgCity/scripts.pory"
	face_down
	step_end

# 911 "data/maps/PetalburgCity/scripts.pory"
PetalburgFaceRight:
# 911 "data/maps/PetalburgCity/scripts.pory"
	face_right
	step_end

# 912 "data/maps/PetalburgCity/scripts.pory"
PetalburgFaceLeft:
# 912 "data/maps/PetalburgCity/scripts.pory"
	face_left
	step_end

# 913 "data/maps/PetalburgCity/scripts.pory"
PetalburgWalkUp:
# 913 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 914 "data/maps/PetalburgCity/scripts.pory"
PetalburgCityFacePlayer:
# 914 "data/maps/PetalburgCity/scripts.pory"
	face_player
	step_end

# 915 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_RatCaveTriggerLeft:
# 916 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 917 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 919 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_RatCaveTriggerRight:
# 920 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 921 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

PetalburgCity_EventScript_Luna_Text_0:
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}.$"

PetalburgCity_EventScript_Exterminator_Text_0:
# 858 "data/maps/PetalburgCity/scripts.pory"
	.string "MAN: Sorry, we got people in\n there working right now.$"

PetalburgCity_EventScript_NPC_GYM_Text_0:
# 870 "data/maps/PetalburgCity/scripts.pory"
	.string "Sorry, LUNA's not at the GYM\n right now.$"

PetalburgCity_LunaText1::
# 827 "data/maps/PetalburgCity/scripts.pory"
	.string "LUNA: Thanks for getting here fast.\l You got your first GYM badge huh? Nice.\l Before I tell you what I need you to do,\n let me make sure you're ready.$"

PetalburgCity_LunaOutro::
# 833 "data/maps/PetalburgCity/scripts.pory"
	.string "Not bad.$"

PetalburgCity_LunaText2::
# 835 "data/maps/PetalburgCity/scripts.pory"
	.string "LUNA: Okay, you should be fine.\p Let's just say we've been having a...\n little pest problem lately.\p And it looks like they somehow got\n into my house when I was away.\p The exterminators couldn't handle it,\n But a POKéMON TRAINER should be fine. $"

PetalburgCity_LunaText3::
# 845 "data/maps/PetalburgCity/scripts.pory"
	.string "LUNA: I'd do it myself, but I have\n a very important person I need to\l meet with.\p I won't be back for awhile, so I don't\n want it to get out of control.\l I'll leave it to you.$"

LunaGone_FantasiaHint::
# 892 "data/maps/PetalburgCity/scripts.pory"
	.string "MAN: LUNA's still not back.\n He said he was meeting somebody\l at MT. PYRE.\p I have no idea why he would want to\n go to such a haunted place.$"
