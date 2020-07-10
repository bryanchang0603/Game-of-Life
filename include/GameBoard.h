/**
*  \file GameBoard.h
*  \author Baosheng Chang
*  \brief header file for ADT GameBoard
*  \date April 13, 2019
**/
#ifndef A4_GAMEBOARD_H_
#define A4_GAMEBOARD_H_

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>

/**
*  \brief Class for constructing and play the game.
**/
class GameBoard{
private:
	std::vector<std::vector<int>> Game_Board;
	std::vector<std::vector<int>> Game_Board_next;
	int height;
	int width;
	int checkAdj(int i, int j);
public:
	/**
	*  \brief construct the gameboard when no input file is given
	*  \details the constuctor will throw invalid_argument exception since the txt file assumed to have width = 0 & height = 0
	**/
	GameBoard();

	/**
	*  \brief construct the gameboard based on the txt file
	*  \details the txt file must has more than one line or one line with more than one character
	*  \param inFile the txt file will will be used to construct the Game_Board
	**/
	GameBoard(std::string inFile);
	/**
	*  \brief compute the next round's game board's status
	*  \details the computed result will be first store in Game_Board_next. these result will be writen to Game_Board after all elements in the Game_Board are computed
	**/
	void computeRound();

	/**
	*  \brief get the Game_Board
	*  \return the Game_Board with the current state of the game
	**/
	std::vector<std::vector<int>> showGameBoard();
};

#endif