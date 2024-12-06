#include <iostream>
using namespace std;

/* Q. 정수 n의 값을 입력받아 별표를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 2를 입력받는 경우

** **
*
n에 3을 입력받는 경우

*** *** ***
** ** 
*

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            for(int k=i;k>=1;k--) cout << "*";
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}