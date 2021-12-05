#include "Puzzle_1_II.h"


Puzzle_1_II::Puzzle_1_II()
{
}

int SumDq(std::deque <int> dq) {
	int sum = 0;
	for (auto& n : dq)
		sum += n;
	return sum;
}
void Puzzle_1_II::Solve()
{
	_timesDepthIncreased = 0;
	_currentDepth = 0;
	_previousDepth = -1;

	int counter = 0;
	bool firstTime = true;

	std::fstream newfile;
	newfile.open("Input_1.txt", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open())
	{
		std::string tp;
		while (std::getline(newfile, tp))
		{
			_currentDepth = std::stoi(tp);


			if (_a.size() == 3 && _b.size() == 3) {
				if (firstTime) {
					_timesDepthIncreased += SumDq(_a) < SumDq(_b) ? 1 : 0;
					firstTime = false;
					_a.pop_front();
					_a.push_back(_currentDepth);
				}
				else {
					_a.pop_front();
					_a.push_back(_currentDepth);
					_timesDepthIncreased += SumDq(_a) > SumDq(_b) ? 1 : 0;
					_b.pop_front();
					_b.push_back(_currentDepth);
				}
				continue;
			}

			if (_a.size() < 3) {
				_a.push_back(_currentDepth);
			}

			if (_b.size() < 3) {
				if (counter > 0) {
					_b.push_back(_currentDepth);
				}
			}

			counter++;
		}
	}
	std::cout << _timesDepthIncreased << std::endl;
	newfile.close(); //close the file object.
}
