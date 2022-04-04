#include "Bronze2_3052.h"
#include <iostream>

void Solved3052()
{
	int inputs[10] = {};
	int count = 0;
	bool same = false;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> inputs[i];
		inputs[i] = inputs[i] % 42;
		same = false;
		for (int j = 0; j < i; j++)
		{
			if (i == j)
				continue;
			if (inputs[i] == inputs[j])
			{
				same = true;
				break;
			}
		}
		if (same == false)
			count++;
	}
	printf("%d\n", count);
}

void SolvedOther3052()
{
	int inputs[42] = {}, count = 0;
	for (int i = 0; i < 10; i++)
	{
		int num;
		scanf_s("%d", &num);
		inputs[num % 42]++;
		if (inputs[num % 42] == 1)
			count++;
	}
	printf("%d\n", count);
}

