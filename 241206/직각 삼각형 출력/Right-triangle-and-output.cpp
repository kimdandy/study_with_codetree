#include <iostream>
using namespace std;

/* Q. 정수 n이 주어졌을 때, 아래 예를 참고하여 * 로 이루어진 직각삼각형을 출력하는 프로그램을 작성해보세요.

예) n = 3 일 때

*
***
*****
예) n = 5 일 때

*
***
*****
*******
*********

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1; j <= 2*i-1 ; j++ ) cout << "*"; // i번째 줄에 2*i-1 개의 별이 찍힘
        cout << endl;
    }
    return 0;
}