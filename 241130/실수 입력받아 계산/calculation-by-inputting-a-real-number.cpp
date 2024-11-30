#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << fixed;
    cin >> a >> b; // 5.26\n3.14 입력
    cout.precision(2);
    cout << a+b;

    return 0;
}