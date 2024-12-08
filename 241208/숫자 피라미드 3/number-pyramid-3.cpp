#include <iostream>
using namespace std;

/* Q. 정수 n이 주어지면, 1부터 n까지의 수에 대해, i (1 ≤ i ≤ n) 번째 줄에 다음 조건에 맞게 i 개의 숫자를 출력하는 프로그램을 작성해보세요.

# i 번째 줄의 j 번째 칸에는 i×j 를 출력합니다.
*/
int main() {
    int n; // 1<=n<=100
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << i*j << " ";
        cout << endl;
    }
    return 0;
}