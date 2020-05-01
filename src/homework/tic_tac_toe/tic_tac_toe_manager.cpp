
#include "tic_tac_toe_manager.h"
//#include "tic_tac_toe.h"
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
		
		out<<*game<<"\n";

		
		
		//return out;
	}
	out << "\nO win: " << manager.o_win<<"\n";
	out<<"X win: " << manager.x_win<<"\n";
	out << "Ties: " << manager.ties<<"\n";

	return out;
	// TODO: insert return statement here
}
TicTacToeManager::TicTacToeManager(const TicTacToeData &tttd)
	:games{tttd.get_games }
{
	for (auto &game : games)
	{
		update_winner_count(winner);
	}
}


void TicTacToeManager::save_game( std::unique_ptr<TicTacToe> &b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move(b));
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
