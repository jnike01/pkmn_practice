JoyvaleCity_Gym_MapScripts::
	.byte 0


JoyvaleCity_Gym_PersonScript_Aide::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_JOYVALE_GYM_WATER, JoyvaleCity_Gym_SequenceScript_AfterWater
	msgbox JoyvaleCity_Gym_PersonScript_Aide_Text_0
	giveitem ITEM_FRESH_WATER, 1
	goto_if_eq VAR_RESULT, FALSE, JoyvaleCity_Gym_SequenceScript_NoRoom
	setflag FLAG_RECEIVED_JOYVALE_GYM_WATER
	msgbox JoyvaleCity_Gym_PersonScript_Aide_Text_1
	release
	end


JoyvaleCity_Gym_PersonScript_LeaderLily::
	trainerbattle_single TRAINER_LILY_1, JoyvaleCity_Gym_TextScript_LilyIntro, JoyvaleCity_Gym_TextScript_LilyOutro, JoyvaleCity_Gym_SequenceScript_LilyDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM43_FLAME_CHARGE, JoyvaleCity_Gym_SequenceScript_GiveFlameCharge
	msgbox JoyvaleCity_Gym_TextScript_LilyPostBattleDialogue
	release
	end


JoyvaleCity_Gym_SequenceScript_LilyDefeated::
	message JoyvaleCity_Gym_TextScript_ReceivedFlareBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox JoyvaleCity_Gym_Text_FlareBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_JOYVALE_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_0x8008, 1
	setvar VAR_1ST_GYM_BEATEN, 1
	call Common_EventScript_SetGymTrainers
	goto JoyvaleCity_Gym_SequenceScript_GiveFlameCharge
	end


JoyvaleCity_Gym_SequenceScript_GiveFlameCharge::
	giveitem ITEM_TM43
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM43_FLAME_CHARGE
	msgbox JoyvaleCity_Gym_Text_ExplainFlameCharge, MSGBOX_DEFAULT
	release
	end


JoyvaleCity_Gym_SequenceScript_AfterWater::
	msgbox JoyvaleCity_Gym_SequenceScript_AfterWater_Text_0
	release
	end


JoyvaleCity_Gym_SequenceScript_NoRoom::
	msgbox JoyvaleCity_Gym_SequenceScript_NoRoom_Text_0
	release
	end


JoyvaleCity_Gym_PersonScript_Aide_Text_0:
	.string "Hey challenger! Lily has a team of\n"
	.string "sizzling Pokemon! Water, Rock and\l"
	.string "Ground Type Pokemon are your best bet\l"
	.string "against her. Take this fresh water to\l"
	.string "help with your challenge!$"

JoyvaleCity_Gym_PersonScript_Aide_Text_1:
	.string "Good luck!$"

JoyvaleCity_Gym_SequenceScript_AfterWater_Text_0:
	.string "Hey challenger! Lily has a team of\n"
	.string "sizzling Pokemon! Water, Rock and\l"
	.string "Ground Type Pokemon are your best bet\l"
	.string "against her.$"

JoyvaleCity_Gym_SequenceScript_NoRoom_Text_0:
	.string "You have no room! Please come back when\n"
	.string "you have space to get this fresh\l"
	.string "water.$"

JoyvaleCity_Gym_TextScript_LilyIntro::
	.string "Lily: It's nice to see you again. I've\n"
	.string "been looking forward to our match\l"
	.string "since you helped drive out the Team\l"
	.string "Frost thugs. Let's skip the pretense\l"
	.string "and get this show on the road!$"

JoyvaleCity_Gym_TextScript_LilyOutro::
	.string "Lily: You did a great job beating me.\n"
	.string "Please accept the amazing Flare Badge!$"

JoyvaleCity_Gym_TextScript_LilyPostBattleDialogue::
	.string "You should go back to route 3 and then\n"
	.string "go east towards the next gym. Good\l"
	.string "luck and keep an eye out for Team\l"
	.string "Frost!$"

JoyvaleCity_Gym_TextScript_ReceivedFlareBadge::
	.string "{PLAYER} received the Flare Badge\n"
	.string "from Gym Leader Lily.$"

JoyvaleCity_Gym_Text_FlareBadgeInfoTakeThis::
	.string "The Flare Badge let's you use the HM\n"
	.string "move Cut outside of battle. Also, take\l"
	.string "this with you please.$"

JoyvaleCity_Gym_Text_ExplainFlameCharge::
	.string "That TM contains the move Flame Charge.\n"
	.string "It's a physical attacking move that\l"
	.string "the user will charge your foe with,\l"
	.string "wreathed in fire, to deal damage and\l"
	.string "boost your own speed stat in the\l"
	.string "process.$"
