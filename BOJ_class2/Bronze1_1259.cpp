#include "Bronze1_1259.h"
#include <iostream>
#include <string>

void Solved1259()
{
	while (true) {
		std::string s;
		std::cin >> s;
		if (s == "0") break;

		int same = 0;
		for (int i = 0; i < s.length() / 2; i++) {
			if (s[i] == s[s.length() - 1- i])
				same++;
		}
		if (same == s.length() / 2)
			std::cout << "yes" << '\n';
		else
			std::cout << "no" << '\n';
	}
}

void SolvedOther1259()
{
	std::string s;
	while (std::cin >> s) {
		if (s == "0") break;
		std::string rs;

		rs = s;
		std::reverse(rs.begin(), rs.end());
		if (s == rs)
			std::cout << "yes" << '\n';
		else
			std::cout << "no" << '\n';
	}
}
