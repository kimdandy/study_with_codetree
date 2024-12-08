#include <iostream>
using namespace std;
//// 행에 따라 패턴이 다른 경우

/// Q. 정수 n의 값이 주어지면 n값에 따라 일의 자리 숫자를 좌우로 반복하며 출력하는 프로그램을 작성해보세요.
/*
예제1
입력:
4
출력:
1234
4321
1234
4321

예제2
입력:
5
출력:
12345
54321
12345
54321
12345
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1) cout << j;
            else cout << n-j+1;
        }
        cout << endl;
    }
    return 0;
}