#include <iostream>
using namespace std;

/// Q. 100 이하의 정수 n을 입력받은 후, n부터 100까지의 숫자를 순서대로 출력하는 프로그램을 작성해보세요.
int main() {
    int n;
    cin >> n;
    if (n>100) n = 100;
    else if (n < 1) n = 1;

    for(int i=n; i<=100;i++) 
        cout << i << " ";

    return 0;
}