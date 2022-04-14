#include "Bronze3_10951.h"
#include <iostream>

void Solved10951()
{
	int num1, num2;
	while (true)
	{
		std::cin >> num1 >> num2;
		if (std::cin.eof() == true)
			break;		
		std::cout << num1 + num2 << '\n';
	}
	/*
	while (scanf("%d %d", &num1, &num2) == 2)
		std::cout << num1 + num2 << '\n';
	while (scanf("%d %d", &num1, &num2) != -1)
		std::cout << num1 + num2 << '\n';
	while (scanf("%d %d", &num1, &num2) != EOF)
		std::cout << num1 + num2 << '\n';
	*/
}
