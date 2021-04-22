
#include <iostream>
using namespace std;

void drob_umn(int a, int b, int c, int d) {
    int f, s;
    f = a * c;
    s = d * b;
    while (f != s)
        if (f > s) f -= s;
        else s -= f;
    f /= f;
    s /= f;
    a = f;
    b = s;
    cout << a << "/" << b;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    drob_umn(a, b, c, d);
    
}