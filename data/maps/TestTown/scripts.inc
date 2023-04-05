TestTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_DefaultScript_DefaultState
	.byte 0


TestTown_DefaultScript_DefaultState::
	goto_if_unset FLAG_SYS_POKEMON_GET, TestTown_DefaultScript_DefaultState_2
TestTown_DefaultScript_DefaultState_1:
	call_if_unset FLAG_RIVAL_BATTLE_CONTROL, TestTown_ControlScript_RivalBattleSetup
	return

TestTown_DefaultScript_DefaultState_2:
	setvar VAR_TEST_TOWN_STATE, 0
	goto TestTown_DefaultScript_DefaultState_1


TestTown_Signscript_Player_House::
	lock
	msgbox TestTown_Signscript_Player_House_Text_0
	release
	end


TestTown_Signscript_Rival_House::
	lock
	msgbox TestTown_Signscript_Rival_House_Text_0
	release
	end


TestTown_Signscript_Prof_Lab::
	lock
	msgbox TestTown_Signscript_Prof_Lab_Text_0
	release
	end


TestTown_Signscript_Gym::
	lock
	msgbox TestTown_Signscript_Gym_Text_0
	release
	end


TestTown_ItemScript_BallOne::
	lock
	giveitem ITEM_EVERSTONE, 1
	removeobject 3
	release
	end


TestTown_ItemScript_BallTwo::
	lock
	giveitem ITEM_RARE_CANDY, 1
	removeobject 4
	release
	end


TestTown_PersonScript_NPC1::
	lock
	faceplayer
	msgbox TestTown_PersonScript_NPC1_Text_0
	release
	end


TestTown_ControlScript_RivalBattleSetup::
	goto_if_unset FLAG_SYS_POKEMON_GET, TestTown_ControlScript_RivalBattleSetup_1
	clearflag FLAG_RIVAL_BATTLE_ONE
	return

TestTown_ControlScript_RivalBattleSetup_1:
	setflag FLAG_RIVAL_BATTLE_ONE
	return


TestTown_TrainerScript_RivalBattleOne::
	trainerbattle_single TRAINER_RED, TestTown_TextScript_RivalIntro, TestTown_TextScript_RivalOutro
	msgbox TestTown_TextScript_RivalBattleAftermath
	closemessage
	end


TestTown_TriggerScript_BlockPath::
	lockall
	msgbox TestTown_TriggerScript_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_MovementScript_StopPlayer
	waitmovement 0
	releaseall
	return


TestTown_TriggerScript_GotoRival::
	lockall
	msgbox TestTown_TriggerScript_GotoRival_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_MovementScript_StopPlayerLab
	waitmovement 0
	releaseall
	return


TestTown_MovementScript_StopPlayer:
	walk_up
	step_end

TestTown_MovementScript_StopPlayerLab:
	walk_right
	step_end

TestTown_Signscript_Player_House_Text_0:
	.string "{PLAYER}{KUN}'s House$"

TestTown_Signscript_Rival_House_Text_0:
	.string "Professor's House$"

TestTown_Signscript_Prof_Lab_Text_0:
	.string "Professor's Lab$"

TestTown_Signscript_Gym_Text_0:
	.string "Test Town Pokemon Gym\nLeader: Zackary\p“The wise man of iron!”$"

TestTown_PersonScript_NPC1_Text_0:
	.string "This town is so beautiful and calming.\n"
	.string "I'm visiting from out of town and this\l"
	.string "place is great. I might want to move\l"
	.string "here!$"

TestTown_TriggerScript_BlockPath_Text_0:
	.string "Mother said to visit the Professor and\nyour Rival before heading out!$"

TestTown_TriggerScript_GotoRival_Text_0:
	.string "You should go visit your rival first!$"

TestTown_TextScript_RivalIntro::
	.string "Placeholder text$"

TestTown_TextScript_RivalOutro::
	.string "Placeholder text$"

TestTown_TextScript_RivalBattleAftermath::
	.string "Placeholder text$"
