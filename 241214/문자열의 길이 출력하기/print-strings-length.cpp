#include <iostream>
using namespace std;
//// 문자열의 길이
// string 헤더의 length() 함수 ㄱ
// 문자열의 길이 = 문자열.length()

/// Q. 두 개의 문자열이 주어지면 그 두 문자열의 길이를 합하여 출력하는 프로그램을 작성해보세요.
#include <string> // 문자열 함수 string 호출 헤더

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1.length() + str2.length();
    return 0;
}

// strlen() : char 계통 문자열 의 길이를 반환
// strlen("문자열")
// strlen 에서 \0를 만나면 \0전까지만 계산해서 반환
// strlen("Hello\0World") = 5
// \n 은 1글자로 인식

