#include <iostream>
using namespace std;

/// Q. 정수 a, b가 주어지면, a이상 b이하의 수 중에서 1,920과 2,880의 공약수가 존재하는지 판단해보는 프로그램을 작성해보세요.
int main() {
    int a, b; // 1<=a<=b<=1000;
    cin >> a >> b;

    bool st =false;
    for(int i=a;i<=b;i++){
        if(1920%i==0 && 2880%i==0) {
            st =true;
            break;
        }
    }
    if(st==true) cout << 1;
    else cout << 0;

    return 0;
}