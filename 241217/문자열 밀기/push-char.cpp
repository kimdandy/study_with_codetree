#include <iostream>
using namespace std;
//// 문자열 밀기

/// Q. 문자열이 하나 주어지면, 왼쪽으로 한 칸 shift 한 이후의 결과를 저장한 뒤 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // strlen ~20
    cin >> str;

    char fst = str[0];
    for(int i=0;i<str.length();i++)
        if(i != str.length()-1 ) str[i] = str[i+1];
        else str[i] = fst;
    
    cout << str;

    return 0;
}