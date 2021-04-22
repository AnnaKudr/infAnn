#include <iostream>
using namespace std;
int perevorot(int a)
{
	int p = 0;

	while (a > 0)
	{
		p = (a % 10) * 10 + p*10;
		a /= 10;
	}
	p /= 10;
	return p;
}
int main() {
	int p;
	cin >> p;
	cout << perevorot(p);

}