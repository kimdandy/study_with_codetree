#include <iostream>
using namespace std;
/* 범위 내 숫자인지 판별 */
// C++에서는 조건 2개를 && , || 등을 사용하지 않고 동시에 표현할 수 없음에 주의하여 주세요.

// Q. 정수 a를 입력 받아 a가 10이상 20 이하인 수인지를 판단하는 프로그램을 작성해보세요.
int main() {
    int a;
    cin >> a;

    if (a>=10 && a<=20) cout << "yes";
    else cout << "no";
    
    return 0;
}