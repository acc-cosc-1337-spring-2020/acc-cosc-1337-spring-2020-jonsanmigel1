#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
using std::cin;
int main()
{
	string firstplayer;
	int value;
	int count = 0;
	string PlayerXorO;
	string choice;
	string the_current_player;

	
	/*Validation Loop, Loop continues if player does
	  not enter an X or O */
	do
	{
		std::cout << "Please Enter X or O: ";
		cin >> PlayerXorO;
		if (PlayerXorO == "X" || PlayerXorO == "O")
		{
			break;
		}
	} while (PlayerXorO != "X" || PlayerXorO != "O");
	

	
	/*Start the game and send PlayerXorO as argument once
	  user enters valid Data*/
	
	
	TicTacToe thegame;
	thegame.start_game(PlayerXorO);

	
	do
	{

		
		
		if (PlayerXorO == "X")
		{
			do
			{
				std::cout << "PLayer: " << PlayerXorO << " Please enter 1-9 " << std::endl;
				cin >> value;
				


				
			}while (value < 1 || value>9);
			if (value >= 1 || value <= 9)
			{
				thegame.mark_board(value);

				thegame.display_board();
				PlayerXorO = "O";
				
			}
			
		}
		else if (PlayerXorO == "O")
		{
			do
			{
				std::cout << "PLayer " << PlayerXorO << "Please enter 1-9" << std::endl;
				cin >> value;

				//PlayerXorO = "X";
			} while (value < 1 || value>9);
			if (value >= 1 || value <= 9)
			{
				thegame.mark_board(value);

				thegame.display_board();
				PlayerXorO = "X";

			}
		}
		/*
		try
		{
			thegame.mark_board(value);
		}
		
		catch (Error the_error)
		{
			cout << the_error.get_message();
		}
		*/



		cout << "WOuld you like to continue? Type Y to continue or N to exit" << "\n";
		cin >> choice;

		
	} while (choice == "Y");

	if (choice == "N")
	{
		exit(8);
	}

	return 0;
}