#include <iostream>
using namespace std;

/* Q. 
정수 n을 입력받아 숫자를 특정 규칙에 따라 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

# 숫자는 1에서 9까지 출력하고 나면 다시 1로 돌아와서 출력합니다.
예)

n에 2를 입력받는 경우

1 2
  3

예)

n에 3을 입력받는 경우

1 2 3
  4 5
    6
*/
int main() {
    int n; // 1<= n <= 10
    cin >> n;

    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++) cout << "  ";
        for(int j=1;j<=n-i+1;j++) {
            cnt++;
            if(cnt>9) cnt=1;
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}