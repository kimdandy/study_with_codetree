#include <iostream>
using namespace std;
//// 문자열을 정수로 변환하기
// string 헤더의 stoi 함수로 문자열을 감싸주면 문자열을 정수로 변환할 수 있습니다.
/*
    string a = "123";  
	int a_int = stoi(a) + 1;

	cout << a_int;

>> 124
*/
/* Q. 숫자로만 이루어진 문자열 A와 B가 주어집니다. 
A와 B를 그대로 이어붙인 AB와 순서를 바꿔 이어붙인 BA의 합을 구하는 프로그램을 작성해보세요. */
#include <string>
int main() {
    string a, b; // 1 ≤ A, B ≤ 1,000
    cin >> a >> b;

    string ab = a + b, ba = b + a;
    int ab_int = stoi(ab), ba_int = stoi(ba);


    cout << ab_int + ba_int;
    return 0;
}