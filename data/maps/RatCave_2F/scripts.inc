RatCave_2F_MapScripts::
	.byte 0


RatCave_2F_FlameOrb::
# 4 "data/maps/RatCave_2F/scripts.pory"
	lockall
# 5 "data/maps/RatCave_2F/scripts.pory"
	setflag FLAG_ITEM_RAT_CAVE_2F_FLAME_ORB
# 6 "data/maps/RatCave_2F/scripts.pory"
	finditem ITEM_FLAME_ORB, 1
# 7 "data/maps/RatCave_2F/scripts.pory"
	waitmessage
# 8 "data/maps/RatCave_2F/scripts.pory"
	releaseall
	return


RatCave_2F_RareCandy::
# 12 "data/maps/RatCave_2F/scripts.pory"
	lockall
# 13 "data/maps/RatCave_2F/scripts.pory"
	setflag FLAG_ITEM_RAT_CAVE_2F_RARE_CANDY
# 14 "data/maps/RatCave_2F/scripts.pory"
	finditem ITEM_RARE_CANDY, 5
# 15 "data/maps/RatCave_2F/scripts.pory"
	waitmessage
# 16 "data/maps/RatCave_2F/scripts.pory"
	releaseall
	return

