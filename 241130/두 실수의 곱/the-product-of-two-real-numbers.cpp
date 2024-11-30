#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double a=5.26, b=8.27, c=a*b;

    cout.precision(3);

    cout << c;

    return 0;
}