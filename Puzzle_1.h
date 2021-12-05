#pragma once
#include <fstream>
#include <string>
#include <iostream>

class Puzzle_1
{
private:
	int _timesDepthIncreased = 0;
	int _previousDepth = 0;
	int _currentDepth = 0;

public:
	Puzzle_1();
	void Solve();
};