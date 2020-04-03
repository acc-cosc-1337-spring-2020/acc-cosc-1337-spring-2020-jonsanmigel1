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
	string another_game;

	do {

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



				} while (value < 1 || value>9);

				if (value >= 1 || value <= 9)
				{
					thegame.mark_board(value);

					thegame.display_board();

					PlayerXorO = "O";
					if (thegame.game_over() == true)
					{
						std::cout << thegame.get_winner();
						std::cout << "Would you like to play another game?Press y to continue: " << std::endl;
						cin >> another_game;
						break;
					}

				}

			}
			else if (PlayerXorO == "O")
			{
				do
				{
					std::cout << "PLayer " << PlayerXorO << "Please enter 1-9" << std::endl;
					cin >> value;


				} while (value < 1 || value>9);
				if (value >= 1 || value <= 9)
				{
					thegame.mark_board(value);

					thegame.display_board();


					PlayerXorO = "X";
					if (thegame.game_over() == true)
					{
						std::cout << "The winner is";
						std::cout << thegame.get_winner();
						std::cout << "Would you like to play another game?Press y to continue: " << std::endl;
						cin >> another_game;
						break;
					}

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
	} while (another_game == "Y" || another_game == "y");
	return 0;
}