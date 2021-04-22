// Поиск одинаковых значений в массиве.cpp 

#include <iostream>
#include <ctime>
using namespace std;
void masRand(int* a, int p) {
    srand(time(NULL));
    for (int i = 0; i < p; i++) {
        a[i] = rand() % 6;
        cout << a[i] << "  ";
    }
    cout << "\n";
}
void poisk(int a[], int i, int x) {
    setlocale(LC_ALL, "Russian");
    int cnt = 0;
    for (int p = 0; p < i; p++)
        if (a[p] == x) {
            cnt++;
            cout << "a[" << p << "] = " << x;
        }
    if (cnt == 0) cout << endl << "Не нашли ((";
}
void poiskDuble(int a[], int i) {
    setlocale(LC_ALL, "Russian");
    for (int p = 0; p < i; p++) {
        for (int n = 1; n < i; n++)
            if (a[p] == a[n]) {
                cout << "Есть:  " << a[p] << "\n";
                break;
            }
       continue;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int const i = 10;
    int a[i], x;
    masRand(a, i);
    poiskDuble(a, i);

}