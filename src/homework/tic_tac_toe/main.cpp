#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
using std::cin;
int main() 
{
	string firstplayer;
	int value;
	int count=0;
	string PlayerXorO;
	string choice;
	string the_current_player;
	

	//Only prompt user once For X or O to start game
	std::cout << "Please Enter X or O:  ";
	cin >> PlayerXorO;

	//Start the game and send PlayerXorO as argument
	TicTacToe thegame;
	thegame.start_game(PlayerXorO);
	

	do
	{

		if (PlayerXorO == "X")
		{
			std::cout << "PLayer " << PlayerXorO << "Please enter 1-9" << std::endl;
			cin >> value;

			
			PlayerXorO = "O";
		}
		else if (PlayerXorO == "O")
		{
			std::cout << "PLayer " << PlayerXorO << "Please enter 1-9" << std::endl;
			cin >> value;
			
			PlayerXorO = "X";

		}

		try
		{
			thegame.mark_board(value);
		}
	


		catch (Error the_error)
		{
			cout << the_error.get_message();
		}




		cout << "WOuld you like to continue? Type Y to continue or N to exit" << "\n";
		cin >> choice;


	} while (choice == "Y");

	if (choice == "N")
	{
		exit(8);
	}

	return 0;
}