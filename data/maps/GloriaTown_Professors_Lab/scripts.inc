GloriaTown_Professors_Lab_MapScripts::
	.byte 0


GloriaTown_Professors_Lab_TriggerScript_StarterChoose::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Professors_Lab_MovementScript_MeetProf
	waitmovement 0
	applymovement 4, GloriaTown_Professors_Lab_MovementScript_ProfMove
	waitmovement 0
	msgbox GloriaTown_Professors_Lab_TextScript_BeginAdventure
	waitmessage
	closemessage
	applymovement 4, GloriaTown_Professors_Lab_MovementScript_ProfMove2
	waitmovement 0
	setvar VAR_GLORIA_TOWN_STATE, 1
	release
	return


GloriaTown_Professors_Lab_TriggerScript_StarterChoose2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Professors_Lab_MovementScript_MeetProf2
	waitmovement 0
	goto GloriaTown_Professors_Lab_TriggerScript_StarterChoose
	return


GloriaTown_Professors_Lab_MovementScript_MeetProf:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

GloriaTown_Professors_Lab_MovementScript_MeetProf2:
	walk_left
	step_end

GloriaTown_Professors_Lab_MovementScript_ProfMove:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

GloriaTown_Professors_Lab_MovementScript_ProfMove2:
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

GloriaTown_Professors_Lab_TriggerScript_StopLeaving::
	lockall
	msgbox GloriaTown_Professors_Lab_TriggerScript_StopLeaving_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Professors_Lab_MovementScript_DoNotLeave
	waitmovement 0
	releaseall
	return


GloriaTown_Professors_Lab_TriggerScript_StopBeforeTable1::
	lockall
	msgbox GloriaTown_Professors_Lab_TriggerScript_StopLeaving_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Professors_Lab_MovementScript_StopBeforeTable1
	waitmovement 0
	releaseall
	return


GloriaTown_Professors_Lab_TriggerScript_StopBeforeTable2::
	lockall
	msgbox GloriaTown_Professors_Lab_TriggerScript_StopLeaving_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Professors_Lab_MovementScript_StopBeforeTable2
	waitmovement 0
	releaseall
	return


GloriaTown_Professors_Lab_MovementScript_DoNotLeave:
	walk_up
	step_end

GloriaTown_Professors_Lab_MovementScript_StopBeforeTable1:
	walk_right
	step_end

GloriaTown_Professors_Lab_MovementScript_StopBeforeTable2:
	walk_down
	step_end

GloriaTown_Professors_Lab_PersonScript_Aide1::
	lock
	faceplayer
	msgbox GloriaTown_Professors_Lab_PersonScript_Aide1_Text_0
	release
	end


GloriaTown_Professors_Lab_PersonScript_Aide2::
	lock
	faceplayer
	msgbox GloriaTown_Professors_Lab_PersonScript_Aide2_Text_0
	release
	end


GloriaTown_Professors_Lab_PersonScript_Professor::
	goto_if_unset FLAG_SYS_POKEMON_GET, GloriaTown_Professors_Lab_PersonScript_Professor_2
	lock
	faceplayer
	msgbox GloriaTown_Professors_Lab_PersonScript_Professor_Text_1
	release
GloriaTown_Professors_Lab_PersonScript_Professor_1:
	end

GloriaTown_Professors_Lab_PersonScript_Professor_2:
	lock
	faceplayer
	msgbox GloriaTown_Professors_Lab_PersonScript_Professor_Text_0
	release
	goto GloriaTown_Professors_Lab_PersonScript_Professor_1


GloriaTown_Professors_Lab_ObjectScript_PokeballOne::
	lockall
	setvar VAR_TEMP_0, 1
	goto_if_unset FLAG_SYS_POKEMON_GET, GloriaTown_Professors_Lab_ObjectScript_PokeballOne_2
	msgbox GloriaTown_Professors_Lab_ObjectScript_PokeballOne_Text_0
GloriaTown_Professors_Lab_ObjectScript_PokeballOne_1:
	waitmessage
	releaseall
	end

GloriaTown_Professors_Lab_ObjectScript_PokeballOne_2:
	bufferspeciesname STR_VAR_1, SPECIES_STARLY
	setvar VAR_STARTER_CHOICE, SPECIES_STARLY
	call GloriaTown_Professors_Lab_PokemonScript_GiveStarter
	goto GloriaTown_Professors_Lab_ObjectScript_PokeballOne_1


