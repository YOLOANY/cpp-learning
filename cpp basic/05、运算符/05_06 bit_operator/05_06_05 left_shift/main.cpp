#include <iostream>
using namespace std;

/*
左移 << ：整体二进制向左移动n位，右边补0
公式：x << y = x * (2^y) 
*/

int main()
{
    //1.正数左移
    int x = 0b11;   //3
    x = (x << 1);   //0b110 →6
    cout << x << endl;
    cout << "---" << endl;
    cout << (x << 4) << endl; //6 * 16 =96
    cout << "---" << endl;

    //2.负数左移（补码整体左移，右侧补0）
    int y = -1;
    y = (y << 1);
    cout << y << endl; // -2
    cout << "---" << endl;

    //3.左移负数位
    int z = 64;
    // z = (z << (-1)); //错误，不要启用
    cout<<z<<endl;
    cout << "---" << endl;

    //4.左移溢出：int是32位，移出符号位，结果不可预测
    int a = 64;
    a = (a << 31);
    cout << a << endl;
    // 64  = 0b1000000
    // <<31= 0b1...0000000000000000000000

    return 0;
}

