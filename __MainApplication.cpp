// Rasesh Ramanuj

//--------------------------------
//include standard libraries
#include <iostream>		//for output and input
#include <string>		//for string
#include <fstream>
#include <sstream>		//for streamstring
using namespace std;

//include class modules
#include "Game.h"

//using OO approach
//---------------------------------
UserInterface ui;

int main()
{
	Game game;
	fstream fin;
	

	game.set_up(&ui);
	game.run();
	
	ui.hold_window();
	return 0;

}