//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H


#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <memory>
#include "tic_tac_toe_data.h"
using std::cout;
using std::unique_ptr;
using std::make_unique;


class TicTacToeManager
{
public:
	TicTacToeManager() = default;
	TicTacToeManager(TicTacToeData& tttd);
	void save_game(std::unique_ptr<TicTacToe> &b);
	friend std::ostream &operator<<(std::ostream &out, const TicTacToeManager &manager);
	void get_winner_total(int& x, int &o, int &t);
	~TicTacToeManager();
private:
	std::vector<unique_ptr<TicTacToe>> games;
	TicTacToeData data;
	
	void update_winner_count(std::string winner);
	int x_win{ 0 };
	int o_win = { 0 };
	int ties = { 0 };

};
#endif // !TIC_TAC_TOE_MANAGER_H