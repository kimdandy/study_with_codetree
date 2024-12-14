#include <iostream>
using namespace std;
//// 공백(space)가 포함된 문자열 입력받아 출력하기
// c++에서는 공백단위로 문자열을 구분
// 공백은 space 와 new line 을 모두 포함

// 만약 space 를 포함한 문자열을 한 개의 string 문자열에 받고 싶다면, 문자열 구분단위를 space와 new line 이 아닌 오직 new line 만으로 바꿔주어야함
// string 헤더의 getline() 함수를 이용
// getline 함수는 문자열을 new line 으로만 구분하여 입력받음
// getline(cin, 받고자 하는 문자열)
/*
#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;

	getline(cin, str);
	cout << str;

	return 0;

}

    // 입력
    >> hello world

    // 출력
    hello world
*/
// str 문자열의 길이를 length() 함수를 이용해 구하게 된다면, 공백을 포함한 총 길이가 출력


/// Q. 공백이 들어 있을 수 있는 문자열이 주어지면 3번째 문자부터 10번 문자까지 순서대로 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str;
    getline(cin, str); // " "(space)를 문자로 인식하여 문자열 입력

    for(int i=2;i<10;i++) cout << str[i];

    return 0;
}