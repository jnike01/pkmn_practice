Route3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_DefaultScript_DefaultState
	.byte 0


Route3_DefaultScript_DefaultState::
	goto_if_unset FLAG_ROUTE_3_EVIL_TEAM, Route3_DefaultScript_DefaultState_2
Route3_DefaultScript_DefaultState_1:
	call_if_unset FLAG_RIVAL_BATTLE_CONTROL, Route3_ControlScript_RivalCutsceneControl
	return

Route3_DefaultScript_DefaultState_2:
	setflag FLAG_ROUTE_3_TRAINERS
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
	goto Route3_DefaultScript_DefaultState_1


Route3_SignScript_RouteSign::
	lock
	msgbox Route3_SignScript_RouteSign_Text_0
	release
	end


Route3_SignScript_SummertreeThicket::
	lock
	msgbox Route3_SignScript_SummertreeThicket_Text_0
	release
	end


Route3_ItemScript_BallOne::
	lock
	giveitem ITEM_BURN_HEAL
	removeobject 7
	release
	end


Route3_ItemScript_BallTwo::
	lock
	giveitem ITEM_REVIVE
	removeobject 9
	release
	end


Route3_ItemScript_BallThree::
	lock
	giveitem ITEM_TM05
	removeobject 10
	release
	end


Route3_ControlScript_RivalCutsceneControl::
	setflag FLAG_RIVAL_CUT_GIVE
	return


Route3_TriggerScript_RivalCutsceneInit1::
	lock
	addobject 13
	applymovement 13, Route3_MovementScript_RivalToPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_PlayerToRival
	waitmovement 0
	call Route3_MusicScript_RivalEncounter
	msgbox Route3_TextScript_RivalCutGive
	giveitem ITEM_HM01, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route3_TextScript_RivalDialogueEnd
	closemessage
	applymovement 13, Route3_MovementScript_RivalLeave1
	waitmovement 0
	removeobject 13
	playse SE_EXIT
	fadedefaultbgm
	setvar VAR_ROUTE_3_CUTSCENE, 2
	release
	end


Route3_TriggerScript_RivalCutsceneInit2::
	lock
	addobject 13
	applymovement 13, Route3_MovementScript_RivalToPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_PlayerToRival
	waitmovement 0
	call Route3_MusicScript_RivalEncounter
	msgbox Route3_TextScript_RivalCutGive
	giveitem ITEM_HM01, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route3_TextScript_RivalDialogueEnd
	closemessage
	applymovement 13, Route3_MovementScript_RivalLeave2
	waitmovement 0
	removeobject 13
	playse SE_EXIT
	fadedefaultbgm
	setvar VAR_ROUTE_3_CUTSCENE, 2
	release
	end


Route3_MusicScript_RivalEncounter::
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	return


Route3_TriggerScript_IntroduceEvilTeam::
	lock
	msgbox Route3_TriggerScript_IntroduceEvilTeam_Text_0
	setvar VAR_ROUTE_3_EVIL_TEAM, 1
	release
	end


Route3_TriggerScript_BlockPath::
	lockall
	msgbox Route3_TriggerScript_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_BlockPathMove
	waitmovement 0
	releaseall
	end


Route3_TriggerScript_Cutscene1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_ToCutscene1
	waitmovement 0
	msgbox Route3_TextScript_AdminSpeech1
	closemessage
	applymovement 5, Route3_MovementScript_AdminToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_PlayerToAdmin
	waitmovement 0
	msgbox Route3_TextScript_AdminSpeech2
	closemessage
	applymovement 5, Route3_MovementScript_AdminLeave
	waitmovement 0
	removeobject 5
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_PlayerToLily
	waitmovement 0
	applymovement 6, Route3_MovementScript_LilyToPlayer
	waitmovement 0
	msgbox Route3_TextScript_LilySpeech
	closemessage
	applymovement 6, Route3_MovementScript_LilyLeave
	waitmovement 0
	removeobject 6
	setflag FLAG_ROUTE_3_EVIL_TEAM
	setvar VAR_ROUTE_3_CUTSCENE, 1
	clearflag FLAG_ROUTE_3_TRAINERS
	special HealPlayerParty
	release
	end


