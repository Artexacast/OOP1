////////////////////////////////////////////////////////////////////////
// OOP Tutorial 7: Simple C++ OO program to simulate a simple Dice Game (single file)
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <ctime>	//for time used in random number routines
#include <iostream>	//for srand, cin >> & cout <<
#include <string>	//for string routines
#include "Player.h"
#include "Game.h"

using namespace std;
//with two dices
int main()
{
	Player player;
	Game twoDiceGame(&player);
/*
	Game twoDiceGame;*/
	cout << "\n________________________";
	cout << "\nGame starting...";
	twoDiceGame.displayData();
	cout << "\n________________________";
	twoDiceGame.run();
	cout << "\n________________________";
	cout << "\nGame ended...";
	twoDiceGame.displayData();
	cout << "\n________________________\n";

	system("pause");
	return 0;
}

//Karl woz here