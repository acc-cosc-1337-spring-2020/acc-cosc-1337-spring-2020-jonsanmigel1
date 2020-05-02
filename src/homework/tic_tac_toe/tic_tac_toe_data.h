//h
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include <vector>
#include <string>
#include <fstream>
#include <memory>
#include <iostream>
using std::unique_ptr;
using std::make_unique;
#include "tic_tac_toe.h"
class TicTacToeData
{
public:
	void save_games(const std::vector<std::unique_ptr<TicTacToe>>& pgs);
	std::vector<std::unique_ptr<TicTacToe>> get_games();

private:
	std::string file_name = { "TicTacToeData.dat" };

};



#endif // !TIC_TAC_TOE_DATA_H
