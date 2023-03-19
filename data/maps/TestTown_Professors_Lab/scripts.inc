TestTown_Professors_Lab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_Professors_Lab_DefaultScript_Ball
	.byte 0


TestTown_Professors_Lab_DefaultScript_Ball::
	setvar VAR_STARTER_REGION, 0
	return


TestTown_Professors_Lab_TriggerScript_StarterChoose::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Professors_Lab_MovementScript_MeetProf
	waitmovement 0
	applymovement 4, TestTown_Professors_Lab_MovementScript_ProfMove
	waitmovement 0
	msgbox TestTown_Professors_Lab_TextScript_BeginAdventure
	waitmessage
	closemessage
	applymovement 4, TestTown_Professors_Lab_MovementScript_ProfMove2
	waitmovement 0
	setvar VAR_TEST_TOWN_STATE, 1
	release
	return


TestTown_Professors_Lab_TriggerScript_StarterChoose2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Professors_Lab_MovementScript_MeetProf2
	waitmovement 0
	goto TestTown_Professors_Lab_TriggerScript_StarterChoose
	return


TestTown_Professors_Lab_MovementScript_MeetProf:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

TestTown_Professors_Lab_MovementScript_MeetProf2:
	walk_left
	step_end

TestTown_Professors_Lab_MovementScript_ProfMove:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

TestTown_Professors_Lab_MovementScript_ProfMove2:
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

TestTown_Professors_Lab_TriggerScript_StopLeaving::
	lockall
	msgbox TestTown_Professors_Lab_TriggerScript_StopLeaving_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Professors_Lab_MovementScript_DoNotLeave
	waitmovement 0
	releaseall
	return


TestTown_Professors_Lab_MovementScript_DoNotLeave:
	walk_up
	step_end

TestTown_Professors_Lab_PersonScript_Aide1::
	lock
	faceplayer
	msgbox TestTown_Professors_Lab_PersonScript_Aide1_Text_0
	release
	end


TestTown_Professors_Lab_PersonScript_Aide2::
	lock
	faceplayer
	msgbox TestTown_Professors_Lab_PersonScript_Aide2_Text_0
	release
	end


TestTown_Professors_Lab_PersonScript_Professor::
	goto_if_unset FLAG_SYS_POKEMON_GET, TestTown_Professors_Lab_PersonScript_Professor_2
	msgbox TestTown_Professors_Lab_PersonScript_Professor_Text_2, MSGBOX_NPC
TestTown_Professors_Lab_PersonScript_Professor_1:
	end

TestTown_Professors_Lab_PersonScript_Professor_2:
	lock
	faceplayer
	message TestTown_Professors_Lab_PersonScript_Professor_Text_0
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq TestTown_Professors_Lab_PersonScript_Professor_6
	compare VAR_RESULT, 1
	goto_if_eq TestTown_Professors_Lab_PersonScript_Professor_7
	compare VAR_RESULT, 2
	goto_if_eq TestTown_Professors_Lab_PersonScript_Professor_8
TestTown_Professors_Lab_PersonScript_Professor_5:
	msgbox TestTown_Professors_Lab_PersonScript_Professor_Text_1
	waitmessage
	release
	goto TestTown_Professors_Lab_PersonScript_Professor_1

TestTown_Professors_Lab_PersonScript_Professor_6:
	call TestTown_Professors_Lab_FadeScript_StarterFade
	setvar VAR_STARTER_REGION, 2
	goto TestTown_Professors_Lab_PersonScript_Professor_5

TestTown_Professors_Lab_PersonScript_Professor_7:
	call TestTown_Professors_Lab_FadeScript_StarterFade
	setvar VAR_STARTER_REGION, 1
	goto TestTown_Professors_Lab_PersonScript_Professor_5

TestTown_Professors_Lab_PersonScript_Professor_8:
	call TestTown_Professors_Lab_FadeScript_StarterFade
	setvar VAR_STARTER_REGION, 0
	goto TestTown_Professors_Lab_PersonScript_Professor_5


TestTown_Professors_Lab_FadeScript_StarterFade::
	fadescreen FADE_TO_BLACK
	delay 20
	fadescreen FADE_FROM_BLACK
	return


TestTown_Professors_Lab_ObjectScript_PokeballOne::
	lockall
	setvar VAR_TEMP_0, 1
	goto_if_unset FLAG_SYS_POKEMON_GET, TestTown_Professors_Lab_ObjectScript_PokeballOne_2
	msgbox TestTown_Professors_Lab_ObjectScript_PokeballOne_Text_0
TestTown_Professors_Lab_ObjectScript_PokeballOne_1:
	waitmessage
	releaseall
	end

