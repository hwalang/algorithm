#include "Bronze2_2798.h"
#include <iostream>

// M�� ���� �ʰ� M�� ���� ����� N���� ī�� �� 3���� ��

// ��ȸ�ϸ鼭 ��� ����� ���� �����ؾ� �Ѵ�.
// �� �� �ִ��� ���

// ��ȸ���
// - 5���� ���Ҹ� ���� �迭�� ��ȸ �� ���ϱ�
// 1. [0]���� + [1][2] || [1][3] || [1][4]
// 2. [0]���� + [2][3] || [2][4]
// 3. [0]���� + [3][4]
// 4. [1]���� + [2][3] || [2][4]
// 5. [1]���� + [3][4]
// 6. [2]���� + [3][4]
// 7. [3]���� + [4][x] -> ��ȸ ���� ����
//

void Solved2798()
{
	int card, mNum;
	int cards[98];
	scanf_s("%d %d", &card, &mNum);
	for (int i = 0; i < card; i++)
		scanf_s("%d", &cards[i]);

	int max = 0;
	for (int i = 0; i < card - 2; i++) // �������� �� �� �� �ݺ���
	{
		for (int j = i + 1; j < card - 1; j++)	// �������� �ݺ� ����
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
