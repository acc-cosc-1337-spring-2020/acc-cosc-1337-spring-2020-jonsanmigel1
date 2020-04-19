
#include "tic_tac_toe_manager.h"
//#include "tic_tac_toe.h"
#include <functional>

//cpp

std::ostream & operator<<(std::ostream &out, const TicTacToeManager & manager)
{
	/*This will loop through the vector of games for each game pushed back to vector
	it will determine the winner and increment each variable accordingly*/
	//int x_win{ 0 }, o_win{ 0 }, ties{ 0 };
	std::string answer;
	for (auto& game : manager.games)
	{
		
		out<<game;
		out<< "x_wins: " << manager.x_win << "\no wins: " << manager.o_win << "\nties: " << manager.ties;

		
		
		/*
		if (game.get_winner() == "X")
		{
			
			x_win =x_win + 1;
		}
		else if (game.get_winner() == "O")
		{
			o_win = o_win + 1;
		}
		else
		{
			ties = ties + 1;
		}
		
		out << "\n X wins" << manager.x_win << "\n O wins" << o_win << "\n" <<"No winner: "<< ties<<"\n";
		*/
		return out;
	}
	

	return out;
	// TODO: insert return statement here
}
//Note i removed const from save game
void TicTacToeManager::save_game( TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int & x, int & o, int & t)
{
	x = x_win;
	o = o_win;
	t = ties;

}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win = x_win + 1;
		

	}
	else if (winner == "O")
	{
		o_win = o_win + 1;
	}
	else
	{
		ties = ties + 1;
	}
}
