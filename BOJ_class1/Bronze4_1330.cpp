#include "Bronze4_1330.h"
#include <iostream>

void Solved1330()
{
    int a, b;
    std::cin >> a >> b;

    if (a > b)
        std::cout << ">" << '\n';
    else if (a < b)
        std::cout << "<" << '\n';
    else
        std::cout << "==" << '\n';
}
