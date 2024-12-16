#include <iostream>
using namespace std;
//// 문자열 내 문자 제거
// 지워져야 할 문자의 양쪽 문자열들만 substr을 통해 살려두는 식으로 쉽게 구현이 가능
/*
    string s = "baknana";
	s = s.substr(0, 2) + s.substr(3); 
    // substr(n) : n 부터 , substr(n, m) : n부터 m개 까지
*/

// erase 함수를 이용해 해당 문자를 제거하는 것도 가능
// string에서의 erase() 함수는 substr 과 같이 삭제할 부분문자열의 시작인덱스와 그 인덱스로부터의 문자 개수를 지정하여 사용
/*
    string s = "baknana";
	s.erase(2, 1); // 조건 substr 과 동일
*/

/// Q. 문자열이 주어지면, 앞에서 2번째 원소와 뒤에서 2번째 원소를 제거한 후의 문자열을 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // 길이가 10 이상이고, 100이하
    cin >> str;

    str = str.substr(0, 1) + str.substr(2, str.length()-4 ) + str.substr(str.length()-1);

    cout << str;
    return 0;
}