#include "Bronze2_2562.h"
#include <iostream>

void Solved2562()
{
	int max = 0, input, order = 0;
	int arr[9] = {};
	for (int i = 0; i < 9; i++)
	{
		std::cin >> input;
		arr[i] = input;
	}

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			order = i + 1;
		}
	}

	std::cout << max << "\n";
	std::cout << order;
}

void SolvedOrder2562()
{
	int max = 0, order = 0, input;
	for (int i = 0; i < 9; i++)
	{
		std::cin >> input;
		if (input > max)
		{
			max = input;
			order = i + 1;
		}
	}
	std::cout << max << "\n";
	std::cout << order;
}