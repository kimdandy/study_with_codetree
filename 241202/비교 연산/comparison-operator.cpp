#include <iostream>
using namespace std;
// 비교 연산자와 조건문
/* 비교연산자 : 식이 옳은지 틀린지에 따라 1(참 - true) 혹은 0(거짓 - false) 값을 반환
따라서 if / else if 조건문의 경우, 뒤에 따라적히는 식이 반환하는 값이 true 인 경우에만 해당 구문을 실행
*/

/* Q. 두 정수 a, b를 입력받아 다음 조건들이 각각 참인지 거짓인지를 판단하는 프로그램을 작성해보세요.

- a가 b보다 같거나 큰가?
- a가 b보다 큰가?
- b가 a보다 같거나 큰가?
- b가 a보다 큰가?
- a와 b가 같은가?
- a와 b가 다른가?
*/
int main() {
    int a, b;
    cin >> a >> b;

    if (a>=b) cout << 1;
    else cout << 0;

    if (a>b) cout << endl << 1;
    else cout << endl << 0;

    if (b>=a) cout << endl << 1;
    else cout << endl << 0;

    if (a<b) cout << endl << 1;
    else cout << endl << 0;

    if (a==b) cout << endl << 1;
    else cout << endl << 0;

    if (a != b) cout << endl << 1;
    else cout << endl << 0;

    return 0;
}