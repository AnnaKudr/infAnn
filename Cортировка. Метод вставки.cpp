// Cортировка. Метод вставки.cpp 


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
void insertion_sort(int* a, int n) {
        for (int i = 1; i < n; i++) {
            for (int j = i; j > 0 && a[j - 1] > a[j]; j--) {
               
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
        }
    }

int main()
{
    int const n = 10;
    int a[n];
    mas_random(a, n);
    mas_print(a, n);
    insertion_sort(a, n);
    mas_print(a, n);
}