GloriaTown_Professors_Lab_ObjectScript_PokeballTwo::
	lockall
	setvar VAR_TEMP_0, 2
	goto_if_unset FLAG_SYS_POKEMON_GET, GloriaTown_Professors_Lab_ObjectScript_PokeballTwo_2
	msgbox GloriaTown_Professors_Lab_ObjectScript_PokeballOne_Text_0
GloriaTown_Professors_Lab_ObjectScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

GloriaTown_Professors_Lab_ObjectScript_PokeballTwo_2:
	bufferspeciesname STR_VAR_1, SPECIES_ROLYCOLY
	setvar VAR_STARTER_CHOICE, SPECIES_ROLYCOLY
	call GloriaTown_Professors_Lab_PokemonScript_GiveStarter
	goto GloriaTown_Professors_Lab_ObjectScript_PokeballTwo_1


GloriaTown_Professors_Lab_ObjectScript_PokeballThree::
	lockall
	setvar VAR_TEMP_0, 3
	goto_if_unset FLAG_SYS_POKEMON_GET, GloriaTown_Professors_Lab_ObjectScript_PokeballThree_2
	msgbox GloriaTown_Professors_Lab_ObjectScript_PokeballOne_Text_0
GloriaTown_Professors_Lab_ObjectScript_PokeballThree_1:
	waitmessage
	releaseall
	end

GloriaTown_Professors_Lab_ObjectScript_PokeballThree_2:
	bufferspeciesname STR_VAR_1, SPECIES_TIMBURR
	setvar VAR_STARTER_CHOICE, SPECIES_TIMBURR
	call GloriaTown_Professors_Lab_PokemonScript_GiveStarter
	goto GloriaTown_Professors_Lab_ObjectScript_PokeballThree_1


GloriaTown_Professors_Lab_PokemonScript_GiveStarter::
	showmonpic VAR_STARTER_CHOICE, 10, 3
	msgbox GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GloriaTown_Professors_Lab_PokemonScript_GiveStarter_1
	hidemonpic
	msgbox GloriaTown_Professors_Lab_TextScript_NotChosen
	return

GloriaTown_Professors_Lab_PokemonScript_GiveStarter_1:
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_GLORIA_TOWN_STATE, 2
	givemon VAR_STARTER_CHOICE, 5, ITEM_ORAN_BERRY
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GloriaTown_Professors_Lab_PokemonScript_GiveStarter_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GloriaTown_Professors_Lab_PokemonScript_GiveStarter_6
	hidemonpic
	msgbox GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_3
GloriaTown_Professors_Lab_PokemonScript_GiveStarter_4:
	closemessage
	call GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence
	return

GloriaTown_Professors_Lab_PokemonScript_GiveStarter_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_1
	removeobject VAR_TEMP_0
	call GloriaTown_Professors_Lab_FlagScript_SetBallFlag
	call GloriaTown_Professors_Lab_SequenceScript_NicknamePartyMon
	goto GloriaTown_Professors_Lab_PokemonScript_GiveStarter_4

GloriaTown_Professors_Lab_PokemonScript_GiveStarter_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_1
	removeobject VAR_TEMP_0
	call GloriaTown_Professors_Lab_FlagScript_SetBallFlag
	call GloriaTown_Professors_Lab_SequenceScript_NicknameBoxMon
	msgbox GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_2
	goto GloriaTown_Professors_Lab_PokemonScript_GiveStarter_4


GloriaTown_Professors_Lab_FlagScript_SetBallFlag::
	compare VAR_TEMP_0, 1
	goto_if_eq GloriaTown_Professors_Lab_FlagScript_SetBallFlag_2
	compare VAR_TEMP_0, 2
	goto_if_eq GloriaTown_Professors_Lab_FlagScript_SetBallFlag_5
	compare VAR_TEMP_0, 3
	goto_if_eq GloriaTown_Professors_Lab_FlagScript_SetBallFlag_7
	return

GloriaTown_Professors_Lab_FlagScript_SetBallFlag_2:
	setflag FLAG_STARTER_BALL_ONE
	return

GloriaTown_Professors_Lab_FlagScript_SetBallFlag_5:
	setflag FLAG_STARTER_BALL_TWO
	return

GloriaTown_Professors_Lab_FlagScript_SetBallFlag_7:
	setflag FLAG_STARTER_BALL_THREE
	return


