#include <iostream>
using namespace std;

/* Q. 소문자 알파벳이 하나 주어지면, 그 다음 소문자 알파벳을 출력하는 프로그램을 작성해보세요. 
단, 'z'의 다음 소문자 알파벳은 'a'라고 생각합니다.*/
int main() {
    char a;
    cin >> a;

    if(a=='z') cout << "a";
    else cout << (char)((int)a +1);
    return 0;
}