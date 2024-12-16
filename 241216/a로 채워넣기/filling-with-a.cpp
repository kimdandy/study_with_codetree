#include <iostream>
using namespace std;
//// 문자열 내 문자 수정
// string 문자열은 선언된 이후에도 변경이 가능 -> 직접 수정

/// Q. 문자열이 주어지면, 앞에서 2번째 원소와 뒤에서 2번째 원소를 문자 'a'로 대체한 이후의 문자열을 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // strlen : 10~1000
    cin >> str;

    str[1] = 'a';
    str[str.length()-2] = 'a';

    cout << str;
    return 0;
}