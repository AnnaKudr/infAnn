// Макс и мин значения в массиве и их индекс.cpp 

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
int maxMas(int a[], int p) {
    int max = 0;
    for (int i = 0; i < p; i++)
        if (a[i] > max)max = a[i];
    return max;
}
int minMas(int a[], int p) {
    int min=5;
    for (int i = 0; i < p; i++)
        if (a[i] < min)min = a[i];
    return min;
}

int poiskINDEX(int a[],int p, int x) {
    for (int i = 0; i < p; i++)
        if (a[i] == x) return i;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int const i = 10;
    int a[i];
    masRand(a, i);
    cout << "Максимальное значение: a[" << poiskINDEX(a, i, maxMas(a, i))+1 << "]=  " << maxMas(a, i)<< "\n";
    cout << "Минимальное значение: a[" << poiskINDEX(a, i, minMas(a, i))+1 << "]=  " << minMas(a, i)<< "\n";

}