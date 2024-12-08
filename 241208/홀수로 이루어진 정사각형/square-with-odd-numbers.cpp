#include <iostream>
using namespace std;

/* Q. 정수 n의 값을 입력받아 두자리 홀수로 이루어진 n * n 정사각형을 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)
n이 3인 경우
11 13 15
13 15 17
15 17 19

n이 4인 경우
11 13 15 17
13 15 17 19
15 17 19 21
17 19 21 23
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout << 7+2*i+2*j << " ";
        cout << endl;
    }
    return 0;
}