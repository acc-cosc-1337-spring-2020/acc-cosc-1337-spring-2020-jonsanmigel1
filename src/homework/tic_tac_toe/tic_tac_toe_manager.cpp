
#include "tic_tac_toe_manager.h"
//#include "tic_tac_toe.h"

//cpp

std::ostream & operator<<(std::ostream &out, const TicTacToeManager & manager)
{
	int x_win{ 0 }, o_win{ 0 }, ties{ 0 };
	for (auto game : manager.games)
	{
		out<<game;
		

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
		out << "\n X wins" << x_win << "\n O wins" << o_win << "\n" << ties;
		return out;
	}
	

	return out;
	// TODO: insert return statement here
}

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
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
