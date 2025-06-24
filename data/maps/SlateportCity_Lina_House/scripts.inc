SlateportCity_Lina_House_MapScripts::
	.byte 0


Lina_House_EventScript_Pokeball::
# 5 "data/maps/SlateportCity_Lina_House/scripts.pory"
	lockall
# 6 "data/maps/SlateportCity_Lina_House/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 4
# 7 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 11 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Lina_House_EventScript_Pokeball_2
# 33 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 34 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox LinaHouse_NotChosen
Lina_House_EventScript_Pokeball_1:
# 36 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 37 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end

Lina_House_EventScript_Pokeball_2:
# 12 "data/maps/SlateportCity_Lina_House/scripts.pory"
	givemon SPECIES_EEVEE, 15, ITEM_ABILITY_CAPSULE
# 13 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Lina_House_EventScript_Pokeball_5
# 20 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Lina_House_EventScript_Pokeball_6
# 28 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 29 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Pokeball_Text_2
	goto Lina_House_EventScript_Pokeball_1

Lina_House_EventScript_Pokeball_5:
# 14 "data/maps/SlateportCity_Lina_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Pokeball_Text_1
# 16 "data/maps/SlateportCity_Lina_House/scripts.pory"
	removeobject 1
# 17 "data/maps/SlateportCity_Lina_House/scripts.pory"
	setflag FLAG_LINA_HOUSE_EEVEE
# 18 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call NicknamePartyMon
	goto Lina_House_EventScript_Pokeball_1

Lina_House_EventScript_Pokeball_6:
# 21 "data/maps/SlateportCity_Lina_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Pokeball_Text_1
# 23 "data/maps/SlateportCity_Lina_House/scripts.pory"
	removeobject 1
# 24 "data/maps/SlateportCity_Lina_House/scripts.pory"
	setflag FLAG_LINA_HOUSE_EEVEE
# 25 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call NicknameBoxMon
	goto Lina_House_EventScript_Pokeball_1


NicknamePartyMon::
# 43 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 44 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 45 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 46 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 47 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 52 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 53 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 54 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 57 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 55 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Lina_House_EventScript_Bookshelf::
# 66 "data/maps/SlateportCity_Lina_House/scripts.pory"
	lockall
# 67 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_0
# 70 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 71 "data/maps/SlateportCity_Lina_House/scripts.pory"
	showmonpic SPECIES_LUCARIO, 10, 4
# 72 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_1
# 73 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 74 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 75 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_2
# 77 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 78 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end


Lina_House_EventScript_TV::
# 83 "data/maps/SlateportCity_Lina_House/scripts.pory"
	lockall
# 84 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_0
# 86 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 87 "data/maps/SlateportCity_Lina_House/scripts.pory"
	showmonpic SPECIES_INCINEROAR, 10, 4
# 88 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_1
# 89 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 90 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 91 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_2
# 93 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 94 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end


Lina_House_EventScript_Pokeball_Text_0:
# 7 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n EEVEE.\p Take the POKé BALL?$"

Lina_House_EventScript_Pokeball_Text_1:
# 15 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Lina_House_EventScript_Pokeball_Text_2:
# 29 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "You don't have any room.$"

NicknamePartyMon_Text_0:
# 43 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "Would you like to nickname EEVEE?$"

Lina_House_EventScript_Bookshelf_Text_0:
# 67 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "A bookshelf. \p You grab a random book \n and look at the title.$"

Lina_House_EventScript_Bookshelf_Text_1:
# 72 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "“Muscles & Monsters”$"

Lina_House_EventScript_Bookshelf_Text_2:
# 75 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "……… \p You put the book back.$"

Lina_House_EventScript_TV_Text_0:
# 84 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "There's something playing on the TV. \p It looks like a romance game.$"

Lina_House_EventScript_TV_Text_1:
# 88 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "………$"

Lina_House_EventScript_TV_Text_2:
# 91 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "You decide it's better to not look \n anymore.$"

LinaHouse_NotChosen::
# 60 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
