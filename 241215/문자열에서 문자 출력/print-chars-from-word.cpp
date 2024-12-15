#include <iostream>
using namespace std;
////  문자열 순회하기
//  해당 문자열의 길이를 구한뒤, for loop을 이용해 index 단위로 순회하는 것
// 문자열의 끝은 '\0' 이므로 만약 문자열의 크기를 모를 경우 '\0' 을 만나는 지점을 for loop 중단 조건으로 설정

/// Q. 문자열을 하나 입력받아 각각의 문자를 한 줄에 하나씩 순서대로 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str;
    cin >> str; // 1 ≤ 문자열의 길이 ≤ 9

    for(int i=0; i<9; i++){ // str_max = 9
        if(str[i] == '\0') break;
        cout << str[i] << endl; 
    }

    return 0;
}