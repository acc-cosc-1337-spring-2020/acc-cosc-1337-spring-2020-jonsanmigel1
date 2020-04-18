#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h" 
#include <iostream>
using std::cout;
using std::cin;
int main()
{
	
	string PlayerXorO;
	string choice;
	string another_game;
	int value = 0;

	TicTacToeManager manager;
	bool error;
	int version_game;
	int game_choice;
	std::vector <std::reference_wrapper<TicTacToe>> games;
	do
	{
		//TicTacToe thegame;
		//TicTacToeManager manager;
		
		std::cout << "Please enter 3 or 4" << "\n";
		cin >> game_choice;

		if (game_choice == 3)
		{
			TicTacToe3 thegame;
			games.push_back(thegame);

			std::cout << "Please enter X or O" << std::endl;
			cin >> PlayerXorO;

			try
			{
				thegame.start_game(PlayerXorO);
			}
			catch (Error e)
			{
				cout << e.get_message();
				error = true;
			}

			do
			{
				try
				{
					cin >> thegame;
					cout << thegame;
				}
				catch (Error e)
				{
					cout << e.get_message();
				}

			} while (thegame.game_over() == false);
			if (thegame.game_over() == true)
			{
				std::cout << "The Winner is:" << thegame.get_winner();
				manager.save_game(thegame);
				cout << "\n" << manager;
				std::cout << "\n";
				//cout << manager;//displays the board from previous game
				std::cout << "\n GAMEOVER" << std::endl;
				std::cout << "\n Would you like to play another game?Press y to continue: " << std::endl;
				std::cout << "\n Press N to exit and display game stats" << std::endl;
				cin >> another_game;
			}
		}
		if (game_choice == 4)
		{
			TicTacToe4 thegame;
			games.push_back(thegame);

			std::cout << "Please enter X or O" << std::endl;
			cin >> PlayerXorO;

			try
			{
				thegame.start_game(PlayerXorO);
			}
			catch (Error e)
			{
				cout << e.get_message();
				error = true;
			}

			do
			{
				try
				{
					cin >> thegame;
					cout << thegame;
				}
				catch (Error e)
				{
					cout << e.get_message();
				}

			} while (thegame.game_over() == false);
			if (thegame.game_over() == true)
			{
				std::cout << "The Winner is:" << thegame.get_winner();
				manager.save_game(thegame);
				cout << "\n" << manager;
				std::cout << "\n";
				cout << thegame;
				//cout << manager;//displays the board from previous game
				std::cout << "\n GAMEOVER" << std::endl;
				std::cout << "\n Would you like to play another game?Press y to continue: " << std::endl;
				std::cout << "\n Press N to exit and display game stats" << std::endl;
				cin >> another_game;
			}
		}
		
	} while (another_game == "y" || another_game == "Y");
	
	if (another_game == "N"||another_game == "n")
	{
		cout << manager;
		
	}
	return 0;
}
