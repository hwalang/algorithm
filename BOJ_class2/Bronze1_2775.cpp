#include "Bronze1_2775.h"
#include <iostream>
#include <vector>

// a���� bȣ �������� : (a-1)���� 1ȣ���� bȣ������ �� ��� ����ŭ �Բ� ��ƾ� ��
// k���� nȣ���� �� ���� ��� �ֳ�?
// 0���� iȣ���� i���� ��� �ִ�.

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
			// set 0��
			for (int i = 1; i <= n; i++)
				apart[0].push_back(i);
			
			// set 1������ k������
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


// ��͸� �̿��� ����

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
