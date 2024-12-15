#include <iostream>
using namespace std;
//// 문자열 붙이기
// c++에서는 문자열끼리 + 연산이 가능
// c++에서는 string 헤더의 append() 함수를 이용 가능
/*
string a = "apple", b = "banana";
a.append(b);
cout << a;

>> applebanana
*/

/// Q. 알파벳으로 이루어진 문자열이 주어지면 뒤에 'Hello'를 붙여서 저장하고 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // strlen : ~20
    cin >> str;

    str += "Hello";
    cout << str;
    return 0;
}