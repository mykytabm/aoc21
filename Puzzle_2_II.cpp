#include "Puzzle_2_II.h"

Puzzle_2_II::Puzzle_2_II()
{
}



void Puzzle_2_II::ExecuteCommand(const Command& command)
{
	if (command.name == "up") {
		_aim -= command.value;
	}
	else if (command.name == "forward") {
		_horizontalPosition += command.value;
		_depth += _aim * command.value;
	}
	else if (command.name == "down") {
		_aim += command.value;
	}
}

void Puzzle_2_II::ParseCommandStringIntoCommand(std::string& s, Command& command)
{
	std::vector<std::string> commandStringElems;
	Utils::SplitString(s, ' ', commandStringElems);
	if (commandStringElems.size() == 2) {
		command.name = commandStringElems[0];
		command.value = std::stoi(commandStringElems[1]);
	}
	else {
		std::cout << "Could not parse command" << std::endl;
	}
}

int Puzzle_2_II::MultiplyDepthByHorizontalPos()
{
	return _depth * _horizontalPosition;
}

void Puzzle_2_II::Solve()
{
	std::fstream newfile;
	newfile.open("Input_2.txt", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open())
	{
		std::string tp;
		while (std::getline(newfile, tp))
		{
			ParseCommandStringIntoCommand(tp, _currentCommand);
			ExecuteCommand(_currentCommand);
		}
	}
	std::cout << "Final depth: " << _depth << " | Final horizontal position: " << _horizontalPosition << " | multiplied: " << MultiplyDepthByHorizontalPos() << std::endl;
	newfile.close(); //close the file object.
}
