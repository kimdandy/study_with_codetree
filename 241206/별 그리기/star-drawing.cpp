#include <iostream>
using namespace std;

/* Q. 가로 세로 2n-1 크기에 해당하는 격자에 다이아몬드 모양을 *로 그리는 코드를 작성해보세요.

규칙은 다음과 같습니다.

n = 2
 *
***
 *

n = 3
  *
 ***
*****
 ***
  *

*/
int main() {
    int n; // 1< n <100
    cin >> n;

    for (int i=1; i<=n; i++){
        for(int j=n-i; j>=1; j--) cout << " "; // 공백의 개수 : n-행 번호
        for(int j=1;j<=2*i-1;j++) cout << "*"; // *의 개수 : 2*행 번호-1
        cout << endl;
    }
    for (int i=1; i<=n-1; i++){ // 시작이 2(~n)부터 또는 끝이 n-1(~2)
        for(int j=1; j<=i; j++) cout << " "; // 공백의 개수 : 행 번호
        for(int j=2*(n-i)-1;j>=1;j--) cout << "*"; // *의 개수 : 2*(n-행 번호)-1
        cout << endl;
    }

    return 0;
}