#include <iostream>
#include <string>      //string在该头文件中
using namespace std;

/*
char 变量名[] = "字符串常量";
*/

int main() {
    char a[] = "we are the champions";    //C语言版字符串
    cout << sizeof(a) << endl;
    cout << a << endl;

    string b = "we are the world";        //注意要头文件string
    cout << b + ":" << endl;

    return 0;
}
