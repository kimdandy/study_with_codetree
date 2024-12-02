#include <iostream>
using namespace std;

// Q. 3개의 정수를 입력받아 조건연산자를 이용하여 입력받은 수 중 최솟값을 출력하는 프로그램을 작성해주세요.
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a<=b && a<=c) cout << a;
    else if(b<=c) cout << b;
    else cout << c;
    
    return 0;
}