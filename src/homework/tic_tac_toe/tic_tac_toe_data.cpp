#include "tic_tac_toe_data.h"

//cpp

void TicTacToeData::save_pegs(const std::vector<TicTacToe>& pgs)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);
	//std::vector<TicTacToe>::size_type i = 0; i != pgs.size(); i++
	for (auto vec : pgs)
	{
		
		for (auto character : pgs)
		{
			file_out << character;
		}
		file_out << vec.get_winner();
		std::cout << "\n";
	}
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	std::unique_ptr<TicTacToe> boards;
	std::ifstream open_file(file_name); //create file handle object

	while (open_file.is_open())
	{
		std::vector<std::string> astring;
		std::string line;

		while (open_file >>line)
		{
			std::cout << "Hellp";
		}
	}

	return std::vector<std::unique_ptr<TicTacToe>>();
}
