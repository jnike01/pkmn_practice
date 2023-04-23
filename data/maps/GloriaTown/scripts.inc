GloriaTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GloriaTown_DefaultScript_DefaultState
	.byte 0


GloriaTown_DefaultScript_DefaultState::
	goto_if_unset FLAG_SYS_POKEMON_GET, GloriaTown_DefaultScript_DefaultState_2
GloriaTown_DefaultScript_DefaultState_1:
	call_if_unset FLAG_RIVAL_BATTLE_CONTROL, GloriaTown_ControlScript_RivalBattleSetup
	return

GloriaTown_DefaultScript_DefaultState_2:
	setvar VAR_GLORIA_TOWN_STATE, 0
	goto GloriaTown_DefaultScript_DefaultState_1


GloriaTown_SignScript_Player_House::
	lock
	msgbox GloriaTown_SignScript_Player_House_Text_0
	release
	end


GloriaTown_SignScript_Rival_House::
	lock
	msgbox GloriaTown_SignScript_Rival_House_Text_0
	release
	end


GloriaTown_SignScript_Prof_Lab::
	lock
	msgbox GloriaTown_SignScript_Prof_Lab_Text_0
	release
	end


GloriaTown_SignScript_Gym::
	lock
	msgbox GloriaTown_SignScript_Gym_Text_0
	release
	end


GloriaTown_SignScript_TownSign::
	lock
	msgbox GloriaTown_SignScript_TownSign_Text_0
	release
	end


GloriaTown_ItemScript_BallOne::
	lock
	giveitem ITEM_EVERSTONE, 1
	removeobject 3
	release
	end


GloriaTown_ItemScript_BallTwo::
	lock
	giveitem ITEM_RARE_CANDY, 1
	removeobject 4
	release
	end


GloriaTown_PersonScript_NPC1::
	lock
	faceplayer
	msgbox GloriaTown_PersonScript_NPC1_Text_0
	release
	end


GloriaTown_PersonScript_NPC2::
	lock
	faceplayer
	msgbox GloriaTown_PersonScript_NPC2_Text_0
	release
	end


GloriaTown_ControlScript_RivalBattleSetup::
	goto_if_unset FLAG_SYS_POKEMON_GET, GloriaTown_ControlScript_RivalBattleSetup_1
	compare VAR_GLORIA_TOWN_STATE, 2
	goto_if_eq GloriaTown_ControlScript_RivalBattleSetup_4
	return

GloriaTown_ControlScript_RivalBattleSetup_1:
	setflag FLAG_RIVAL_BATTLE_ONE
	return

GloriaTown_ControlScript_RivalBattleSetup_4:
	clearflag FLAG_RIVAL_BATTLE_ONE
	return


GloriaTown_TrainerScript_RivalBattleOne::
	call GloriaTown_MusicScript_RivalEncounter
	msgbox GloriaTown_TextScript_RivalIntro
	trainerbattle_no_intro TRAINER_RED, GloriaTown_TextScript_RivalOutro
	msgbox GloriaTown_TextScript_RivalBattleAftermath
	closemessage
	setflag FLAG_RIVAL_BATTLE_ONE
	setvar VAR_GLORIA_TOWN_STATE, 3
	call GloriaTown_SequenceScript_RivalLeave1
	return


GloriaTown_SequenceScript_RivalLeave1::
	lockall
	applymovement 6, GloriaTown_MovementScript_RivalLeaveAfterBattle1
	waitmovement 0
	removeobject 6
	fadedefaultbgm
	releaseall
	return


GloriaTown_SequenceScript_RivalLeave2::
	lockall
	applymovement 6, GloriaTown_MovementScript_RivalLeaveAfterBattle2
	waitmovement 0
	removeobject 6
	fadedefaultbgm
	releaseall
	return


GloriaTown_SequenceScript_RivalLeave3::
	lockall
	applymovement 6, GloriaTown_MovementScript_RivalLeaveAfterBattle3
	waitmovement 0
	removeobject 6
	fadedefaultbgm
	releaseall
	return


