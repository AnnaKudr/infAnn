// Алгоритм Евклида (рекурсия.cpp 
#include <iostream>
using namespace std;
int NOD(int a, int b)
{
    if (a != 0 || b != 0) {
        if (a > b) NOD(a%b,  b);
        if (b > a) NOD(a, b%a);
    }
    return a + b;
}

int main()
{
    int x, y;
    cin >> x >> y;
    NOD(x, y);
}

