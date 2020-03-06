#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
using std::cin;
int main() 
{
	string firstplayer;
	int value;
	string PlayerXorO;
	string choice;
	
	//Only prompt user once For X or O to start game
	std::cout << "Please Enter X or O:  ";
	cin >> PlayerXorO;

	//Start the game and send PlayerXorO as argument
	TicTacToe thegame;
	thegame.start_game(PlayerXorO);

	do
	{
		firstplayer = thegame.get_player();
		cout << "Player " << firstplayer << "Enter from 1-9:  "<<"\n";
		cin >> value;
		
		try
		{
			thegame.mark_board(value);
		}



		catch (Error the_error)
		{
			cout << the_error.get_message();
		}

			
			
			
		cout << "WOuld you like to continue? Type Y to continue or N to exit"<<"\n";
		cin >> choice;


	} while (choice=="Y");
	if (choice == "N")
	{
		exit(8);
	}

	return 0;
}