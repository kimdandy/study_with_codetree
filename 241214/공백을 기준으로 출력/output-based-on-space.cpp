#include <iostream>
using namespace std;

/// Q. 공백을 포함한 문자열이 두 줄 주어졌을 때, 주어진 문자열을 공백을 제외하여 다시 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str1, str2; // 1~100, 공백 포함
    getline(cin, str1);
    getline(cin, str2);
    
    for(int i=0;i<str1.length();i++){ // 정확히 문자열의 크기만큼 할당할 것
            if( str1[i] != ' ') cout << str1[i];
            }
            
    for(int i=0;i<str2.length();i++){
            if( str2[i] != ' ') cout << str2[i];}

    return 0;
}

// "" : 문자열 / '' : 문자