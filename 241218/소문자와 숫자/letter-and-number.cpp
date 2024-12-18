#include <iostream>
using namespace std;

/// Q. 문자열이 주어지면 영문자와 숫자만 출력하되, 영문자는 모두 소문자로 출력하는 프로그램을 작성해보세요.
#include <string>
#include <cctype>
int main() {
    string str; // strlen: ~100
    cin >> str;

    for(int i=0;i<str.length();i++)
        if(isdigit(str[i]) || isalpha(str[i])){
            if(isupper(str[i])) str[i] = (char) tolower(str[i]);
            cout << str[i];
        }
    return 0;
}