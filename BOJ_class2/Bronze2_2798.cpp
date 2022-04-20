#include "Bronze2_2798.h"
#include <iostream>

// M을 넘지 않고 M에 가장 가까운 N장의 카드 중 3장의 합

// 순회하면서 모든 경우의 수를 생각해야 한다.
// 그 중 최댓값을 출력

// 순회방식
// - 5개의 원소를 가진 배열을 순회 및 더하기
// 1. [0]원소 + [1][2] || [1][3] || [1][4]
// 2. [0]원소 + [2][3] || [2][4]
// 3. [0]원소 + [3][4]
// 4. [1]원소 + [2][3] || [2][4]
// 5. [1]원소 + [3][4]
// 6. [2]원소 + [3][4]
// 7. [3]원소 + [4][x] -> 순회 종료 조건
//

void Solved2798()
{
	int card, mNum;
	int cards[98];
	scanf_s("%d %d", &card, &mNum);
	for (int i = 0; i < card; i++)
		scanf_s("%d", &cards[i]);

	int max = 0;
	for (int i = 0; i < card - 2; i++) // 쓸데없이 두 번 더 반복함
	{
		for (int j = i + 1; j < card - 1; j++)	// 쓸데없는 반복 막기
		{
			for (int t = j + 1; t < card; t++)
			{
				int sum = cards[i] + cards[j] + cards[t];
				if (sum <= mNum)
					max = std::max(max, sum);
			}
		}
	}
	printf("%d\n", max);
}
