// 4. Деление дробей.cpp

#include <iostream>
using namespace std;

void drob_del(int& a, int& b, int& c, int& d) {
    int f, s;
    f = a * d;
    s = c * b;
    while (f != s)
        if (f > s) f -= s;
        else s -= f;
    f /= f;
    s /= f;
    a = f;
    b = s;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    drob_del(a, b, c, d);
    cout << a << "/" << b;
}

