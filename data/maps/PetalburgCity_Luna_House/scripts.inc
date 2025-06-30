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
# 35 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 36 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox LunaHouse_NotChosen
Luna_House_EventScript_Pokeball_1:
# 38 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	waitmessage
# 39 "data/maps/PetalburgCity_Luna_House/scripts.pory"
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
# 30 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 31 "data/maps/PetalburgCity_Luna_House/scripts.pory"
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
	msgbox Luna_House_EventScript_Pokeball_Text_1
# 25 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	removeobject 1
# 26 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	setflag FLAG_LUNA_HOUSE_MOTHIM
# 27 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	goto NicknameBoxPkmn
	goto Luna_House_EventScript_Pokeball_1


NicknamePartyPkmn::
# 45 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox NicknamePartyPkmn_Text_0, MSGBOX_YESNO
# 46 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 47 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyPkmn_2
NicknamePartyPkmn_1:
# 51 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	releaseall
	end

NicknamePartyPkmn_2:
# 48 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 49 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyPkmn_1


NicknameBoxPkmn::
# 56 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox NicknamePartyPkmn_Text_0, MSGBOX_YESNO
# 57 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 58 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxPkmn_2
NicknameBoxPkmn_1:
# 61 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_TransferredToPC
# 62 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	releaseall
	end

NicknameBoxPkmn_2:
# 59 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxPkmn_1


Luna_House_EventScript_Pokeball_Text_0:
# 7 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MOTHIM.\p Take the POKé BALL?$"

Luna_House_EventScript_Pokeball_Text_1:
# 17 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

NicknamePartyPkmn_Text_0:
# 45 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "Would you like to nickname MOTHIM?$"

LunaHouse_NotChosen::
# 66 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
