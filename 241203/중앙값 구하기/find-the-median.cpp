#include <iostream>
using namespace std;


/* Q.  
3개의 정수 a, b, c를 입력받았을 때, 중앙값을 구하는 프로그램을 작성해보세요.

중앙값이란, 오름차순으로 나열했을 때 중앙에 오는 값입니다. */
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a>=b){
        if (b>=c) cout << b;
        else {
            if (a>=c) cout << c;
            else cout << a;
        }
    }
    else {
        if (a>=c) cout << a;
        else {
            if (b>=c) cout << c;
            else cout << b;
        }
    }
    return 0;
}