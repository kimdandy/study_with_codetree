#include <iostream>
using namespace std;

/// Q. 두 정수 a와 b를 입력받아, a가 자연수라면 a를 b번 반복하여 출력하는 프로그램을 작성해보세요.
int main() {
    int a,b;
    cin >> a >> b;

    if(a>0) for(int i=1;i<=b;i++) cout << a;
    else cout << 0;
    return 0;
}