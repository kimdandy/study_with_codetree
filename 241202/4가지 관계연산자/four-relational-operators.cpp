#include <iostream>
using namespace std;

// Q. 두 개의 정수를 입력받아서 4가지 관계연산자의 결과를 출력하는 프로그램을 작성해주세요.
int main() {
    int a, b;
    cin >> a >> b;

    if( a>=b) cout << 1;
    else cout << 0;

    if (a>b) cout << endl << 1;
    else cout << endl << 0;

    if (a<=b) cout << endl << 1;
    else cout << endl << 0;

    if (a<b) cout << endl << 1;
    else cout << endl << 0;

    return 0;
}