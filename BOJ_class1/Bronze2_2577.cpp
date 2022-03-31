#include "Bronze2_2577.h"
#include <iostream>
#include <string>

void Solved2577()
{
	int mul = 1, input;
	int arr[10] = {};
	for (int i = 0; i < 3; i++)
	{
		std::cin >> input;
		mul *= input;
	}
	std::string s = std::to_string(mul);
	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case '0':
			arr[0] += 1;
			break;
		case '1':
			arr[1] += 1;
			break;
		case '2':
			arr[2] += 1;
			break;
		case '3':
			arr[3] += 1;
			break;
		case '4':
			arr[4] += 1;
			break;
		case '5':
			arr[5] += 1;
			break;
		case '6':
			arr[6] += 1;
			break;
		case '7':
			arr[7] += 1;
			break;
		case '8':
			arr[8] += 1;
			break;
		case '9':
			arr[9] += 1;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << "\n";
	}
}

void SolvedOther2577()
{
	int a, b, c, mul;
	int arr[10] = {};
	std::cin >> a >> b >> c;
	mul = a * b * c;
	while (mul)
	{
		arr[mul % 10]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << '\n';
	}
}
