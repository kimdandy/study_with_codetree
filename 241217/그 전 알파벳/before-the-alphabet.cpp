#include <iostream>
using namespace std;

/* Q. 소문자 알파벳이 하나 주어지면, 그 전 소문자 알파벳을 출력하는 프로그램을 작성해보세요.

단, a 의 전 소문자는 z 라고 생각합니다.*/
int main() {
    char c;
    cin >> c;

    if(c=='a') cout << 'z';
    else cout << (char)((int)c - 1);

    return 0;
}