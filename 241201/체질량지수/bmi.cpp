#include <iostream>
using namespace std;

/* Q.키가 h cm, 몸무게가 w kg인 사람의 체질량지수(BMI) b는 다음과 같이 계산할 수 있습니다.

b:=w/ ((h/100) ^2) = 10000×w / h*h

또한, 체질량지수 b가 25 이상이라면 비만이라고 정의합시다.

키 h와 몸무게 w가 주어졌을 때, 체질량지수 b를 계산하고 비만인지 판정하는 프로그램을 작성해주세요. */
int main() {
    int h, w;
    cin >> h >> w;

    int b = 10000 * w / (h*h);
    cout << b;
    if (b >= 25){ cout << endl << "Obesity";}
    return 0;
}