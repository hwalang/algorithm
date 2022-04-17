#include "Bronze3_10250.h"
#include <iostream>
#include <vector>

// 층 + 호실 : YYXX 또는 YXX
// 호실 숫자가 가장 작은 방을 선호한다.

void Solved10250()
{
	int t, h, w, n;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> h >> w >> n;

		// 각 element의 최대값 = h
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
		// y는 층수
		// x는 호실
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
		if (floor == 0) floor = h;	// 마지막 층
		int room = ceil((float)n / h);	// 올림
		printf("%d%02d\n", floor, room);	// 02 : 2자리수 + 빈칸은 0
	}
}
