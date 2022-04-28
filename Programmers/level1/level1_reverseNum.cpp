#include "level1_reverseNum.h"
#include <iostream>
#include <vector>
using namespace std;

void SolvedReverseNum()
{
	long long num = 12345;
	vector<int> answer;

	while (num) {
		int q = num % 10;
		answer.push_back(q);

		num = num / 10;
	}
}
