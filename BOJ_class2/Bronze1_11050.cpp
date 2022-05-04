#include "Bronze1_11050.h"
#include <iostream>
using namespace std;

// 이항 계수
// n개의 집합 중 k개를 순서없이 고르는 조합의 수
// nCk
// ( n   k ) == n! / (n - k)! * k! 

int Factorial(int n)
{
	/* 시간 초과
	if (n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
	*/
	/* 시간 초과
	int a = n;
	while (--n) a *= n;
	return a;
	*/
	int a = 1;
	for (int i = 1; i <= n; i++) a *= i;
	return a;
}

void Solved11050()
{
	int n, k;
	cin >> n >> k;

	int c = Factorial(n) / (Factorial(n - k) * Factorial(k));
	cout << c;
}
