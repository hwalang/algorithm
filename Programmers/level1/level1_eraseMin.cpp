#include "level1_eraseMin.h"
#include <vector>
#include <iostream>
#include <algorithm>

void SolvedEraseMin()
{
	std::vector<int> arr = { 4, 3, 2, 1 };
	// std::vector<int> arr = { 10 };
	std::vector<int> answer;

	if (arr.size() != 1) {
		int minIndex = 0;
		for (int i = 1; i < arr.size(); i++)
		{
			if (arr[minIndex] >= arr[i])
				minIndex = i;
		}
		arr.erase(arr.begin() + minIndex);
		answer = arr;
	}
	else
		answer.push_back(-1);

	for (int i = 0; i < answer.size(); i++)
		printf("%d ", answer[i]);
}

void SolvedOtherEraseMin()
{
	std::vector<int> arr = { 4, 3, 2, 1 };
	// std::vector<int> arr = { 10 };
	std::vector<int> answer;
	
	if (arr.size() == 1)
		answer.push_back(-1);

	arr.erase(std::min_element(arr.begin(), arr.end()));
	answer = arr;
	for (int i = 0; i < answer.size(); i++)
		printf("%d ", answer[i]);
}
