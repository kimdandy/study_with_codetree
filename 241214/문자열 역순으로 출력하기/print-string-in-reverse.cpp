#include <iostream>
using namespace std;
//// 문자열 리스트의 필요성

/// Q. 알파벳으로 이루어진 4개의 문자열이 주어지면 입력받은 역순으로 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str[4];
    for(int i=0;i<4;i++) cin >> str[i];

    for(int i=3;i>=0;i--) cout << str[i] << endl;
    return 0;
}