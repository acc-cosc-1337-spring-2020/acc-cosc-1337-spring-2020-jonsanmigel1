#include "tic_tac_toe.h"

//cpp

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
	TicTacToe::set_next_player();
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
