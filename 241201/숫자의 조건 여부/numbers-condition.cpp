#include <iostream>
using namespace std;

// Q. 정수 a를 입력받았을 때, a가 113 이상일 경우엔 1을 출력하고, 그 외의 경우엔 0을 출력하는 프로그램을 작성해보세요.
int main() {
    int a;
    cin >> a;

    if ( a >= 113 ){ cout << 1; }
    else{ cout << 0; }
    return 0;
}