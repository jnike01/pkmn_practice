Route1_MapScripts::
	.byte 0


Route1_ItemScript_BallOne::
	lock
	giveitem ITEM_POTION, 1
	removeobject 1
	release
	end


Route1_SignScript_RouteSign::
	lock
	msgbox Route1_SignScript_RouteSign_Text_0
	release
	end


Route1_TrainerScript_Heather::
	trainerbattle_single TRAINER_HEATHER_1, Route1_TextScript_Heather_Intro, Route1_TextScript_Heather_Outro
	msgbox Route1_TextScript_Heather_Dialogue, MSGBOX_AUTOCLOSE
	end


Route1_TrainerScript_Jack::
	trainerbattle_single TRAINER_JACK_1, Route1_TextScript_Jack_Intro, Route1_TextScript_Jack_Outro
	msgbox Route1_TextScript_Jack_Dialogue, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route1_PersonScript_NPC1::
	lock
	faceplayer
	msgbox Route1_PersonScript_NPC1_Text_0
	release
	end


Route1_SignScript_RouteSign_Text_0:
	.string "Route 1, a beautiful landscape.$"

Route1_PersonScript_NPC1_Text_0:
	.string "This grass is great for catching\n"
	.string "pokemon! I love the breeze here too,\l"
	.string "it's great.$"

Route1_TextScript_Heather_Intro::
	.string "Placeholder Text.$"

Route1_TextScript_Heather_Outro::
	.string "Placeholder Text.$"

Route1_TextScript_Heather_Dialogue::
	.string "Placeholder Text.$"

Route1_TextScript_Jack_Intro::
	.string "Placeholder Text.$"

Route1_TextScript_Jack_Outro::
	.string "Placeholder Text.$"

Route1_TextScript_Jack_Dialogue::
	.string "Placeholder Text.$"
