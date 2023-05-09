JoyvaleCity_Mart_MapScripts::
	return


JoyvaleCity_Mart_PersonScript_Employee::
	lock
	faceplayer
	message JoyvaleCity_Mart_PersonScript_Employee_Text_0
	waitmessage
	pokemart 0
	msgbox JoyvaleCity_Mart_PersonScript_Employee_Text_1
	release
	end


JoyvaleCity_Mart_PersonScript_NPC1::
	lock
	faceplayer
	msgbox JoyvaleCity_Mart_PersonScript_NPC1_Text_0
	release
	end


JoyvaleCity_Mart_PersonScript_NPC2::
	lock
	faceplayer
	msgbox JoyvaleCity_Mart_PersonScript_NPC2_Text_0
	release
	end


JoyvaleCity_Mart_PersonScript_Employee_Text_0:
	.string "How may I serve you?$"

JoyvaleCity_Mart_PersonScript_Employee_Text_1:
	.string "Please come again!$"

JoyvaleCity_Mart_PersonScript_NPC1_Text_0:
	.string "The ice cream options here are\n"
	.string "plentiful! I love the flavors they have\l"
	.string "in stock here!$"

JoyvaleCity_Mart_PersonScript_NPC2_Text_0:
	.string "Shopping here is always a great\n"
	.string "convenience.$"
