WachunpelonCity_Mart_MapScripts::
	.byte 0


WachunpelonCity_Mart_EventScript_Lass::
# 4 "data/maps/WachunpelonCity_Mart/scripts.pory"
	msgbox WachunpelonCity_Mart_EventScript_Lass_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_Mart_EventScript_FatMan::
# 10 "data/maps/WachunpelonCity_Mart/scripts.pory"
	msgbox WachunpelonCity_Mart_EventScript_FatMan_Text_0, MSGBOX_SIGN
	end


WachunpelonCity_Mart_EventScript_Clerk::
# 16 "data/maps/WachunpelonCity_Mart/scripts.pory"
	lock
# 17 "data/maps/WachunpelonCity_Mart/scripts.pory"
	faceplayer
# 18 "data/maps/WachunpelonCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 19 "data/maps/WachunpelonCity_Mart/scripts.pory"
	waitmessage
# 20 "data/maps/WachunpelonCity_Mart/scripts.pory"
	pokemart WachunpelonCity_Mart_Pokemart
# 21 "data/maps/WachunpelonCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 22 "data/maps/WachunpelonCity_Mart/scripts.pory"
	release
	end


	.align 2
# 26 "data/maps/WachunpelonCity_Mart/scripts.pory"
WachunpelonCity_Mart_Pokemart:
# 27 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 28 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 29 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 30 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 31 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 32 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 33 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_MAX_LURE
# 34 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_ELIXIR
# 35 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 36 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 37 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 38 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

WachunpelonCity_Mart_EventScript_Lass_Text_0:
# 4 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.string "Should I get this?\n Or…$"

WachunpelonCity_Mart_EventScript_FatMan_Text_0:
# 10 "data/maps/WachunpelonCity_Mart/scripts.pory"
	.string "Aw, sweet.\n They got MOUNTAIN DEW.$"
