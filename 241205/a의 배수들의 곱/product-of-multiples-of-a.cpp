#include <iostream>
using namespace std;

/// Q. 두 정수 a와 b가 주어졌을 때, 1부터 b까지의 수 중 a의 배수들의 곱을 구하는 프로그램을 작성해보세요.
int main() {
    int a, b; // 1<=a>=b<=10
    cin >> a >> b;
    
    int prod=1;
    for (int i=1; i<=b; i++) {
        if (i%a==0 && i!=0) prod*=i;
    }
    cout << prod;
    return 0;
}