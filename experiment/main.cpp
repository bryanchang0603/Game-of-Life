#include "../include/GameBoard.h"
#include "../include/display.h"
#include <fstream>
#include <algorithm>
#include <iostream>
#include <vector>

int main(){

	GameBoard test = GameBoard("input/input_glider.txt");
	display show;
	show.exportBoard("output/output.txt", test);
	test.computeRound();
	show.exportBoard("output/output1.txt", test);
	test.computeRound();
	show.exportBoard("output/output2.txt", test);
	test.computeRound();
	show.exportBoard("output/output3.txt", test);
	test.computeRound();
	show.exportBoard("output/output4.txt", test);
	test.computeRound();
	test.computeRound();
	test.computeRound();
	test.computeRound();
	show.exportBoard("output/output5.txt", test);

}
