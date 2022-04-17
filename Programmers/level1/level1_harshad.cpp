#include "level1_harshad.h"
#include <string>
#include <iostream>

void SolvedHarshad()
{
	bool answer;
	int x = 11, sum = 0;
	std::string s = std::to_string(x);

	for (int i = 0; i < s.size(); i++)
	{
		// (int)s[i] 를 하면 char -> int 이므로 ACII 번호에 영향을 받는다.
		sum += s[i] - '0';
	}
	if (x % sum == 0)
		answer = true;
	else
		answer = false;

	if (answer)
		std::cout << "true";
	else
		std::cout << "false";
}

void SolvedOtherHarshad()
{
	bool answer;
	int x = 11;
	int sum = 0, temp = x;
	while (temp > 0)
	{
		sum += (temp % 10);
		temp /= 10;
	}
	answer = (x % sum == 0) ? true : false;
}
