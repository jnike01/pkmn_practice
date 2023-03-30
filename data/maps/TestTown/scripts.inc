TestTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_DefaultScript_DefaultState
	.byte 0


TestTown_DefaultScript_DefaultState::
	goto_if_unset FLAG_SYS_POKEMON_GET, TestTown_DefaultScript_DefaultState_1
	return

TestTown_DefaultScript_DefaultState_1:
	setvar VAR_TEST_TOWN_STATE, 0
	return


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

TestTown_TriggerScript_BlockPath_Text_0:
	.string "Mother said to visit the Professor\nbefore heading out!$"

TestTown_TriggerScript_GotoRival_Text_0:
	.string "You should go visit your rival first!$"
