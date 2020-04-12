#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cout;
using std::cin;
int main()
{
	string firstplayer;
	string PlayerXorO;
	string choice;
	string another_game;
	int value = 0;

	TicTacToe thegame;
	TicTacToeManager manager;


	do
	{
		/*Validation Loop, Loop continues if player does
			not enter an X or O */
		std::cout << "Please enter X or O" << std::endl;
		cin >> PlayerXorO;

		try
		{
			thegame.start_game(PlayerXorO);
		}
		catch (Error e)
		{
			cout << e.get_message();
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
			std::cout << "The Winner is: "<<thegame.get_winner();
			manager.save_game(thegame);
			std::cout << "\n";
			cout << manager;//displays the board from previous game
			std::cout << "\n GAMEOVER" << std::endl;
			std::cout << "\n Would you like to play another game?Press y to continue: " << std::endl;
			cin >> another_game;
		}
	} while (another_game == "y" || another_game == "Y");
	
		


	

	
	return 0;
}
