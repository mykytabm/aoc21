#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <deque>

class Puzzle_2
{
private:
	int _timesDepthIncreased = 0;
	int _previousDepth = 0;
	int _currentDepth = 0;
	std::deque<int> _a;
	std::deque<int> _b;


public:
	Puzzle_2();
	void Solve();
};