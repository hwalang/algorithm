#include "Bronze1_2869.h"
#include <iostream>

// 높이( h ), 낮 이동 거리( a ), 밤 미끌 거리( b, 음수 )
// 며칠이 걸리나?

void Solved2869()
{
	int a, b, h, day = 1, dist = 0;
	// std::cin >> a >> b >> h;
	scanf_s("%d %d %d", &a, &b, &h);

	while (true) {
		dist += a;
		if (dist >= h)
			break;
		else
			dist -= b;
		day++;
	}

	// std::cout << day << '\n';
	printf("%d\n", day);
}


// (h - b)까지 (a - b)씩 이동한다.
// 이를 이용하면 반복문을 사용하지 않고 day를 구할 수 있다.
// 
// day = (h - b) / (a - b)
// day는 (a - b)거리만큼 (h - b)까지 가는데 걸린 기간이다.
// 
// (h - a) % (a - b) != 0 -> day++

void SolvedOther2869()
{
	int a, b, h;
	std::cin >> a >> b >> h;
	
	int day = (h - b) / (a - b);
	if ((h - b) % (a - b) != 0)
		day++;

	std::cout << day << '\n';
}