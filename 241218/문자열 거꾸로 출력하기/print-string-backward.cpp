#include <iostream>
using namespace std;

/* Q. 알파벳으로 이루어진 문자열이 주어지면 거꾸로 뒤집어 출력하기를 반복하다가 'END'가 주어지면 작업을 종료하는 프로그램을 작성해보세요. 
단, 'END'는 무조건 10번 이내에 주어진다고 가정해도 좋습니다.*/
#include <string>
int main() {
    string str;
    while(1){
        cin >> str;
        if (str == "END") break;
        for(int i=0; i<str.length();i++) cout << str[str.length() - 1 - i];
        cout << endl;
    }
    return 0;
}