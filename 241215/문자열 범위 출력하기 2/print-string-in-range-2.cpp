#include <iostream>
using namespace std;

/// Q. 문자열과 정수가 주어지면 문자열의 맨 뒤에서부터 차례대로 주어진 정수만큼 문자를 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // strlen ≤ 100
    cin >> str;

    int n; // 1 ≤ 정수 값 ≤ 100
    cin >> n;

    for(int i=str.length()-1; i>str.length()-1-n; i--){ // 1~n == 0 ~ n-1
        if(str[i] == '\0') break;
        cout << str[i];
    }
    return 0;
}