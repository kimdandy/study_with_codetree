#include <iostream>
using namespace std;

/// Q. 정수 n의 값을 입력받아 1까지 차례로 출력하는 프로그램을 작성해보세요.
int main() {
    int n;
    cin >> n;

    // 범위 맟추기
    /* if(n>100) n=100;
    else if(n<1) n=1;*/

    for(int i=n;i>=1;i--)
        cout << i << " ";
        
    return 0;
}