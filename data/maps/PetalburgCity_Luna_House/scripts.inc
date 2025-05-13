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
# 33 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 34 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox LunaHouse_NotChosen
Luna_House_EventScript_Pokeball_1:
# 36 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	waitmessage
# 37 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	releaseall
	end

Luna_House_EventScript_Pokeball_2:
# 12 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	givemon SPECIES_MOTHIM, 12, ITEM_SILVERPOWDER
# 13 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Luna_House_EventScript_Pokeball_5
# 20 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Luna_House_EventScript_Pokeball_6
# 28 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 29 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox Luna_House_EventScript_Pokeball_Text_2
	goto Luna_House_EventScript_Pokeball_1

Luna_House_EventScript_Pokeball_5:
# 14 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox Luna_House_EventScript_Pokeball_Text_1
# 16 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	removeobject 1
# 17 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	setflag FLAG_LUNA_HOUSE_MOTHIM
# 18 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call NicknamePartyPkmn
	goto Luna_House_EventScript_Pokeball_1

Luna_House_EventScript_Pokeball_6:
# 21 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox Luna_House_EventScript_Pokeball_Text_1
# 23 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	removeobject 1
# 24 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	setflag FLAG_LUNA_HOUSE_MOTHIM
# 25 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call NicknameBoxPkmn
	goto Luna_House_EventScript_Pokeball_1


NicknamePartyPkmn::
# 44 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	msgbox NicknamePartyPkmn_Text_0, MSGBOX_YESNO
# 45 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	hidemonpic
# 46 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyPkmn_1
	return

NicknamePartyPkmn_1:
# 47 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 48 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


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
	return

NicknameBoxPkmn_2:
# 59 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxPkmn_1


Luna_House_EventScript_Pokeball_Text_0:
# 7 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n MOTHIM.\p Take the POKé BALL?$"

Luna_House_EventScript_Pokeball_Text_1:
# 15 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

Luna_House_EventScript_Pokeball_Text_2:
# 29 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "You don't have any room.$"

NicknamePartyPkmn_Text_0:
# 44 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "Would you like to nickname MOTHIM?$"

LunaHouse_NotChosen::
# 65 "data/maps/PetalburgCity_Luna_House/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
