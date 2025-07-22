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
# 34 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 35 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox LinaHouse_NotChosen
Lina_House_EventScript_Pokeball_1:
# 37 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 38 "data/maps/SlateportCity_Lina_House/scripts.pory"
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
# 29 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 30 "data/maps/SlateportCity_Lina_House/scripts.pory"
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
	msgbox Lina_House_EventScript_Pokeball_Text_2
# 24 "data/maps/SlateportCity_Lina_House/scripts.pory"
	removeobject 1
# 25 "data/maps/SlateportCity_Lina_House/scripts.pory"
	setflag FLAG_LINA_HOUSE_EEVEE
# 26 "data/maps/SlateportCity_Lina_House/scripts.pory"
	goto NicknameBoxMon
	goto Lina_House_EventScript_Pokeball_1


NicknamePartyMon::
# 44 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 45 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 46 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 50 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end

NicknamePartyMon_2:
# 47 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 48 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 55 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 56 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 57 "data/maps/SlateportCity_Lina_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 60 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_TransferredToPC
# 61 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end

NicknameBoxMon_2:
# 58 "data/maps/SlateportCity_Lina_House/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Lina_House_EventScript_Bookshelf::
# 71 "data/maps/SlateportCity_Lina_House/scripts.pory"
	lockall
# 72 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_0
# 75 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 76 "data/maps/SlateportCity_Lina_House/scripts.pory"
	showmonpic SPECIES_LUCARIO, 10, 4
# 77 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_1
# 78 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 79 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 80 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_Bookshelf_Text_2
# 82 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 83 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end


Lina_House_EventScript_TV::
# 88 "data/maps/SlateportCity_Lina_House/scripts.pory"
	lockall
# 89 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_0
# 91 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 92 "data/maps/SlateportCity_Lina_House/scripts.pory"
	showmonpic SPECIES_INCINEROAR, 10, 4
# 93 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_1
# 94 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 95 "data/maps/SlateportCity_Lina_House/scripts.pory"
	hidemonpic
# 96 "data/maps/SlateportCity_Lina_House/scripts.pory"
	msgbox Lina_House_EventScript_TV_Text_2
# 98 "data/maps/SlateportCity_Lina_House/scripts.pory"
	waitmessage
# 99 "data/maps/SlateportCity_Lina_House/scripts.pory"
	releaseall
	end


Lina_House_EventScript_Pokeball_Text_0:
# 6 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n EEVEE.\p Take the POKé BALL?$"

Lina_House_EventScript_Pokeball_Text_1:
# 15 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} took the EEVEE!$"

Lina_House_EventScript_Pokeball_Text_2:
# 22 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} took the EEVEE!\n EEVEE was sent to the PC.$"

NicknamePartyMon_Text_0:
# 44 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "Would you like to nickname EEVEE?$"

Lina_House_EventScript_Bookshelf_Text_0:
# 72 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "A bookshelf. \p You grab a random book \n and look at the title.$"

Lina_House_EventScript_Bookshelf_Text_1:
# 77 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "“Muscles & Monsters”$"

Lina_House_EventScript_Bookshelf_Text_2:
# 80 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "……… \p You put the book back.$"

Lina_House_EventScript_TV_Text_0:
# 89 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "There's something playing on the TV. \p It looks like a romance game.$"

Lina_House_EventScript_TV_Text_1:
# 93 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "………$"

Lina_House_EventScript_TV_Text_2:
# 96 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "You decide it's better to not look \n anymore.$"

LinaHouse_NotChosen::
# 65 "data/maps/SlateportCity_Lina_House/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
