#include "Bronze1_2839.h"
#include <iostream>

// 3, 5 kg 봉지가 있음
// 최소한의 봉지로 N kg 설탕을 배달
// 4 -> -1 ( x )
// 11 -> 3 ( 3, 3, 5 )
// 18 -> 4 ( 3, 5, 5, 5 )
// 27 -> 7 ( 3, 3, 3, 3, 5, 5, 5 )
// 
// 27 - 3 = 24 % 5 = 4
// 24 - 3 = 21 % 5 = 1
// 21 - 3 = 18 % 5 = 3 -> 끝
// 
// 4 - 3 = 1 -> 끝, -1
// 
// 11 - 3 = 8 % 5 = 3 끝
// 
// 18 - 3 = 15 % 5 = 0 끝
//

void Solved2839()
{
	int weight, temp, store3 = 0, store5 = 0, answer;
	std::cin >> weight;

	// 3을 빼면서 5로 나눠본다.
	// weight = 1, 2, 4, ... 일 경우 -1이 된다.
	while (true) {
		temp = weight - 3;
		store3++;
		if (temp % 5 == 3 || temp % 5 == 0) {
			// 끝나는 조건
			answer = store3 + store5 + 1;
			std::cout << answer << '\n';
			break;
		}
	}
}

// N을 5로 나눈 후, 3으로 나눠 떨어지면 정답
// 아니면 N - 5를 하면서 반복

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
