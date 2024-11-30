#include <iostream>
using namespace std;

int main() {
    double n; // 단위 : ft
    cout << fixed; // 소수점 고정
    cin >> n;
    double nn = n * 30.48; // ft를 cm로 변환 > 1ft = 30.48  
    cout.precision(1); // 소수점 첫째 자리까지
    cout << nn;
    return 0;
}