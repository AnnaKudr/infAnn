// 6. Вычитание дробей.cpp 


#include <iostream>
using namespace std;

void drob(int& f, int& s) {
    
    while (f != s)
        if (f > s) f -= s;
        else s -= f;
    f /= f;
    s /= f;
}

int main()
{
    int a, b, c, d, f, m;
    cin >> a >> b >> c >> d;
    m =  b * c- a * d;
    f = d * b;
    drob(m,f);
    cout << m << "/" << f;
}

