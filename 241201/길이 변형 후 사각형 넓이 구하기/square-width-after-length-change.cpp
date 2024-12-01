#include <iostream>
using namespace std;

int main() {
    // 사칙연산 다른 표현법 ; 복합대입 연산자 ) +=
    int l, w;
    cin >> l >> w;
    l += 8;
    w *= 3;
    int s = l*w;
    cout << l << endl <<  w << endl  << s;
    return 0;
}