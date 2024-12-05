#include <iostream>
using namespace std;

/* Q. 정수 a 를 입력받아 1부터 a까지의 수 중 다음 조건을 모두 만족하지 않는 수들을 모두 출력하는 프로그램을 작성해보세요.

#짝수이면서 4의 배수가 아닌 수

#8로 나눈 몫이 짝수인 수

#7로 나눈 나머지가 4보다 작은 수*/
int main() {
    int a; // 1<=a<=100
    cin >> a;

    for (int i=1;i<=a;i++){
        if((i%2==0 && i%4!=0)||((i/8)%2==0)||(i%7<4)) continue;
        cout << i << " ";
    }
    return 0;
}