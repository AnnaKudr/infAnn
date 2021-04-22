// Реверс двух половин массива.cpp 
#include <iostream>
#include <ctime>
using namespace std;

void masRand(int* a, int p) {
    srand(time(NULL));
    for (int i = 0; i < p; i++) {
        a[i] = rand() % 6;
        cout << a[i] << "  ";
    }

}

void revers(int* A, int N) {
    for (int i = 0; i < (N / 2); i++)
    {
        int c = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = c;
    }
    
}

int main(){

    setlocale(LC_ALL, "Russian");
    int const i = 10, b=10;
    int a[i],d[b];
    masRand(a, i);
    cout << "\n";
    revers(a, i);

    for (int k = 0; k < i; k++) {
        if (k < (i / 2)) cout << a[k * 2];
        if (k ==0) cout << a[k/2+1];
        if (k > (i / 2)) cout << a[k / 2];
    }
    return 0;

}