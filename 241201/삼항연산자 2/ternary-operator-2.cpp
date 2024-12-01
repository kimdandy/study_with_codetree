#include <iostream>
using namespace std;

// Q. 정수 a가 주어졌을 때, a가 1이라면 t 를 출력하고, 1이 아니라면 f 를 출력하는 프로그램 삼항연산자를 사용하여 작성해보세요.
int main() {
    int a;
    cin >> a;

    cout << ((a==1)?"t":"f");
    return 0;
}