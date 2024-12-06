#include <iostream>
using namespace std;

/// Q. 5개의 정수가 주어졌을 때, 주어진 모든 수가 3의 배수인지 판단하는 프로그램을 작성해보세요.
int main() {
    int n; // n:입력 숫자들을 할당할 변수, 1<=n<=100
    bool st = true;
    for(int i =1;i<=5;i++){
        cin >> n;
        if(n%3!=0) {
            st = false;
            break;
        }
    } 
    if(st==true) cout << 1;
    else cout << 0;
    return 0;
}