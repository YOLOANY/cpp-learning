#include <iostream>
using namespace std;

//sizeof()：计算数据类型所占内存空间大小（单位：字节）

int main() {
    short a = 1;
    int b = 1;
    long c = 1;
    long long d = 1;

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;

    return 0;
}
