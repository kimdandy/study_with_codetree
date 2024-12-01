#include <iostream>
using namespace std;

int main() {
    // 합과 평균
    int a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(1);
    cout << a + b << " " << double(a+b)/2; // 출력줄에서 계산하는 것도 가능
    return 0;
}