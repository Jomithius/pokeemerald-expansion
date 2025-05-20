RustboroCity_Misa_House3F_MapScripts::
	.byte 0


RustboroCity_Misa_House3F_TV::
# 4 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_TV_Text_0, MSGBOX_SIGN
# 7 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 8 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	releaseall
	return


RustboroCity_Misa_House3F_Emo::
# 12 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lock
# 13 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 1, MisaHouse3F_FacePlayer
# 14 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 1
# 15 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Emo_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 20 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	return


RustboroCity_Misa_House3F_Togepi::
# 24 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lockall
# 25 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	showmonpic SPECIES_TOGEPI, 10, 4
# 26 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_0, MSGBOX_YESNO
# 30 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_Misa_House3F_Togepi_2
# 52 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 53 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox MisaHouse_NotChosen
RustboroCity_Misa_House3F_Togepi_1:
# 55 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 56 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	releaseall
	end

RustboroCity_Misa_House3F_Togepi_2:
# 31 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	givemon SPECIES_TOGEPI, 10, ITEM_SITRUS_BERRY
# 32 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_Misa_House3F_Togepi_5
# 39 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_Misa_House3F_Togepi_6
# 47 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 48 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_2
	goto RustboroCity_Misa_House3F_Togepi_1

RustboroCity_Misa_House3F_Togepi_5:
# 33 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_1
# 35 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	removeobject 1
# 36 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_MISA_HOUSE_TOGEPI
# 37 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call NicknamePartyTogepi
	goto RustboroCity_Misa_House3F_Togepi_1

RustboroCity_Misa_House3F_Togepi_6:
# 40 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 41 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_1
# 42 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	removeobject 1
# 43 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_MISA_HOUSE_TOGEPI
# 44 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call NicknameBoxTogepi
	goto RustboroCity_Misa_House3F_Togepi_1


NicknamePartyTogepi::
# 62 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox NicknamePartyTogepi_Text_0, MSGBOX_YESNO
# 63 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 64 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyTogepi_1
	return

NicknamePartyTogepi_1:
# 65 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 66 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxTogepi::
# 73 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox NicknamePartyTogepi_Text_0, MSGBOX_YESNO
# 74 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 75 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxTogepi_2
NicknameBoxTogepi_1:
# 78 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxTogepi_2:
# 76 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxTogepi_1


MisaHouse3F_FacePlayer::
# 87 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	face_player
	return


RustboroCity_Misa_House3F_TV_Text_0:
# 5 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "An show is on.\n Looks some kind of drama.$"

RustboroCity_Misa_House3F_Emo_Text_0:
# 15 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "JAMES: {PLAYER}... We meet again.\n Did you challenge the GYM LEADER yet?\l I already did.\n I'll wait for you to catch up.$"

RustboroCity_Misa_House3F_Togepi_Text_0:
# 26 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TOGEPI.\p Take the POKé BALL?$"

RustboroCity_Misa_House3F_Togepi_Text_1:
# 34 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

RustboroCity_Misa_House3F_Togepi_Text_2:
# 48 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "You don't have any room.$"

NicknamePartyTogepi_Text_0:
# 62 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "Would you like to nickname TOGEPI?$"

MisaHouse_NotChosen::
# 82 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
