CragCave_2R_MapScripts::
	.byte 0


CragCave_2R_ItemScript_BallOne::
	lock
	giveitem ITEM_TM39_ROCK_TOMB
	removeobject 1
	release
	end


CragCave_2R_TrainerScript_Timmy::
	trainerbattle_single TRAINER_TIMMY_1, CragCave_2R_TextScript_TimmyIntro, CragCave_2R_TextScript_TimmyOutro
	msgbox CragCave_2R_TextScript_TimmyDialogue, MSGBOX_AUTOCLOSE
	end


CaveCave_2R_TrainerScript_Takeda::
	trainerbattle_single TRAINER_TAKEDA_1, CragCave_2R_TextScript_TakedaIntro, CragCave_2R_TextScript_TakedaOutro
	msgbox CragCave_2R_TextScript_TakedaDialogue, MSGBOX_AUTOCLOSE
	end


CragCave_2R_TextScript_TimmyIntro::
	.string "I love exploring in this cave! I could\n"
	.string "live the rest of my life in here!$"

CragCave_2R_TextScript_TimmyOutro::
	.string "You must have a high experience level.\n"
	.string "You're good at this!$"

CragCave_2R_TextScript_TimmyDialogue::
	.string "Have fun exploring, I know I'll be!$"

CragCave_2R_TextScript_TakedaIntro::
	.string "The darkness makes me feel alive!$"

CragCave_2R_TextScript_TakedaOutro::
	.string "You're power is too overwhelming, kieru!$"

CragCave_2R_TextScript_TakedaDialogue::
	.string "Leave me alone to my sweet solitude.$"
