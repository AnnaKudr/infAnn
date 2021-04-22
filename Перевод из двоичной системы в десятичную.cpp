// Перевод из двоичной системы в десятичную.cpp 

#include <iostream>
using namespace std;
void BinPer(int x) {
	if (x >= 2) {
		BinPer(x / 2);
	}
	cout << x % 2;
}

int DecPer(int x) {
	if (x!=0)
	return x % 10 + DecPer(x / 10) * 2;
	return 0;
}
int main()
{
	int x;
	cin >> x;
	cout << DecPer(x);
}
