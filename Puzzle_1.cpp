#include "Puzzle_1.h"

Puzzle_1::Puzzle_1()
{
}

void Puzzle_1::Solve()
{
	_timesDepthIncreased = 0;
	_currentDepth = 0;
	_previousDepth = -1;

	std::fstream newfile;
	newfile.open("Input_1.txt", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			_currentDepth = std::stoi(tp);
			if (_currentDepth > _previousDepth&&_previousDepth!=-1) {
				_timesDepthIncreased++;
			}
			_previousDepth = _currentDepth;
		}
		std::cout << _timesDepthIncreased << std::endl;
		newfile.close(); //close the file object.
	}
}
