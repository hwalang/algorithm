#include "Bronze1_2869.h"
#include <iostream>

// ����( h ), �� �̵� �Ÿ�( a ), �� �̲� �Ÿ�( b, ���� )
// ��ĥ�� �ɸ���?

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


// (h - b)���� (a - b)�� �̵��Ѵ�.
// �̸� �̿��ϸ� �ݺ����� ������� �ʰ� day�� ���� �� �ִ�.
// 
// day = (h - b) / (a - b)
// day�� (a - b)�Ÿ���ŭ (h - b)���� ���µ� �ɸ� �Ⱓ�̴�.
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