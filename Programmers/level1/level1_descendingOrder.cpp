#include "level1_descendingOrder.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool Desc(long long a, long long b) {
	return a > b;
}

void SolvedDescendingOrder()
{
	long long n = 118372;
	long long answer = 0;

	std::string s = std::to_string(n);
	std::sort(s.begin(), s.end(), Desc);

	answer = std::stoll(s, nullptr, 10);

	std::cout << answer << '\n';
}
