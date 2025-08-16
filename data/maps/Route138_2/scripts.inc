Route138_2_MapScripts::
	.byte 0


Route138_EventScript_Ken::
# 4 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_KEN, Route138_EventScript_Ken_Text_0, Route138_EventScript_Ken_Text_1
# 5 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Ken_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Aiko::
# 10 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_AIKO, Route138_EventScript_Aiko_Text_0, Route138_EventScript_Aiko_Text_1
# 11 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Aiko_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Ayumi::
# 16 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_AYUMI, Route138_EventScript_Ayumi_Text_0, Route138_EventScript_Ayumi_Text_1
# 17 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Ayumi_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Mana::
# 23 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_AYUMI, Route138_EventScript_Mana_Text_0, Route138_EventScript_Mana_Text_1
# 24 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Mana_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Kohaku::
# 30 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_KOHAKU, Route138_EventScript_Kohaku_Text_0, Route138_EventScript_Kohaku_Text_1
# 31 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Kohaku_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Ryuu::
# 37 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_RYUU, Route138_EventScript_Ryuu_Text_0, Route138_EventScript_Ryuu_Text_1
# 38 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Ryuu_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Ichigo::
# 43 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_ICHIGO, Route138_EventScript_Ichigo_Text_0, Route138_EventScript_Ichigo_Text_1
# 44 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Ichigo_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Iwao::
# 49 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_IWAO, Route138_EventScript_Iwao_Text_0, Route138_EventScript_Iwao_Text_1
# 50 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Iwao_Text_0, MSGBOX_NPC
	end


Route138_EventScript_Katsumi::
# 55 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_KATSUMI, Route138_EventScript_Katsumi_Text_0, Route138_EventScript_Katsumi_Text_1
# 56 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Kohaku_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Hagerou::
# 62 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_HAGEROU, Route138_EventScript_Hagerou_Text_0, Route138_EventScript_Hagerou_Text_1
# 63 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Hagerou_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Jurou::
# 69 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_JUROU, Route138_EventScript_Jurou_Text_0, Route138_EventScript_Jurou_Text_1
# 70 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Jurou_Text_2, MSGBOX_NPC
	end


Route138_EventScript_Masashi::
# 75 "data/maps/Route138_2/scripts.pory"
	trainerbattle_single TRAINER_MASASHI, Route138_EventScript_Masashi_Text_0, Route138_EventScript_Masashi_Text_1
# 76 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Masashi_Text_2, MSGBOX_NPC
	end


Route138_EventScript_BlackBelt::
# 82 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_BlackBelt_Text_0, MSGBOX_NPC
	end


Route138_EventScript_KimonoLady::
# 90 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_KimonoLady_Text_0, MSGBOX_NPC
	end


Route138_EventScript_Expert_F::
# 98 "data/maps/Route138_2/scripts.pory"
	lock
# 99 "data/maps/Route138_2/scripts.pory"
	faceplayer
# 100 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Expert_F_Text_0, MSGBOX_YESNO
# 102 "data/maps/Route138_2/scripts.pory"
	waitmessage
# 103 "data/maps/Route138_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route138_EventScript_Expert_F_2
# 108 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Expert_F_Text_2, MSGBOX_NPC
Route138_EventScript_Expert_F_1:
# 112 "data/maps/Route138_2/scripts.pory"
	release
	end

Route138_EventScript_Expert_F_2:
# 104 "data/maps/Route138_2/scripts.pory"
	msgbox Route138_EventScript_Expert_F_Text_1, MSGBOX_NPC
	goto Route138_EventScript_Expert_F_1


Route138_EventScript_Ken_Text_0:
# 4 "data/maps/Route138_2/scripts.pory"
	.string "Oho?\nTravelers are rare around here.$"

Route138_EventScript_Ken_Text_1:
# 4 "data/maps/Route138_2/scripts.pory"
	.string "You're strong, youngster.$"

Route138_EventScript_Ken_Text_2:
# 5 "data/maps/Route138_2/scripts.pory"
	.string "Strength like that is rare, youngster.$"

Route138_EventScript_Aiko_Text_0:
# 10 "data/maps/Route138_2/scripts.pory"
	.string "Don't underestimate me!$"

Route138_EventScript_Aiko_Text_1:
# 10 "data/maps/Route138_2/scripts.pory"
	.string "You're strong!$"

Route138_EventScript_Aiko_Text_2:
# 11 "data/maps/Route138_2/scripts.pory"
	.string "I gotta keep training!$"

Route138_EventScript_Ayumi_Text_0:
# 16 "data/maps/Route138_2/scripts.pory"
	.string "Hello. Are you interested in a battle?$"

Route138_EventScript_Ayumi_Text_1:
# 16 "data/maps/Route138_2/scripts.pory"
	.string "That was fun!$"

Route138_EventScript_Ayumi_Text_2:
# 17 "data/maps/Route138_2/scripts.pory"
	.string "I love going on strolls outside\n of the village.$"

