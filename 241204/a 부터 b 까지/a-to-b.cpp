#include <iostream>
using namespace std;

/* Q. 정수 a부터 b까지 숫자를 출력하는 프로그램을 작성해보세요. a에서 시작하여 조건에 맞춰 수를 변경하다 b보다 커지는 순간에 종료해야 합니다. 숫자가 바뀌는 조건은 다음과 같습니다.

- 숫자가 홀수인 경우에는 2배가 됩니다.
- 숫자가 짝수인 경우에는 3만큼 증가합니다. */
int main() {
    int a, b, i;
    cin >> a >> b;

    i=a;
    while(i<=b){ // b를 넘기 전까지
        cout << i << " ";
        if(i%2==1) i *= 2;
        else i+=3;
    }
    return 0;
}