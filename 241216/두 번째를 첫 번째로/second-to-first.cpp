#include <iostream>
using namespace std;

/// Q. 문자열이 주어지면, 문자열 내에서 두 번째 문자와 같은 문자들을 모두 첫 번째 문자로 바꾸어 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // 2 ≤ 문자열의 길이 ≤ 100 , str[0] != str[1]
    cin >> str;

    char sc = str[1]; // for문에 넣어 바꾸면 str[1]값도 달라지므로 미리 문자를 저장
    for(int i=1;i<str.length();i++)
        if(str[i] == sc) str[i] = str[0];
    cout << str;

    return 0;
}