#include "Bronze2_2292.h"
#include <iostream>

// 1									1
// 2 3 4 5 6 7							6	2~7 : 5
// 8 9 10 11 12 13 14 15 16 17 18 19	12	8~19 : 11
// 20 21 22 23 ... 36 37				18	20~37 : 17
// 38
// ù �ּҸ� �����ϸ� 6�� �����Ѵ�.

// �� �ּ��� �� ��ȣ ����
// 1, 2, 8, 20, 38, 62 -> 1, 6, 12, 18, 24

int Solved2292()
{
	// i : �� �ּ��� ù ��° ���� ���ϴµ� �̿�
	int n, addr = 1, roomStart = 1;
	std::cin >> n;
	if (n == 1) {
		std::cout << addr << '\n';
		return 0;
	}
	roomStart++;	// 2�� ��
	addr++;			// 2�� �ּ�
	if (n <= roomStart + 5) {
		std::cout << addr;
		return 0;
	}

	for (int i = 1; i < n; i++)
	{
		roomStart += (6 * i);	// 8�� ����� ����
		addr++;					// 3�� �ּҺ��� ����
		int roomLast = roomStart + 6 * (addr - 1) - 1;
		if (n <= roomLast) {
			std::cout << addr;
			break;
		}
	}
}

// �������� �� �̿�
void SolvedOther2292()
{
	int num;
	std::cin >> num;
	int i = 0;

	for (int sum = 2; sum <= num; i++)
		sum += (6 * i);

	if (num == 1) i = 1;
	std::cout << i;
}