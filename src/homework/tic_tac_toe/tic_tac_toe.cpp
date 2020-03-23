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

void TicTacToe::set_winner()
{
	if (player == "x")
	{
		winner = "o";
	}
	else
		winner == "x";

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
bool TicTacToe::check_column_win(std::vector<std::string> avector)
{
	if (avector[1] == "x" && avector[4] == "x" && avector[7] == "x")
	{
		return true;
	}
	else if (avector[1] == "o" && avector[4] == "o" &&avector[7] == "o")
	{
		return true;
	}

	else if (avector[0] == "x" && avector[3] == "x" && avector[6] == "x")
	{
		return true;
	}
	else if (avector[0] == "o" && avector[3] == "o" && avector[6] == "o")
	{
		return true;
	}
	else if (avector[2] == "x" && avector[5] == "x" && avector[8] == "x")
	{
		return true;
	}
	else if (avector[2] == "o" && avector[5] == "o" && avector[8] == "o")
	{
		return true;
	}

	else
	{
		//std::cout << "A column win was not found" << std::endl;
		return false;
	}

}

bool TicTacToe::check_row_win(std::vector<std::string> avector)
{
	if (avector[0] == "x" && avector[1] == "x" && avector[2] == "x")
	{
		return true;
	}
	else if (avector[0] == "o" && avector[1] == "o" &&avector[2] == "o")
	{
		return true;
	}
	else if (avector[3] == "x" && avector[4] == "x" &&avector[5] == "x")
	{
		return true;
	}
	else if (avector[3] == "o" && avector[4] == "o" &&avector[5] == "o")
	{
		return true;
	}
	else if (avector[6] == "x" && avector[7] == "x" &&avector[8] == "x")
	{
		return true;
	}
	else if (avector[6] == "o" && avector[7] == "o" &&avector[8] == "o")
	{
		return true;
	}
	else
	{
		//std::cout << "A row win was not found" << std::endl;
		return false;
	}

}

bool TicTacToe::check_diagnol_win(std::vector<std::string> avector)
{
	if (avector[0] == "x" && avector[4] == "x" && avector[8] == "x")
	{
		return true;
	}
	else if (avector[0] == "o" && avector[4] == "o" &&avector[8] == "o")
	{
		return true;
	}
	else if (avector[6] == "x" && avector[4] == "x" &&avector[2] == "x")
	{
		return true;
	}
	else if (avector[6] == "o" && avector[4] == "o" &&avector[2] == "o")
	{
		return true;
	}
	else
	{
		//std::cout << "No diagnol win found" << std::endl;
		return false;
	}

}
