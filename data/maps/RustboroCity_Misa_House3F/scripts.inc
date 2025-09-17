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
# 26 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 27 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 1, MisaHouse3F_FaceUp
# 28 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 1
# 29 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_TEMP_5
RustboroCity_Misa_House3F_Emo_1:
# 31 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	end

RustboroCity_Misa_House3F_Emo_2:
# 15 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Emo_Text_0, MSGBOX_SIGN
	goto RustboroCity_Misa_House3F_Emo_1


RustboroCity_Misa_House3F_Togepi::
# 36 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lock
# 37 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	showmonpic SPECIES_TOGEPI, 10, 4
# 38 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_0, MSGBOX_YESNO
# 42 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_Misa_House3F_Togepi_2
# 65 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 66 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox MisaHouse_NotChosen
RustboroCity_Misa_House3F_Togepi_1:
# 68 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 69 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	end

RustboroCity_Misa_House3F_Togepi_2:
# 43 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	givemon SPECIES_TOGEPI, 10, ITEM_SITRUS_BERRY
# 44 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOGEPI
# 45 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_Misa_House3F_Togepi_5
# 52 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_Misa_House3F_Togepi_6
# 60 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 61 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto RustboroCity_Misa_House3F_Togepi_1

RustboroCity_Misa_House3F_Togepi_5:
# 46 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_1
# 48 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	removeobject 2
# 49 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_MISA_HOUSE_TOGEPI
# 50 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	goto NicknamePartyTogepi
	goto RustboroCity_Misa_House3F_Togepi_1

RustboroCity_Misa_House3F_Togepi_6:
# 53 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_Togepi_Text_1
# 55 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	removeobject 2
# 56 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	setflag FLAG_MISA_HOUSE_TOGEPI
# 57 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	goto NicknameBoxTogepi
	goto RustboroCity_Misa_House3F_Togepi_1


NicknamePartyTogepi::
# 75 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox NicknamePartyTogepi_Text_0, MSGBOX_YESNO
# 76 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 77 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyTogepi_2
NicknamePartyTogepi_1:
# 81 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	end

NicknamePartyTogepi_2:
# 78 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 79 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyTogepi_1


NicknameBoxTogepi::
# 86 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox NicknamePartyTogepi_Text_0, MSGBOX_YESNO
# 87 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	hidemonpic
# 88 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxTogepi_2
NicknameBoxTogepi_1:
# 91 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 92 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	end

NicknameBoxTogepi_2:
# 89 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxTogepi_1


RustboroCity_Misa_House3F_James::
# 102 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	lock
# 103 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 3, MisaHouse3F_FacePlayer
# 104 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 3
# 105 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, RustboroCity_Misa_House3F_James_2
# 116 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_James_Text_1, MSGBOX_AUTOCLOSE
RustboroCity_Misa_House3F_James_1:
# 125 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmessage
# 126 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	applymovement 3, MisaHouse3F_FaceUp
# 127 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	waitmovement 3
# 128 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	release
	end

RustboroCity_Misa_House3F_James_2:
# 106 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	msgbox RustboroCity_Misa_House3F_James_Text_0, MSGBOX_AUTOCLOSE
	goto RustboroCity_Misa_House3F_James_1


# 132 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
MisaHouse3F_FacePlayer:
# 132 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	face_player
	step_end

# 134 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
MisaHouse3F_FaceUp:
# 134 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
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
	.string "{PLAYER}…\n We meet again.\p Did you challenge the GYM LEADER yet?\n I already did.\p I'll wait for you to catch up.$"

RustboroCity_Misa_House3F_Togepi_Text_0:
# 38 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p It contained the POKéMON\n TOGEPI.\p Take the POKé BALL?$"

RustboroCity_Misa_House3F_Togepi_Text_1:
# 47 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} took the POKéMON!$"

NicknamePartyTogepi_Text_0:
# 75 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "Would you like to nickname TOGEPI?$"

RustboroCity_Misa_House3F_James_Text_0:
# 106 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER}!\p I heard the news from my mom.\n Congratulations!\p … It's going to be a while until\n I challenge the ELITE FOUR.\p Apparently JIMMY has an important\n job for me.\p I'm going to go meet him soon.$"

RustboroCity_Misa_House3F_James_Text_1:
# 116 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER}?\n What are you doing here?\p I'm glad you came to check on me,\n but I'm fine.\p I lost again, but I'm not gonna give up.\n We're gonna get even stronger.\p So don't worry about me.\n Go take on the ELITE FOUR.$"

MisaHouse_NotChosen::
# 96 "data/maps/RustboroCity_Misa_House3F/scripts.pory"
	.string "{PLAYER} decided not to take the \n POKéMON.$"
