#pragma once
#include <fstream>
#include <string>
#include <iostream>

class Puzzle_1_I
{
private:
	int _timesDepthIncreased = 0;
	int _previousDepth = 0;
	int _currentDepth = 0;

public:
	Puzzle_1_I();
	void Solve();
};