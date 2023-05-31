SummertreeThicket_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SummertreeThicket_DefaultScript_DefaultState
	.byte 0


SummertreeThicket_DefaultScript_DefaultState::
	setflag FLAG_SUMMERTREE_CUTSCENE
	return


SummertreeThicket_MusicScript_GruntEncounter::
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	return


SummertreeThicket_TriggerScript_Cutscene1::
	lock
	addobject 9
	addobject 10
	addobject 11
	applymovement OBJ_EVENT_ID_PLAYER, SummertreeThicket_MovementScript_PlayerToCutscene1
	waitmovement 0
	applymovement 9, SummertreeThicket_MovementScript_RivalToPlayerFirst
	waitmovement 0
	call SummertreeThicket_SequenceScript_PreBattleDialogue
	setvar VAR_ROUTE_3_CUTSCENE, 3
	release
	end


SummertreeThicket_TriggerScript_Cutscene2::
	lock
	addobject 9
	addobject 10
	addobject 11
	applymovement OBJ_EVENT_ID_PLAYER, SummertreeThicket_MovementScript_PlayerToCutscene2
	waitmovement 0
	applymovement 9, SummertreeThicket_MovementScript_RivalToPlayerFirst
	waitmovement 0
	call SummertreeThicket_SequenceScript_PreBattleDialogue
	setvar VAR_ROUTE_3_CUTSCENE, 3
	release
	end


SummertreeThicket_SequenceScript_PreBattleDialogue::
	msgbox SummertreeThicket_TextScript_RivalDialogue1
	special HealPlayerParty
	applymovement 9, SummertreeThicket_MovementScript_RivalToGrunt
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SummertreeThicket_MovementScript_PlayerToGrunt
	waitmovement 0
	applymovement 10, SummertreeThicket_MovementScript_GruntToPlayer
	waitmovement 0
	call SummertreeThicket_TrainerScript_FrostGrunt
	applymovement 10, SummertreeThicket_MovementScript_GruntLeaveFirst
	waitmovement 0
	removeobject 10
	playse SE_EXIT
	applymovement 11, SummertreeThicket_MovementScript_GruntLeaveSecond
	waitmovement 0
	removeobject 11
	playse SE_EXIT
	fadedefaultbgm
	call SummertreeThicket_SequenceScript_PostBattleDialogue
	return


SummertreeThicket_SequenceScript_PostBattleDialogue::
	applymovement OBJ_EVENT_ID_PLAYER, SummertreeThicket_MovementScript_PlayerToRival
	waitmovement 0
	applymovement 9, SummertreeThicket_MovementScript_RivalToPlayerFirst
	waitmovement 0
	msgbox SummertreeThicket_SequenceScript_PostBattleDialogue_Text_0
	applymovement 9, SummertreeThicket_MovementScript_RivalLeave
	waitmovement 0
	removeobject 9
	playse SE_EXIT
	return


SummertreeThicket_SignScript_ForestSign::
	lock
	msgbox SummertreeThicket_SignScript_ForestSign_Text_0
	release
	end


SummertreeThicket_ItemScript_BallOne::
	lock
	giveitem ITEM_SUPER_POTION, 1
	removeobject 3
	release
	end


SummertreeThicket_ItemScript_BallTwo::
	lock
	giveitem ITEM_ANTIDOTE, 1
	removeobject 5
	release
	end


SummertreeThicket_ItemScript_BallThree::
	lock
	giveitem ITEM_MIRACLE_SEED, 1
	removeobject 2
	release
	end


SummertreeThicket_TrainerScript_FrostGrunt::
	call SummertreeThicket_MusicScript_GruntEncounter
	msgbox SummertreeThicket_TextScript_GruntIntro
	trainerbattle_no_intro TRAINER_SUMMERTREE_FROST_GRUNT, SummertreeThicket_TextScript_GruntOutro
	msgbox SummertreeThicket_TextScript_AfterBattleGruntDialogue
	closemessage
	return


SummertreeThicket_TrainerScript_Caleb::
	trainerbattle_single TRAINER_CALEB_1, SummertreeThicket_TextScript_CalebIntro, SummertreeThicket_TextScript_CalebOutro
	msgbox SummertreeThicket_TrainerScript_Caleb_Text_0, MSGBOX_AUTOCLOSE
	end


SummertreeThicket_TrainerScript_Lizzy::
	trainerbattle_single TRAINER_LIZZY_1, SummertreeThicket_TextScript_LizzyIntro, SummertreeThicket_TextScript_LizzyOutro
	msgbox SummertreeThicket_TrainerScript_Lizzy_Text_0, MSGBOX_AUTOCLOSE
	end


SummertreeThicket_TrainerScript_Joshua::
	trainerbattle_single TRAINER_JOSHUA_1, SummertreeThicket_TextScript_JoshuaIntro, SummertreeThicket_TextScript_JoshuaOutro
	msgbox SummertreeThicket_TrainerScript_Joshua_Text_0, MSGBOX_AUTOCLOSE
	end


