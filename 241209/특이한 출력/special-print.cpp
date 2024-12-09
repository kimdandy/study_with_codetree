#include <iostream>
using namespace std;
//// 조건에 맟게 뛰워주기

/* Q. 정수 n의 값이 주어지면 (1, 1)에서 (n, n)까지 특이한 조건을 만족하며 출력하는 프로그램을 작성해보세요.

# (1, 1)에서 오른쪽으로 차례대로 출력합니다
# (i, j) 에서 i + j가 4의 배수가 되는순간 다음 줄로 넘어갑니다.
*/
int main() {
    int n; // 1<=n<=9
    cin >> n;
    
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            cout << "(" << i << ", "  << j << ") ";
            if((i+j)%4==0) {
                cout << endl;
                }
        }
    }
    return 0;
}