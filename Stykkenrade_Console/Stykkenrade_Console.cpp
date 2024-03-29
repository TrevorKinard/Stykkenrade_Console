// Stykkenrade_Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//scene 1- Beach with shipwreck
//scene 2- City of Befestjell
//scene 3- Endenbore College
//Global variable for scene
int scene = 1;



//Function that takes scene one's input and uses the verb to decide action.
int choices_1(string input)
{
	//Verb to look at your surroundings
	if (input.find("look") != std::string::npos)
	{
		//Look to the North
		if (input.find("north") != std::string::npos)
		{
			cout << "\n> To the North the beach seemingly continues for miles.\n";
			return 0;
		}
		//Look to the East
		else if (input.find("east") != std::string::npos)
		{
			cout << "\n> To the East you see the mountain with pieces\nof the ship scattered across it and a path\ncovered in heavy faura.\n";
			return 0;
		}
		//Look to the West
		else if (input.find("west") != std::string::npos)
		{
			cout << "\n> To the West is the rumbling ocean.\n";
			return 0;
		}
		//Look to the South
		else if (input.find("south") != std::string::npos)
		{
			cout << "\n> To the South you see an inlet going East.\n";
			return 0;
		}
		//Look at the Airship
		else if (input.find("airship") != std::string::npos || input.find("boat") != std::string::npos)
		{
			cout << "\n> The airship looks badly beaten up but if\nyou could find the right person it could be repaired.\n";
			return 0;
		}
		//State there is no target
		else
		{
			cout << "\n> What or where do you want to look?\n";
			return 0;
		}
	}
	//Verb to move to a location seen
	else if (input.find("goto") != std::string::npos || input.find("go") != std::string::npos)
	{
		//Walk up to the North
		if (input.find("north") != std::string::npos)
		{
			cout << "\n> You start to walk North but after a couple\nof hours you decide to go back to the ship.\n";
			return 0;
		}
		//Walk up the path to the east
		else if (input.find("east") != std::string::npos || input.find("path") != std::string::npos)
		{
			cout << "\n> You walk up a dense path for a couple of\nhours.\n";
			//Goto next scene
			scene = 2;
			return 0;
		}
		//Walk to the west to your death
		else if (input.find("west") != std::string::npos || input.find("ocean") != std::string::npos)
		{
			cout << "\n> You decide to giveup on your situation and\nwalk into the ocean never to be seen again.\n";
			//Set scene to 4 as you are dead.
			scene = 4;
			return 0;
		}
		//Walk to the inlet
		else if (input.find("south") != std::string::npos)
		{
			cout << "\n> You head to the inlet but cant find a way\nto head inland from their, so you head back to the ship.\n";
			return 0;
		}
		//State there is no target
		else
		{
			cout << "\n> Where do you want to go?\n";
			return 0;
		}
	}
	//Unknown choice 
	else
	{
		cout << "\n> You can not do that action.\n";
		return 0;
	}
}

//Function that takes scene two's input and uses the verb to decide action.
int choices_2(string input)
{
	//Verb to look at your surroundings
	if (input.find("look") != std::string::npos)
	{
		//Look at the harbor
		if (input.find("docks") != std::string::npos || input.find("dock") != std::string::npos || input.find("harbor") != std::string::npos)
		{
			cout << "\n> You see a dockmaster sitting down waiting for\nsomething to do and a busy harbor.\n";
			return 0;
		}
		//Look at the market
		else if (input.find("market") != std::string::npos)
		{
			cout << "\n> You see a bustling market square and several shops.\nThe most notable to your cause you see are a carpenter\nshop and a cartographer.\n";
			return 0;
		}
		//Look at the carpenter
		else if (input.find("carpenter") != std::string::npos)
		{
			cout << "\n> You see the carpenter working in his shop.\n";
			return 0;
		}
		//Look at the cartographer
		else if (input.find("cartographer") != std::string::npos)
		{
			cout << "\n> You see the cartographer sitting down drawing.\n";
			return 0;
		}
		//Look at the gates
		else if (input.find("gates") != std::string::npos)
		{
			cout << "\n> The gates are currently closed and look heavily guarded.\n";
			return 0;
		}
		//State there is no target
		else
		{
			cout << "\n> What or where do you want to look?\n";
			return 0;
		}
	}
	//Verb to move to a location seen
	else if (input.find("goto") != std::string::npos || input.find("go") != std::string::npos)
	{
		//goto the harbor
		if (input.find("docks") != std::string::npos || input.find("dock") != std::string::npos || input.find("harbor") != std::string::npos)
		{
			cout << "\n> You board a boat heading to Edenbore College.\n";
			//Goto scene 3
			scene = 3;
			return 0;
		}
		//goto the carpenter
		else if (input.find("carpenter") != std::string::npos)
		{
			cout << "\n> You walk up to the carpenter and ask him about repairing your boat.\nHe tells you he ca not work on that type of ship\nbut the college of Edenbore to the South East can.";
			return 0;
		}
		//goto the cartographer
		else if (input.find("cartographer") != std::string::npos)
		{
			cout << "\n> You talk to the cartographer and you find out you are on the\ncontinent of Stykkenrade which is East of your homeland.\n";
			return 0;
		}
		//Look at the gates
		else if (input.find("gates") != std::string::npos)
		{
			cout << "\n> You attempt to go throught the gates but are chased off.\n";
			return 0;
		}
		//State there is no target
		else
		{
			cout << "\n> Where do you want to go?\n";
			return 0;
		}
	}
	//Verb to attack a target
	else if (input.find("attack") != std::string::npos)
	{
		//Attack dockmaster
		if (input.find("dockmaster") != std::string::npos)
		{
			cout << "\n> You attack the dockmaster and are stabbed\nin the back by a passing guard.\n";
			//Skip other scenes as you are dead
			scene = 4;
			return 0;
		}
		//Attack Carpenter
		else if (input.find("carpenter") != std::string::npos)
		{
			cout << "\n> You attack the carpenter and are stabbed\nin the back by a passing guard.\n";
			//Skip other scenes as you are dead
			scene = 4;
			return 0;
		}
		//Attack cartographer
		else if (input.find("cartographer") != std::string::npos)
		{
			cout << "\n> You attack the cartographer and are stabbed\nin the back by a passing guard.\n";
			//Skip other scenes as you are dead
			scene = 4;
			return 0;
		}
		//attack guards
		else if (input.find("guard") != std::string::npos || input.find("guards") != std::string::npos)
		{
			cout << "\n> You attack the guards and are immediately\nslaughterd by the group of them.\n";
			//Skip other scenes as you are dead
			scene = 4;
			return 0;
		}
		//No target
		else
		{
			cout << "\n> Who do you wish to attack?\n";
		}
	}
	//Unknown choice 
	else
	{
		cout << "\n> You can not do that action.\n";
		return 0;
	}
}

