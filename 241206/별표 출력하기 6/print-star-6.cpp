#include <iostream>
using namespace std;
///* 모양의 규칙 찾는법 *///
// 행이 1 증가함에 따라 변화하는 별과 공백의 개수에 집중

/* Q. 정수 n의 값을 입력받아 별표를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 2를 입력받는 경우

* * *
  *
* * *
n에 3을 입력받는 경우

* * * * *
  * * *
    *
  * * *
* * * * *

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=n;i>=1;i--){ // 행 번호가 커질수록 *의 개수 감소
        for(int j = 1; j<=n-i; j++ ) cout << "  "; // 공백의 개수 : 행 번호 - 1
        for(int j = 1; j<=2*i-1;j++) cout << "* "; // *의 개수 : (n-행 번호)*2 +1
        cout << endl;
    }
    for(int i=2;i<=n;i++){ // 행 번호가 커질수록 *의 개수 증가
        for(int j = n-i; j>=1; j-- ) cout << "  "; //
        for(int j = 2*i-1; j>=1;j--) cout << "* "; //
        cout << endl;
    }
    return 0;
}