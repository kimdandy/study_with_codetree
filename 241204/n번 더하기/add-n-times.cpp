#include <iostream>
using namespace std;

/* Q. 정수 a, n이 주어졌을 때, a에 n을 더하는 과정을 n번 반복하려고 합니다.

각 연산 결과값을 순서대로 출력하는 프로그램을 작성해보세요.*/
int main() {
    int a, n;
    cin >> a >> n;

    for (int i =1; i<=n; i++){
        a += n;
        cout << a << endl;
    }
    return 0;
}