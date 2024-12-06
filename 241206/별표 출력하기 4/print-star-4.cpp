#include <iostream>
using namespace std;

/* Q. 정수 n의 값을 입력받아 별표를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 2를 입력받는 경우

* *
*  
* *
n에 3을 입력받는 경우

* * *
* *
*
* *
* * *

*/
int main() {
    int n; // 1<=n<=100
    cin >> n;

    for (int i=n;i>=1;i--){
        for (int j=i;j>=1;j--) cout << "* ";
        cout << endl;
    }
    for (int i=2;i<=n;i++){ // 시작점이 1이 아닌 2부터, 끝점이 n 임을 주의
        for (int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }
    return 0;
}