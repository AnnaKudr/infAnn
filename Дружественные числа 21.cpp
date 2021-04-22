#include <iostream>
using namespace std;
int summaDeliteli(int a) {
	int sd = 0;
	for (int k = 1; k * k <= a; k++) {
		if (a % k == 0) sd += k;
		return sd;
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	if (summaDeliteli(a) == summaDeliteli(b)) cout << "drug";
	else cout << "nedrug";
}