Route4_MapScripts::
	.byte 0


Route4_SignScript_RouteSign::
	lock
	msgbox Route4_SignScript_RouteSign_Text_0
	release
	end


Route4_PersonScript_Nurse::
	lock
	faceplayer
	msgbox Route4_PersonScript_Nurse_Text_0, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, Route4_PersonScript_Nurse_3
	case NO, Route4_PersonScript_Nurse_4
Route4_PersonScript_Nurse_1:
	release
	end

Route4_PersonScript_Nurse_3:
	call Route4_SequenceScript_NurseHeal
	goto Route4_PersonScript_Nurse_1

Route4_PersonScript_Nurse_4:
	msgbox Route4_PersonScript_Nurse_Text_1
	goto Route4_PersonScript_Nurse_1


Route4_SequenceScript_NurseHeal::
	msgbox Route4_SequenceScript_NurseHeal_Text_0
	special HealPlayerParty
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	delay 120
	fadescreen FADE_FROM_BLACK
	msgbox Route4_SequenceScript_NurseHeal_Text_1
	return


Route4_TrainerScript_Joe::
	trainerbattle_single TRAINER_JOE_1, Route4_TextScript_JoeIntro, Route4_TextScript_JoeOutro
	msgbox Route4_TrainerScript_Joe_Text_0, MSGBOX_AUTOCLOSE
	end


Route4_TrainerScript_Eva::
	trainerbattle_single TRAINER_EVA_1, Route4_TextScript_EvaIntro, Route4_TextScript_EvaOutro
	msgbox Route4_TrainerScript_Eva_Text_0, MSGBOX_AUTOCLOSE
	end


Route4_TrainerScript_Laura::
	trainerbattle_single TRAINER_LAURA_1, Route4_TextScript_LauraIntro, Route4_TextScript_LauraOutro
	msgbox Route4_TrainerScript_Laura_Text_0, MSGBOX_AUTOCLOSE
	end


Route4_SignScript_RouteSign_Text_0:
	.string "Route 4, a vibrant road.$"

Route4_PersonScript_Nurse_Text_0:
	.string "Hey! Do you need your Pokemon healed?\n"
	.string "If so I'm your girl!$"

Route4_PersonScript_Nurse_Text_1:
	.string "That's ok, just let me know if you do at\n"
	.string "any point. I'll be right here.$"

Route4_SequenceScript_NurseHeal_Text_0:
	.string "Please let me see your Pokemon for just\n"
	.string "a sec...$"

Route4_SequenceScript_NurseHeal_Text_1:
	.string "You're Pokemon are now fully healed.\n"
	.string "Come see me again if you need\l"
	.string "assistance!$"

Route4_TrainerScript_Joe_Text_0:
	.string "If you ever need some good excercise,\n"
	.string "walking long distance is the way to do\l"
	.string "it.$"

Route4_TrainerScript_Eva_Text_0:
	.string "Always stay fed so you have the\n"
	.string "maximum amount of energy to deal with\l"
	.string "what comes your way.$"

Route4_TrainerScript_Laura_Text_0:
	.string "p$"

Route4_TextScript_JoeIntro::
	.string "Trekking through Summertree Wood is\n"
	.string "good excercise. My Nidorino loves the\l"
	.string "walk too.$"

Route4_TextScript_JoeOutro::
	.string "You beat us!? You and your Pokemon\n"
	.string "must be very fit.$"

Route4_TextScript_EvaIntro::
	.string "I made food for my Pokemon and I. Sorry,\n"
	.string "if you wanted some, you're too late. We\l"
	.string "can have a nice battle though.$"

Route4_TextScript_EvaOutro::
	.string "You and your Pokemon must already be\n"
	.string "well fed enough to beat us!$"

Route4_TextScript_LauraIntro::
	.string "p$"

Route4_TextScript_LauraOutro::
	.string "p$"
