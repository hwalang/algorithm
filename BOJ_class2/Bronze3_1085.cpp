#include "Bronze3_1085.h"
#include <iostream>
#include <cmath>

// (x, y)���� ��輱������ �Ÿ� �ּڰ�
// x, y, (w-x), (h-y) �߿��� ���� ���� ��

void Solved1085()
{
	int x, y, w, h, a, b, min;
	std::cin >> x >> y >> w >> h;
	
	a = std::min(x, y);
	b = std::min((w - x), (h - y));
	min = std::min(a, b);
	std::cout << min << '\n';
}

void SolvedOther1085()
{
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	std::cout << std::min(std::min(x, w - x), std::min(y, h - y));
}
