#include <iostream>
using namespace std;

/// Q. 영문자 a와 정수 b가 주어지면, 영문자 a에 해당하는 아스키코드 번호와, 숫자 b 번호에 해당하는 아스키 문자를 출력하는 프로그램을 작성해보세요.
int main() {
    char a;
    int b; // 33 ≤ b ≤ 126
    cin >> a >> b;

    cout << (int)a << " " << (char)b;
    return 0;
}