#include<iostream>
using namespace std;

#define X 1+2     //define是直接替换该部分
const int x=7;    //const是定义一个变量，该变量不能改变

int main()
{
    cout << X*X << endl;
    cout << "x=" << x << endl;

    return 0;
}