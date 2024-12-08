#include <iostream>
using namespace std;

/* Q. 정수 n의 값을 입력받아 다음과 같이 숫자를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n에 2를 입력받는 경우
2 1
  1

n에 3를 입력받는 경우
3 2 1
  2 1
    1
*/
int main() {
    int n; // 1<=n<=15
    cin >> n;

    for(int i=n; i>=1;i--){
        for (int j=1; j<=n-i; j++) cout << "  ";
        for(int j=0;j<i; j++) cout << i-j << " ";
        cout << endl;
    }
    return 0;
}