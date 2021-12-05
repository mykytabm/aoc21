#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <deque>

class Puzzle_1_II
{
private:
	int _timesDepthIncreased = 0;
	int _previousDepth = 0;
	int _currentDepth = 0;
	std::deque<int> _a;
	std::deque<int> _b;


public:
	Puzzle_1_II();
	void Solve();
};