#include "Bronze2_8958.h"
#include <iostream>
#include <string>
#include <vector>

#include <limits>	// 백준에서 cin.ignore 사용할 때 필요

void Solved8958()
{
	int testCase;
	std::vector<int> v;
	std::cin >> testCase;
	v.resize(testCase);

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for (int i = 0; i < testCase; i++)
	{		
		std::string ox;
		std::getline(std::cin, ox);

		int count = 0;
		int sum = 0;
		for (int j = 0; j < ox.length(); j++)
		{
			if (ox[j] == 'O')
				count++;
			else
				count = 0;
			sum += count;
		}
		v[i] = sum;
	}

	for (int i = 0; i < testCase; i++)	
		printf("%d\n", v[i]);	
}

void SolvedOther8958()
{
	int testCase;
	std::cin >> testCase;
	for (int i = 0; i < testCase; i++)
	{
		std::string s;
		std::cin >> s;

		int sum = 0, count = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O')
				count++;
			else
				count = 0;
			sum += count;
		}
		std::cout << sum << '\n';
	}
}
