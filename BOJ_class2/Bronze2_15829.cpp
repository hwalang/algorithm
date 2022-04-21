#include "Bronze2_15829.h"
#include <iostream>
#include <string>
#include <cmath>

void Solved15829()
{
	const int r = 31;
	const int m = 1234567891;
	int length;
	std::string s;
	std::cin >> length;
	std::cin.ignore();
	std::getline(std::cin, s);

	int hash = 0;
	for (int i = 0; i < length; i++)
	{
		int num = (int)(s[i] - 'a') + 1;
		hash += (num * std::pow(r, i));
	}
	hash %= m;

	std::cout << hash;
}


// pow 사용시 부분 점수만 받는다.
/*
* [ 모듈러 연산 ]
(a * b) mod n = {(a mod n) * (b mod n)} mod n
*/

void SolvedOther15829()
{
	const int m = 1234567891;
	long long r = 1;
	int length;
	std::string s;
	std::cin >> length;
	std::cin >> s;

	long long hash = 0;
	for (int i = 0; i < length; i++)
	{
		hash += (s[i] - 'a' + 1) * r;
		r *= 31;
		r %= m;
	}
	hash %= m;

	std::cout << hash;
}