TestTown_Professors_Lab_ObjectScript_PokeballOne_2:
	compare VAR_STARTER_REGION, 0
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballOne_5
	compare VAR_STARTER_REGION, 1
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballOne_6
	compare VAR_STARTER_REGION, 2
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballOne_7
	goto TestTown_Professors_Lab_ObjectScript_PokeballOne_1

TestTown_Professors_Lab_ObjectScript_PokeballOne_5:
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballOne_1

TestTown_Professors_Lab_ObjectScript_PokeballOne_6:
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballOne_1

TestTown_Professors_Lab_ObjectScript_PokeballOne_7:
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballOne_1


TestTown_Professors_Lab_ObjectScript_PokeballTwo::
	lockall
	setvar VAR_TEMP_0, 2
	goto_if_unset FLAG_SYS_POKEMON_GET, TestTown_Professors_Lab_ObjectScript_PokeballTwo_2
	msgbox TestTown_Professors_Lab_ObjectScript_PokeballOne_Text_0
TestTown_Professors_Lab_ObjectScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

TestTown_Professors_Lab_ObjectScript_PokeballTwo_2:
	compare VAR_STARTER_REGION, 0
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballTwo_5
	compare VAR_STARTER_REGION, 1
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballTwo_6
	compare VAR_STARTER_REGION, 2
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballTwo_7
	goto TestTown_Professors_Lab_ObjectScript_PokeballTwo_1

TestTown_Professors_Lab_ObjectScript_PokeballTwo_5:
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballTwo_1

TestTown_Professors_Lab_ObjectScript_PokeballTwo_6:
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballTwo_1

TestTown_Professors_Lab_ObjectScript_PokeballTwo_7:
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballTwo_1


TestTown_Professors_Lab_ObjectScript_PokeballThree::
	lockall
	setvar VAR_TEMP_0, 3
	goto_if_unset FLAG_SYS_POKEMON_GET, TestTown_Professors_Lab_ObjectScript_PokeballThree_2
	msgbox TestTown_Professors_Lab_ObjectScript_PokeballOne_Text_0
TestTown_Professors_Lab_ObjectScript_PokeballThree_1:
	waitmessage
	releaseall
	end

TestTown_Professors_Lab_ObjectScript_PokeballThree_2:
	compare VAR_STARTER_REGION, 0
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballThree_5
	compare VAR_STARTER_REGION, 1
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballThree_6
	compare VAR_STARTER_REGION, 2
	goto_if_eq TestTown_Professors_Lab_ObjectScript_PokeballThree_7
	goto TestTown_Professors_Lab_ObjectScript_PokeballThree_1

TestTown_Professors_Lab_ObjectScript_PokeballThree_5:
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballThree_1

TestTown_Professors_Lab_ObjectScript_PokeballThree_6:
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballThree_1

TestTown_Professors_Lab_ObjectScript_PokeballThree_7:
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
	call TestTown_Professors_Lab_PokemonScript_GiveStarter
	goto TestTown_Professors_Lab_ObjectScript_PokeballThree_1


TestTown_Professors_Lab_PokemonScript_GiveStarter::
	showmonpic VAR_STARTER_CHOICE, 10, 3
	msgbox TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Professors_Lab_PokemonScript_GiveStarter_1
	hidemonpic
	msgbox TestTown_Professors_Lab_TextScript_NotChosen
	return

TestTown_Professors_Lab_PokemonScript_GiveStarter_1:
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_TEST_TOWN_STATE, 2
	givemon VAR_STARTER_CHOICE, 5, ITEM_ORAN_BERRY
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestTown_Professors_Lab_PokemonScript_GiveStarter_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestTown_Professors_Lab_PokemonScript_GiveStarter_5
	hidemonpic
	msgbox TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_3
	return

TestTown_Professors_Lab_PokemonScript_GiveStarter_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_1
	removeobject VAR_TEMP_0
	call TestTown_Professors_Lab_FlagScript_SetBallFlag
	call TestTown_Professors_Lab_SequenceScript_NicknamePartyMon
	return

TestTown_Professors_Lab_PokemonScript_GiveStarter_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_1
	removeobject VAR_TEMP_0
	call TestTown_Professors_Lab_FlagScript_SetBallFlag
	call TestTown_Professors_Lab_SequenceScript_NicknameBoxMon
	msgbox TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_2
	return


TestTown_Professors_Lab_FlagScript_SetBallFlag::
	compare VAR_TEMP_0, 1
	goto_if_eq TestTown_Professors_Lab_FlagScript_SetBallFlag_2
	compare VAR_TEMP_0, 2
	goto_if_eq TestTown_Professors_Lab_FlagScript_SetBallFlag_5
	compare VAR_TEMP_0, 3
	goto_if_eq TestTown_Professors_Lab_FlagScript_SetBallFlag_7
	return

TestTown_Professors_Lab_FlagScript_SetBallFlag_2:
	setflag FLAG_STARTER_BALL_ONE
	return

