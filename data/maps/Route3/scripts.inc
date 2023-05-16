Route3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_DefaultScript_DefaultState
	.byte 0


Route3_DefaultScript_DefaultState::
	goto_if_unset FLAG_ROUTE_3_EVIL_TEAM, Route3_DefaultScript_DefaultState_1
	return

Route3_DefaultScript_DefaultState_1:
	setflag FLAG_ROUTE_3_TRAINERS
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
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

Route3_TextScript_AdminSpeech1::
	.string "Jennifer: You are pretty strong, Gym\n"
	.string "Leader Enya. I was not expecting such\l"
	.string "a challenge from you. Alas, we have\l"
	.string "come to a stalemate so Team Frost and\l"
	.string "I must depart for now. We will meet\l"
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
