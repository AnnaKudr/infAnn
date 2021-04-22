#include <iostream>
using namespace std;
int fibonachi_N(int n)
{
    int f1 = 0, f2 = 1, f3 = 0, fN;
    n = n - 1;
    while (n>0) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        fN = f3;
        n--;
    }
    return fN;
}

int main() {
    int N, h;
    cin >> N;
    h = fibonachi_N(N);
    cout << h;
}
