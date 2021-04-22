// Найти старшую цифру числа.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a;
	while (a >= 1) {
		b = a % 10;
		a /= 10;
	}
		cout << b;
}