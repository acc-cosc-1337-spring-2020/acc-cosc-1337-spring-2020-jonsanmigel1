#include "tic_tac_toe.h"
#include <iostream>
using std::cout;

//cpp

bool TicTacToe::game_over()
{

	return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
		next_player = first_player;
	}
	else
	{
		throw Error("PLayer Must be X or O");
	}
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position >= 1 && position <= 9)
	{

	}
	else
	{
		throw Error("You can only choose from 1-9");

	}
	if (player == "")
	{
		throw Error("Must start game, Player Cannot be empty");
	}

	pegs[position - 1] = player;
	TicTacToe::set_next_player();
}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		std::cout << pegs[i] << "|" << pegs[i + 1] <<  "|" << pegs[i + 2] << "\n";
	}

}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); i++)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)//use reference
	{
		peg = " ";
	}
}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}
