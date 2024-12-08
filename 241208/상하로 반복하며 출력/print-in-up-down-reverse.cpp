#include <iostream>
using namespace std;

/* Q. 정수 n의 값이 주어지면 n값에 따라 일의 자리 숫자를 상하로 반복하며 출력하는 프로그램을 작성해보세요.
예제1
입력:
4
출력:
1414
2323
3232
4141

예제2
입력:
5
출력:
15151
24242
33333
42424
51515
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            if(j%2==1) cout << i;
            else cout << n-i+1;
        }
        cout << endl;
    }
    return 0;
}