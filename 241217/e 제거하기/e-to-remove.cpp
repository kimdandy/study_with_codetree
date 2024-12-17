#include <iostream>
using namespace std;

/// Q. 문자열이 주어졌을 때, 가장 앞에 있는 문자 e 를 제거한 결과를 출력하는 프로그램을 작성해보세요.
int main() {
    string str; // 1 ≤ 문자열의 길이 ≤ 100
    cin >> str;

    for(int i=0;i<str.length();i++)
        if(str.substr(i, 1) == "e"){
            str.erase(i, 1);
            break;
        }
    cout << str;

    return 0;
}