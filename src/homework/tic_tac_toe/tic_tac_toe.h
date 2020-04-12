//h
#pragma once
#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::cin;
using std::string;

class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);

	//void set_next_player();
	void display_board() const;
	
	friend std::ostream &operator<<(std::ostream &out, const TicTacToe &b);
	friend std::istream &operator>>(std::istream &in, TicTacToe &c );

	string get_player() const { return player; }
	string get_winner() const { return winner; }

	


private:
	int count{ 0 };
	bool check_column_win();
	bool check_row_win();
	bool check_diagnol_win();
	bool check_board_full();
	void clear_board();
	void set_winner();
	void set_next_player();
	string winner;
	string player;
	string next_player;
	std::vector<std::string>pegs{ 9, " " };
	//void set_next_player();

};



class Error
{
public:

	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }

private:
	std::string message;
};