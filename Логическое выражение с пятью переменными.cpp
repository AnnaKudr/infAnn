// Логические выражения.cpp 

#include <iostream>
using namespace std;
bool f(bool x, bool y, bool z) {
	return (x && y || z);
}

int main()
{
	int i;
	bool x1, x2, x3, x4, x5;
	cout << "x1" << " " << 'x2' << " " << 'x3' << 'x4' << 'x5' << 'F' << "\n";
	for (i = 0; i < 32; i++) {
		x5 = i % 2;
		x4 = (i / 2) % 2;
		x3 = (i / 4) % 2;
		x2 = (i / 8) % 2;
		x1 = (i / 16) ;
		cout << x1 << " " << x2 << " " << x3 << "  " << x4 << "  " << x5 << "  ";
		//if (f(x1, x2, x3, x4, x5)) cout << f(x1, x2, x3, x4, x5) << "\n";
	}
}