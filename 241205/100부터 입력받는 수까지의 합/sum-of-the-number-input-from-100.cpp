#include <iostream>
using namespace std;

/// Q. 100 이하의 정수 n을 입력받은 후, n부터 100까지의 합을 구하는 프로그램을 작성해보세요.
int main() {
    int n, sum=0;
    cin >> n;

    for (int i=n; i<=100; i++) sum+=i;
    cout << sum;
    
    return 0;
}