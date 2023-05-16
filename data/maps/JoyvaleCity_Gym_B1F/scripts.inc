JoyvaleCity_Gym_B1F_MapScripts::
	.byte 0


JoyvaleCity_Gym_B1F_TrainerScript_Homer::
	trainerbattle_single TRAINER_HOMER_1, JoyvaleCity_Gym_B1F_TextScript_HomerIntro, JoyvaleCity_Gym_B1F_TextScript_HomerOutro
	msgbox JoyvaleCity_Gym_B1F_TrainerScript_Homer_Text_0, MSGBOX_AUTOCLOSE
	end


JoyvaleCity_Gym_B1F_TrainerScript_Ken::
	trainerbattle_single TRAINER_KEN_1, JoyvaleCity_Gym_B1F_TextScript_KenIntro, JoyvaleCity_Gym_B1F_TextScript_KenOutro
	msgbox JoyvaleCity_Gym_B1F_TrainerScript_Ken_Text_0, MSGBOX_AUTOCLOSE
	end


JoyvaleCity_Gym_B1F_TrainerScript_Homer_Text_0:
	.string "Leader Lily is much stronger than me.\n"
	.string "You will be in for a big challenge!$"

JoyvaleCity_Gym_B1F_TrainerScript_Ken_Text_0:
	.string "I have learned a lot from our battle.$"

JoyvaleCity_Gym_B1F_TextScript_HomerIntro::
	.string "My job is to test you to make sure you\n"
	.string "are worthy of challenging Leader Lily.\l"
	.string "Prepare yourself!$"

JoyvaleCity_Gym_B1F_TextScript_HomerOutro::
	.string "You have done a remarkable job!$"

JoyvaleCity_Gym_B1F_TextScript_KenIntro::
	.string "Let's have a great match to prepare for\n"
	.string "your confrontation with Leader Lily!$"

JoyvaleCity_Gym_B1F_TextScript_KenOutro::
	.string "Good luck on your challenge!$"
