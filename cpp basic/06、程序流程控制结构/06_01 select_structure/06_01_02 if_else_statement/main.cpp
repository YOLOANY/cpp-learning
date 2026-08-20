#include <iostream>
#include <string>   // 使用string字符串必须要这个头文件
using namespace std;

int main() {
    int x;
    string y = "添砖";
    cin >> x;

    if (x & 1) {   // x & 1 判断是否奇数
        cout << "x 是一个你太美数" << endl;
        y = y + "Java";   // 字符串拼接
    }
    else {
        cout << "x 是一个不太美数" << endl;
    }

    cout << y << endl;
    return 0;
}

