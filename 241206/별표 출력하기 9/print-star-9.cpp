#include <iostream>
using namespace std;

/* Q. 정수 n의 값을 입력받아 별표를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 3를 입력받는 경우

    *
  * * *
* * * * *

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--) cout << "  "; // 행당 공백의 개수 : n-행 번호 
        for(int k=1;k<=2*i-1;k++) cout << "* "; // 행당 *의 개수 : 2*행 번호-1
        cout << endl;
    }
    return 0;
}