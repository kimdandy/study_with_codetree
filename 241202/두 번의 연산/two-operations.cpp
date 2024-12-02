#include <iostream>
using namespace std;

/* Q. 정수 a가 주어졌을 때, a가 홀수라면 3을 더해줍니다.

이후, 최종적으로 a가 3의 배수라면 3으로 나누어줍니다.

위의 연산을 한 결과값을 출력하는 프로그램을 작성해보세요.
*/
int main() {
    int a;
    cin >> a;

    if (a%2 != 0){
        a+=3;
    }
    if (a%3 == 0){
        a/=3;
    }

    cout << a;
    return 0;
}