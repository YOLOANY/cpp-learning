#include <iostream>
using namespace std;

/*
^ 异或：相同为0，不同为1
性质：
1. x ^ 0 = x      任何数异或0等于自身
2. x ^ x = 0      相同数字异或结果为0
3. 交换律、结合律
4. 异或 = 无进位二进制加法
*/

int main()
{
    //1.异或定义
    int a = 0b1010;  //10
    int b = 0b0110;  //6
    // a^b = 0b1100 →12
    cout << (a ^ b) << endl;
    cout << "---" << endl;

    //2.标记位取反：对应mask为1的二进制位进行翻转（0变1，1变0）
    int c = 0b1000101;
    cout << c << endl;
    cout << (c ^ 0b1000) << endl;
    cout << ((c ^ 0b1000) ^ 0b1000) << endl; //再异或一次恢复原值
    cout << "---" << endl;

    //3.不用中间变量，异或交换两个变量
    int d = 17;
    int e = 19;
    d = d ^ e;
    e = d ^ e;
    d = d ^ e;
    cout << d << " " << e << endl;
    cout << "---" << endl;

    //5.简单加密解密：同一个key异或两次，还原原数
    int x = 1314;
    cout << "520 " << x << endl;
    int y = (x ^ 3135);     //加密
    cout << "520 " << y << endl;
    cout << "520 " << (y ^ 3135) << endl; //解密

    return 0;
}
