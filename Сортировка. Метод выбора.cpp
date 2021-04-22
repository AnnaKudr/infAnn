// Сортировка. Метод выбора.cpp 

#include <iostream>
#include <ctime>
using namespace std;
void mas_random(int* a, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) a[i] = rand() % 100;
}
void mas_print(int* a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << "  ";
    cout << endl;
}
void choice_sort(int* a, int n) {
    int imin;
    for (int i = 0; i < n - 1; i++) {
        imin = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[imin]) imin = j;
        if (i != imin) {
            int t = a[i];
            a[i] = a[imin];
            a[imin] = t;
        }
    }
}
int main()
{
    int const n = 10;
    int a[n];
    mas_random(a, n);
    mas_print(a, n);
    choice_sort(a, n); 
    mas_print(a, n);
}