//Function that takes scene three's input and uses the verb to decide action.
int choices_3(string input)
{
	//Verb to move to a location seen
	if (input.find("goto") != std::string::npos || input.find("go") != std::string::npos)
	{
		//goto the harbor
		if (input.find("headmaster") != std::string::npos || input.find("archmage"))
		{
			cout << "\n> You talk to the headmaster about repairing your boat.\nHe says he can and asks you the size of the boat.\n";
			//Goto scene 5 for happy ending
			scene = 5;
			return 0;
		}
		//State there is no target
		else
		{
			cout << "\n> Where do you want to go?\n";
			return 0;
		}
	}
	//Verb to attack a target
	else if (input.find("attack") != std::string::npos)
	{
		//Attack students
		if (input.find("students") != std::string::npos)
		{
			cout << "\n> You attack the students and are immediately incinerated by the headmaster.\n";
			//Skip other scenes as you are dead
			scene = 4;
			return 0;
		}
		//No target
		else
		{
			cout << "\n> Who do you wish to attack?\n";
		}
	}
	//Unknown choice 
	else
	{
		cout << "\n> You can not do that action.\n";
		return 0;
	}
}

int GetNumbersFromUser(string input)
{
	//Create arandom amount for the price of repairs
	int gold = rand() % 10000;
	cout << "\nA " << input << " ship will cost you " << gold << " gold.";
	//Return the gold amount
	return gold;
}

int main()
{
	//Each run has different random result
	srand(static_cast<unsigned int>(time(0)));

	//The user input
	string input = "";

	cout << "> Type a verb for an action and a noun for its target.\nIf the action and target is available it will continue the story.\nAll input should be lower case.";
	//Scene 1
	cout << "\n> You wake up on a beach and see your airship wrecked alongside a mountain side.\nYou seem reltively unhurt and your clothes are lightly tattered\nbut you have no idea where you are.\n";
	//Loop until the user makes a choice that leads to the next scene.
	while (scene == 1)
	{
		getline(cin, input);
		choices_1(input);
	}
	//Scene 2
	if (scene == 2)
	{
		cout << "\n> Just as you as sunset roles around you find your way\nout into the side of a large city. Looking around you see a harbor,\na market square and a large gate.\n";
	}
		while (scene == 2)
	{
		getline(cin, input);
		choices_2(input);
	}
	//Scene 3
	if (scene == 3)
	{
		cout << "\n> It takes the boat a few days to get to the College./n Once there you see a towering structure with a\ngiant gem floating over it. Inside you see a library with students\nstudying and a door that reads headmaster.\n";
	}
		while (scene == 3)
	{
		getline(cin, input);
		choices_3(input);
	}
	if (scene == 5)
	{
		getline(cin, input);
		cout << "\n> You pay " << GetNumbersFromUser(input) << " to the Headmaster and get your ship repaired.\n";
		cout << "\n> After a week of waiting for repairs you are held hostage\nby the college as you are in massive debt";
	}
	system("pause");
}