Route3_TriggerScript_Cutscene2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_ToCutscene2
	waitmovement 0
	msgbox Route3_TextScript_AdminSpeech1
	closemessage
	applymovement 5, Route3_MovementScript_AdminToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_PlayerToAdmin
	waitmovement 0
	msgbox Route3_TextScript_AdminSpeech2
	closemessage
	applymovement 5, Route3_MovementScript_AdminLeave
	waitmovement 0
	removeobject 5
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, Route3_MovementScript_PlayerToLily
	waitmovement 0
	applymovement 6, Route3_MovementScript_LilyToPlayer
	waitmovement 0
	msgbox Route3_TextScript_LilySpeech
	closemessage
	applymovement 6, Route3_MovementScript_LilyLeave
	waitmovement 0
	removeobject 6
	setflag FLAG_ROUTE_3_EVIL_TEAM
	setvar VAR_ROUTE_3_CUTSCENE, 1
	clearflag FLAG_ROUTE_3_TRAINERS
	special HealPlayerParty
	release
	end


Route3_TrainerScript_FrostGrunt1::
	trainerbattle_single TRAINER_ROUTE_3_FROST_GRUNT_1, Route3_TextScript_GruntIntro1, Route3_TextScript_GruntOutro1
	msgbox Route3_TrainerScript_FrostGrunt1_Text_0, MSGBOX_AUTOCLOSE
	end


Route3_TrainerScript_FrostGrunt2::
	trainerbattle_single TRAINER_ROUTE_3_FROST_GRUNT_2, Route3_TextScript_GruntIntro2, Route3_TextScript_GruntOutro2
	msgbox Route3_TrainerScript_FrostGrunt2_Text_0, MSGBOX_AUTOCLOSE
	end


Route3_TrainerScript_Mary::
	trainerbattle_single TRAINER_MARY_1, Route3_TextScript_MaryIntro, Route3_TextScript_MaryOutro
	msgbox Route3_TrainerScript_Mary_Text_0, MSGBOX_AUTOCLOSE
	end


Route3_TrainerScript_Morrison::
	trainerbattle_single TRAINER_MORRISON_1, Route3_TextScript_MorrisonIntro, Route3_TextScript_MorrisonOutro
	msgbox Route3_TrainerScript_Morrison_Text_0, MSGBOX_AUTOCLOSE
	end


Route3_TrainerScript_Jackie::
	trainerbattle_single TRAINER_JACKIE_1, Route3_TextScript_JackieIntro, Route3_TextScript_JackieOutro
	msgbox Route3_TrainerScript_Jackie_Text_0, MSGBOX_AUTOCLOSE
	end


Route3_TrainerScript_Oswald::
	trainerbattle_single TRAINER_OSWALD_1, Route3_TextScript_OswaldIntro, Route3_TextScript_OswaldOutro
	msgbox Route3_TrainerScript_Oswald_Text_0, MSGBOX_AUTOCLOSE
	end


Route3_MovementScript_RivalLeave1:
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

Route3_MovementScript_RivalLeave2:
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

Route3_MovementScript_PlayerToRival:
	face_down
	step_end

Route3_MovementScript_BlockPathMove:
	walk_left
	step_end

Route3_MovementScript_ToCutscene1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route3_MovementScript_ToCutscene2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route3_MovementScript_AdminToPlayer:
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Route3_MovementScript_PlayerToAdmin:
	face_down
	step_end

Route3_MovementScript_AdminLeave:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route3_MovementScript_PlayerToLily:
	face_left
	step_end

Route3_MovementScript_LilyToPlayer:
	walk_right
	walk_right
	step_end

Route3_MovementScript_LilyLeave:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route3_MovementScript_RivalToPlayer1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route3_MovementScript_RivalToPlayer2:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route3_SignScript_RouteSign_Text_0:
	.string "Route 3, a calming path.$"

Route3_SignScript_SummertreeThicket_Text_0:
	.string "Entrance to Summertree Wood.$"

Route3_TriggerScript_IntroduceEvilTeam_Text_0:
	.string "It looks like there are thugs of some\n"
	.string "kind here. Maybe the gym leader is\l"
	.string "fighting them off. It's time to help\l"
	.string "out!$"

Route3_TriggerScript_BlockPath_Text_0:
	.string "You still have things to do before you\n"
	.string "can move on!$"

Route3_TrainerScript_FrostGrunt1_Text_0:
	.string "Admin Jennifer will definitely beat you\n"
	.string "if you cross paths. Be happy while you\l"
	.string "still can!$"

