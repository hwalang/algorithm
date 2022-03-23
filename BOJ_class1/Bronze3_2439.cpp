#include "Bronze3_2439.h"
#include <iostream>

void Solved2439()
{
	int starCount, row;
	std::cin >> starCount;

	for (int col = 1; col <= starCount; col++)
	{
		for (row = 1; row <= starCount - col; row++)
			std::cout << " ";
		for (row = 1; row <= col; row++)
			std::cout << "*";
		std::cout << '\n';
	}
}

void SolvedOther2439()
{
	int starCount, col, row;
	std::cin >> starCount;
	for (col = starCount; col > 0; col--)
	{
		for (row = 1; row <= starCount; row++)
		{
			std::cout << ((row < col) ? ' ' : '*');
		}
		std::cout << '\n';
	}
}
