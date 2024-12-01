#include <iostream>
using namespace std;

/* Q.
영문 대문자를 입력받아

'S'이면 Superior,

'A'이면 Excellent,

'B'이면 Good,

'C'이면 Usually,

'D'이면 Effort,

그 외 문자이면 Failure 라고 출력하는 프로그램을 작성해주세요.
*/
int main() {
    char c;
    cin >> c;

    if (c == 'S'){ // 조건문의 문자열에는 작은 따옴표
        cout << "Superior";
    }
    else if(c=='A'){
        cout << "Excellent";
    }
    else if(c=='B'){
        cout << "Good";
    }
    else if(c=='C'){
        cout << "Usually";
    }
    else if(c=='D'){
        cout << "Effort";
    }
    else {
        cout << "Failure";
    }
    return 0;
}