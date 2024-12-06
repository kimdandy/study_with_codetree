#include <iostream>
using namespace std;

/* Q. 소수는 1보다 큰 자연수 중 1과 자기 자신만을 약수로 가지는 수입니다. 
숫자 n이 주어졌을 때, n이 소수인지 판단하는 프로그램을 작성해보세요.*/
int main() {
    int n; // 2<=n<=1000
    cin >> n;

    bool st = true;
    for(int i=2;i<n;i++){
        if(n%i==0) {
            st = false;
            break;
        }
    }
    if(st==true) cout << "P";
    else cout << "C";
    return 0;
}