#include <iostream>
using namespace std;
//* 행, 열에 대한 규칙이 있는 경우 *//

/* Q. 정수 n의 값을 입력받아 별표를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 1를 입력받는 경우

* * *
*   *
* * *
n에 2을 입력받는 경우

* * * * *
*   *   *
* * * * *
*   *   *
* * * * *

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=1; i<=2*n+1; i++){
        if(i%2==1){
            for(int j=1; j<=2*n+1;j++) cout << "* ";
        }
        else{
            for(int j=1; j<=n+1; j++) cout << "*   ";
        }
        cout << endl;
    }
    return 0;
}