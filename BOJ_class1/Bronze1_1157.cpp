#include "Bronze1_1157.h"
#include <iostream>
#define SIZE 10000001

char result;
char input[SIZE];
char Frequency_alphabet(const char* words)
{
    int maxCount = 0;
    int compareCount = 0;

    // �ݺ����� ���鼭 ���ĺ� �ϳ��� ã�� ������ count ++;

    int ascii = 65; // 65~ 90���� �빮��, 97~122 �ҹ���
    while (ascii != 91)
    {
        // �Է� ���� �ܾ��� ����ŭ �ݺ�
        for (int i = 0; i < strlen(words); i++)
        {
            // ��ҹ��� Ȯ��
            if (words[i] == ascii || words[i] == (ascii + 32))
                compareCount++;
        }
        // ���� maxCount���� �󵵼��� ���� �ܾ �ִٸ�
        if (maxCount < compareCount)
        {
            result = ascii;
            maxCount = compareCount;
        }
        else if (maxCount == compareCount)
            result = '?';

        ascii++;
        compareCount = 0;
    }
    return result;
}

void Solved1157()
{
    scanf_s("%s", input, SIZE);

    result = Frequency_alphabet(input);

    printf("%s", &result);
}
