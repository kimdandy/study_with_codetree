#include <iostream>
using namespace std;

// Q. 정수 a가 주어졌을 때, a가 3의 배수이거나 5의 배수인 경우에는 1을, 그렇지 않다면 0을 출력하는 프로그램을 작성해보세요.
int main() {
    int a;
    cin >> a;

    if (a%3==0 or a%5==0) cout << 1;
    else cout << 0;

    return 0;
}