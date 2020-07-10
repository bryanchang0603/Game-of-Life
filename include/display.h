/**
*  \file GameBoard.h
*  \author Baosheng Chang
*  \brief header file for module display
*  \date April 13, 2019
**/
#ifndef A4_DISPLAY_H_
#define A4_DISPLAY_H_

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include "GameBoard.h"

/**
*  \brief Class export the gameBoard
**/
class display{
public:
	/**
	*  \brief wirter method for GameBoard
	*  \details the given GameBoard will be wirten to the specific output File, outFile
	*  \param outFile the location that the GameBoard will be written to
	*  \param in the GameBoard that will be exported
	**/
	void exportBoard(std:: string outFile, GameBoard in);
};

#endif