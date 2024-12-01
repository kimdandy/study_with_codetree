#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double p = a+b; 
    int s = a-b;
    cout << fixed;
    cout.precision(2);
    cout << p/s; // p가 int일경우 double(p)/s

    return 0;
}