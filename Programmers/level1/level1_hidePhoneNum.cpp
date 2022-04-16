#include "level1_hidePhoneNum.h"
#include <iostream>
#include <string>
using namespace std;

void SolvedHidePhoneNum()
{
	// string phone_number = "01033334444";
	string phone_number = "027778888";
	string answer = "";
	
	for (int i = 0; i < phone_number.length() - 4; i++)
		phone_number[i] = '*';	
	answer = phone_number;

	cout << answer << '\n';
}

void SolvedOther()
{
	// string phone_number = "01033334444";
	string phone_number = "027778888";
	string answer = phone_number;

	// replace(시작위치, 문자열 길이, 교체할 문자열);
	for (int i = 0; i < answer.length() - 4; i++)
		answer.replace(i, 1, "*");

	cout << answer << '\n';
}
