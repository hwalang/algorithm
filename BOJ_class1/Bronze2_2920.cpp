#include "Bronze2_2920.h"
#include <iostream>

void Solved2920()
{	
	int a, b, c, d, e, f, g, h;
	std::cin >> a >> b >> c >> d >> e >> f >> g >> h;

	if (a < b && b < c && c < d && d < e && e < f && f < g && g < h)
		std::cout << "ascending" << '\n';
	else if (a > b && b > c && c > d && d > e && e > f && f > g && g > h)
		std::cout << "descending" << '\n';
	else
		std::cout << "mixed" << '\n';
}

void SolvedOther2920()
{
	int criterion = 0, input;
	for (int i = 1; i <= 8; i++)
	{
		std::cin >> input;

		if (input == i) criterion++;
		else if (input == 9 - i) criterion--;
	}

	if (criterion == 8) std::cout << "ascending" << '\n';
	else if (criterion == -8) std::cout << "descending" << '\n';
	else std::cout << "mixed" << '\n';
}