GloriaTown_Professors_Lab_SequenceScript_HealMachine::
	lockall
	goto_if_unset FLAG_SYS_POKEMON_GET, GloriaTown_Professors_Lab_SequenceScript_HealMachine_2
	msgbox GloriaTown_Professors_Lab_SequenceScript_HealMachine_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GloriaTown_Professors_Lab_SequenceScript_HealMachine_5
	msgbox GloriaTown_Professors_Lab_SequenceScript_HealMachine_Text_3
GloriaTown_Professors_Lab_SequenceScript_HealMachine_1:
	releaseall
	end

GloriaTown_Professors_Lab_SequenceScript_HealMachine_2:
	msgbox GloriaTown_Professors_Lab_SequenceScript_HealMachine_Text_0
	goto GloriaTown_Professors_Lab_SequenceScript_HealMachine_1

GloriaTown_Professors_Lab_SequenceScript_HealMachine_5:
	special HealPlayerParty
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	delay 120
	fadescreen FADE_FROM_BLACK
	msgbox GloriaTown_Professors_Lab_SequenceScript_HealMachine_Text_2
	goto GloriaTown_Professors_Lab_SequenceScript_HealMachine_1


GloriaTown_Professors_Lab_SequenceScript_NicknamePartyMon::
	msgbox GloriaTown_Professors_Lab_SequenceScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq GloriaTown_Professors_Lab_SequenceScript_NicknamePartyMon_1
	return

GloriaTown_Professors_Lab_SequenceScript_NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


GloriaTown_Professors_Lab_SequenceScript_NicknameBoxMon::
	msgbox GloriaTown_Professors_Lab_SequenceScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq GloriaTown_Professors_Lab_SequenceScript_NicknameBoxMon_2
GloriaTown_Professors_Lab_SequenceScript_NicknameBoxMon_1:
	call Common_EventScript_TransferredToPC
	return

GloriaTown_Professors_Lab_SequenceScript_NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto GloriaTown_Professors_Lab_SequenceScript_NicknameBoxMon_1


GloriaTown_Professors_Lab_SignScript_HealMachine::
	lock
	msgbox GloriaTown_Professors_Lab_SignScript_HealMachine_Text_0
	release
	end


GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence::
	lock
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, GloriaTown_Professors_Lab_MovementScript_TurnToProf
	compare VAR_TEMP_0, 1
	goto_if_eq GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_2
GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_1:
	compare VAR_TEMP_0, 2
	goto_if_eq GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_5
GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_4:
	compare VAR_TEMP_0, 3
	goto_if_eq GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_8
GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_7:
	waitmovement 0
	delay 20
	call GloriaTown_Professors_Lab_SequenceScript_GivePokedex
	release
	return

GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_2:
	applymovement 4, GloriaTown_Professors_Lab_MovementScript_MoveBallOne
	goto GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_1

GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_5:
	applymovement 4, GloriaTown_Professors_Lab_MovementScript_MoveBallTwo
	goto GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_4

GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_8:
	applymovement 4, GloriaTown_Professors_Lab_MovementScript_MoveBallThree
	goto GloriaTown_Professors_Lab_SequenceScript_InitiatePokedexSequence_7


GloriaTown_Professors_Lab_SequenceScript_GivePokedex::
	lock
	msgbox GloriaTown_Professors_Lab_TextScript_TakePokedex
	playfanfare MUS_OBTAIN_ITEM
	message GloriaTown_Professors_Lab_SequenceScript_GivePokedex_Text_0
	waitfanfare
	closemessage
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_ADVENTURE_STARTED
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	setvar VAR_PROFESSOR_STARTER_STATE, 1
	setvar VAR_RIVAL_STATE, 2
	msgbox GloriaTown_Professors_Lab_TextScript_ExplainPokedex
	msgbox GloriaTown_Professors_Lab_TextScript_ExplainPokedexUpgrade
	call GloriaTown_Professors_Lab_SequenceScript_UpgradeNationalDex
	msgbox GloriaTown_Professors_Lab_SequenceScript_GivePokedex_Text_1
	giveitem ITEM_POKE_BALL, 5
	msgbox GloriaTown_Professors_Lab_SequenceScript_GivePokedex_Text_2
	waitmessage
	release
	end


GloriaTown_Professors_Lab_SequenceScript_UpgradeNationalDex::
	lock
	playfanfare MUS_OBTAIN_ITEM
	message GloriaTown_Professors_Lab_TextScript_PokedexUpgradedToNational
	waitmessage
	waitfanfare
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	closemessage
	release
	return


