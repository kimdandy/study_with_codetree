#include <iostream>
using namespace std;

/// Q. n번에 걸쳐 두 정수 a, b가 주어졌을 때, a부터 b까지의 짝수를 모두 합한 결과를 출력하는 프로그램을 작성해보세요.
int main() {
    int n, a, b; // 1<=n<=10 / 1<=a<=b<=100
    cin >> n;

    for(int j=1;j<=n;j++){
    cin >> a >> b;
    int sum = 0;
    for(int i=a;i<=b;i++) if(i%2==0) sum+=i;
    cout << sum << endl;
    }
    return 0;
}