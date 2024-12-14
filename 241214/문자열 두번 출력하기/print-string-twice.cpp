#include <iostream>
using namespace std;
//// 공백없는 문자열 입력받아 출력하기
// 문자열의 경우 <string> 헤더에 포함되어 있는 string 자료형에 입력받아 저장
// 공백이 없는 문자열은 cin 함수를 통해 입력받을 수 있음
/* 
string str;
cin >> str;
cout << str;

    // 입력
    >> hello

    // 출력
    hello
*/

// 문자열이 담긴 string 자료형은 각각의 원소에 대한 참조를 배열에서의 참조와 동일한 방식으로 할 수 있음
// 첫 번째 문자를 참조하기 위해서는 0번지를, 두 번째 문자를 참조하기 위해서는 1번지를 참조
/*
string str = "banana";
cout << str[0];  // b < -문자열의 첫 번째 문자 
cout << str[1];  // a < -문자열의 두 번째 문자
cout << str[2];  // n < -문자열의 세 번째 문자
*/

/// Q. 문자열이 주어지면 2번에 걸쳐 해당 문자열을 출력하는 프로그램을 작성해보세요.
#include <string> // 문자열 함수 string을 호출하기 위해 필요한 헤더

int main() {
    string str; 
    cin >> str;
    for(int i=0;i<2;i++) cout << str << endl;
    return 0;
}