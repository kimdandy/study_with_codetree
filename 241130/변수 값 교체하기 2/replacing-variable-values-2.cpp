#include <iostream>
using namespace std;

int main() {
    // 다른 변수로부터 변수 값 변경
    int a=5, b=3;
    a=b; // 다른 변수 값을 재할당 가능
    cout << a << endl << b;
    return 0;
}