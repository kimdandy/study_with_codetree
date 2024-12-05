#include <iostream>
using namespace std;

/// Q. n이 주어졌을 때, 1부터 차례대로 10까지 1씩 증가시키며 곱을 구하다가 처음으로 그 곱이 n 이상이 되는 순간에 곱해진 숫자가 무엇인지를 출력하는 프로그램을 작성해보세요.
int main() {
    int n; // 1<=n<=3000
    cin >> n;

    int prod =1, i; // i : 곱해진 숫자
    for(i=1;i<=10;i++){
        prod*=i;
        if(prod>=n) break;
    }
    cout << i;
    return 0;
}