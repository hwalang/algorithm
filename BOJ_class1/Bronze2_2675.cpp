#include "Bronze2_2675.h"
#include <iostream>
#include <queue>
#include <vector>
#include <string>

void Solved2675()
{
	int t, r;
	std::string s;
	std::queue<char> q;
	std::vector<int> standard;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> r >> s;
		standard.push_back(s.length() * r);
		for (int j = 0; j < s.length(); j++)
		{
			for (int z = 0; z < r; z++)
			{
				q.push(s[j]);
			}
		}
	}

	for (int i = 0; i < standard.size(); i++)
	{
		for (int j = 0; j < standard[i]; j++)
		{
			std::cout << q.front();
			q.pop();
		}
		std::cout << '\n';
	}
}

void SolvedOther2675()
{
	int t, r;
	char c[21];		// string s; 

	std::cin >> t;
	while (t--)
	{
		std::cin >> r >> c;
		for (int i = 0; c[i] != '\0'; i++)
		{
			for (int j = 0; j < r; j++)
				std::cout << c[i];
		}
		std::cout << '\n';
	}
}
