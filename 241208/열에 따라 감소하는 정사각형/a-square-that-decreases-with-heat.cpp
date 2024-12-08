#include <iostream>
using namespace std;

/* Q. 정수 n이 주어지면 다음과 같은 정사각형 모양을 각 행마다 1씩 감소하며 출력하는 프로그램을 작성해보세요.

예) n = 4

4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    for (int i=1; i<=n;i++){
        for(int j=n;j>=1;j--) cout << j << " ";
        cout << endl;
    }
    return 0;
}