Route138_EventScript_Mana_Text_0:
# 23 "data/maps/Route138_2/scripts.pory"
	.string "Ara.\nI've never seen you around here before.$"

Route138_EventScript_Mana_Text_1:
# 23 "data/maps/Route138_2/scripts.pory"
	.string "Ara.\nYou're pretty strong.$"

Route138_EventScript_Mana_Text_2:
# 24 "data/maps/Route138_2/scripts.pory"
	.string "My husband is a NINJA.\n He likes training around here.$"

Route138_EventScript_Kohaku_Text_0:
# 30 "data/maps/Route138_2/scripts.pory"
	.string "Rule one!\nDecieve your enemy!$"

Route138_EventScript_Kohaku_Text_1:
# 30 "data/maps/Route138_2/scripts.pory"
	.string "Rule two:\nDon't take fights you can't win…$"

Route138_EventScript_Kohaku_Text_2:
# 31 "data/maps/Route138_2/scripts.pory"
	.string "A NINJA's all about being a\n master of deception!$"

Route138_EventScript_Ryuu_Text_0:
# 37 "data/maps/Route138_2/scripts.pory"
	.string "Nin! Nin!$"

Route138_EventScript_Ryuu_Text_1:
# 37 "data/maps/Route138_2/scripts.pory"
	.string "N-Nin…$"

Route138_EventScript_Ryuu_Text_2:
# 38 "data/maps/Route138_2/scripts.pory"
	.string "Nin! Nin nin!$"

Route138_EventScript_Ichigo_Text_0:
# 43 "data/maps/Route138_2/scripts.pory"
	.string "We're protectors of the village!$"

Route138_EventScript_Ichigo_Text_1:
# 43 "data/maps/Route138_2/scripts.pory"
	.string "You're mean…$"

Route138_EventScript_Ichigo_Text_2:
# 44 "data/maps/Route138_2/scripts.pory"
	.string "We're protects of the village!$"

Route138_EventScript_Iwao_Text_0:
# 49 "data/maps/Route138_2/scripts.pory"
	.string "Hi-yah!$"

Route138_EventScript_Iwao_Text_1:
# 49 "data/maps/Route138_2/scripts.pory"
	.string "H-Hi-yah…$"

Route138_EventScript_Katsumi_Text_0:
# 55 "data/maps/Route138_2/scripts.pory"
	.string "Ahaha! You FOOL!\nYou fell for my trap!$"

Route138_EventScript_Katsumi_Text_1:
# 55 "data/maps/Route138_2/scripts.pory"
	.string "I guess it didn't matter…$"

Route138_EventScript_Hagerou_Text_0:
# 62 "data/maps/Route138_2/scripts.pory"
	.string "Time to remove your hair follicles!$"

Route138_EventScript_Hagerou_Text_1:
# 62 "data/maps/Route138_2/scripts.pory"
	.string "You can keep them…$"

Route138_EventScript_Hagerou_Text_2:
# 63 "data/maps/Route138_2/scripts.pory"
	.string "Most NINJAS are bald in respect to\n LADY ASAKURA.$"

Route138_EventScript_Jurou_Text_0:
# 69 "data/maps/Route138_2/scripts.pory"
	.string "Did you not see me?$"

Route138_EventScript_Jurou_Text_1:
# 69 "data/maps/Route138_2/scripts.pory"
	.string "I lost…$"

Route138_EventScript_Jurou_Text_2:
# 70 "data/maps/Route138_2/scripts.pory"
	.string "Baldy, baldy, over there!$"

Route138_EventScript_Masashi_Text_0:
# 75 "data/maps/Route138_2/scripts.pory"
	.string "Ha! My bald head gives me\nbetter aerodynamics!$"

Route138_EventScript_Masashi_Text_1:
# 75 "data/maps/Route138_2/scripts.pory"
	.string "I was still too slow…$"

Route138_EventScript_Masashi_Text_2:
# 76 "data/maps/Route138_2/scripts.pory"
	.string "The breeze feels nice on my scalp.$"

Route138_EventScript_BlackBelt_Text_0:
# 82 "data/maps/Route138_2/scripts.pory"
	.string "Up ahead is BALDESIA, the village\n of NINJAS.\p I don't know if an outsider like\n you will be allowed in.$"

Route138_EventScript_KimonoLady_Text_0:
# 90 "data/maps/Route138_2/scripts.pory"
	.string "My husband and kids love using\n disguises.\p It's so fun watching them practice\n their ninjutsu.$"

Route138_EventScript_Expert_F_Text_0:
# 100 "data/maps/Route138_2/scripts.pory"
	.string "Oh? A traveler?\n Do you know anybody from BALDESIA?$"

Route138_EventScript_Expert_F_Text_1:
# 104 "data/maps/Route138_2/scripts.pory"
	.string "Fufu.\n You might be allowed in then!$"

Route138_EventScript_Expert_F_Text_2:
# 108 "data/maps/Route138_2/scripts.pory"
	.string "Hm.\n Usually you need to know somebody\l to be allowed in…$"
