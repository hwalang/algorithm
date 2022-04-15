#include "level1_matrixSum.h"
#include <iostream>
#include <vector>
using namespace std;

void SolvedSumMatrix()
{
    vector<vector<int>> arr1{ {1,2}, {2,3} };
    vector<vector<int>> arr2{ {3,4},{5,6} };

	vector<vector<int>> answer;
    answer.resize(arr1.size()); // �� vector 2�� ����
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            answer[i].push_back(arr1[i][j] + arr2[i][j]);
        }
    }    
}
