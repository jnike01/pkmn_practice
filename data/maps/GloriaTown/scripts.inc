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


GloriaTown_Signscript_Player_House::
	lock
	msgbox GloriaTown_Signscript_Player_House_Text_0
	release
	end


GloriaTown_Signscript_Rival_House::
	lock
	msgbox GloriaTown_Signscript_Rival_House_Text_0
	release
	end


GloriaTown_Signscript_Prof_Lab::
	lock
	msgbox GloriaTown_Signscript_Prof_Lab_Text_0
	release
	end


GloriaTown_Signscript_Gym::
	lock
	msgbox GloriaTown_Signscript_Gym_Text_0
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
	trainerbattle_single TRAINER_RED, GloriaTown_TextScript_RivalIntro, GloriaTown_TextScript_RivalOutro, GloriaTown_SequenceScript_RivalLeave
	end


GloriaTown_SequenceScript_RivalLeave::
	msgbox GloriaTown_TextScript_RivalBattleAftermath
	closemessage
	lockall
	applymovement 6, GloriaTown_MovementScript_RivalLeaveAfterBattle
	waitmovement 0
	removeobject 6
	setflag FLAG_RIVAL_BATTLE_ONE
	setvar VAR_GLORIA_TOWN_STATE, 3
	releaseall
	return


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

GloriaTown_MovementScript_RivalLeaveAfterBattle:
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
	step_end

GloriaTown_Signscript_Player_House_Text_0:
	.string "{PLAYER}{KUN}'s House$"

GloriaTown_Signscript_Rival_House_Text_0:
	.string "Professor's House$"

GloriaTown_Signscript_Prof_Lab_Text_0:
	.string "Professor's Lab$"

GloriaTown_Signscript_Gym_Text_0:
	.string "Test Town Pokemon Gym\nLeader: Zackary\p“The wise man of iron!”$"

GloriaTown_PersonScript_NPC1_Text_0:
	.string "This town is so beautiful and calming.\n"
	.string "I'm visiting from out of town and this\l"
	.string "place is great. I might want to move\l"
	.string "here!$"

GloriaTown_TriggerScript_BlockPath_Text_0:
	.string "Mother said to visit the Professor and\nyour Rival before heading out!$"

GloriaTown_TriggerScript_GotoRival_Text_0:
	.string "You should go visit your rival first!$"

GloriaTown_TextScript_RivalIntro::
	.string "Placeholder text$"

GloriaTown_TextScript_RivalOutro::
	.string "Placeholder text$"

GloriaTown_TextScript_RivalBattleAftermath::
	.string "Placeholder text$"
