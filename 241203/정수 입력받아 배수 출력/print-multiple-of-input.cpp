#include <iostream>
using namespace std;

/// Q. 자연수 n을 입력받아 n보다 크거나 같은 n의 배수 중 작은 수 5개를 차례로 출력하는 프로그램을 작성해보세요.
int main() {
    int n;
    cin >> n;
    if (n>100) n=100;
    else if(n<1) n=1;

    for(int i=n;i<=5*n;i += n)
        cout << i << " ";

    return 0;
}