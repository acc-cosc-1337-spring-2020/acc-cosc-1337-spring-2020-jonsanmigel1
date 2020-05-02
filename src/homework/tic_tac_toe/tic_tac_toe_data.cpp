#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
//cpp

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& pgs)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);
	
	for (auto &vec : pgs)
	{
		
		for (auto &character : pgs)
		{
			file_out << *character;
		}
		file_out << vec->get_winner();
		std::cout << "\n";
	}
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	std::vector<std::unique_ptr<TicTacToe>> boards;
	std::ifstream open_file(file_name); //create file handle object

	while (open_file.is_open())
	{
		
		std::vector<std::string> pegs;
		std::string line;

		//while (open_file >>line)
		while (getline(open_file, line))
		{
			for (int ch = 0; ch<line.size()-1; ch++)
			{
				std::string chstring(1, line[ch]);
				pegs.push_back(chstring);
			}
			std::string winner = pegs[-1];// last item in the vector of string
			std::unique_ptr<TicTacToe> board;
			
			if (pegs.size() == 9)
			{
				board = std::make_unique<TicTacToe3>(pegs,winner);
				
			}
			else if (pegs.size() == 16)
			{
				board = std::make_unique<TicTacToe4>(pegs, winner);
				
			}
			
			boards.push_back(std::move(board));
		}	
		open_file.close();
	}	
	
	return std::vector<std::unique_ptr<TicTacToe>>();
}
