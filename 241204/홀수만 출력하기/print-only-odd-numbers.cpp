#include <iostream>
using namespace std;

/// Q. N개의 정수가 주어졌을 때, 주어진 수 중 홀수이면서 3의 배수인 수들만 순서대로 출력하는 프로그램을 작성해보세요.
int main() {
    int n, a; // n:줄의 개수 , a:현재 줄의 입력 정수

    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a; // 현재 줄의 정수 입력
        if(a%2==1 and a%3==0) cout << a << endl; // 조건 충족시 출력
    }

    return 0;
}