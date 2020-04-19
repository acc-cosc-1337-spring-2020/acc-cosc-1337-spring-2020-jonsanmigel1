#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

/*
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can’t call mark board before start game")

{

	TicTacToe game;

	REQUIRE_THROWS_AS(game.mark_board(1), Error);

}
TEST_CASE("Start game accept only X or O")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.start_game("S"), Error);
	

}
TEST_CASE("Set First player")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");

}
TEST_CASE("Set first player to O")
{
	TicTacToe game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");

}
TEST_CASE("Start game with X gameflow")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");

}
TEST_CASE("Start game with O gameflow")
{
	TicTacToe game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");

}


*/



TEST_CASE("Test win by first Column")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//x
	REQUIRE(board.game_over() == true);



	
}

TEST_CASE("Test win by second Column")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//x
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by third Column")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//x
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by first row")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by second row")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//x
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by third row")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//x
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by diagnol row")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//x
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win diagnolly from bottom left")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x
	REQUIRE(board.game_over() == true);

}



TEST_CASE("Test no winnr")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//x
	//REQUIRE(board.game_over() == false);

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test winner by X")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test winner by O")
{
	TicTacToe3 board;
	board.start_game("O");
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "O");

}


TEST_CASE("Test winner by O TicTacToe4")
{
	TicTacToe4 board;

	board.start_game("O");
	board.mark_board(1);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "O");

}
TEST_CASE("Test winner by O TicTacToe4 Column")
{
	
	TicTacToe4 board;

	board.start_game("O");
	board.mark_board(1);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//O

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "O");

}
