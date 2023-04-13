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
	.string "My Pokemon are energized from relaxing\n"
	.string "in this nice weather, so let's battle!$"

Route1_TextScript_Heather_Outro::
	.string "Wow! You are good at this!$"

Route1_TextScript_Heather_Dialogue::
	.string "The breeze is really nice today. I hope\n"
	.string "you're enjoying it as much as I am.$"

Route1_TextScript_Jack_Intro::
	.string "I'm new to Pokemon battling, so let's do\n"
	.string "our best and learn from a battle.$"

Route1_TextScript_Jack_Outro::
	.string "I learned some new tactics, I hope you\n"
	.string "did too.$"

Route1_TextScript_Jack_Dialogue::
	.string "Good luck on your journey, I hope\n"
	.string "battling me taught you as much as it\l"
	.string "did me.$"
