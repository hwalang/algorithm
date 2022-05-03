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

	// �ϳ� �̻��� ���� ����
	// ���鹮�� ������ string �ɰ���
	vector<char> inStrings;
	for (int i = 0; i < s.length(); i++) {
		inStrings.push_back(s[i]);

		// ���鹮�ڸ� ������ v�� �����Ѵ�.
		if ((s[i] == ' ' && s[i + 1] != ' ') || (i + 1) == s.length()) {
			v.push_back(inStrings);
			inStrings.clear();
			vector<char>().swap(inStrings);
		}
	}

	// ��ҹ���
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

// ��Ʈ ������ �̿�
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
			// nIndex �� 1�� �����ϸ� 2^0 �ڸ� bit�� 0 �Ǵ� 1�� ���� �����ư��鼭 ������.
			// nIndex�� 1���� �����ؼ� ���� ���ڸ� ���� ������ ��� �����Ѵ�.
			// ���� ���ڸ� ������ nIndex = 0������, for���� �� �� �����ϸ� nIndex = 1�� ���Ѵ�.
			nIndex & 1 ? answer += toupper(s[i]) : answer += tolower(s[i]);
		}
	}
	int b = 0;
}

// �ƽ�Ű�ڵ� �̿�
void SolvedOtherWeirdWord2() {
	string s = "try  hello world";
	string answer = "";

	int c = 2;
	int i;
	for (i = 0; i <= s.size(); i++, c++) {
		if (c % 2 == 0) {
			if (s[i] >= 97 && s[i] <= 122)	// 97 ��� 'a'�� �̿��ص� �ȴ�.
				s[i] = s[i] - 32;
			else if (s[i] == 32)			// 32 -> ���� ����
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