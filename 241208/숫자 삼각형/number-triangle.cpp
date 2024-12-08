#include <iostream>
using namespace std;
//// 숫자 모양 출력
//  행은 i, 열은 j랑 관련이 있으므로, i, j값에 따라 숫자가 어떻게 변하는지를 살펴보면 됩니다.

/// Q. 정수 n의 값이 주어지면 숫자로 이루어진 삼각형을 출력하는 프로그램을 작성해보세요.
/*
예제1
입력:
3
출력:
1
1 2
1 2 3

예제2
입력:
5
출력:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << j << " ";
        cout << endl;
    }
    return 0;
}