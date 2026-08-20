#include <iostream>
using namespace std;

/*
~ 按位取反：所有二进制位 0变1，1变0
注意：int是32位有符号整数，存储使用补码
公式：-x = ~x + 1  求负数（补码规则）
*/

int main()
{
    //1.按位取反
    int a = 0b00000000000000000000000000000001;
    int b = 0b11111111111111111111111111111110;
    cout << (~a) << endl;   //输出 -2
    cout << b << endl;      //输出 -2
    cout << "---" << endl;

    //0全部位取反，全部二进制位变成1，补码代表 -1
    int c = 0b0;
    cout << (~c) << endl;   //输出 -1
    cout << "---" << endl;

    //2.求相反数公式： ~d + 1
    int d = 18;
    cout << (~d + 1) << endl;  //得到 -18

    return 0;
}

