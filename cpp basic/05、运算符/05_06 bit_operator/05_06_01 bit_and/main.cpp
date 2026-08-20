#include <iostream>
using namespace std;

/*
&   按位与：有0必0
&&  逻辑与：有假必假
*/

int main() {
    // 1.位与运算符的定义
    int a = 0b1010;   // 10
    int b = 0b0110;   // 6
    // a & b = 0b0010 → 2
    cout << (a & b) << endl;
    cout << "---" << endl;

    // 2.判断奇偶性
    cout << 5 % 2 << endl;       // %取模，判断奇偶
    cout << (5 & 1) << endl;     // &按位与，看二进制最后一位，1奇数，0偶数
    cout << "---" << endl;

    // 3.获取一个数二进制的末5位
    int c = 0b1010010101001;
    cout << (c & 0b11111) << endl;
    cout << "---" << endl;

    // 4.将末5位归0
    int d = 0b11111111111111111111111111100000;
    cout << (c & d) << endl;
    cout << "---" << endl;

    // 5.消除末尾连续的1
    int e = 0b101010111111;
    cout << (e & (e + 1)) << endl;
    cout << "---" << endl;

    // 6.判断是不是2的幂
    int f = 0b100000000;
    // 大于0，并且 f & (f‑1)等于0，就是2的幂
    bool res = (f > 0) && ((f & (f - 1)) == 0);
    cout << res << endl;

    return 0;
}