TestTown_Professors_Lab_FlagScript_SetBallFlag_5:
	setflag FLAG_STARTER_BALL_TWO
	return

TestTown_Professors_Lab_FlagScript_SetBallFlag_7:
	setflag FLAG_STARTER_BALL_THREE
	return


TestTown_Professors_Lab_SequenceScript_HealMachine::
	lockall
	goto_if_unset FLAG_SYS_POKEMON_GET, TestTown_Professors_Lab_SequenceScript_HealMachine_2
	msgbox TestTown_Professors_Lab_SequenceScript_HealMachine_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Professors_Lab_SequenceScript_HealMachine_5
	msgbox TestTown_Professors_Lab_SequenceScript_HealMachine_Text_3
TestTown_Professors_Lab_SequenceScript_HealMachine_1:
	releaseall
	end

TestTown_Professors_Lab_SequenceScript_HealMachine_2:
	msgbox TestTown_Professors_Lab_SequenceScript_HealMachine_Text_0
	goto TestTown_Professors_Lab_SequenceScript_HealMachine_1

TestTown_Professors_Lab_SequenceScript_HealMachine_5:
	special HealPlayerParty
	fadescreen FADE_TO_BLACK
	delay 30
	fadescreen FADE_FROM_BLACK
	msgbox TestTown_Professors_Lab_SequenceScript_HealMachine_Text_2
	goto TestTown_Professors_Lab_SequenceScript_HealMachine_1


TestTown_Professors_Lab_SequenceScript_NicknamePartyMon::
	msgbox TestTown_Professors_Lab_SequenceScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Professors_Lab_SequenceScript_NicknamePartyMon_1
	return

TestTown_Professors_Lab_SequenceScript_NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


TestTown_Professors_Lab_SequenceScript_NicknameBoxMon::
	msgbox TestTown_Professors_Lab_SequenceScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Professors_Lab_SequenceScript_NicknameBoxMon_2
TestTown_Professors_Lab_SequenceScript_NicknameBoxMon_1:
	call Common_EventScript_TransferredToPC
	return

TestTown_Professors_Lab_SequenceScript_NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto TestTown_Professors_Lab_SequenceScript_NicknameBoxMon_1


TestTown_Professors_Lab_SignScript_HealMachine::
	lock
	msgbox TestTown_Professors_Lab_SignScript_HealMachine_Text_0
	release
	end


TestTown_Professors_Lab_TriggerScript_StopLeaving_Text_0:
	.string "You need to choose a Pokemon.$"

TestTown_Professors_Lab_PersonScript_Aide1_Text_0:
	.string "The Professor has assigned me\nthe task of researching ancient\lhistory. There are so many wonders and\lmuch to learn!$"

TestTown_Professors_Lab_PersonScript_Aide2_Text_0:
	.string "I'm so lucky to have been hired\nby the Professsor to help him in\lhis research!$"

TestTown_Professors_Lab_PersonScript_Professor_Text_0:
	.string "Would you like to see more?$"

TestTown_Professors_Lab_PersonScript_Professor_Text_1:
	.string "Choose wisely...$"

TestTown_Professors_Lab_PersonScript_Professor_Text_2:
	.string "Take care of your Pokemon.$"

TestTown_Professors_Lab_ObjectScript_PokeballOne_Text_0:
	.string "Don't take another!$"

TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_0:
	.string "Do you want to choose {STR_VAR_1}?$"

TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_1:
	.string "You have received {STR_VAR_1}.$"

TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_2:
	.string "Transferred {STR_VAR_1} to PC.$"

TestTown_Professors_Lab_PokemonScript_GiveStarter_Text_3:
	.string "No more room for Pokemon.$"

TestTown_Professors_Lab_SequenceScript_HealMachine_Text_0:
	.string "Please come back when you have\na Pokemon to heal.$"

TestTown_Professors_Lab_SequenceScript_HealMachine_Text_1:
	.string "Do you want to heal your Pokemon?$"

TestTown_Professors_Lab_SequenceScript_HealMachine_Text_2:
	.string "Your Pokemon are now healthy!$"

TestTown_Professors_Lab_SequenceScript_HealMachine_Text_3:
	.string "Come back when you need healing.$"

TestTown_Professors_Lab_SequenceScript_NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

TestTown_Professors_Lab_SignScript_HealMachine_Text_0:
	.string "This is a complex machine. It might be\nused for healing?$"

TestTown_Professors_Lab_TextScript_BeginAdventure::
	.string "Welcome to my lab!\p"
	.string "Thanks for stopping by and\n"
	.string "participating in our annual Pokemon\l"
	.string "giveaway for new Trainers.\p"
	.string "If you want more options\n"
	.string "come let me know!\n$"

TestTown_Professors_Lab_TextScript_NotChosen::
	.string "You did not choose the Pokemon$"