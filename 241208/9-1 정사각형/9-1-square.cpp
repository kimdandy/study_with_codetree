#include <iostream>
using namespace std;

/* Q. 정수 n이 주어졌을 때, n x n 모양의 정사각형을 출력하는데, 9부터 1까지 1씩 감소하며 출력하는 프로그램을 작성해보세요. 
단, 1 다음에는 다시 9에서 시작하여 1씩 줄어드는 것을 반복합니다.
예제1
입력:
4
출력:
9876
5432
1987
6543

예제2
입력:
5
출력:
98765
43219
87654
32198
76543
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    int cnt=0;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++){
            cnt++;
            if(cnt>9) cnt=1;
            cout << 10-cnt;
        }
        cout << endl;
    }
    return 0;
}