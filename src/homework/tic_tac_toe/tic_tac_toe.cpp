


#include "tic_tac_toe.h"
#include <iostream>
using std::cout;

//cpp

bool TicTacToe::game_over()
{
	
	if (check_diagnol_win() == true || check_column_win() == true || check_row_win() == true)
	{
		set_winner();
		//std::cout << "There has been a winner: " << std::endl;
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
	if (first_player == "X" || first_player == "O")
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
/*
int TicTacToe::mark_board(int position)
{
	
	if(position <1 || position >9)
	{

		throw Error("\n You can only choose from 1-9");

	}
	else if(player == "")
	{
		throw Error("Must start game, Player Cannot be empty");
	}
	else if (position >= 1 && position <= 9)
	{
		switch (count)
		{
		case(0):
			pegs[position - 1] = player;
			TicTacToe::set_next_player();

			return count = count + 1;
		case(1):
			pegs[position - 1] = next_player;
			return count = count + 1;
		case(2):
			pegs[position - 1] = player;
			return count = count + 1;
		case(3):
			pegs[position - 1] = next_player;
			return count = count + 1;
		case(4):
			pegs[position - 1] = player;
			return count = count + 1;
		case(5):
			pegs[position - 1] = next_player;
			return count = count + 1;
		case(6):
			pegs[position - 1] = player;
			return count = count + 1;
		case(7):
			pegs[position - 1] = next_player;
			return count = count + 1;
		case(8):
			pegs[position - 1] = player;
			return count = count + 1;
		case(9):
			pegs[position - 1] = next_player;
			return count = count + 1;



		}

	}

	
	
}

*/
void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
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
	/*
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;
	}
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}
	else if (pegs[1] == "O" && pegs[4] == "O" &&pegs[7] == "O")
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
	*/

		
	return false;

}

bool TicTacToe::check_row_win()
{
	/*
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" &&pegs[2] == "O")
	{
		return true;
	}
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
	{
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
	{
		return true;
	}
	*/
	
		
	return false;
	

}

bool TicTacToe::check_diagnol_win()
{
	/*
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
	*/
	
		
	return false;
	

}



std::ostream & operator<<(std::ostream & out, const TicTacToe & b)
{
	
	for (int i = 0; i < 9; i += 3)
	{
		
		out << b.pegs[i] << "|" << b.pegs[i + 1] << "|" << b.pegs[i + 2] << "\n";
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
