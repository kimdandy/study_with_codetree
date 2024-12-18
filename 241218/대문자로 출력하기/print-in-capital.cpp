#include <iostream>
using namespace std;
//// 대소문자 변환
// 아스키 코드는 연속하기 때문에 대문자가 알파벳 순서상 0번부터 시작했을 때 몇 번째인지를 먼저 구합니다.
/*
char x = 'C';
x             -> 67
x - 'A'       -> 2 (67 - 65)
*/
// 이 순서를 그대로 유지하며 소문자가 되도록 변경해주기 위해서는, 먼저 소문자 'a'에 해당하는 아스키 번호를 더해 원하는 소문자의 아스키 번호를 구해준 다음, 문자로 출력해주면 원하는 소문자를 얻을 수 있습니다.
/*
char x = 'C';
x                -> 67
x - 'A'          -> 2 (67 - 65)
x - 'A' + 'a'    -> 99 (2 + 97)
cout << (char)(x - 'A' + 'a'); -> 'c'
*/

// c++에서는 tolower()함수를 제공
// 특정 문자열의 모든 문자들을 전부 소문자로 변경
// cctype 헤더 소속 ; #include <cctype>
/*
    char x = 'C';
	cout << (char) tolower(x);
*/

// 소문자를 대문자로 변경하는 것은 위 방법의 역과정
// toupper()함수를 이용해도 됨

//// 그 다음 알파벳 구하기
/*
char x = 'A';
x         -> 65
x + 1     -> 66
cout << (char)(x + 1) -> 'B'
*/
// 알파벳 x 다음 알파벳을 구하는 것은 x+1로 표현이 가능

// 문자 x가 대문자인지는 if문을 이용하여 쉽게 구현이 가능
/*
char x;
if ('A' <= x && x <= 'Z') {
   cout << "Upper case";
}
*/
// 또는 cctype 헤더에서 제공하는 isupper(), islower() 함수를 사용

/* x가 알파벳인지에 대한 여부는 c++에서 isalpha라는 함수를 제공합니다. 
이와 비슷하게 숫자인지에 대한 여부 역시 isdigit이라는 함수로 알아낼 수 있습니다.*/


/// Q. 문자열이 주어지면 알파벳만 모두 대문자로 출력하는 프로그램을 작성해보세요.
#include <string>
#include <cctype>
int main() {
    string str; // strlen : ~100
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            if(islower(str[i])) str[i]=(char)toupper(str[i]);
            cout << str[i];
        }
    }
    return 0;
}