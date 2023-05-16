JoyvaleCity_Gym_MapScripts::
	.byte 0


JoyvaleCity_Gym_Aide::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_JOYVALE_GYM_WATER, JoyvaleCity_Gym_SequenceScript_AfterWater
	msgbox JoyvaleCity_Gym_Aide_Text_0
	giveitem ITEM_FRESH_WATER, 1
	goto_if_eq VAR_RESULT, FALSE, JoyvaleCity_Gym_SequenceScript_NoRoom
	setflag FLAG_RECEIVED_JOYVALE_GYM_WATER
	msgbox JoyvaleCity_Gym_Aide_Text_1
	release
	end


JoyvaleCity_Gym_SequenceScript_AfterWater::
	msgbox JoyvaleCity_Gym_SequenceScript_AfterWater_Text_0
	release
	end


JoyvaleCity_Gym_SequenceScript_NoRoom::
	msgbox JoyvaleCity_Gym_SequenceScript_NoRoom_Text_0
	release
	end


JoyvaleCity_Gym_Aide_Text_0:
	.string "Hey challenger! Lily has a team of\n"
	.string "sizzling Pokemon! Water, Rock and\l"
	.string "Ground Type Pokemon are your best bet\l"
	.string "against her. Take this fresh water to\l"
	.string "help with your challenge!$"

JoyvaleCity_Gym_Aide_Text_1:
	.string "Good luck!$"

JoyvaleCity_Gym_SequenceScript_AfterWater_Text_0:
	.string "Hey challenger! Lily has a team of\n"
	.string "sizzling Pokemon! Water, Rock and\l"
	.string "Ground Type Pokemon are your best bet\l"
	.string "against her.$"

JoyvaleCity_Gym_SequenceScript_NoRoom_Text_0:
	.string "You have no room! Please come back when\n"
	.string "you have space to get this fresh\l"
	.string "water.$"
