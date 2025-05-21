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
	release
	end


RustboroCity_Misa_House3F_Emo::
# 13 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lock
# 14 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 1, MisaHouse3F_FacePlayer
# 15 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 1
# 16 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Emo_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 21 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 1, MisaHouse3F_FaceUp
# 22 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 1
# 23 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	end


RustboroCity_Misa_House3F_Togepi::
# 28 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lockall
# 29 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	showmonpic SPECIES_TOGEPI, 10, 4
# 30 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_0, MSGBOX_YESNO
# 34 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_Misa_House3F_Togepi_2
# 56 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 57 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox MisaHouse_NotChosen
RustboroCity_Misa_House3F_Togepi_1:
# 59 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 60 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	releaseall
	end

RustboroCity_Misa_House3F_Togepi_2:
# 35 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	givemon SPECIES_TOGEPI, 10, ITEM_SITRUS_BERRY
# 36 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_Misa_House3F_Togepi_5
# 43 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_Misa_House3F_Togepi_6
# 51 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 52 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_2
	goto RustboroCity_Misa_House3F_Togepi_1

RustboroCity_Misa_House3F_Togepi_5:
# 37 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_1
# 39 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	removeobject 2
# 40 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_MISA_HOUSE_TOGEPI
# 41 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call NicknamePartyTogepi
	goto RustboroCity_Misa_House3F_Togepi_1

RustboroCity_Misa_House3F_Togepi_6:
# 44 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_1
# 46 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	removeobject 2
# 47 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_MISA_HOUSE_TOGEPI
# 48 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call NicknameBoxTogepi
	goto RustboroCity_Misa_House3F_Togepi_1


NicknamePartyTogepi::
# 66 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox NicknamePartyTogepi_Text_0, MSGBOX_YESNO
# 67 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 68 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyTogepi_1
	return

NicknamePartyTogepi_1:
# 69 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 70 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxTogepi::
# 77 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox NicknamePartyTogepi_Text_0, MSGBOX_YESNO
# 78 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 79 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxTogepi_2
NicknameBoxTogepi_1:
# 82 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxTogepi_2:
# 80 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxTogepi_1


# 91 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
MisaHouse3F_FacePlayer:
# 91 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	face_player
	step_end

# 92 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
MisaHouse3F_FaceUp:
# 92 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	face_up
	step_end

RustboroCity_Misa_House3F_TV_Text_0:
# 5 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "A show is on.\n Looks some kind of drama.$"

RustboroCity_Misa_House3F_Emo_Text_0:
# 16 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "JAMES: {PLAYER}... We meet again.\n Did you challenge the GYM LEADER yet?\l I already did.\l I'll wait for you to catch up.$"

RustboroCity_Misa_House3F_Togepi_Text_0:
# 30 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TOGEPI.\p Take the POKé BALL?$"

RustboroCity_Misa_House3F_Togepi_Text_1:
# 38 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

RustboroCity_Misa_House3F_Togepi_Text_2:
# 52 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "You don't have any room.$"

NicknamePartyTogepi_Text_0:
# 66 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "Would you like to nickname TOGEPI?$"

MisaHouse_NotChosen::
# 86 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
