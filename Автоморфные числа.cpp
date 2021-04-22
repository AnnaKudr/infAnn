// 10. Автоморфные числа.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void avtomorf(int N) {
    int   c, kv, l = 0, kon, b = 1, p;
    for (c = 1; c <= N; c++) {
        kv = c * c;
        p = kv;
        while (kv > 0) {
            l++;
            kv /= 10;
        }
        while (l > 0) {
            b = b * 10;
            l--;
        }
        kon = c % b;
        if (kon == p)
            cout << c;
        l = 0;
        b = 1;
    }
}


    int main() {
        int N;
        cin >> N;
        avtomorf(N);
        }