GloriaTown_MusicScript_RivalEncounter::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


GloriaTown_TriggerScript_RivalEncounter1::
	applymovement 6, GloriaTown_MovementScript_RivalToPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_MovementScript_FaceRival
	waitmovement 0
	call GloriaTown_TrainerScript_RivalBattleOne
	setvar VAR_RIVAL_STATE, 3
	end


GloriaTown_TriggerScript_RivalEncounter2::
	applymovement 6, GloriaTown_MovementScript_RivalToPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_MovementScript_FaceRival
	waitmovement 0
	call GloriaTown_TrainerScript_RivalBattleOne
	setvar VAR_RIVAL_STATE, 3
	end


GloriaTown_TriggerScript_RivalEncounter3::
	applymovement 6, GloriaTown_MovementScript_RivalToPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_MovementScript_FaceRival
	waitmovement 0
	call GloriaTown_TrainerScript_RivalBattleOne
	setvar VAR_RIVAL_STATE, 3
	end


GloriaTown_TriggerScript_BlockPath::
	lockall
	msgbox GloriaTown_TriggerScript_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_MovementScript_StopPlayer
	waitmovement 0
	releaseall
	return


GloriaTown_TriggerScript_GotoRival::
	lockall
	msgbox GloriaTown_TriggerScript_GotoRival_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_MovementScript_StopPlayerLab
	waitmovement 0
	releaseall
	return


GloriaTown_MovementScript_StopPlayer:
	walk_up
	step_end

GloriaTown_MovementScript_StopPlayerLab:
	walk_right
	step_end

GloriaTown_MovementScript_RivalToPlayer1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

GloriaTown_MovementScript_RivalToPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

GloriaTown_MovementScript_RivalToPlayer3:
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

GloriaTown_MovementScript_FaceRival:
	face_right
	step_end

GloriaTown_MovementScript_RivalLeaveAfterBattle1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

GloriaTown_MovementScript_RivalLeaveAfterBattle2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

GloriaTown_MovementScript_RivalLeaveAfterBattle3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

GloriaTown_SignScript_Player_House_Text_0:
	.string "{PLAYER}{KUN}'s House$"

GloriaTown_SignScript_Rival_House_Text_0:
	.string "Professor's House$"

GloriaTown_SignScript_Prof_Lab_Text_0:
	.string "Professor's Lab$"

GloriaTown_SignScript_Gym_Text_0:
	.string "Test Town Pokemon Gym\nLeader: Zackary\p“The wise man of iron!”$"

GloriaTown_SignScript_TownSign_Text_0:
	.string "Gloria Town, a serene abode.$"

GloriaTown_PersonScript_NPC1_Text_0:
	.string "This town is so beautiful and calming.\n"
	.string "I'm visiting from out of town and this\l"
	.string "place is great. I might want to move\l"
	.string "here!$"

GloriaTown_PersonScript_NPC2_Text_0:
	.string "I love coming to Gloria Town to fish!\n"
	.string "There's some encounters here that you\l"
	.string "can't get anywhere else. You should try\l"
	.string "it some time!$"

GloriaTown_TriggerScript_BlockPath_Text_0:
	.string "Mother said to visit the Professor and\nyour Rival before heading out!$"

GloriaTown_TriggerScript_GotoRival_Text_0:
	.string "You should go visit your rival first!$"

GloriaTown_TextScript_RivalIntro::
	.string "Now that you have your Pokemon, let's\n"
	.string "battle before we both head out! I've\l"
	.string "been looking forward to this for a long\l"
	.string "time, let's get it!$"

GloriaTown_TextScript_RivalOutro::
	.string "You are very good at this! It's\n"
	.string "surprising that this is your first\l"
	.string "battle.$"

GloriaTown_TextScript_RivalBattleAftermath::
	.string "That was a very exhilarating battle and\n"
	.string "everything I was hoping for! Let's do\l"
	.string "this again when we get further along on\l"
	.string "our journeys. Now, let's go out and\l"
	.string "explore the world! Stay safe and see\l"
	.string "you around!$"
