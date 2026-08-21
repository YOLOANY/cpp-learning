#include <iostream>
using namespace std;

// 函数声明
int add(int, int);
void func2(int);

void func1(int x) {
    if (x <= 0) {
        cout << x << endl;
        }
    cout << "func1:" << x << endl;        
    func2(x - 1);
}

void func2(int x) {
    cout << "func2:" << x << endl;
    func1(x-1);
}

int main() {
    int x, y;
    cin >> x >> y;
    int z = add(x, y);
    cout << z << endl;
    
    func1(10);
    return 0;
}

int add(int a, int b) {
    return a + b;
}

