#include <iostream>
using namespace std;

int main() {
    cout << fixed ;
    
    double a = 9.2; // 피트
    double b = 1.3; // 마일

    double aa = a * 30.48 , bb = b * 160934;
    // 1피트(ft) =30.48cm , 1마일(mi)=160934cm

    cout.precision(1);

    cout << a << "ft = " << aa << "cm";
    cout << endl;
    cout << b << "mi = " << bb << "cm"; 

    return 0;
}