#include <iostream>
using namespace std;

int main() {
    int a = 1;
    a = (5 - 6, 8 + 9, 100 / 7);  // 逗号表达式，取最后一项结果：14
    cout << a << endl;

    // 1. 案例1：交换两个变量
    int x = 4;
    int y = 5;
    int tmp = x;
    x = y;
    y = tmp;
    cout << x << ' ' << y << endl;

    // 逗号表达式写法交换
    tmp = x, x = y, y = tmp;
    cout << x << ' ' << y << endl;

    return 0;
}

