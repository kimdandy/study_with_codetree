#include <iostream>
using namespace std;

/// Q. 2의 거듭제곱수 중 하나인 N을 입력받아, N=2^x를 만족하는 x 값을 구하는 코드를 작성해보세요.
int main() {
    int n; // 2<=n<=1024
    cin >> n;

    int x=0;
    do{ x+=1;
    n/=2;
    }while(n!=1); // do-while 문 끝에 ;
    cout << x;
    return 0;
}