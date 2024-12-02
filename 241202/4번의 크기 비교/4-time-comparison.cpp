#include <iostream>
using namespace std;

// Q. 정수 a의 값과 정수 b, c, d, e의 값이 주어질 때, 정수 a가 나머지정수와 비교해서 크기가 크다면 1을, 크지 않다면 0을 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a>b) cout << 1;
    else cout << 0;

    if (a>c) cout << endl << 1;
    else cout << endl << 0;

    if (a>d) cout << endl << 1;
    else cout << endl << 0;

    if (a>e) cout << endl << 1;
    else cout << endl << 0;
    
    return 0;
}