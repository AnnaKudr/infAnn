// 22. Макс и мин числа в строке до 0.cpp

#include <iostream>
using namespace std;
int max()
{
    double a, b, max = 0;
    cin >> a;
    while (a != 0) {
        if (a > max) max = a;
        cin >> a;
    }
    return max;
}

int min()
{
    double a, b, min;
    cin >> a;
    min = a;
    while (a != 0) {
        if (a < min) min = a;
        cin >> a;
    }
    return min;
}
