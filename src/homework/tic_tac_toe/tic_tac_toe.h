//h
#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::string;

class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	int mark_board(int position);

	void set_next_player();
	void display_board() const;

	string get_player() const { return next_player; }
	string get_winner() { return winner; }

	


private:
	int count{ 0 };
	bool check_column_win();
	bool check_row_win();
	bool check_diagnol_win();
	bool check_board_full();
	void clear_board();
	void set_winner();
	string winner;
	string player;
	string next_player;
	std::vector<std::string>pegs{ 9, " " };
	//void set_next_player();

};
class TicTacToeManager
{
public:
	friend std::ostream& operator<<(std::ostream& os, const TicTacToeManager games);
private:
	std::vector<TicTacToe> games;
	int x_win = { 0 };
	int o_win = { 0 };
	int ties = { 0 };
};





class Error
{
public:

	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }

private:
	std::string message;
};