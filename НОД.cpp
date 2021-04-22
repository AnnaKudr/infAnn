#include <iostream>
using namespace std;
int NOD(int a, int b)
{
    while (a != 0 || b != 0) {
        if (a > b) a = a - b;
        if (b > a) b = b - a;
    }
    if (a == 0) return b;
    else return a;
}