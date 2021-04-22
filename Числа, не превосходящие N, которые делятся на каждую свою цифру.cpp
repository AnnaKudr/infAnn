// 8. Числа, не превосходящие N, которые делятся на каждую свою цифру.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void ch_del(int N) {
    int   c, a = 0, k = 0, l;
    for (c = 1; c <= N; c++) {
        l = c;
        while (l > 0) {
            k = l % 10;
            if (c % k == 0) a = a;
            else a++;
            l = l / 10;
        }
        if (a == 0) cout << c << "\n";
        a = 0;
    }
}
