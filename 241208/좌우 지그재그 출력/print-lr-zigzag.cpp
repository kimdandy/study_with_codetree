#include <iostream>
using namespace std;

/* Q. 자연수 n이 주어집니다. 
1부터 n * n까지 다음 규칙에 따라 출력하는 프로그램을 작성해보세요.
예제1
입력:
3
출력:
1 2 3
6 5 4
7 8 9

예제2
입력:
4
출력:
1 2 3 4
8 7 6 5
9 10 11 12
16 15 14 13
*/
int main() {
    int n; // 1<=n<=100
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1) cout << (i-1)*n+j; // 홀수열: 순서대로 출력
            else cout << i*n-j+1; // 짝수열 : 뒤집어서 출력
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}