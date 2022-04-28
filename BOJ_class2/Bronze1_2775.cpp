#include "Bronze1_2775.h"
#include <iostream>
#include <vector>

// a층의 b호 입주조건 : (a-1)층의 1호부터 b호까지의 총 사람 수만큼 함께 살아야 함
// k층의 n호에는 몇 명이 살고 있나?
// 0층의 i호에는 i명이 살고 있다.

void Solved2775()
{
	int t, k, n;
	std::cin >> t;
	while (t) {
		int sum = 0;
		std::cin >> k >> n;

		if (k == 0)
			std::cout << n << '\n';
		else {
			std::vector<std::vector<int>> apart(k + 1);
			// set 0층
			for (int i = 1; i <= n; i++)
				apart[0].push_back(i);
			
			// set 1층부터 k층까지
			for (int i = 1; i <= k; i++) {
				apart[i].resize(n);
				for (int j = 0; j < n; j++) {
					sum += apart[i - 1][j];
					apart[i][j] = sum;
				}
				sum = 0;
			}
			std::cout << apart[k][n - 1] << '\n';
		}
		t--;
	}
}


// 재귀를 이용한 예시

int GetNum(int k, int n)
{
	if (n == 1)
		return 1;
	if (k == 0)
		return n;
	return (GetNum(k - 1, n) + GetNum(k, n - 1));
}

void SolvedOther2775()
{
	int t, k, n;
	std::cin >> t;
	while (t--) {
		std::cin >> k >> n;
		std::cout << GetNum(k, n) << '\n';
	}
}
