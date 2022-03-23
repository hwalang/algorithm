#include "Bronze1_1546.h"
#include <iostream>

void FrameUpScore(OUT std::vector<float>& v)
{
    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
            max = v[i];
    }

    for (int i = 0; i < v.size(); i++)
        v[i] = ((v[i] / max) * 100);
}

float Average(OUT std::vector<float>& v)
{
    float sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    return (sum / static_cast<float>(v.size()));
}

void Solved1546()
{
    int input, score;
    float average = 0;
    std::vector<float> scores;

    std::cin >> input;
    scores.reserve(input);
    for (int i = 0; i < input; i++)
    {
        std::cin >> score;
        scores.push_back(score);
    }

    FrameUpScore(OUT scores);
    average = Average(OUT scores);

    std::cout << average;
}

void SolvedOther1546()
{
    double input, score, sum = 0, max = 0;
    std::cin >> input;
    for (int i = 0; i < input; i++)
    {
        std::cin >> score;
        sum += score;
        if (score > max)
            max = score;
    }
    std::cout << sum / input * 100 / max;
}
