// Перевод в двоичную систему счисления.cpp 

#include <iostream>
using namespace std;
void BinPer(int x) {
	if (x >= 2) {
		BinPer(x/2);
	}
	cout << x % 2;
}

int main()
{
	int x;
	cin >> x;
	BinPer(x);
}
