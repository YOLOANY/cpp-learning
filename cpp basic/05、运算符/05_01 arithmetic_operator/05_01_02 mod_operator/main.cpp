#include <iostream>
using namespace std;

 // 1、取模符号和被除数一致
 // 2、取模运算符用于计算余数

int main() {
    int a = 100;
    int b = 9;
    cout << a % b << endl;   // 1

    a = 100;
    b = -9;
    cout << a % b << endl;   // 1

    a = -100;
    b = 9;
    cout << a % b << endl;   // -1

    a = -100;
    b = -9;
    cout << a % b << endl;   // -1

    return 0;
}

