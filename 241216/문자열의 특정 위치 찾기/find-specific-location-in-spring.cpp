#include <iostream>
using namespace std;
//// 특정 문자열이 포함된 위치 구하기
// 논리적으로 접근한다면, 각각의 위치에 대해 조사하며 그 중 정확히 일치하는 위치가 있었는지를 확인

// c++의 문자열에서는 string 헤더에서 find()라는 함수를 제공하여 문제를 더 간단히 해결
// 이 함수는 해당 부분 문자열이 없는 경우에는 string::npos를, 있는 경우에는 가장 앞에 나오는 부분 문자열의 위치를 반환

/* Q. 알파벳으로 이루어진 문자열과 문자가 하나가 주어지면 주어진 문자의 위치를 출력하는 프로그램을 작성해보세요. 
단, 첫 번째 문자의 위치는 0, 두 번째의 문자의 위치는 1, ... 이렇게 0번부터 세기 시작합니다.*/
#include <string>
int main() {
    string str; // strlen ~20
    char c;
    cin >> str >> c;
    
    if(str.find(c) != string::npos) cout << str.find(c);
    else cout << "No";

    return 0;
}