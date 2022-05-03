#include "level1_createWeirdWord.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


void SolvedWeirdWord()
{
	string s = "try  hello world";
	string answer = "";

	vector<vector<char>> v;

	// 하나 이상의 공백 문자
	// 공백문자 단위로 string 쪼개기
	vector<char> inStrings;
	for (int i = 0; i < s.length(); i++) {
		inStrings.push_back(s[i]);

		// 공백문자를 만나면 v에 저장한다.
		if ((s[i] == ' ' && s[i + 1] != ' ') || (i + 1) == s.length()) {
			v.push_back(inStrings);
			inStrings.clear();
			vector<char>().swap(inStrings);
		}
	}

	// 대소문자
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (j % 2 == 0) 
				v[i][j] = toupper(v[i][j]);
			else 
				v[i][j] = tolower(v[i][j]);
			answer += v[i][j];
		}
	}
}

// 비트 연산자 이용
void SolvedOtherWeirdWord1() {
	string s = "try  hello world";
	string answer = "";

	int nIndex = 1;
	for (int i = 0; i < s.size(); i++, nIndex++)
	{
		if (s[i] == ' ')
		{
			nIndex = 0;
			answer += " ";
		}
		else {
			// nIndex 가 1씩 증가하면 2^0 자리 bit는 0 또는 1의 값을 번갈아가면서 가진다.
			// nIndex는 1부터 시작해서 공백 문자를 만날 때까지 계속 증가한다.
			// 공백 문자를 만나면 nIndex = 0이지만, for문을 한 번 수행하면 nIndex = 1로 변한다.
			nIndex & 1 ? answer += toupper(s[i]) : answer += tolower(s[i]);
		}
	}
	int b = 0;
}

// 아스키코드 이용
void SolvedOtherWeirdWord2() {
	string s = "try  hello world";
	string answer = "";

	int c = 2;
	int i;
	for (i = 0; i <= s.size(); i++, c++) {
		if (c % 2 == 0) {
			if (s[i] >= 97 && s[i] <= 122)	// 97 대신 'a'를 이용해도 된다.
				s[i] = s[i] - 32;
			else if (s[i] == 32)			// 32 -> 공백 문자
				c = 1;

		}
		else {
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = s[i] + 32;
			else if (s[i] == 32)
				c = 1;
		}
	}
	answer = s;
}