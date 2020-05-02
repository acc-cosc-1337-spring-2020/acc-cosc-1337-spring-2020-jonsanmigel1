#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h" 
#include "tic_tac_toe_data.h"
#include <iostream>
using std::unique_ptr;
using std::make_unique;
using std::cout;
using std::cin;
int main()
{

	string PlayerXorO;
	string choice;
	string another_game;
	int value = 0;

	//unique_ptr<TicTacToeManager> manager= make_unique<TicTacToeManager>();
	TicTacToeData data;
	unique_ptr<TicTacToeManager> manager = make_unique<TicTacToeManager>(data);
	bool error;
	
	int game_choice;
	
	do
	{
		unique_ptr<TicTacToe>thegame;
		
		
		std::cout << "Please enter 3 or 4" << "\n";
		cin >> game_choice;

		if (game_choice == 3)
		{
			thegame = std::make_unique<TicTacToe3>();
		}
		else if (game_choice == 4) 
		{
			thegame = std::make_unique<TicTacToe4>();
		}
			

		std::cout << "Please enter X or O" << std::endl;
		cin >> PlayerXorO;

		try
		{
			thegame->start_game(PlayerXorO);
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
				cin >> *thegame;
				cout << *thegame;
			}
			catch (Error e)
			{
				cout << e.get_message();
			}

		} while (thegame->game_over() == false);
		if (thegame->game_over() == true)
		{
			std::cout << "The Winner is:" << thegame->get_winner();
			manager->save_game(thegame);
			
			std::cout << "\n";
			
			std::cout << "\n GAMEOVER" << std::endl;
			std::cout << "\n Would you like to play another game?Press y to continue: " << std::endl;
			std::cout << "\n Press N to exit and display game stats" << std::endl;
			cin >> another_game;
		}
		

	} while (another_game == "y" || another_game == "Y");

	cout << *manager;

	return 0;
}