#include <iostream>
using namespace std;

// Q. 두 개의 정수 a, b를 입력받아 a가 b보다 크다면 두 수의 곱을 출력하고, 그렇지 않다면 b를 a로 나눈 몫을 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b;
    cin >> a >> b;

    if (a>b){
        cout << a*b;
    }
    else{
        cout << b/a;
    }
    return 0;
}