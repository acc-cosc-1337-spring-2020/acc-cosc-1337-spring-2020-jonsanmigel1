#include "tic_tac_toe.h"
#include <iostream>
using std::cout;

//cpp

bool TicTacToe::game_over()
{
	
	if(check_column_win() == true || check_diagnol_win() == true || check_row_win() == true)
	{
	return true;
	}
	else if (check_board_full() == false)
	{
		return false;
	}
	else if (check_board_full() == true)
	{
		return true;
	}
	
	//return check_board_full();
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
	if (player == "X")
	{
		winner = "O";
	}
	else
		winner == "X";

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
bool TicTacToe::check_column_win()
{
	if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}
	else if (pegs[1] == "O" && pegs[4] == "O" &&pegs[7] == "O")
	{
		return true;
	}

	else if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		return true;
	}

	else
	{
		//std::cout << "A column win was not found" << std::endl;
		return false;
	}

}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" &&pegs[2] == "O")
	{
		return true;
	}
	else if (pegs[3] == "X" && pegs[4] == "X" &&pegs[5] == "X")
	{
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" &&pegs[5] == "O")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" &&pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" &&pegs[8] == "O")
	{
		return true;
	}
	else
	{
		//std::cout << "A row win was not found" << std::endl;
		return false;
	}

}

bool TicTacToe::check_diagnol_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[4] == "O" &&pegs[8] == "O")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[4] == "X" &&pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[4] == "O" &&pegs[2] == "O")
	{
		return true;
	}
	else
	{
		//std::cout << "No diagnol win found" << std::endl;
		return false;
	}

}
