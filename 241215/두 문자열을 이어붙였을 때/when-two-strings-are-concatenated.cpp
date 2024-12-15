#include <iostream>
using namespace std;

/// Q. 두 문자열 A, B을 이어붙여서 새로운 문자열 A + B , B + A 을 만들었을 때, 두 문자열이 같은지 비교하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string a; // 1 ≤ 문자열 A의 길이 ≤ 100
    cin >> a;

    string b; // 1 ≤ 문자열 B의 길이 ≤ 100
    cin >> b;

    string ab = a + b;
    string ba = b + a;

    if(ab == ba) cout << "true";
    else cout << "false";

    return 0;
}