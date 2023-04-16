SunviewTown_MapScripts::
	.byte 0


SunviewTown_SignScript_TownSign::
	lock
	msgbox SunviewTown_SignScript_TownSign_Text_0
	release
	end


SunviewTown_PersonScript_NPC1::
	lock
	faceplayer
	msgbox SunviewTown_PersonScript_NPC1_Text_0
	release
	end


SunviewTown_PersonScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, SunviewTown_SequenceScript_HowsFishing
	msgbox SunviewTown_TextScript_OldRodPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SunviewTown_SequenceScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, SunviewTown_SequenceScript_DontWantRod
	return


SunviewTown_SequenceScript_HowsFishing::
	msgbox SunviewTown_TextScript_HopeFishingIsGood
	release
	end


SunviewTown_SequenceScript_GiveOldRod::
	msgbox SunviewTown_TextScript_GiveOldRod
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox SunviewTown_TextScript_FishingAdvice
	release
	end


SunviewTown_SequenceScript_DontWantRod::
	msgbox SunviewTown_TextScript_TooBadThen
	release
	end


SunviewTown_SignScript_TownSign_Text_0:
	.string "Sunview Town, a sunny place.$"

SunviewTown_PersonScript_NPC1_Text_0:
	.string "This town is great inspiration for my\n"
	.string "artwork! Do you like making art too?$"

SunviewTown_TextScript_OldRodPrompt::
	.string "This is a solid fishing spot. Are you\n"
	.string "getting the itch to fish in this nice\l"
	.string "weather?$"

SunviewTown_TextScript_HopeFishingIsGood::
	.string "Are you enjoying the fishing rod I gave\n"
	.string "you? I hope your fishing experience is\l"
	.string "good.$"

SunviewTown_TextScript_GiveOldRod::
	.string "Nice, I'm glad to hear it! Here's a solid\n"
	.string "fishing rod to start you out!$"

SunviewTown_TextScript_FishingAdvice::
	.string "To give you some advice, cast the rod\n"
	.string "when facing a body of water, wait until\l"
	.string "you get a bite and then reel in.$"

SunviewTown_TextScript_TooBadThen::
	.string "Ok then, if you ever get the desire to\n"
	.string "fish just let me know.$"
