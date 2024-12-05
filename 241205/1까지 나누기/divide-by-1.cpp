#include <iostream>
using namespace std;

/* Q. 정수 n이 주어졌을 때, n을 차례대로 1, 2, 3, ... 으로 나누었을 때 1 이하가 되는 순간까지 나눗셈을 진행한 총 횟수를 구하는 프로그램을 작성해보세요.

단, 나눗셈 진행시 각 나눗셈 연산에서 몫을 저장합니다.*/
int main() {
    int n; // 2<=n<=5000
    cin >> n;

    int cnt=0;
    while(true){
        cnt+=1;
        n/=cnt;
        if(n<=1) break;
    }
    cout << cnt;
    return 0;
}