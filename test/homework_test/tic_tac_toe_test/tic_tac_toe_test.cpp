#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

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





