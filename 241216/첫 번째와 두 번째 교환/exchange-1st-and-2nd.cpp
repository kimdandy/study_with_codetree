#include <iostream>
using namespace std;

/// Q. 소문자 알파벳으로만 이루어진 문자열이 한 개 주어졌을 때, 첫 번째 문자와 같은 문자는 모두 두 번째 문자로 바꾸고, 두 번째 문자와 같은 문자는 모두 첫 번째 문자로 바꾸어줍니다.
#include <string>
int main() {
    string str; // 2 ≤ 문자열의 길이 ≤ 20
    cin >> str;

    char f = str[0], s=str[1];
    for(int i=0;i<str.length();i++){
        if(str[i] == f) str[i] = s;
        else if(str[i] == s ) str[i] = f;
    }
    
    cout << str;
    return 0;
}