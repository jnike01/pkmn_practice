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
	msgbox Route2_TextScript_Serena_Dialogue
	return


Route2_SignScript_RouteSign_Text_0:
	.string "Route 2, mountainous greenland.$"

Route2_TextScript_Jakob_Intro::
	.string "placeholder text$"

Route2_TextScript_Jakob_Outro::
	.string "placeholder text$"

Route2_TextScript_Jakob_Dialogue::
	.string "placeholder text$"

Route2_TextScript_Serena_Intro::
	.string "placeholder text$"

Route2_TextScript_Serena_Outro::
	.string "placeholder text$"

Route2_TextScript_Serena_Dialogue::
	.string "placeholder text$"
