#include <iostream>
using namespace std;

int main() {
    // 실수 입력 ; double
    double n;
    cout << fixed; //소수점 고정
    cin >> n;
    cout.precision(2);
    cout << n;

    return 0;
}