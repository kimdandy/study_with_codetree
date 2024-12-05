#include <iostream>
using namespace std;

/* Q. 두 정수 a와 b가 주어집니다.

a와 b를 포함하여, a와 b 사이의 수 중에서 5의 배수인 수를 모두 더한 값을 출력하는 프로그램을 작성해보세요.

a와 b 간에 대소 관계가 보장되지 않음에 유의하세요.*/
int main() {
    int a, b; // 1<=a<=200 , 1<=b<=200
    int sum=0, temp; // sum : 대상 값의 합, temp:자리바꾸기용 변수
    cin >> a >> b;
    if(a>b) {
        temp = a;
        a =b;
        b = temp;
    }

    for(int i=a; i<=b;i++){
        if(i%5==0) sum+=i;
    }
    cout << sum;
    return 0;
}