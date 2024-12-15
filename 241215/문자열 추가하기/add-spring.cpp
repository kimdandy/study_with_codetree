#include <iostream>
using namespace std;
//// 문자열 붙이기
// c++에서는 문자열끼리 + 연산이 가능
// 3개 이상의 문자열을 더해야 하는 경우였다면, 다음과 같이 아예 새로운 문자열을 선언하여 초기 문자열을 빈 문자열인 ""로 선언하고 다 더해주는 식으로 진행
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