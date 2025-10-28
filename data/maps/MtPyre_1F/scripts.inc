MtPyre_1F_MapScripts::
	.byte 0

MtPyre_1F_EventScript_CleanseTagWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release
	end

MtPyre_1F_EventScript_ReceivedCleanseTag::
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
	release
	end

MtPyre_1F_EventScript_PokefanF::
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
	end

MtPyre_1F_EventScript_Man::
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
	end

MtPyre_1F_EventScript_PokefanM::
	goto_if_unset FLAG_HIDE_BIKERS_ROUTE_123, MtPyre_1F_EventScript_SpeedwagonHint
	msgbox MtPyre_1F_Text_ItsBeenQuiet, MSGBOX_NPC
	end

MtPyre_1F_EventScript_SpeedwagonHint::
	msgbox MtPyre_1F_Text_HeardMotorcyclesRoute123, MSGBOX_NPC
	end

MtPyre_1F_EventScript_BigNuggets::
	lock
	finditem ITEM_BIG_NUGGET, 4
	release
	end

MtPyre_1F_Text_TakeThisForYourOwnGood:
	.string "All sorts of beings wander the slopes\n"
	.string "of MT. PYRE…\p"
	.string "There is no telling what may happen.\n"
	.string "Take this. It's for your own good.$"

MtPyre_1F_Text_ExplainCleanseTag:
	.string "Have a POKéMON hold that\n"
	.string "CLEANSE TAG.\p"
	.string "It will help ward off wild POKéMON.$"

MtPyre_1F_Text_ComeToPayRespects:
	.string "Did you come to pay your respect\n"
	.string "to the spirits of departed POKéMON?\p"
	.string "You must care for your POKéMON a lot.$"

MtPyre_1F_Text_RestingPlaceOfZigzagoon:
	.string "This is the final resting place of my\n"
	.string "ZIGZAGOON. I cherished it…$"

MtPyre_1F_Text_ItsBeenQuiet:
	.string "It's been much quieter lately.\n"
	.string "Did those BIKERS leave?\p"
	.string "Now the people can mourn their\n"
	.string "lost POKéMON in peace.$"

MtPyre_1F_Text_HeardMotorcyclesRoute123:
	.string "Lately there's been loud motorcyles\n"
	.string "to the south of here.\p"
	.string "They're disturbing the people\n"
	.string "mourning their POKéMON.$"
