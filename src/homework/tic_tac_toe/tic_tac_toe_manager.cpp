
#include "tic_tac_toe_manager.h"
//#include "tic_tac_toe.h"

//cpp

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	for (auto game : manager.games)
	{
		out<<game;

	}

	return out;
	// TODO: insert return statement here
}

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
}
