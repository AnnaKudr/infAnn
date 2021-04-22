#include <iostream>
using namespace std;
bool soversh(int n)
{
    int s = 0, a;
    a = n;
    for (int k = 1; k < n; k++)
        if (n % k == 0) s += k;
    if (a == s) s = 1;
    else s = 0;
    return s;
}

int main() {
    int x;
    cin >> x;
    if (soversh(x) == 1) cout << "yes";
    else cout << "no";
}
