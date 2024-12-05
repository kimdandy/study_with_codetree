#include <iostream>
using namespace std;

/// Q. a, b 두 자연수를 입력받아 a ^b값을 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b; // 1<= a <= 10 , 0<= b <= 8
    cin >> a >> b;

    int prod=1;
    for (int i=1;i<=b;i++) prod*=a;
    cout << prod;
    return 0;
}