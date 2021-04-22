#include <iostream>
using namespace std;
bool prosto(int n)
{
    bool flag = true;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = false;
            break;
    }
    return flag;
   
}

int main() {
    int x;
    cin >> x;
    if (prosto(x) == true) cout << "yes";
    else cout << "no";
}
