// Рандом массив + 2 средних арифм.cpp 

#include <iostream>
#include <ctime>
using namespace std;
void masRand(int* a, int p) {
    srand(time(NULL));
    for (int i = 0; i < p; i++) {
        a[i] = rand() % 100;
        cout << a[i] << "  ";
    }
    cout << "\n";

}
void mediumSum(int a[], int i) {
    setlocale(LC_ALL, "Russian");
    int sum1 = 0, cnt1 = 0, cnt2 = 0, sum2 = 0;
    for (int n = 0; n < i; n++) {
        if (a[n] < 50) { cnt1++; sum1 += a[n]; }
        else { cnt2++; sum2 += a[n]; }
    }
    cout <<"Ср.арифм.элементов[0, 50):   " << (float)sum1 / cnt1 << "\n";
    cout << "Ср. арифм. элементов [50,100]:  "<<(float)sum1 / cnt2;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int const i = 15;
    int a[i];
    masRand(a, i); 
    mediumSum(a, i);
    
}