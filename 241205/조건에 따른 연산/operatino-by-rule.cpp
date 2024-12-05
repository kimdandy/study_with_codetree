#include <iostream>
using namespace std;

/* Q. 정수 n의 값에 따라 다음과 같은 연산을 진행할 때, cnt 번의 연산을 했을 때 처음으로 1,000 이상이 된다고 합니다. cnt의 값을 구해보는 프로그램을 작성해보세요.

# n이 짝수일 때, n에 3을 곱하고 1을 더합니다.

# n이 홀수일 때, n에 2를 곱하고 2를 더합니다.*/
int main() {
    int n; // 1<=n<=100
    cin >> n;

    int cnt=0;
    while(n<=1000){
        if(n%2==0) n=n*3+1;
        else n=n*2+2;
        cnt+=1;
    }
    cout << cnt;
    return 0;
}