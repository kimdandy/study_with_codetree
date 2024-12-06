#include <iostream>
using namespace std;

/* Q. 가로 세로 2n-1 크기에 해당하는 격자에 체크 다이아몬드 모양을 그리는 코드를 작성해보세요.

규칙은 다음과 같습니다.

# n = 3 일 때
  *
 * *
* * *
 * *
  *

# n = 4 일 때
   *
  * *
 * * *
* * * *
 * * *
  * *
   *

*/
int main() {
    int n; // 2<=n<=10
    cin >> n;

    for(int i=1; i<=n;i++){
        for(int j=n-i;j>=1;j--) cout << " ";
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }
    for(int i=1; i<=n-1;i++){
        for(int j=1;j<=i;j++) cout << " ";
        for(int j=n-i;j>=1;j--) cout << "* ";
        cout << endl;
    }
    return 0;
}