#include "Bronze1_1152.h"
#include <iostream>
#include <string>
using namespace std;


void Solved1152()
{
    int count = 0;
    string input;
    getline(cin, input);

    while (input.length() > 1000000)
    {
        input.clear();
        getline(cin, input);
    }

    if (input.length() > 1)    // ���鹮�ڸ� ���� ���� ����
    {
        for (int i = 0; i < input.length(); i++)
        {
            // ó�� ���� ����
            if (i == 0)
                if (input[i] == ' ')
                    continue;
            // ������ ���� ����
            if (i == input.length() - 1)
                if (input[i] == ' ')
                    break;

            if (input[i] == ' ')
                count++;
        }
        count++;
    }
    else
    {
        if (input[0] != ' ')
            count++;
    }

    cout << count << endl;
}