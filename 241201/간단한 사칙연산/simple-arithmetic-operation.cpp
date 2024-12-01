#include <iostream>
using namespace std;

int main() {
    // 사칙연산 ; 덧셈(+), 뺄셈(-), 곱셈(*), 나눗셈(/), 나머지(%)
    // 연산 실행시 실수 값을 받고 싶다면 연산 항중 실수type 필요
    int a, b;
    cin >> a >> b;
    int p = a+b, s = a-b, d =a/b, l=a%b;
    cout << p << endl << s << endl << d << endl << l;
    return 0;
}
// (double)a : 정수형 변수 a를 실수형으로 변경