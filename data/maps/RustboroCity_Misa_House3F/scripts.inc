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
	goto_if_set FLAG_TEMP_5, RustboroCity_Misa_House3F_Emo_2
# 19 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 1, MisaHouse3F_FacePlayer
# 20 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 1
# 21 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Emo_Text_1, MSGBOX_AUTOCLOSE
# 25 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 26 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 1, MisaHouse3F_FaceUp
# 27 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 1
# 28 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_TEMP_5
RustboroCity_Misa_House3F_Emo_1:
# 30 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	end

RustboroCity_Misa_House3F_Emo_2:
# 15 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Emo_Text_0, MSGBOX_SIGN
	goto RustboroCity_Misa_House3F_Emo_1


RustboroCity_Misa_House3F_Togepi::
# 35 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lockall
# 36 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	showmonpic SPECIES_TOGEPI, 10, 4
# 37 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_0, MSGBOX_YESNO
# 41 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_Misa_House3F_Togepi_2
# 64 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 65 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox MisaHouse_NotChosen
RustboroCity_Misa_House3F_Togepi_1:
# 67 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 68 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	releaseall
	end

RustboroCity_Misa_House3F_Togepi_2:
# 42 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	givemon SPECIES_TOGEPI, 10, ITEM_SITRUS_BERRY
# 43 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOGEPI
# 44 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_Misa_House3F_Togepi_5
# 51 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_Misa_House3F_Togepi_6
# 59 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 60 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto RustboroCity_Misa_House3F_Togepi_1

RustboroCity_Misa_House3F_Togepi_5:
# 45 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_1
# 47 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	removeobject 2
# 48 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_MISA_HOUSE_TOGEPI
# 49 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	goto NicknamePartyTogepi
	goto RustboroCity_Misa_House3F_Togepi_1

RustboroCity_Misa_House3F_Togepi_6:
# 52 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_1
# 54 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	removeobject 2
# 55 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_MISA_HOUSE_TOGEPI
# 56 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	goto NicknameBoxTogepi
	goto RustboroCity_Misa_House3F_Togepi_1


NicknamePartyTogepi::
# 74 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox NicknamePartyTogepi_Text_0, MSGBOX_YESNO
# 75 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 76 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyTogepi_2
NicknamePartyTogepi_1:
# 80 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	releaseall
	end

NicknamePartyTogepi_2:
# 77 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 78 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyTogepi_1


NicknameBoxTogepi::
# 85 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox NicknamePartyTogepi_Text_0, MSGBOX_YESNO
# 86 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 87 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxTogepi_2
NicknameBoxTogepi_1:
# 90 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 91 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	releaseall
	end

NicknameBoxTogepi_2:
# 88 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxTogepi_1


RustboroCity_Misa_House3F_James::
# 101 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lock
# 102 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 3, MisaHouse3F_FacePlayer
# 103 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 3
# 104 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_James_Text_0, MSGBOX_AUTOCLOSE
# 107 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 108 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 3, MisaHouse3F_FaceUp
# 109 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 3
# 110 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	end


# 114 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
MisaHouse3F_FacePlayer:
# 114 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	face_player
	step_end

# 116 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
MisaHouse3F_FaceUp:
# 116 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	face_up
	step_end

RustboroCity_Misa_House3F_TV_Text_0:
# 5 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "A show is on.\n Looks some kind of drama.$"

RustboroCity_Misa_House3F_Emo_Text_0:
# 15 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "AUDIO?!\n WHERE'S THE AUDIO?$"

RustboroCity_Misa_House3F_Emo_Text_1:
# 21 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER}… We meet again.\n Did you challenge the GYM LEADER yet?\l I already did.\l I'll wait for you to catch up.$"

RustboroCity_Misa_House3F_Togepi_Text_0:
# 37 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TOGEPI.\p Take the POKé BALL?$"

RustboroCity_Misa_House3F_Togepi_Text_1:
# 46 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

NicknamePartyTogepi_Text_0:
# 74 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "Would you like to nickname TOGEPI?$"

RustboroCity_Misa_House3F_James_Text_0:
# 104 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "JAMES: {PLAYER}!\p I lost again, but I'm not gonna give up.\n We're gonna get even stronger.$"

MisaHouse_NotChosen::
# 95 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
