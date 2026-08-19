#include <iostream>
#include <iomanip>     //setprecision(保留小数)在该头文件中
#include <cmath>       //fabs(绝对值)在该头文件中 
using namespace std;

#define eps 1e-7

int main() {
    float a = 13.1415926f;
    double b = 13.1415926111111111111111111111111111111111111;
    double c = 1.5e5;   // 1.5 x 100000
    double d = 1.5e-5;  // 1.5 x 10-5

    cout << setprecision(10) << a << endl;    //保留10位小数
    cout << setprecision(26) << b << endl;    //保留26位小数
    cout << c << endl;
    cout << d << endl;

    double x = 1.0 / 234324247 * 234324247;
    if ( fabs(x - 1) < eps ) {                //fabs()：取绝对值
        cout << "hhh" << endl;
    }

    cout << x << endl;

    return 0;
}
