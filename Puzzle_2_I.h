#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include "Command.h"
#include "Utils.h"

class Puzzle_2_I
{
private:
	int _depth = 0;
	int _horizontalPosition = 0;

	Command _currentCommand;

	void ExecuteCommand(const Command& command);

	void ParseCommandStringIntoCommand(std::string& s, Command& command);

	int MultiplyDepthByHorizontalPos();

public:
	Puzzle_2_I();
	void Solve();
};

