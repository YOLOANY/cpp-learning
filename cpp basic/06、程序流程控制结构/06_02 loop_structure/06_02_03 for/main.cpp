#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //写法1
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << sum << endl;


    //写法2
    sum = 0;
    int i = 1;
    for (; i <= n; ++i) {
        sum += i;
    }
    cout << sum << endl;


    //写法3
    sum = 0;
    for (sum = 0, i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << sum << endl;


    //写法4 死循环（不要实际运行，会卡死）
    /*
    sum = 0;
    for (sum = 0, i = 1; ; ++i) {
        sum += i;
    }
    cout << sum << endl;
    */


    //写法5
    sum = 0;
    for (sum = 0, i = 1; i <= n; ) {
        sum += i;
        ++i;
    }
    cout << sum << endl;

    return 0;
}
