JoyvaleCity_House1_MapScripts::
	.byte 0


JoyvaleCity_House1_SignScript_TV::
	lock
	special TurnOnTVScreen
	msgbox JoyvaleCity_House1_SignScript_TV_Text_0
	special TurnOffTVScreen
	release
	end


JoyvaleCity_House1_PersonScript_NPC1::
	lock
	faceplayer
	msgbox JoyvaleCity_House1_PersonScript_NPC1_Text_0
	release
	end


JoyvaleCity_House1_PersonScript_NPC2::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SITRUS_BERRY, JoyvaleCity_House1_SequenceScript_AfterBerry
	msgbox JoyvaleCity_House1_PersonScript_NPC2_Text_0
	giveitem ITEM_SITRUS_BERRY, 1
	goto_if_eq VAR_RESULT, FALSE, JoyvaleCity_House1_SequenceScript_NoRoom
	setflag FLAG_RECEIVED_SITRUS_BERRY
	release
	end


JoyvaleCity_House1_SequenceScript_AfterBerry::
	msgbox JoyvaleCity_House1_TextScript_AfterBerry
	release
	end


JoyvaleCity_House1_SequenceScript_NoRoom::
	msgbox JoyvaleCity_House1_TextScript_NoRoom
	release
	end


JoyvaleCity_House1_SignScript_TV_Text_0:
	.string "Naruto Shippuden is playing right now.\n"
	.string "It looks like the war arc is currently\l"
	.string "going on.$"

JoyvaleCity_House1_PersonScript_NPC1_Text_0:
	.string "Washing dishes for my brother is always\n"
	.string "a chore! I wish he'd get off his butt\l"
	.string "and help me sometimes.$"

JoyvaleCity_House1_PersonScript_NPC2_Text_0:
	.string "I wish I could help my sister wash\n"
	.string "dishes but I get very sleepy after\l"
	.string "eating. Please take this so I can stop\l"
	.string "eating...$"

JoyvaleCity_House1_TextScript_AfterBerry::
	.string "Hopefully I'll be able to get up and help\n"
	.string "my sister now.$"

JoyvaleCity_House1_TextScript_NoRoom::
	.string "You have no room for this! Please come\n"
	.string "back when you do so I can get up.$"
