#include <iostream>
using namespace std;
//* 조건을 만족하는 합 구하기 *//

/// Q. a, b 두 자연수를 입력받아 a부터 b까지의 합을 구해 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b, sum=0;
    cin >> a >> b;

    for(int i=a;i<=b;i++) sum+=i;
    cout << sum;
    return 0;
}