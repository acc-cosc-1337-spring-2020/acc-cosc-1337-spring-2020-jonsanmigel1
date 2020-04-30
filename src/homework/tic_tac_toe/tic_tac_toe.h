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
	TicTacToe(int s) :pegs(s*s, " ") {}
	TicTacToe(std::vector<string> p, std::string w) :pegs(p),winner(w) {}
	//hw11
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	const std::vector<string> get_pegs() { return pegs; }//hw 11

	
	
	friend std::ostream &operator<<(std::ostream &out, const TicTacToe &b);
	friend std::istream &operator>>(std::istream &in, TicTacToe &c );

	string get_player() const { return player; }
	string get_winner() const { return winner; }

	

protected:
	std::vector<std::string>pegs{ 9, " " };
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagnol_win()=0;


private:
	int count{ 0 };
	
	bool check_board_full();
	void clear_board();
	void set_winner();
	void set_next_player();
	string winner;
	string player;
	string next_player;
	

};



class Error
{
public:

	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }

private:
	std::string message;
};
