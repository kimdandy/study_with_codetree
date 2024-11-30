#include <iostream>
using namespace std;

int main() {
    /* 숫자 : 사칙연산 가능 
        정수 : int, long, long 
        실수 : double
       문자 : 사칙연산 불가
        문자 : char
        문자열 : string */
    int a = 97;
    int b = 13;
    int c = a - b;
    cout << a;
    cout << " - "; 
    cout << b;
    cout << " = ";
    cout << c;
    return 0;
}

/* 코딩 컨벤션(Coding Convention) 
    - 변수나 함수명은 가급적 소문자로
    - 여러 단어를 사용하는 경우 언더바( _ , Underscore) */