Route3_TrainerScript_FrostGrunt2_Text_0:
	.string "Next time we cross paths I'll get you\n"
	.string "for this!$"

Route3_TrainerScript_Mary_Text_0:
	.string "I love relaxing with my Doduo in this\n"
	.string "amazing terrain!$"

Route3_TrainerScript_Morrison_Text_0:
	.string "You should look into some good Bug\n"
	.string "Pokemon for your team.$"

Route3_TrainerScript_Jackie_Text_0:
	.string "I cannot foresee anything about you\n"
	.string "beyond this point. The way your life\l"
	.string "goes is entirely in your hands.$"

Route3_TrainerScript_Oswald_Text_0:
	.string "Remember to always enjoy life. You\n"
	.string "never know when everything could stop\l"
	.string "going your way.$"

Route3_TextScript_JackieIntro::
	.string "I have forseen this battle coming. The\n"
	.string "outcome is unclear to me so let's fight.$"

Route3_TextScript_JackieOutro::
	.string "You are strong to avoid my divination\n"
	.string "and win.$"

Route3_TextScript_OswaldIntro::
	.string "Hello there, sonny. It's a beautiful time\n"
	.string "to be alive! Let's have a friendly bout\l"
	.string "to commemorate life!$"

Route3_TextScript_OswaldOutro::
	.string "I wish the best of luck to you sonny.$"

Route3_TextScript_RivalCutGive::
	.string "Red: Yo, {PLAYER}! I see you have the\n"
	.string "first gym badge now. I got mine before\l"
	.string "you came so now we both are ready to go\l"
	.string "to the next leg of our journey. I got\l"
	.string "two of these HM's though, so here you\l"
	.string "go...$"

Route3_TextScript_RivalDialogueEnd::
	.string "That HM contains Cut which is a solid\n"
	.string "move in battle. The real kicker though,\l"
	.string "is it can be used to cut down trees like\l"
	.string "the one below me. Next time we cross\l"
	.string "paths, you better be ready to have a\l"
	.string "battle with me and this time you're\l"
	.string "gonna lose! See you later bro!$"

Route3_TextScript_GruntIntro1::
	.string "You should run along, little kid! We of\n"
	.string "Team Frost are too dangerous of a\l"
	.string "bunch for kids like you.$"

Route3_TextScript_GruntOutro1::
	.string "You're way stronger than I expected!\n"
	.string "Don't get a big head though!$"

Route3_TextScript_GruntIntro2::
	.string "I'm here to make sure Admin Jennifer's\n"
	.string "business goes uninterrupted! Scram\l"
	.string "little kid!$"

Route3_TextScript_GruntOutro2::
	.string "I'm a failure...$"

Route3_TextScript_MaryIntro::
	.string "My baby and I are itching for a battle!$"

Route3_TextScript_MaryOutro::
	.string "You and your Pokemon have a strong\n"
	.string "bond!$"

Route3_TextScript_MorrisonIntro::
	.string "This route is great training for my\n"
	.string "bugs.$"

Route3_TextScript_MorrisonOutro::
	.string "Thanks for the experience!$"

Route3_TextScript_AdminSpeech1::
	.string "Jennifer: You are pretty strong, Gym\n"
	.string "Leader Lily. I was not expecting such a\l"
	.string "challenge from you. Alas, we have come\l"
	.string "to a stalemate so Team Frost and I\l"
	.string "must depart for now. We will meet\l"
	.string "again...$"

Route3_TextScript_AdminSpeech2::
	.string "Jennifer: I'm surprised a newbie trainer\n"
	.string "like you was able to take out my\l"
	.string "grunts. I must leave now but I will\l"
	.string "never forget you. I can see your\l"
	.string "potential and strong will reflected in\l"
	.string "your eyes. I'll make sure Team Frost\l"
	.string "will not underestimate you in the\l"
	.string "future.$"

Route3_TextScript_LilySpeech::
	.string "Lily: Hey there! Thanks for helping me\n"
	.string "fight off those Team Frost Thugs!\l"
	.string "You've earned my respect doing that\l"
	.string "with no prompt. I couldn't learn what\l"
	.string "their purpose is but I'm going to\l"
	.string "notify the league of their presence to\l"
	.string "hopefully nip this problem in the bud\l"
	.string "before it gets out of hand. I'd love it\l"
	.string "if you would come to my gym and\l"
	.string "challenge me. I can tell we'll have a\l"
	.string "great match! See you later!$"
