// 26. Числа Фибоначи.cpp 

#include <iostream>
using namespace std;
void fibonachi (int n)
{
    int f1 = 0, f2 = 1, f3 = 0;
    cout << " 1";
    while (f3 <= n) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        cout << f3;
    }
}

int main() {
    fibonachi(6);
}