SummertreeThicket_TrainerScript_Tina::
	trainerbattle_single TRAINER_TINA_1, SummertreeThicket_TextScript_TinaIntro, SummertreeThicket_TextScript_TinaOutro
	msgbox SummertreeThicket_TrainerScript_Tina_Text_0, MSGBOX_AUTOCLOSE
	end


SummertreeThicket_MovementScript_PlayerToCutscene1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

SummertreeThicket_MovementScript_PlayerToCutscene2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

SummertreeThicket_MovementScript_RivalToPlayerFirst:
	face_right
	step_end

SummertreeThicket_MovementScript_RivalToGrunt:
	face_left
	step_end

SummertreeThicket_MovementScript_PlayerToGrunt:
	walk_up
	face_left
	step_end

SummertreeThicket_MovementScript_GruntToPlayer:
	face_right
	step_end

SummertreeThicket_MovementScript_GruntLeaveFirst:
	walk_fast_up
	step_end

SummertreeThicket_MovementScript_GruntLeaveSecond:
	walk_fast_up
	walk_fast_up
	step_end

SummertreeThicket_MovementScript_RivalLeave:
	walk_up
	walk_up
	step_end

SummertreeThicket_MovementScript_PlayerToRival:
	walk_down
	face_left
	step_end

SummertreeThicket_SequenceScript_PostBattleDialogue_Text_0:
	.string "Thanks for helping me with that\n"
	.string "{PLAYER}. It sucks that they fled\l"
	.string "before we could get the authorities\l"
	.string "involved. One thing we can do is in the\l"
	.string "next town over, I head there's a police\l"
	.string "station that we could report to. The\l"
	.string "gym leader there is a part of it, so we\l"
	.string "could get some much needed help. Well\l"
	.string "then, see you later.$"

SummertreeThicket_SignScript_ForestSign_Text_0:
	.string "Summertree Wood, a bountiful forest.$"

SummertreeThicket_TrainerScript_Caleb_Text_0:
	.string "If you're looking for a good bug type\n"
	.string "Pokemon, this is the place to look.$"

SummertreeThicket_TrainerScript_Lizzy_Text_0:
	.string "You should picnick here sometime.\n"
	.string "Eating good food in this atmosphere is\l"
	.string "the best.$"

SummertreeThicket_TrainerScript_Joshua_Text_0:
	.string "If you ever decide to go camping,\n"
	.string "consider this forest as your primetime\l"
	.string "destination.$"

SummertreeThicket_TrainerScript_Tina_Text_0:
	.string "Any luck in finding some good Pokemon?$"

SummertreeThicket_TextScript_AfterBattleGruntDialogue::
	.string "Curse you, I lost! Even my partner has\n"
	.string "lost to your friend!? Sigh, we should\l"
	.string "leave quickly before you call the\l"
	.string "authorities and have us arrested.\l"
	.string "Remember that next time, you'll regret\l"
	.string "crossing us!$"

SummertreeThicket_TextScript_GruntIntro::
	.string "That kid shouldn't have gotten into\n"
	.string "trouble with us if he wanted to be\l"
	.string "safe. I see you're making the same\l"
	.string "mistake. I'll show you the folly of your\l"
	.string "decision!$"

SummertreeThicket_TextScript_GruntOutro::
	.string "What the hell are you!?$"

SummertreeThicket_TextScript_RivalDialogue1::
	.string "Red: Great timing {PLAYER}! I found\n"
	.string "these thugs lurking around, acting all\l"
	.string "suspicious. Then, when I asked what\l"
	.string "they were up to, they ambushed me!\l"
	.string "Luckily you pulled up when you did or I\l"
	.string "would be in deep trouble. Please fend\l"
	.string "off the thug above me while I fight the\l"
	.string "other. Let me heal your Pokemon real\l"
	.string "quick while I have this woman occupied.\l"
	.string "Be safe and good luck!$"

SummertreeThicket_TextScript_CalebIntro::
	.string "This forest is a utopia for bug\n"
	.string "Pokemon! Let's have a battle in\l"
	.string "celebration of this amazing place!$"

SummertreeThicket_TextScript_CalebOutro::
	.string "You are one great trainer...$"

SummertreeThicket_TextScript_LizzyIntro::
	.string "I love picnicking in these woods. It's\n"
	.string "so serene here!$"

SummertreeThicket_TextScript_LizzyOutro::
	.string "Be safe exploring the forest. Thanks\n"
	.string "for the battle.$"

SummertreeThicket_TextScript_JoshuaIntro::
	.string "Camping in this forest is really fun. I'm\n"
	.string "in the perfect mood for a battle!$"

SummertreeThicket_TextScript_JoshuaOutro::
	.string "I can't be mad. You did great!$"

SummertreeThicket_TextScript_TinaIntro::
	.string "There's some interesting Pokemon that\n"
	.string "live in this forest. I love places like\l"
	.string "this.$"

SummertreeThicket_TextScript_TinaOutro::
	.string "I wish you luck on finding some good\n"
	.string "Pokemon to raise!$"
