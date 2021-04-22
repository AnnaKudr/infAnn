// Метод пузырька. Нахождение количества различных элемеентов.cpp 
#include <iostream>
#include <ctime>
using namespace std;
void masVvod(int* a, int p) {
	for (int i = 0; i < p; i++) {
		cout << "A[" << i << "]=  ";
		cin >> a[i];
	}
}
void masRand(int* a, int p) {
	srand(time(NULL));
	for (int i = 0; i < p; i++) {
		a[i] = rand() % 100;
		cout << a[i] << "  ";
	}
	cout << "\n";

}

void bubble(int *a, int n)
{
	for (int i=0; i<n-1; i++)
		for (int p=n-2; p>=i; p--)
			if (a[p] > a[p + 1]) {
				int t = a[p];
				a[p] = a[p + 1];
				a[p + 1] = t;
			}
}
void vivodMas(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
	cout << "\n";
}

int razl(int a[], int n) {
	bool flag = true;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		flag = true;
		for (int p = i + 1; p < n; i++)
			if (a[i] == a[p]) {
				flag = false;
				break;
	}
		if (flag) cnt++;
	}
	return cnt;
}
int main()
{
		int const i = 10;
		int a[i];
		masVvod(a, i);
		bubble(a, i);
		vivodMas(a, i);
		cout << razl(a, i); //количество различных чисел
}

