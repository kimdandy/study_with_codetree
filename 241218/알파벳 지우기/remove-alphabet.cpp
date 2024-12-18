#include <iostream>
using namespace std;

/// Q. 알파벳과 숫자로 이루어진 문자열이 두 개 주어지면, 각 문자열에서 알파벳을 제외하고 남은 숫자부분을 차례대로 이어붙여 만든 수를 구하고, 두 문자열에서 구한 두 수의 합을 구하는 프로그램을 작성해보세요.
#include <string>
#include <cctype>
int main() {
    string str; // 1 ≤ 문자열의 길이 ≤ 8
    int sum =0;
    for(int h=0;h<2;h++){
        cin >> str;
        string cn="";
        for(int i=0;i<str.length();i++)
            if(isdigit(str[i])) cn += str[i];
            //if(isalpha(str[i])) str.erase(i, 1) /-> 런타임 에러 발생 
        sum += stoi(cn);
    }
    
    cout << sum;
    
    return 0;
}