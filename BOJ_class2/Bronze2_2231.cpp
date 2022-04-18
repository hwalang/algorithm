#include "Bronze2_2231.h"
#include <iostream>
#include <string>

// ������ = �ڿ���( ������ ) + �� �ڸ����� ��

// m = 9 -> n = 18					n - m = 9
// m = 99 -> n = 99 + 18 = 117		n - m = 18
// m = 999 -> n = 999 + 27 = 1026	n - m = 27
// m = 1 -> n = 2					n - m = 1
// m = 10 -> n = 11					n - m = 1
// m = 100 -> n = 101				n - m = 1
// n = 2, 4, 6, 8�� ���� �Ű�Ƚᵵ �ǰڴ�.
// m�� ������ �Ǹ� ������ n�̶� ���� ���� ����.
// 

void Solved2231()
{
	int n;	// ������
	int m;	// ������
	int result = 1;
	std::cin >> n;
	// ���� ���� ������ ���ϱ�
	std::string s = std::to_string(n);
	int count = s.length();
	for (m = (n - 9 * count); m < n; m++)
	{
		int sum = 0;
		std::string ms = std::to_string(m);
		for (int i = 0; i < ms.length(); i++)
			sum += ((int)ms[i] - '0');
		if (n == (m + sum)) {
			std::cout << m;
			result--;
			break;	// return 0; �� main �����⵵ ����
		}
	}
	if (result)
		std::cout << 0;
}
