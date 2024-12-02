#include <iostream>
using namespace std;

// if / if
/*if (조건1) {
    코드1
}

if (조건2) { // 첫번째 if 와 별개로 작동
    코드2
}

코드3
*/

/* Q.  정수 a를 입력받아 다음 2개의 과정을 순서대로 거친 이후의 결과를 출력하는 프로그램을 작성해주세요.

1. 만약 a가 짝수라면 2로 나눠줍니다.
2. 만약 a가 홀수라면 1을 더한 뒤 2로 나눠줍니다.
*/

int main() {
    int a;
    cin >> a;

    if (a%2==0){
        a /= 2;
    }
    if ( a%2 != 0){
        a += 1;
        a /= 2;
    }

    cout << a;
    return 0;
}