# 1 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideInnerRoom_OnLoad
# 3 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideInnerRoom_OnTransition
# 4 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.byte 0
# 5 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 6 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_OnTransition:
# 7 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetLowTide
# 8 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 9 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetHighTide::
# 10 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_INNER_ROOM
# 11 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 12 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 13 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetLowTide::
# 14 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
# 15 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 16 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 17 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_OnLoad:
# 18 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	call ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles
# 19 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 20 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 21 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles::
# 22 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 23 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 24 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 25 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 26 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 27 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 28 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2::
# 29 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 30 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 31 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 32 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 33 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 34 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 35 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3::
# 36 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
# 37 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
# 38 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
# 39 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 40 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 41 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4::
# 42 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
# 43 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
# 44 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
# 45 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 46 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 47 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5::
# 48 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
# 49 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
# 50 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
# 51 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 52 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 53 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6::
# 54 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd
# 55 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
# 56 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	return
# 57 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 58 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd::
# 59 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	return
# 60 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 61 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1::
# 62 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 63 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 64 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 65 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 66 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 67 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 68 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_1
# 69 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 70 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 71 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 72 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell::
# 73 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoallShellNowNothing, MSGBOX_DEFAULT
# 74 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 75 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 76 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 77 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2::
# 78 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 79 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 80 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 81 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 82 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 83 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 84 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_2
# 85 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 86 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 87 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 88 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3::
# 89 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 90 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 91 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 92 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 93 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 94 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 95 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_3
# 96 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 97 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 98 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 99 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4::
# 100 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 101 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 102 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 103 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 104 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 105 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 106 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_4
# 107 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 108 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 109 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 110 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1::
# 111 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 112 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
# 113 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 114 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 115 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 116 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 117 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_1
# 118 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 119 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 120 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 121 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt::
# 122 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 123 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 124 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 125 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 126 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2::
# 127 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 128 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
# 129 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 130 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 131 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 132 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_2
# 134 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 135 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end

ShoalCave_LowTideInnerRoom_EventScript_Bingleton::
# 139 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	trainerbattle_single TRAINER_BINGLETON, ShoalCave_LowTideInnerRoom_Text_BingletonIntro, ShoalCave_LowTideInnerRoom_Text_BingletonDefeat
# 140 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_LowTideInnerRoom_Text_BingletonPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	waitmessage
	end


ShoalCave_LowTideInnerRoom_EventScript_Bungleton::
# 146 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	trainerbattle_single TRAINER_BUNGLETON, ShoalCave_LowTideInnerRoom_Text_BungletonIntro, ShoalCave_LowTideInnerRoom_Text_BungletonDefeat
# 147 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_LowTideInnerRoom_Text_BungletonPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	waitmessage
	end


ShoalCave_LowTideInnerRoom_EventScript_Daquavius::
# 153 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	trainerbattle_single TRAINER_DAQUAVIUS, ShoalCave_LowTideInnerRoom_Text_DaquaviusIntro, ShoalCave_LowTideInnerRoom_Text_DaquaviusDefeat
# 154 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_LowTideInnerRoom_Text_DaquaviusPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	waitmessage
	end


ShoalCave_LowTideInnerRoom_Text_BingletonIntro::
# 159 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "Me and my brother love coming here!$"

ShoalCave_LowTideInnerRoom_Text_BingletonDefeat::
# 163 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "That was cold..$"

ShoalCave_LowTideInnerRoom_Text_BingletonPostBattle::
# 167 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "I stay up here because it gets too cold\n further down.$"

ShoalCave_LowTideInnerRoom_Text_BungletonIntro::
# 172 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "Me and my brother love coming here!$"

ShoalCave_LowTideInnerRoom_Text_BungletonDefeat::
# 176 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "B-Brother…?!$"

ShoalCave_LowTideInnerRoom_Text_BungletonPostBattle::
# 180 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "We only stay in the inner room.\n It gets colder the deeper you go.$"

ShoalCave_LowTideInnerRoom_Text_DaquaviusIntro::
# 185 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "I'm training to beat MOSSDEEP's\n GYM LEADER!$"

ShoalCave_LowTideInnerRoom_Text_DaquaviusDefeat::
# 190 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "Look like I need more training…$"

ShoalCave_LowTideInnerRoom_Text_DaquaviusPostBattle::
# 194 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.string "The GYM LEADER has powerful fists!\n I gotta train even more!$"