GloriaTown_Professors_Lab_MovementScript_MoveBallOne:
	walk_left
	walk_left
	step_end

GloriaTown_Professors_Lab_MovementScript_MoveBallTwo:
	walk_left
	step_end

GloriaTown_Professors_Lab_MovementScript_MoveBallThree:
	face_left
	step_end

GloriaTown_Professors_Lab_MovementScript_TurnToProf:
	face_right
	step_end

GloriaTown_Professors_Lab_TriggerScript_StopLeaving_Text_0:
	.string "You need to choose a Pokemon.$"

GloriaTown_Professors_Lab_PersonScript_Aide1_Text_0:
	.string "The Professor has assigned me the task\n"
	.string "of researching ancient history. There\l"
	.string "are so many wonders and much to learn!$"

GloriaTown_Professors_Lab_PersonScript_Aide2_Text_0:
	.string "I'm so lucky to have been hired by the\n"
	.string "Professsor to help him in his research!$"

GloriaTown_Professors_Lab_PersonScript_Professor_Text_0:
	.string "Make sure to choose carefully since you\n"
	.string "have one chance at this. Make your\l"
	.string "choice count!$"

GloriaTown_Professors_Lab_PersonScript_Professor_Text_1:
	.string "It makes me smile to see trainers\n"
	.string "receive their first Pokemon and go out\l"
	.string "to explore the world. Your always\l"
	.string "welcome to discuss anything regarding\l"
	.string "Pokemon or the region itself.$"

GloriaTown_Professors_Lab_ObjectScript_PokeballOne_Text_0:
	.string "Don't take another!$"

GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_0:
	.string "Do you want to choose {STR_VAR_1}?$"

GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_1:
	.string "You have received {STR_VAR_1}.$"

GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_2:
	.string "Transferred {STR_VAR_1} to PC.$"

GloriaTown_Professors_Lab_PokemonScript_GiveStarter_Text_3:
	.string "No more room for Pokemon.$"

GloriaTown_Professors_Lab_SequenceScript_HealMachine_Text_0:
	.string "Please come back when you have\na Pokemon to heal.$"

GloriaTown_Professors_Lab_SequenceScript_HealMachine_Text_1:
	.string "Do you want to heal your Pokemon?$"

GloriaTown_Professors_Lab_SequenceScript_HealMachine_Text_2:
	.string "Your Pokemon are now healthy!$"

GloriaTown_Professors_Lab_SequenceScript_HealMachine_Text_3:
	.string "Come back when you need healing.$"

GloriaTown_Professors_Lab_SequenceScript_NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

GloriaTown_Professors_Lab_SignScript_HealMachine_Text_0:
	.string "This is a complex machine. It might be\nused for healing?$"

GloriaTown_Professors_Lab_SequenceScript_GivePokedex_Text_0:
	.string "{PLAYER}{KUN} received the Pokedex!$"

GloriaTown_Professors_Lab_SequenceScript_GivePokedex_Text_1:
	.string "Also, take these with you.$"

GloriaTown_Professors_Lab_SequenceScript_GivePokedex_Text_2:
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can\l"
	.string "collect research for the Pokedex and\l"
	.string "create your ideal team for your\l"
	.string "journey.$"

GloriaTown_Professors_Lab_TextScript_BeginAdventure::
	.string "Welcome {PLAYER}{KUN}, to my lab! I'm glad\n"
	.string "you could come as I had invited you a\l"
	.string "bit abruptly. I hope you have an idea\l"
	.string "of what you want for a starter because\l"
	.string "I'm ready whenever you are! Just pick\l"
	.string "one of the three Pokeballs on the\l"
	.string "table by my desktop computer.$"

GloriaTown_Professors_Lab_TextScript_NotChosen::
	.string "You did not choose your starter!$"

GloriaTown_Professors_Lab_TextScript_ExplainPokedex::
	.string "Professor: The Pokedex is a high-tech\n"
	.string "tool that automatically makes a record\l"
	.string "of any Pokemon you meet or catch.\p$"

GloriaTown_Professors_Lab_TextScript_PokedexUpgradedToNational::
	.string "{PLAYER}'s Pokedex was upgraded\n"
	.string "to the National Mode!$"

GloriaTown_Professors_Lab_TextScript_ExplainPokedexUpgrade::
	.string "Let me upgrade it as well...$"

GloriaTown_Professors_Lab_TextScript_TakePokedex::
	.string "Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this Pokedex.$"
