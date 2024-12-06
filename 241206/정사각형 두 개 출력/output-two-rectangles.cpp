#include <iostream>
using namespace std;

/* Q. 정수 n이 주어졌을 때, 다음과 같은 형식으로 * 로 이루어진 n x n 크기의 정사각형을 두 개 출력합니다.

**
**

**
**

*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    for(int i=1; i<=2;i++){
        for(int j=1; j<=n;j++){
            for(int k=1; k<=n;k++) cout << "*";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}