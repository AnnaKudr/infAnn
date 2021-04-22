// Нахождение площади  треугольника.cpp

#include <iostream>
#include  <cmath>
using namespace std;

int main()
{
    int x, y, a, b, c, e;
    cin >> x >> y >> a >> b >> c >> e;
    cout << 0.5 * abs((x - c) * (b - e) - (a - c) * (y - e));
}
