// 6. N псевдослучайных чисел.cpp 

#include <iostream>
#include <cstdlib>
using namespace std;

void randN (int N) {
    int a = 0, c;
    for (c = N; c >= 0; c--) {
        a = rand();
        cout << a << "\n";
    }
}

int main() {
    int N;
    cin >> N;
    randN(N);
}
