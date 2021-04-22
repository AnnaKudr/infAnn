// Бинарная угадайка

#include <iostream>
using namespace std;

int main()
{
	char a;
	int d, c;
	c = 50;
	d = 50;
	cout << d << "?";
	cin >> a;

	while (a != '=') {
		c = (c+1) / 2;
		if (a == '<') {
			d = d - c;
			cout << d << "?";
		}
		if (a == '>') {
			d = d + c;
			cout << d << "?";
		}cin >> a;
	}

	if (a == '=') {
		cout << "COOL\n";
	}
	else {
		return 0;
	}
}