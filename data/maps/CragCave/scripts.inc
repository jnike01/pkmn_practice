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


CragCave_TriggerScript_RivalSequence::
	lock
	applymovement 3, CragCave_MovementScript_RivalToPlayer
	waitmovement 0
	msgbox CragCave_TriggerScript_RivalSequence_Text_0
	applymovement 3, CragCave_MovementScript_RivalAwayFromPlayer
	waitmovement 0
	removeobject 3
	setflag FLAG_CRAG_RIVAL_TRIGGERED
	setvar VAR_RIVAL_STATE, 4
	release
	end


CragCave_MovementScript_RivalToPlayer:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CragCave_MovementScript_RivalAwayFromPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CragCave_TriggerScript_RivalSequence_Text_0:
	.string "This is our first dungeon! It's so cool\n"
	.string "to finally be experiencing the world in\l"
	.string "this new way! I'm going to go in first\l"
	.string "but when we get to the end, let's\l"
	.string "battle again to commemorate this\l"
	.string "moment.$"

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
