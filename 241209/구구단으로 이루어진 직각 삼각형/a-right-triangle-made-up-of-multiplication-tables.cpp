#include <iostream>
using namespace std;

/* Q. 다음과 같은 규칙에 따라 구구단을 직각삼각형으로 출력하는 프로그램을 작성해보세요.

# 예) n = 5
1 * 1 = 1 / 1 * 2 = 2 / 1 * 3 = 3 / 1 * 4 = 4 / 1 * 5 = 5
2 * 1 = 2 / 2 * 2 = 4 / 2 * 3 = 6 / 2 * 4 = 8
3 * 1 = 3 / 3 * 2 = 6 / 3 * 3 = 9
4 * 1 = 4 / 4 * 2 = 8
5 * 1 = 5
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout << i << " * " << j << " = " << i*j;
            if(j != n-i+1) cout << " / ";
        }
        cout << endl;
    }
    return 0;
}