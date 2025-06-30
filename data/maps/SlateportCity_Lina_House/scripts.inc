SlateportCity_Lina_House_MapScripts::
	.byte 0


Lina_House_EventScript_Pokeball::
# 4 "data/maps/SlateportCity_Lina_House/scripts.pory"
	lockall
# 5 "data/maps/SlateportCity_Lina_House/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 4
# 6 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 10 "data/maps/SlateportCity_Lina_House/scripts.pory"
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
# 11 "data/maps/SlateportCity_Lina_House/scripts.pory"
	givemon SPECIES_EEVEE, 15, ITEM_ABILITY_CAPSULE
# 12 "data/maps/SlateportCity_Lina_House/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EEVEE
# 13 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Lina_House_EventScript_Pokeball_5
# 20 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Lina_House_EventScript_Pokeball_6
# 28 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 29 "data/maps/SlateportCity_Lina_House/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
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
	goto NicknamePartyMon
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
	goto NicknameBoxMon
	goto Lina_House_EventScript_Pokeball_1


NicknamePartyMon::
# 43 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 44 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 45 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 49 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end

NicknamePartyMon_2:
# 46 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 47 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 54 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 55 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 56 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 59 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_TransferredToPC
# 60 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end

NicknameBoxMon_2:
# 57 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Lina_House_EventScript_Bookshelf::
# 70 "data/maps/SlateportCity_Lina_House/scripts.pory"
	lockall
# 71 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_0
# 74 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 75 "data/maps/SlateportCity_Lina_House/scripts.pory"
	showmonpic SPECIES_LUCARIO, 10, 4
# 76 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_1
# 77 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 78 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 79 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_2
# 81 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 82 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end


Lina_House_EventScript_TV::
# 87 "data/maps/SlateportCity_Lina_House/scripts.pory"
	lockall
# 88 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_0
# 90 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 91 "data/maps/SlateportCity_Lina_House/scripts.pory"
	showmonpic SPECIES_INCINEROAR, 10, 4
# 92 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_1
# 93 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 94 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 95 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_2
# 97 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 98 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end


Lina_House_EventScript_Pokeball_Text_0:
# 6 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n EEVEE.\p Take the POKé BALL?$"

Lina_House_EventScript_Pokeball_Text_1:
# 15 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} took the EEVEE!$"

NicknamePartyMon_Text_0:
# 43 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "Would you like to nickname EEVEE?$"

Lina_House_EventScript_Bookshelf_Text_0:
# 71 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "A bookshelf. \p You grab a random book \n and look at the title.$"

Lina_House_EventScript_Bookshelf_Text_1:
# 76 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "“Muscles & Monsters”$"

Lina_House_EventScript_Bookshelf_Text_2:
# 79 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "……… \p You put the book back.$"

Lina_House_EventScript_TV_Text_0:
# 88 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "There's something playing on the TV. \p It looks like a romance game.$"

Lina_House_EventScript_TV_Text_1:
# 92 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "………$"

Lina_House_EventScript_TV_Text_2:
# 95 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "You decide it's better to not look \n anymore.$"

LinaHouse_NotChosen::
# 64 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
