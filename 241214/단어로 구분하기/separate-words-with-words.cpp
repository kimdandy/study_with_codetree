#include <iostream>
using namespace std;

/// Q. 알파벳으로 이루어져 있고 공백을 포함한 10개의 문자열이 주어지면 공백으로 구분하여 단어로 나누어 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str[10];
    for(int i=0;i<10;i++){
        cin >> str[i]; // strlen_sum ≤ 200
        cout << str[i] << endl;
    }
    return 0;
}