#include <iostream>
using namespace std;
//// 공백 단위로 문자열 입력받기

/// Q. 알파벳으로 이루어져 있고 공백을 포함한 10개의 문자열이 주어지면 모든 문자열의 총 길이의 합을 구하여 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str[10];
    int len_sum=0;
    for(int i=0;i<10;i++) {
        cin >> str[i];
        len_sum += str[i].length();
    }
    cout << len_sum;

    
    return 0;
}