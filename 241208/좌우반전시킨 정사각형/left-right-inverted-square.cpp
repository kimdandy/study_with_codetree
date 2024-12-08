#include <iostream>
using namespace std;

/* Q. 정수 n이 주어지면 다음과 같은 정사각형 모양을 좌우반전시켜 출력하는 프로그램을 작성해보세요.

예) n = 4
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16
위와 같은 정사각형을 좌우반전시켜 아래와 같이 출력합니다.
4 3 2 1
8 6 4 2
12 9 6 3
16 12 8 4
*/
int main() {
    int n; // int 1<=n<=9
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++) cout << i*(n-j) << " ";
        cout << endl;
    }
    return 0;
}