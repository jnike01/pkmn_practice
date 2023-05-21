Route2_MapScripts::
	.byte 0


Route2_ItemScript_BallOne::
	lock
	giveitem ITEM_MAX_REVIVE
	removeobject 1
	release
	end


Route2_ItemScript_BallTwo::
	lock
	giveitem ITEM_PARALYZE_HEAL
	removeobject 4
	release
	end


Route2_SignScript_RouteSign::
	lock
	msgbox Route2_SignScript_RouteSign_Text_0
	release
	end


Route2_TrainerScript_Jakob::
	trainerbattle_single TRAINER_JAKOB_1, Route2_TextScript_Jakob_Intro, Route2_TextScript_Jakob_Outro
	msgbox Route2_TextScript_Jakob_Dialogue, MSGBOX_AUTOCLOSE
	end


Route2_TrainerScript_Serena::
	trainerbattle_single TRAINER_SERENA_1, Route2_TextScript_Serena_Intro, Route2_TextScript_Serena_Outro
	msgbox Route2_TextScript_Serena_Dialogue, MSGBOX_AUTOCLOSE
	return


Route2_SignScript_RouteSign_Text_0:
	.string "Route 2, mountainous greenland.$"

Route2_TextScript_Jakob_Intro::
	.string "There's a decent selection of bugs here\n"
	.string "before Crag Cave.$"

Route2_TextScript_Jakob_Outro::
	.string "You have a good team! Be safe on your\n"
	.string "travels.$"

Route2_TextScript_Jakob_Dialogue::
	.string "I wish you good luck on finding some\n"
	.string "solid Bug Type Pokemon.$"

Route2_TextScript_Serena_Intro::
	.string "The breeze here is great! Do you like\n"
	.string "weather like this?$"

Route2_TextScript_Serena_Outro::
	.string "You layed my whole team out flat, huh?\n"
	.string "You have some killer skills!$"

Route2_TextScript_Serena_Dialogue::
	.string "I'm just gonna chill here and enjoy the\n"
	.string "breeze. Feel free to relax along with\l"
	.string "me...zzz.$"
