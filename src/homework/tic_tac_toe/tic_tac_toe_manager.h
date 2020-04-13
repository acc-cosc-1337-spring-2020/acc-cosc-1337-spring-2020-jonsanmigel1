//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H


#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include <string>
using std::cout;


class TicTacToeManager
{
public:
	void save_game(const TicTacToe b);
	friend std::ostream &operator<<(std::ostream &out, const TicTacToeManager &manager);//May need to add const back
	void get_winner_total(int& x, int &o, int &t);

private:
	std::vector<TicTacToe> games;
	void update_winner_count(std::string winner);
	int x_win{ 0 };
	int o_win = { 0 };
	int ties = { 0 };

};
#endif // !TIC_TAC_TOE_MANAGER_H