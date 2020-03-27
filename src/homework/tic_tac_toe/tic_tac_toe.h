//h
#include <string>
#include <vector>

using std::string;

class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return next_player; }
	string get_winner() { return winner; }
	
	void display_board() const;
	


private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagnol_win();
	bool check_board_full();
	void clear_board();
	void set_winner();//created 3//22
	string winner;
	string player;
	string next_player;
	void set_next_player();
	std::vector<std::string>pegs{ 9, " " };

};

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }

private:
	std::string message;
};