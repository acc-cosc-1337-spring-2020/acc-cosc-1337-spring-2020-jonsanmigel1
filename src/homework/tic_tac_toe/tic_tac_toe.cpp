


#include "tic_tac_toe.h"
#include <iostream>
using std::cout;

//cpp

bool TicTacToe::game_over()
{
	
	if (check_diagnol_win() == true || check_column_win() == true || check_row_win() == true)
	{
		set_winner();
		
		return true;
	}
	else if (check_board_full() == false)
	{
		return false;
	}
	else if (check_board_full() == true)
	{
		std::cout << "No winner" << "\n";
		return true;
	}
	
	
}

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "x"||first_player=="O"||first_player=="o")
	{
		player = first_player;
		clear_board();
		
		
	}
	else
	{
		throw Error("PLayer Must be X or O");
	}
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	
	if (position < 1 || position > pegs.size())
	{
		throw Error("Position must be 1 to 9.\n");
	}
	else if (player == "")
	{
		throw Error("Must start game first.\n");
	}
	else
	{
		pegs[position - 1] = player; //minus one for the index
		if (game_over() == false)
		{
			set_next_player();
		}
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
		winner = "X";
	}
	else if (player == "O")
	{
		winner = "O";
	}
		

}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";
	}
}
bool TicTacToe::check_column_win()
{
	
	return false;

}

bool TicTacToe::check_row_win()
{	
	return false;

}

bool TicTacToe::check_diagnol_win()
{
	
	return false;

}



std::ostream & operator<<(std::ostream & out, const TicTacToe & b)
{
	
	if (b.pegs.size() == 9)
	{
		for (int i = 0; i < 9; i += 3)
		{
			out << b.pegs[i] << "|" << b.pegs[i + 1] << "|" << b.pegs[i + 2] << "\n";
		}
	}
	else if (b.pegs.size() == 16)
	{
		for (int i = 0; i < 16; i += 4)
		{
			out << b.pegs[i] << "|" << b.pegs[i + 1] << "|" << b.pegs[i + 2] << "|" << b.pegs[i + 3] << "\n";
		}
	}
	return out;
	// TODO: insert return statement here
}

std::istream & operator>>(std::istream & in, TicTacToe & c)
{
	int pos = 0;
	std::cout << "Player " << c.get_player() << " enter a position: ";
	in >> pos;
	c.mark_board(pos);

	return in;
	// TODO: insert return statement here
}
