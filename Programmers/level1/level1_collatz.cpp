#include "level1_collatz.h"
#include <iostream>

// overflow ¹æÁö

int Collatz(int num)
{
    long long lg = (long long)num;
    int count = 0;
    while (lg != 1)
    {
        if (lg % 2 == 0)
            lg /= 2;
        else
            lg = lg * 3 + 1;
        count++;
        if (count == 500)
            return -1;
    }
    return count;
}

void SolvedCollatz()
{
	int answer = Collatz(626331);

	std::cout << answer;
}
