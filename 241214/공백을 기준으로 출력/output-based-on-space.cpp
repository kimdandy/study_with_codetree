#include <iostream>
using namespace std;

/// Q. 공백을 포함한 문자열이 두 줄 주어졌을 때, 주어진 문자열을 공백을 제외하여 다시 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str1, str2; // 1~100, 공백 포함
    getline(cin, str1);
    getline(cin, str2);
    
    /*string strs[2][100] = {str1, str2};
    for(int k=0; k<2;k++)*/
    for(int i=0;i<str1.length();i++){
            if( str1[i] != ' ') cout << str1[i];
            }
            
    for(int i=0;i<str2.length();i++){
            if( str2[i] != ' ') cout << str2[i];}

    return 0;
}

// "" : 문자열 / '' : 문자