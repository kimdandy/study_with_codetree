#include <iostream>
using namespace std;

// if else / if else
/*
if (조건1) {
    코드1-1
}
else {
    코드1-2
}

if (조건2) {
    코드2-1
}
else {
    코드2-2
}
코드3
*/

// Q. 2개의 정수 a, b를 입력받아 첫 번째 수의 짝홀 여부와, 두 번째 수의 짝홀 여부를 출력하는 프로그램을 작성해주세요.
int main() {
    int a, b;
    cin >> a >> b;

    if (a%2 ==0) 
        cout << "even";
    else
        cout << "odd";

    if (b%2 ==0)
        cout << endl << "even";
    else
        cout << endl << "odd";
    
    return 0;
}