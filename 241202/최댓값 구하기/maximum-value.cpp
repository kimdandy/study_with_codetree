#include <iostream>
using namespace std;

// Q. 3개의 정수 a, b, c를 입력받았을 때, 최댓값을 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a>=b && a>=c) cout << a;
    else{
        if (b>=c) cout << b;
        else cout << c;
    }
    return 0;
}