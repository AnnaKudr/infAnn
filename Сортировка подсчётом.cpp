 //Сортировка подсчётом.cpp

#include <iostream>
#include <ctime>
using namespace std;
const int l= 10000;
void cnt_sort1(int* a, int n) {
    int c[l] = { 0 };
    for (int i = 0; i < n; i++)
        c[a[i]]++;
    int b = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c[i]; j++) {
            a[b++] = i;
        }
    }
}
void masVvod(int* a, int p) {
    for (int i = 0; i < p; i++) 
        cin >> a[i];
    
}
        void vivodMas(int a[], int n) {
            for (int i = 0; i < n; i++)
                cout << a[i] << "  ";
            cout << "\n";
        }
int main()
{
    const int k = 100000;
    int n;
    cin >> n;
    int a[k];
    masVvod (a, n);
    cnt_sort1(a, n);
    vivodMas(a, n);
    return 0;
}
