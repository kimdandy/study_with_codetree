#include <iostream>
using namespace std;

/// Q. n 개의 정수가 주어질 때, 이 중 홀수이면서 동시에 3의 배수인 수들의 총합을 구하는 프로그램을 작성해보세요.
int main() {
    int n, z, sum=0;
    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> z;
        if(z%2==1 && z%3==0) sum+=z;
    }
    cout << sum;
    return 0;
}