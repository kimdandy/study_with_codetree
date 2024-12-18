#include <iostream>
using namespace std;

/// Q. 알파벳으로 이루어진 문자열이 하나 주어지면, 대문자는 소문자로, 소문자는 대문자로 바꾸어 출력하는 프로그램을 작성해보세요.
#include <string>
#include <cctype>
int main() {
    string str; // strlen : 1~20
    cin >> str;

    for(int i=0; i<str.length();i++)
        if(isupper(str[i])) str[i]= tolower(str[i]);
        else str[i] = toupper(str[i]);

    cout << str;
    return 0;
}