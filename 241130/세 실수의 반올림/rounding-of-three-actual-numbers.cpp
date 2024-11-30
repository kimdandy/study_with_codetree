#include <iostream>
using namespace std;

int main() {
    double a, b,c;
    cout << fixed;
    cin >> a >> b >> c; // 1.1278\n85.21344\n577.999564 입력
    cout.precision(3);
    cout << a << endl << b << "\n" << c;
    return 0;
}