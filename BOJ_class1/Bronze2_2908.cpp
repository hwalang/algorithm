#include "Bronze2_2908.h"
#include <iostream>
#include <cmath>

int ReverseInt(int number)
{
	int revNum = 0;
	for (int i = 2; number != 0; i--)
	{		
		revNum += (number % 10) * std::pow(10, i);
		number /= 10;
	}

	return revNum;
}

void Solved2908()
{
	int a, b;
	std::cin >> a >> b;

	a = ReverseInt(a);
	b = ReverseInt(b);
	
	if (a > b)
		std::cout << a << '\n';
	else
		std::cout << b << '\n';
}
