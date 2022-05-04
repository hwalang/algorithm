#include "Bronze1_11050.h"
#include <iostream>
using namespace std;

// ���� ���
// n���� ���� �� k���� �������� ���� ������ ��
// nCk
// ( n   k ) == n! / (n - k)! * k! 

int Factorial(int n)
{
	/* �ð� �ʰ�
	if (n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
	*/
	/* �ð� �ʰ�
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
