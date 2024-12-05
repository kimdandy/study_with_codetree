#include <iostream>
using namespace std;

/// Q. a, b 두 자연수를 입력받아 a부터 b까지 짝수의 합을 구해 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b, sum=0; //(1<=a<=b<=100)
    cin >> a >> b;

    for(int i=a;i<=b; i++){
        if(i%2==0) sum+=i;
    }
    cout << sum;
    return 0;
}