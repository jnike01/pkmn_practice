CragCave_MapScripts::
	.byte 0


CragCave_ItemScript_BallOne::
	lock
	giveitem ITEM_ESCAPE_ROPE
	removeobject 1
	release
	end


CragCave_TrainerScript_Terry::
	trainerbattle_single TRAINER_TERRY_1, CragCave_TextScript_Terry_Intro, CragCave_TextScript_Terry_Outro
	msgbox CragCave_TextScript_Terry_Dialogue, MSGBOX_AUTOCLOSE
	end


CragCave_TextScript_Terry_Intro::
	.string "The temperature in this cave is\n"
	.string "surprisingly good for a solid hike and\l"
	.string "especially a good battle.$"

CragCave_TextScript_Terry_Outro::
	.string "Stay safe traversing the cave!$"

CragCave_TextScript_Terry_Dialogue::
	.string "Hiking is good for the body so it's a\n"
	.string "good idea to do it as often as possible.\l"
	.string "Although, make sure to keep proper\l"
	.string "track of your health while doing so.$"
