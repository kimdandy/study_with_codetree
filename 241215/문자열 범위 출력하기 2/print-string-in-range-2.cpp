#include <iostream>
using namespace std;

/// Q. 문자열과 정수가 주어지면 문자열의 맨 뒤에서부터 차례대로 주어진 정수만큼 문자를 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // strlen ≤ 100
    cin >> str;

    int n; // 1 ≤ 정수 값 ≤ 100
    cin >> n;

    int strl = str.length();
    if(strl<n) n=strl; // n이 문자열의 크기를 초과한다면 n을 문자열크기에 맞춤
    for(int i=strl-1; i>strl-1-n; i--) // 1~n == 0 ~ n-1
        cout << str[i];
    
    return 0;
}