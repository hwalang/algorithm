#include "Bronze3_10250.h"
#include <iostream>
#include <vector>

// �� + ȣ�� : YYXX �Ǵ� YXX
// ȣ�� ���ڰ� ���� ���� ���� ��ȣ�Ѵ�.

void Solved10250()
{
	int t, h, w, n;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> h >> w >> n;

		// �� element�� �ִ밪 = h
		std::vector<int> apart(w);
		int c, answer, x = 0, y = 0;
		while (n != 0)
		{
			for (c = 1; c <= h; c++)
			{
				apart[x] += 1;
				y = apart[x];
				n--;
				if (n == 0)
					break;
			}
			x++;
		}
		// y�� ����
		// x�� ȣ��
		answer = (y * 100) + x;
		std::cout << answer << '\n';
	}
}

void SolvedOther10250()
{
	int t, h, w, n;
	std::cin >> t;
	while (t--)
	{
		scanf_s("%d %d %d", &h, &w, &n);
		int floor = n % h;
		if (floor == 0) floor = h;	// ������ ��
		int room = ceil((float)n / h);	// �ø�
		printf("%d%02d\n", floor, room);	// 02 : 2�ڸ��� + ��ĭ�� 0
	}
}
