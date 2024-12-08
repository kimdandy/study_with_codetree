#include <iostream>
using namespace std;

/* Q. 정수 n이 주어지면, i (1 ≤ i ≤ n) 번째 줄에 i개의 숫자를 출력하는데, 숫자는 1부터 순서대로 다음과 같이 출력하는 프로그램을 작성해보세요.

예) n = 4
1
2 3
4 5 6
7 8 9 10
*/
int main() {
    int n; // 1<=n<=100
    cin >> n;

    int cnt =0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i; j++){ 
            cnt++;
            cout << cnt << " ";}
        cout << endl;
    }
    return 0;
}