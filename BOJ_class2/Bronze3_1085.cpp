#include "Bronze3_1085.h"
#include <iostream>
#include <cmath>

// (x, y)에서 경계선까지의 거리 최솟값
// x, y, (w-x), (h-y) 중에서 가장 작은 값

void Solved1085()
{
	int x, y, w, h, a, b, min;
	std::cin >> x >> y >> w >> h;
	
	a = std::min(x, y);
	b = std::min((w - x), (h - y));
	min = std::min(a, b);
	std::cout << min << '\n';
}

void SolvedOther1085()
{
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	std::cout << std::min(std::min(x, w - x), std::min(y, h - y));
}
