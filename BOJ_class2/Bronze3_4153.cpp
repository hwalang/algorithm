#include "Bronze3_4153.h"
#include <iostream>

void Solved4153()
{
	int a, b, c;
	while (true)
	{
		std::cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			std::cout << "right" << '\n';
		else
			std::cout << "wrong" << '\n';
	}
}
