#include <iostream>
using namespace std;

/// Q. 알파벳으로 이루어져 있고 공백을 포함한 10개의 문자열이 주어지면 공백으로 구분하여 홀수 번째 문자열만 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str[10]; // strlen_sum ≤ 200
    for(int i=0;i<10;i++){
        cin >> str[i]; // strlen with space ≤ 100
        if(i%2==0) cout << str[i] << endl; // 홀수번째 = 배열에서 짝수 번째 ; 0부터 시작
    }

    return 0;
}