RustboroCity_FireStation_MapScripts::
	.byte 0


RustboroCity_FireStation_Maniac1::
# 4 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 1, FireStationFacePlayer
# 6 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 1
# 7 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Maniac1_Text_0, MSGBOX_NPC
# 10 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 1, FireStationFaceUp
# 11 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 1
# 12 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 13 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	return


RustboroCity_FireStation_Maniac2::
# 17 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 18 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 2, FireStationFacePlayer
# 19 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 2
# 20 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Maniac2_Text_0, MSGBOX_NPC
# 26 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 2, FireStationFaceUp
# 27 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 2
# 28 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 29 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	return


RustboroCity_FireStation_Man::
# 33 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 34 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 4, FireStationFacePlayer
# 35 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 4
# 36 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Man_Text_0, MSGBOX_NPC
# 39 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 40 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	return


RustboroCity_FireStation_FatMan::
# 44 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 45 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 48 "data/maps/RustboroCity_FireStation/scripts.pory"
	playse SE_PIN
# 49 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationSurprised
# 50 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 51 "data/maps/RustboroCity_FireStation/scripts.pory"
	delay 20
# 52 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationFacePlayer
# 53 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 54 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_FatMan_Text_1, MSGBOX_NPC
# 56 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 5, FireStationFaceUp
# 57 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 5
# 58 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 59 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	return


RustboroCity_FireStation_Rotom::
# 63 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 64 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 3, FireStationFacePlayer
# 65 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 3
# 66 "data/maps/RustboroCity_FireStation/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 67 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Rotom_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 69 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	return


RustboroCity_FireStation_Man2::
# 73 "data/maps/RustboroCity_FireStation/scripts.pory"
	lock
# 74 "data/maps/RustboroCity_FireStation/scripts.pory"
	applymovement 6, FireStationFacePlayer
# 75 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmovement 6
# 76 "data/maps/RustboroCity_FireStation/scripts.pory"
	msgbox RustboroCity_FireStation_Man2_Text_0, MSGBOX_NPC
# 81 "data/maps/RustboroCity_FireStation/scripts.pory"
	waitmessage
# 82 "data/maps/RustboroCity_FireStation/scripts.pory"
	release
	return


# 85 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationSurprised:
# 86 "data/maps/RustboroCity_FireStation/scripts.pory"
	emote_exclamation_mark
	step_end

# 89 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationFacePlayer:
# 90 "data/maps/RustboroCity_FireStation/scripts.pory"
	face_player
	step_end

# 93 "data/maps/RustboroCity_FireStation/scripts.pory"
FireStationFaceUp:
# 94 "data/maps/RustboroCity_FireStation/scripts.pory"
	face_up
	step_end

RustboroCity_FireStation_Maniac1_Text_0:
# 7 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I'm researching ROTOM. We're testing\n what appliances they can inhabit.\l Imagine if it could control cars!$"

RustboroCity_FireStation_Maniac2_Text_0:
# 20 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "We're working with the LEAGUE to \n investigate strange tremors in the\l area recently.\p I don't know what's going on, but\n whatever it is, I'm sure we'll\l be ready.$"

RustboroCity_FireStation_Man_Text_0:
# 36 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "The Gym Leader, STEVE, is a\n first responder. There's no one better\l at firefighting in RUSTBORO.$"

RustboroCity_FireStation_FatMan_Text_0:
# 45 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "Ah, MISA's back in town...\l I wish she would smother me...$"

RustboroCity_FireStation_FatMan_Text_1:
# 54 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "Hey! I'm working.\n Get out of here!$"

RustboroCity_FireStation_Rotom_Text_0:
# 67 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "ROTOM: zzzzz!$"

RustboroCity_FireStation_Man2_Text_0:
# 76 "data/maps/RustboroCity_FireStation/scripts.pory"
	.string "I recently heard that there's a mage\n who sells a special drink that can\l change your appearance overnight.\p If it's real, maybe I could get my\n hair back.$"
