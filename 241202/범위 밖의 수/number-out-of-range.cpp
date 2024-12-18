#include <iostream>
using namespace std;
/* or */
/* 2개 이상의 조건들 중 하나라도 만족하는지를 알고싶은 경우라면, 다음과 같이 || (or) 를 사용

if ( 조건1 || 조건2 ) {

    코드1

}

*/
/* 3개의 조건 중 하나라도 만족하는지에 대한 여부 역시 || 를 2번 사용하여 표현
조건이 더 많아도 가능

if ( 조건1 || 조건2 || 조건3 ) {

    코드1

}

*/

// Q. 정수 a를 입력받아 a가 10보다 작거나 20보다 큰 수인지를 판단하는 프로그램을 작성해보세요.
int main() {
    int a;
    cin >> a;

    if (a<10 || a>20) cout << "yes";
    else cout << "no";
    
    return 0;
}