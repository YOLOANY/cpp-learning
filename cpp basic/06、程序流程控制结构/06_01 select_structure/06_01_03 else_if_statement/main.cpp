#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a == 0) {
        cout << "我不喜欢你" << endl;
    }
    else if (a == 1) {
        cout << "我喜欢你" << endl;
    }
    else if (a == 2) {
        cout << "我很喜欢你" << endl;
    }
    else if (a == 3) {
        cout << "我特别喜欢你" << endl;
    }
    else {
        cout << "我超级喜欢你" << endl;
    }

    return 0;
}
