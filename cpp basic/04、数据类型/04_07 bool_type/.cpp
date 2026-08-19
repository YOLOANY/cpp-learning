#include <iostream>
using namespace std;

//bool 判断对错（1和0）

int main() {
    bool flag1 = false;  // 假 0
    bool flag2 = true;   // 真 1
    cout << flag1 << endl << flag2 << endl;
    flag1 = !flag1;
    cout << flag1 << endl << flag2 << endl;
    cout << sizeof(bool) << endl;
    
    return 0;
}
