#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;
    double c = 1.6;
    int x = -1;

    // if‑else 求a、b较大值
    if (a > b) {
        x = a;
    }
    else {
        x = b;
    }

    // 三目运算符：条件 ? 条件为真取值 : 条件为假取值
    x = (a > b ? a : b);

    // 嵌套三目运算符
    cout << ((a > b) ? ((a > c) ? a : c) : c) << endl;

    return 0;
}
