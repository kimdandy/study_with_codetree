#include <iostream>
using namespace std;

/* Q. 알파벳 소문자로 이루어진 문자열이 주어집니다.

주어진 문자열의 짝수 번째 문자만 역순으로 출력하는 프로그램을 작성해보세요.*/
#include <string>
int main() {
    string str; // strlen : 2~100
    cin >> str;

    for(int i=str.length()-1;i>=0;i--)
        if(i%2==1){ // 짝수번째 = 배열에서 홀수 번째
            cout << str[i];
        }
    
    return 0;
}