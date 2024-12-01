#include <iostream>
using namespace std;

// 삼항 연산자
// a = 조건 ? v1 : v2; : 조건이 성립하면 v1, 아니라면 v2

// Q. 정수 2개를 입력받아 두 값중 최댓값을 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b;
    cin >> a >> b;

    int max = (a >= b) ? a : b;
    cout << max;

    return 0;
}