#include <iostream>
using namespace std;

int main() {
    double a;
    cout << fixed;
    cin >> a;
    double aa = a+1.5;
    cout.precision(2);
    cout << aa;
    return 0;
}