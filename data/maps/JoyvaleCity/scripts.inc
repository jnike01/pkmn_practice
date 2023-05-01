JoyvaleCity_MapScripts::
	.byte 0


JoyvaleCity_SignScript_CitySign::
	lock
	msgbox JoyvaleCity_SignScript_CitySign_Text_0
	release
	end


JoyvaleCity_PersonScript_NPC1::
	lock
	faceplayer
	msgbox JoyvaleCity_PersonScript_NPC1_Text_0
	release
	end


JoyvaleCity_PersonScript_NPC2::
	lock
	faceplayer
	msgbox JoyvaleCity_PersonScript_NPC2_Text_0
	release
	end


JoyvaleCity_ItemScript_BallOne::
	lock
	giveitem ITEM_GREAT_BALL
	removeobject 1
	release
	end


JoyvaleCity_SignScript_CitySign_Text_0:
	.string "Joyvale City, a flowery sprawl.$"

JoyvaleCity_PersonScript_NPC1_Text_0:
	.string "This city is a nice change of pace from\n"
	.string "the cave. There were no birds in there\l"
	.string "either.$"

JoyvaleCity_PersonScript_NPC2_Text_0:
	.string "The shade under these trees is really\n"
	.string "comfortable. Do you like to relax under\l"
	.string "the shade?$"
