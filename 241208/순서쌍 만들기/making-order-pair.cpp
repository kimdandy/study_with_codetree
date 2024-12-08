#include <iostream>
using namespace std;

/* Q. 정수 n을 입력받아 (n,n) 부터 (1,1)까지의 순서쌍을 만드는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 1을 입력 받는 경우

(1,1)
n에 2를 입력 받는 경우

(2,2) (2,1)
(1,2) (1,1)
*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=n;j>=1;j--) cout << "(" << i << "," << j << ") ";
        cout << endl;
    }
    return 0;
}