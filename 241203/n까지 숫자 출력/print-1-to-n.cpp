#include <iostream>
using namespace std;

/// Q. 자연수 n을 입력받아 while문을 사용하여 1부터 n까지 숫자를 출력하는 프로그램을 작성해보세요.
int main() {
    int n;
    cin >> n;

    // 범위 조정
    //if(n>50) n=50;
    //else if(n<1) n=1;

    int i=1;
    while(i<=n){
        cout << i << " ";
        i ++;
    }
    return 0;
}