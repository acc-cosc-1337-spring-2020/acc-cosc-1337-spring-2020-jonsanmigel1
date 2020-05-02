//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H


#include "tic_tac_toe.h"
#include <memory>
class TicTacToe3 : public TicTacToe
{
public:

	//TicTacToe3() = default;
	
	TicTacToe3(std::vector<string> p, string winner) : TicTacToe(p, winner) {}
	TicTacToe3() : TicTacToe(3) {}

private:
	bool check_column_win();
	bool check_diagnol_win();
	bool check_row_win();


};

#endif // !TIC_TAC_TOE_3_H