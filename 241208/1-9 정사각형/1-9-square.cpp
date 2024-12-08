#include <iostream>
using namespace std;

/* Q. 정수 n의 값이 주어지면 일의 자리 숫자로 이루어진 n*n모양 사각형을 출력하는 프로그램을 작성해보세요. 
9다음에는 1이 나와야 합니다. 

예제1
입력:
4
출력:
1234
5678
9123
4567

예제2
입력:
5
출력:
12345
67891
23456
78912
34567
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    int cnt =0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cnt += 1;
            if(cnt>9) cnt=1;
            cout << cnt;
        }
        cout << endl;
    }
    return 0;
}