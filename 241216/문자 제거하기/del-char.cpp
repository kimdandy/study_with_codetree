#include <iostream>
using namespace std;

/* Q. 알파벳으로 이루어진 문자열과 정수가 주어지면, 문자열에서 정수에 해당하는 위치의 문자를 제거하고 출력하는 작업을 반복하다가 문자 1개가 남으면 종료하는 프로그램을 작성해보세요. 
만약 주어진 정수가 문자열의 길이 이상이면 마지막 문자를 제거합니다. 
위치는 0번부터 주어진다고 가정합니다.*/
#include <string>
int main() {
    string str; // 길이가 20 이하
    cin >> str;
    int pos;
    while(str.length()>1){
        cin >> pos;
        if(pos > str.length()) str.erase(str.length()-1);
        else str.erase(pos, 1);
        cout << str << endl;
    }
    return 0;
}