// Делимость.cpp 
#include <iostream>
using namespace std;
bool f(int x, int a) {
    return (x % a != 0 || x%24!=0 || x%16==0); //запись на языке программирования логического выражения условия задачи
}

int main()
{
    bool flag;
    for (int a =0; a < 1000; a++) { 
        // Если ищем максимальное а, то запускаем цикл от конца множества к нулю.
        //Если ищем минимальное значение, то запускаем цикл от 0.
        flag = true;
        for (int x = 0; x < 10000 && flag; x++)
            flag = f(x, a);
        if (flag) {
            cout << a;
            return 0;
        }
    }
}