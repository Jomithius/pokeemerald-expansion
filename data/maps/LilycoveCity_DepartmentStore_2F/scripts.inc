# 1 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.byte 0
# 3 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 5 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 6 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 7 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_PokemartAlcremie
# 10 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 11 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 12 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 13 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 15 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
# 16 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 17 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 18 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message LilycoveCity_DepartmentStore_2F_TextGetYourBalls
# 26 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 27 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 28 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 31 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 32 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 33 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart1:
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HEAL_BALL 
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_NET_BALL
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_NEST_BALL
# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_DIVE_BALL
# 41 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_DUSK_BALL
# 42 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_TIMER_BALL
# 43 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_QUICK_BALL
# 44 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_REPEAT_BALL
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LUXURY_BALL
# 46 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LEVEL_BALL
# 47 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LURE_BALL
# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_MOON_BALL
# 49 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FRIEND_BALL
# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LOVE_BALL
# 51 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FAST_BALL
# 52 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_HEAVY_BALL
# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FULL_HEAL
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_MAX_LURE
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FLUFFY_TAIL
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 81 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_PokemartAlcremie:
# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_LOVE_SWEET
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_BERRY_SWEET
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_CLOVER_SWEET
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_FLOWER_SWEET
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_STAR_SWEET
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_RIBBON_SWEET
# 89 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_RED_NECTAR
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_YELLOW_NECTAR
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PINK_NECTAR
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .2byte ITEM_PURPLE_NECTAR
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_TextGetYourBalls:
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .string "BALLS! BALLS!\n" 
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
    .string "Come get your POKé BALLS here!$"
# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 100 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 101 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 103 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"

LilycoveCity_DepartmentStore_2F_VarTempTrigger::
# 114 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


LilycoveCity_DepartmentStore_2F_VarTempTrigger2::
# 119 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
	end


LilycoveCity_DepartmentStore_2F_EventScript_Mae::
# 124 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 125 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae1, MSGBOX_AUTOCLOSE
# 126 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 129 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 130 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 131 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_set FLAG_SLATEPORT_MAE_BATTLE, LilycoveCity_DepartmentStore_2F_EventScript_Mae_2
# 136 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae, MSGBOX_AUTOCLOSE
LilycoveCity_DepartmentStore_2F_EventScript_Mae_1:
# 138 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 139 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAE_2, LilycoveCity_DepartmentStore_2F_Text_MaeDefeat
# 140 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 141 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_PIN
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 144 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 145 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook1
# 146 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0, MSGBOX_AUTOCLOSE
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook, MSGBOX_AUTOCLOSE
# 154 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 155 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	call LilycoveCity_DepartmentStore_2F_MaeMovementVar
# 156 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_2:
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Mae2, MSGBOX_AUTOCLOSE
	goto LilycoveCity_DepartmentStore_2F_EventScript_Mae_1


LilycoveCity_DepartmentStore_2F_MaeMovementVar::
# 161 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq LilycoveCity_DepartmentStore_2F_MaeMovementVar_2
# 186 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1
# 187 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 188 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 189 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 190 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 191 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 192 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 193 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1
# 194 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 195 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 196 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 197 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2
# 198 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 199 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 200 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 60
# 201 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 202 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 203 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 204 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 205 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 206 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 207 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
LilycoveCity_DepartmentStore_2F_MaeMovementVar_1:
# 209 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 6
# 210 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	removeobject 7
# 211 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MAE
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	setflag FLAG_SLATEPORT_MAE_BATTLE
# 213 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	clearflag FLAG_HIDE_MAE_WACHUNPELON
	return

LilycoveCity_DepartmentStore_2F_MaeMovementVar_2:
# 162 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 6, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 163 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 6
# 164 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 165 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 166 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 167 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3
# 168 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 169 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 170 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 171 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 172 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 20
# 173 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2
# 174 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 175 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_EXIT
# 176 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 60
# 177 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 178 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveConfused
# 179 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 0
# 180 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_2F_Movement_Cook2
# 181 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 1
# 182 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_Cook2 MSGBOX_AUTOCLOSE
# 183 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
	goto LilycoveCity_DepartmentStore_2F_MaeMovementVar_1


LilycoveCity_DepartmentStore_2F_EventScript_Psyduck::
# 252 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 253 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 254 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 255 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 30
# 256 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playse SE_BIKE_HOP
# 257 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	applymovement 7, LilycoveConfused
# 258 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmovement 7
# 259 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	delay 10
# 260 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
# 261 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0
# 262 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 263 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


# 267 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook1:
# 268 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 268 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 268 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 268 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_left
# 269 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_fast_down
	step_end

# 272 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave1:
# 273 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 274 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 275 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 276 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 277 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 280 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave1:
# 281 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 282 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 282 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 283 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 286 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave2:
# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 287 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 288 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 289 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 292 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_Cook2:
# 293 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 294 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 294 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 294 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 294 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 295 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_original_direction
	step_end

# 298 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_MaeLeave2:
# 299 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 300 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 301 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
# 302 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_right
	step_end

# 305 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_PsyduckLeave3:
# 306 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	walk_up
# 307 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_player
	step_end

# 310 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveConfused:
# 311 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	emote_question_mark
	step_end

# 314 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceLeft:
# 315 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_left
	step_end

# 318 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Movement_FaceRight:
# 319 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	face_right
	step_end

LilycoveCity_DepartmentStore_2F_EventScript_Mae_Text_0:
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "EXCUSE ME!$"

LilycoveCity_DepartmentStore_2F_EventScript_Psyduck_Text_0:
# 261 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "PSYDUCK: Psy?$"

LilycoveCity_DepartmentStore_2F_Text_Mae1::
# 219 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "OOOH YES!! THIS SLAYYYYS!$"

LilycoveCity_DepartmentStore_2F_Text_Mae2::
# 223 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You AGAIN? Why do you keep\n getting in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_Mae::
# 229 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Huh? Why are you getting\n in the way of my shopping?\p I'm a diva and I deserve this!$"

LilycoveCity_DepartmentStore_2F_Text_MaeDefeat::
# 235 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Slay…$"

LilycoveCity_DepartmentStore_2F_Text_Cook::
# 239 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "You can't battle in here!\n Please leave!\p MAE: Alright, whatever!\n I'll shop somewhere else!$"

LilycoveCity_DepartmentStore_2F_Text_Cook2::
# 246 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "WORKER: Minimum wage to deal\n with customers like this… Really?$"
