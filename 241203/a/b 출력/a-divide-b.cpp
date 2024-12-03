#include <iostream>
using namespace std;

/* Q. 두 정수 a와 b가 주어집니다.

실수 a/b의 값을 소수점 21번째 자리에서 내림하여 출력하는 프로그램을 작성해보세요.*/
int main() {
    int a, b, d,l;
    cin >> a >> b;

    d=a/b; // 몫
    l=a%b; // 나머지
    cout << d << "."; // 정수부 출력
    for (int i=1;i<21;i++){
        l *= 10; // 나머지에 10을 곱하고
        d = l/b; // 그 나머지를 다시 나눈 몫.
        cout << d ;
        l %= b; // 다음 회차에 사용할 나머지를 계산
    }



    return 0;
}