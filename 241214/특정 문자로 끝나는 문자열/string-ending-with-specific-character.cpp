#include <iostream>
using namespace std;

/// Q. 알파벳으로 이루어진 10개의 문자열과 문자가 하나 주어지면 그 문자로 끝나는 문자열들을 입력에서 주어진 순서대로 출력하는 프로그램을 작성해보세요
#include <string>
int main() {
    string str[10]; // strlen <=20
    for(int i=0;i<10;i++) cin >> str[i];

    char c;
    cin >> c;

    bool isexist = false;
    for(int i=0;i<10;i++)
        if(str[i][str[i].length()-1] == c){
            cout << str[i] << endl;
            isexist = true;
        }
    if(isexist == false) cout << "None";
       
    return 0;
}