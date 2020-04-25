//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H


#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <memory>
using std::cout;
using std::unique_ptr;
using std::make_unique;


class TicTacToeManager
{
public:
	void save_game(std::unique_ptr<TicTacToe> &b);
	friend std::ostream &operator<<(std::ostream &out, const TicTacToeManager &manager);//May need to add const back
	void get_winner_total(int& x, int &o, int &t);

private:
	std::vector<unique_ptr<TicTacToe>> games;
	//std::vector<std::reference_wrapper<TicTacToe>> games;
	//std::vector<TicTacToe> games;
	void update_winner_count(std::string winner);
	int x_win{ 0 };
	int o_win = { 0 };
	int ties = { 0 };

};
#endif // !TIC_TAC_TOE_MANAGER_H