// Поиск Х в массиве.cpp 


#include <iostream>
#include <ctime>
using namespace std;
void masRand (int* a, int p) {
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
            cout << "a[" << p << "] = " << x<< "\n";
        }
    if (cnt == 0) cout << endl << "Не нашли ((";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int const i = 5;
    int a[i], x;
    cout << "Что ищем?"<< endl;
    cin >> x;
    masRand(a, i);
    poisk(a, i, x);

}