#include "Bronze2_2292.h"
#include <iostream>

// 1									1
// 2 3 4 5 6 7							6	2~7 : 5
// 8 9 10 11 12 13 14 15 16 17 18 19	12	8~19 : 11
// 20 21 22 23 ... 36 37				18	20~37 : 17
// 38
// 첫 주소를 제외하면 6씩 증가한다.

// 각 주소의 방 번호 차이
// 1, 2, 8, 20, 38, 62 -> 1, 6, 12, 18, 24

int Solved2292()
{
	// i : 각 주소의 첫 번째 방을 구하는데 이용
	int n, addr = 1, roomStart = 1;
	std::cin >> n;
	if (n == 1) {
		std::cout << addr << '\n';
		return 0;
	}
	roomStart++;	// 2번 방
	addr++;			// 2번 주소
	if (n <= roomStart + 5) {
		std::cout << addr;
		return 0;
	}

	for (int i = 1; i < n; i++)
	{
		roomStart += (6 * i);	// 8번 방부터 시작
		addr++;					// 3번 주소부터 시작
		int roomLast = roomStart + 6 * (addr - 1) - 1;
		if (n <= roomLast) {
			std::cout << addr;
			break;
		}
	}
}

// 등비수열의 합 이용
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