#include <iostream>
using namespace std;
//// 특정 문자열 포함 여부
// 논리적으로 접근한다면, 각각의 위치에 대해 조사하며 그 중 정확히 일치하는 위치가 있었는지를 확인
// 이때 for loop을 [0, s.length() - len] 에서만 돌아야 함에 유의 / len : 특정 문자열의 크기
/*
string s = "appleabanana";
	int length = s.length();
	bool exists = false;

	for (int i = 0; i < length - 1; i++) {
		if (s[i] == 'a' && s[i + 1] == 'b') {
			exists = true;
		}
	}
*/

// c++에서는 string 헤더의 substr 함수를 이용하여 다음과 같이 직접 문자열끼리 비교해주는 것이 가능
// 문자열.substr(시작 인덱스, 부분문자열 길이)

// 마지막으로, c++ 에서는 string 헤더의 find 함수를 이용하면 부분문자열 포함 여부를 간단하게 확인 가능
// find 함수가 부분문자열을 찾는데 성공하면 (여러번 나타나면 가장 앞선) 부분문자열 첫 문자의 index를 반환하며, 실패한다면 string::npos 라는 상수를 반환

// 만약 판단하고자 하는 부분문자열이 'ab'와 같이 2자리가 아닌 input으로 주어진다 했을 때, 이를 문자열 t라 한다면
// 문자열 t의 길이를 len_t라 했을 때, 결국 s[i]와 t[0], s[i + 1]과 t[1] ...그리고 s[i + len_t - 1]과 t[len_t - 1]이 전부 일치하기를 바라는 것이기 때문에 이 역시도 boolean 값을 만들어 전부 일치하는지에 대한 여부를 판단해주면 됨
//  문자열.length 활용

/// Q. 문자열이 주어지면 문자열 'ee'와 'ab'의 포함여부를 출력하는 프로그램을 작성해보세요.
#include <string>
int main() {
    string str; // strlen : ~20
    cin >> str;

    bool ee_exist = false;
    for(int i=0; i<str.length()-2;i++)
        if(str[i]=='e' && str[i+1]=='e'){
            ee_exist = true;
            break;
        }
    if(ee_exist == true) cout << "Yes";
    else cout << "No";
    
    cout << " ";

    bool ab_exist = false;
    for(int i=0; i<str.length()-2;i++)
        if(str[i]=='a' && str[i+1]=='b'){
            ab_exist = true;
            break;
        }
    if(ab_exist == true) cout << "Yes";
    else cout << "No";

    return 0;
}