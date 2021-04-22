// Поиск в массиве рядом стоящих пар одинаковых значений.cpp 
// Поиск Х в массиве.cpp 


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
void poiskPAR(int a[], int i) {
    setlocale(LC_ALL, "Russian");
    int cnt = 0;
    for (int p = 0; p < i-1; p++)
        if (a[p] == a[p+1]) {
            cout << "Есть:  " << a[p] << "\n";
            cnt++;
        }
    if (cnt == 0) cout <<"Не нашли";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int const i = 10;
    int a[i], x;
    masRand(a, i);
    poiskPAR(a, i);

}