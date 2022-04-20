#include "level1_commonDivMul.h"
#include <iostream>
#include <vector>

// 36 = 2^2 * 3^2
// 60 = 2^2 * 3 * 5
// �ִ����� = 2^2 * 3
// �ּҰ���� = 2^2 * 3^2 * 5
// 
// 2�� ���� �������� 0 count1++
// 3�� ���� �������� 0 count2++
// �� �������� �������� ����   ������ ���� ��ȯ
// 
// �ִ������� count1�� count2�� ���� ���� ������ ���
// �ּҰ������ count1�� count2�� ���� ũ�� ������ ������ ���

std::vector<int> Common(int input)
{
	int count1 = 0, count2 = 0, num = 1;
	std::vector<int> v(3);
	v[2] = num;
	while (input != 1) {
		if (input % 2 == 0) {
			input /= 2;
			count1++;
			v[0] = count1;
		}
		else if (input % 3 == 0) {
			input /= 3;
			count2++;
			v[1] = count2;
		}
		else {
			num = input;
			v[2] = num;
			break;
		}
	}

	return v;
}
void SolvedCommonDivMul()
{
	int n = 36, m = 60;
	int min1, min2, max1, max2;
	std::vector<int> answer, left, right;

	left = Common(n);
	right = Common(m);

	min1 = std::min(left[0], right[0]);
	min2 = std::min(left[1], right[1]);
	int two = std::pow(2, min1);
	int three = std::pow(3, min2);
	answer.push_back(two * three);

	max1 = std::max(left[0], right[0]);
	max2 = std::max(left[1], right[1]);
	two = std::pow(2, max1);
	three = std::pow(3, max2);
	answer.push_back(two * three * left[2] * right[2]);

	std::cout << answer[0] << " " << answer[1] << '\n';
}

// ��Ŭ���� ȣ����
// 2���� �ڿ����� ���ؼ� a�� b�� ���� �������� r( a > b)
// a�� b�� �ִ� ������� b�� r�� �ִ������� ����.
// ���� b�� r�� ���� �������� ���ϴ� ������ �ݺ�
// �������� 0�� �Ǿ��� ��, ������ ���� a�� b�� �ִ������̴�.
// Ex. 24�� 14�� �ִ�����?
//	24 % 14 = 10
//	14 % 10 = 4
//	10 % 4 = 2
//	4 % 2 = 0
// 
// �ּҰ���� = ( a * b ) / �ִ�����;
//
int GCD(int a, int b)
{
	int temp = 0;
	while (b)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

void SolvedOtherDivMul()
{
	int n = 14, m = 24;
	std::vector<int> answer;

	int gcd = GCD(std::max(n, m), std::min(n, m));
	
	answer.push_back(gcd);
	answer.push_back(n * m / gcd);
}