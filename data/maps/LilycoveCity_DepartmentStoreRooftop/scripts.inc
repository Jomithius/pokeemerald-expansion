# 1 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
# 3 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition:
# 6 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 7 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
# 8 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
# 9 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman::
# 12 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 13 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 14 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 15 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman::
# 16 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 18 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 19 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
# 20 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 21 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 22 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message gText_HowMayIServeYou
# 23 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
# 25 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 27 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 29 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.align 2
# 30 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale:
# 31 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_MUD_BALL
# 32 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_LENGTH
# 33 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TIRE
# 35 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 36 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SOLID_BOARD
# 37 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SAND_ORNAMENT
# 38 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_STAND
# 39 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SLIDE
# 40 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TV
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_ROUND_TV
# 42 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_CUTE_TV
# 43 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_WAILMER_DOLL
# 44 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_RHYDON_DOLL
# 45 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte 0
# 46 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 47 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 48 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 49 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
# 50 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 51 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 52 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 53 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
# 54 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
# 55 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 56 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 57 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 58 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale::
# 59 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 61 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 62 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 63 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
# 64 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
# 65 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 66 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 67 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 71 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	showmoneybox 0, 0
# 72 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 73 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 74 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 75 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
# 76 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
# 77 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 78 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_1
# 79 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
# 80 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
# 81 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
# 82 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 84 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 85 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 86 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater::
# 87 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 88 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 89 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 90 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 91 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop::
# 92 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 93 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 94 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 95 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 96 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade::
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 98 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 99 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 101 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater::
# 102 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 200
# 103 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 104 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 105 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop::
# 106 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 300
# 107 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 108 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 109 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade::
# 110 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 350
# 111 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 112 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 113 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater::
# 114 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 200
# 115 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 116 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 117 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop::
# 118 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 300
# 119 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 120 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 121 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade::
# 122 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 350
# 123 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 124 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink::
# 126 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
# 127 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
# 128 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
# 129 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
# 130 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 131 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 132 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
# 133 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
# 134 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
# 135 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	updatemoneybox
# 136 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 137 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 138 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 139 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 140 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 141 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 142 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 143 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64  @ 1/64 chance of an additional drink dropping
# 144 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 145 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 146 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 147 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 148 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 149 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 150 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 151 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 152 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 153 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64  @ 1/64 * the prev 1/64 chance of a third additional drink dropping, ~ 0.02% chance
# 154 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 155 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 156 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 157 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 158 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 159 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 160 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 161 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 162 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 163 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 164 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 165 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 166 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
# 167 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 168 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 169 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 170 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 171 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 172 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink::
# 173 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 174 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 175 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 176 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 177 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
# 178 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 180 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 181 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 182 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
# 183 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemoneybox
# 184 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
# 185 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 186 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 187 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales:
# 188 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Don't they have set dates for their\n"
# 189 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "clear-out sales?\p"
# 190 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "I watch TV, but they never show any\n"
# 191 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "commercials.$"
# 192 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 193 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale:
# 194 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Yes! I've been waiting a long time for\n"
# 195 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "this clear-out sale.\p"
# 196 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "They have items that you can only get\n"
# 197 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "here. I'm going to load up, that I am!$"
# 198 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 199 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty:
# 200 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Ohh… I'm bone-dry thirsty!$"
# 201 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 202 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike:
# 203 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "It's a VENDING MACHINE.\n"
# 204 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Which drink would you like?$"
# 205 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 206 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown:
# 207 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 208 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "A can of {STR_VAR_1} dropped down.$"
# 209 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 210 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown:
# 211 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 212 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Score! An extra can of {STR_VAR_1}\n"
# 213 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "dropped down!$"
# 214 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 215 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney:
# 216 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Not enough money…$"
# 217 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 218 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink:
# 219 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Decided against buying a drink.$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Scientist::
# 223 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 224 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 225 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ROTOM_CATALOG, LilycoveCity_DepartmentStoreRooftop_EventScript_RotomCatalog
# 226 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Scientist_Text_0, MSGBOX_AUTOCLOSE
# 227 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 228 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_RotomCatalog::
# 233 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 234 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_RotomCatalog_Text_0, MSGBOX_DEFAULT
# 238 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 239 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace ITEM_ROTOM_CATALOG
# 240 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 241 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	giveitem ITEM_ROTOM_CATALOG
# 242 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_RotomCatalog_Text_1, MSGBOX_AUTOCLOSE
# 248 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 249 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon::
# 254 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 255 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	showmonpic SPECIES_PORYGON, 10, 4
# 256 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_Text_0, MSGBOX_YESNO
# 260 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_2
# 283 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemonpic
# 284 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_Text_2
LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_1:
# 287 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 288 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_2:
# 261 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	givemon SPECIES_PORYGON, 40
# 262 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PORYGON
# 263 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_5
# 270 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_6
# 278 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemonpic
# 279 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_1

LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_5:
# 264 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 265 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_Text_1
# 266 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removeobject VAR_LAST_TALKED
# 267 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_RECEIVED_PORYGON
# 268 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto Common_EventScript_NicknameRecievedMon
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_1

LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_6:
# 271 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_Text_1
# 273 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removeobject VAR_LAST_TALKED
# 274 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_RECEIVED_PORYGON
# 275 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto Common_EventScript_NicknameRecievedMonBox
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_1


LilycoveCity_DepartmentStoreRooftop_EventScript_Scientist_Text_0:
# 226 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Isn't ROTOM an intruiging POKéMON?$"

LilycoveCity_DepartmentStoreRooftop_EventScript_RotomCatalog_Text_0:
# 234 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Hello!\p I'm handing out free catalogs\n pertaining to the POKéMON ROTOM.\p Here, please take one!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_RotomCatalog_Text_1:
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "ROTOM is an intruiging POKéMON.\n It can change forms just from seeing\l an appliance in a catalog.\p If you have a ROTOM, please try\n it out!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_Text_0:
# 256 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n PORYGON.\p Take the POKé BALL?$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_Text_1:
# 265 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

LilycoveCity_DepartmentStoreRooftop_EventScript_Porygon_Text_2:
# 284 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
