#include "Bronze5_2475.h"
#include <iostream>
#include <cmath>

void Solved2475()
{
	double sum = 0;
	int answer;
	double a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	// 나머지 연산자는 int 끼리만 가능
	answer = static_cast<int>(pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2)) % 10;
	// answer = static_cast<int>(a*a + b*b + c*c + d*d + e*e) % 10;

	std::cout << answer;
}