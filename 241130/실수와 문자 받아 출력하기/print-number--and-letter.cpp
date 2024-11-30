#include <iostream>
using namespace std;

int main() {
    char c;
    double a , b;
    cout << fixed;
    cin >> c >>  a >> b;
    cout.precision(2);
    cout << c << endl << a << "\n" << b;
    return 0;
}