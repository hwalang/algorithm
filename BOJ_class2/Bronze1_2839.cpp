#include "Bronze1_2839.h"
#include <iostream>

// 3, 5 kg ������ ����
// �ּ����� ������ N kg ������ ���
// 4 -> -1 ( x )
// 11 -> 3 ( 3, 3, 5 )
// 18 -> 4 ( 3, 5, 5, 5 )
// 27 -> 7 ( 3, 3, 3, 3, 5, 5, 5 )
// 
// 27 - 3 = 24 % 5 = 4
// 24 - 3 = 21 % 5 = 1
// 21 - 3 = 18 % 5 = 3 -> ��
// 
// 4 - 3 = 1 -> ��, -1
// 
// 11 - 3 = 8 % 5 = 3 ��
// 
// 18 - 3 = 15 % 5 = 0 ��
//

void Solved2839()
{
	int weight, temp, store3 = 0, store5 = 0, answer;
	std::cin >> weight;

	// 3�� ���鼭 5�� ��������.
	// weight = 1, 2, 4, ... �� ��� -1�� �ȴ�.
	while (true) {
		temp = weight - 3;
		store3++;
		if (temp % 5 == 3 || temp % 5 == 0) {
			// ������ ����
			answer = store3 + store5 + 1;
			std::cout << answer << '\n';
			break;
		}
	}
}

// N�� 5�� ���� ��, 3���� ���� �������� ����
// �ƴϸ� N - 5�� �ϸ鼭 �ݺ�

void SolvedOther2839()
{
	int weight, store3 = 0, store5 = 0;
	std::cin >> weight;

	store5 = weight / 5;
	while (true) {
		if (store5 < 0)
			break;
		else if ((weight - (5 * store5)) % 3 == 0) {
			store3 = (weight - (5 * store5)) / 3;
			break;
		}
		store5--;
	}
	std::cout << store3 + store5 << '\n';
}
