#include <iostream>
using namespace std;

/* Q. 정수 n이 주어집니다.

아래 입출력 예제와 같은 규칙으로 별을 출력하는 프로그램을 작성해보세요.

예제1
입력:
1
출력:
*

예제2
입력:
2
출력:
* *
* *

예제3
입력:
3
출력:
* * *
*   *
* * *

예제4
입력:
4
출력:
* * * *
*     *
* *   *
* * * *

예제5
입력:
5
출력:
* * * * *
*       *
* *     *
* * *   *
* * * * *

예제6
입력:
6
출력:
* * * * * *
*         *
* *       *
* * *     *
* * * *   *
* * * * * *

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i==1)
            for(int j =1; j<=n ;j++) cout << "* ";
        else{
            cout << "* ";
            for(int j=1;j<=i-2;j++) cout << "* ";
            for(int j=n-i;j>=1;j--) cout << "  ";
            cout << "*" ;
        }
        cout << endl;        
    }

    return 0;
}