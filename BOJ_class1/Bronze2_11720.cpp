#include "Bronze2_11720.h"
#include <iostream>
#include <string>

void Solved11720()
{
	int digit, num, sum = 0;
	std::cin >> digit;
	for (int i = 0; i < digit; i++)
	{
		scanf_s("%1d", &num);
		sum += num;
	}
	std::cout << sum << '\n';
}
