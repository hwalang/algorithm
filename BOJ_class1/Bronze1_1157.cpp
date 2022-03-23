#include "Bronze1_1157.h"
#include <iostream>
#define SIZE 10000001

char result;
char input[SIZE];
char Frequency_alphabet(const char* words)
{
    int maxCount = 0;
    int compareCount = 0;

    // 반복문을 돌면서 알파벳 하나씩 찾을 때마다 count ++;

    int ascii = 65; // 65~ 90까지 대문자, 97~122 소문자
    while (ascii != 91)
    {
        // 입력 받은 단어의 수만큼 반복
        for (int i = 0; i < strlen(words); i++)
        {
            // 대소문자 확인
            if (words[i] == ascii || words[i] == (ascii + 32))
                compareCount++;
        }
        // 현재 maxCount보다 빈도수가 많은 단어가 있다면
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
