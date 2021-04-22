// Нахождение Х в уравнении вида ах+в=0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "ax+b=0\n" << "Введите а: " ;
	cin >> a;
	cout <<  a << "x+b=0\n" << "Введите b: ";
	cin >> b;
	if (a == 0 && b != 0) cout << a << "x+" << b << "=0\n" << "Решений нет ";
	else
	cout << a << "x+" <<b<< "=0\n" << "Ответ: " << (double) b/a;
}

