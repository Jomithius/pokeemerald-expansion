PetalburgCity_Luna_House_MapScripts::
	.byte 0


Luna_House_EventScript_Pokeball::
# 5 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	lockall
# 6 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	showmonpic SPECIES_MOTHIM, 10, 4
# 7 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox Luna_House_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 11 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Luna_House_EventScript_Pokeball_2
# 36 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 37 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox LunaHouse_NotChosen
Luna_House_EventScript_Pokeball_1:
# 39 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	waitmessage
# 40 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	releaseall
	end

Luna_House_EventScript_Pokeball_2:
# 12 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	givemon SPECIES_MOTHIM, 12, ITEM_SILVERPOWDER
# 13 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MOTHIM
# 14 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MOTHIM
# 15 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Luna_House_EventScript_Pokeball_5
# 22 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Luna_House_EventScript_Pokeball_6
# 31 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 32 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Luna_House_EventScript_Pokeball_1

Luna_House_EventScript_Pokeball_5:
# 16 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox Luna_House_EventScript_Pokeball_Text_1
# 18 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	removeobject 1
# 19 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	setflag FLAG_LUNA_HOUSE_MOTHIM
# 20 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	goto NicknamePartyPkmn
	goto Luna_House_EventScript_Pokeball_1

Luna_House_EventScript_Pokeball_6:
# 23 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox Luna_House_EventScript_Pokeball_Text_2
# 26 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	removeobject 1
# 27 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	setflag FLAG_LUNA_HOUSE_MOTHIM
# 28 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	goto NicknameBoxPkmn
	goto Luna_House_EventScript_Pokeball_1


NicknamePartyPkmn::
# 46 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox NicknamePartyPkmn_Text_0, MSGBOX_YESNO
# 47 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 48 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyPkmn_2
NicknamePartyPkmn_1:
# 52 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	releaseall
	end

NicknamePartyPkmn_2:
# 49 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 50 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyPkmn_1


NicknameBoxPkmn::
# 57 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox NicknamePartyPkmn_Text_0, MSGBOX_YESNO
# 58 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 59 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxPkmn_2
NicknameBoxPkmn_1:
# 62 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_TransferredToPC
# 63 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	releaseall
	end

NicknameBoxPkmn_2:
# 60 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxPkmn_1


Luna_House_EventScript_Pokeball_Text_0:
# 7 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MOTHIM.\p Take the POKé BALL?$"

Luna_House_EventScript_Pokeball_Text_1:
# 17 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} took the MOTHIM!$"

Luna_House_EventScript_Pokeball_Text_2:
# 24 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} took the MOTHIM!\n MOTHIM was sent to the PC.$"

NicknamePartyPkmn_Text_0:
# 46 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "Would you like to nickname MOTHIM?$"

LunaHouse_NotChosen::
# 67 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
