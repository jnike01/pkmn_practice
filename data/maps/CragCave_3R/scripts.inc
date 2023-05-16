CragCave_3R_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CragCave_3R_DefaultScript_DefaultState
	.byte 0


CragCave_3R_DefaultScript_DefaultState::
	call_if_unset FLAG_RIVAL_BATTLE_CONTROL, CragCave_3R_ControlScript_RivalBattleSetup
	return


CragCave_3R_ItemScript_BallOne::
	lock
	giveitem ITEM_SUPER_POTION
	removeobject 1
	release
	end


CragCave_3R_ItemScript_BallTwo::
	lock
	giveitem ITEM_RARE_CANDY
	removeobject 3
	release
	end


CragCave_3R_ControlScript_RivalBattleSetup::
	setflag FLAG_RIVAL_BATTLE_TWO
	return


CragCave_3R_TriggerScript_StartRivalBattle1::
	addobject 5
	applymovement 5, CragCave_3R_MovementScript_RivalApproach1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, CragCave_3R_MovementScript_FaceRival_1
	waitmovement 0
	call CragCave_3R_TrainerScript_RivalBattleTwo
	call CragCave_3R_SequenceScript_RivalLeave1
	setvar VAR_RIVAL_STATE, 5
	end


CragCave_3R_TriggerScript_StartRivalBattle2::
	addobject 5
	applymovement 5, CragCave_3R_MovementScript_RivalApproach2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, CragCave_3R_MovementScript_FaceRival_2
	waitmovement 0
	call CragCave_3R_TrainerScript_RivalBattleTwo
	setvar VAR_RIVAL_STATE, 5
	end


CragCave_3R_TrainerScript_RivalBattleTwo::
	call CragCave_3R_MusicScript_RivalEncounter
	msgbox CragCave_3R_TextScript_RivalIntro
	trainerbattle_no_intro TRAINER_RED_2, CragCave_3R_TextScript_RivalOutro
	msgbox CragCave_3R_TextScript_RivalAftermath
	closemessage
	setflag FLAG_RIVAL_BATTLE_TWO
	return


CragCave_3R_SequenceScript_RivalLeave1::
	lockall
	applymovement 5, CragCave_3R_MovementScript_RivalExit1
	waitmovement 0
	removeobject 5
	playse SE_EXIT
	fadedefaultbgm
	releaseall
	return


CragCave_3R_SequenceScript_RivalLeave2::
	lockall
	applymovement 5, CragCave_3R_MovementScript_RivalExit2
	waitmovement 0
	removeobject 5
	playse SE_EXIT
	fadedefaultbgm
	releaseall
	return


CragCave_3R_MusicScript_RivalEncounter::
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	return


CragCave_3R_MovementScript_RivalApproach1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

CragCave_3R_MovementScript_RivalApproach2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

CragCave_3R_MovementScript_FaceRival_1:
	face_right
	step_end

CragCave_3R_MovementScript_FaceRival_2:
	face_up
	step_end

CragCave_3R_MovementScript_RivalExit1:
	walk_down
	walk_left
	face_down
	step_end

CragCave_3R_MovementScript_RivalExit2:
	walk_left
	walk_down
	step_end

CragCave_3R_TextScript_RivalIntro::
	.string "This cave was very interesting and fun\n"
	.string "to traverse. Did you find any good\l"
	.string "pokemon in here? I found myself a\l"
	.string "strong one, so let's have a go like I\l"
	.string "said at the entrance with our new\l"
	.string "experience! Prepare yourself!$"

CragCave_3R_TextScript_RivalOutro::
	.string "You're very proficient at this already!\n"
	.string "I'll get stronger so we can do this\l"
	.string "again soon!$"

CragCave_3R_TextScript_RivalAftermath::
	.string "That was definitely a solid battle. I'll\n"
	.string "have to continue training and improve\l"
	.string "my team so I can try again to beat you.\l"
	.string "I'm going to head to the first gym, so\l"
	.string "wish me luck! Good luck on your own\l"
	.string "challenge. See ya!$"
