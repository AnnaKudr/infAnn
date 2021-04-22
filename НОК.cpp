#include <iostream>
using namespace std;
int NOK(int a, int b)
{
    int nod, nok;
    while (a != 0 || b != 0) {
        if (a > b) a = a - b;
        if (b > a) b = b - a;
    }
    if (a == 0) nod = b;
    else nod = a;
    nok = a * b / nod;
    return nok;
}