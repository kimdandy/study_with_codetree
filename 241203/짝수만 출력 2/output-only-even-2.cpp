#include <iostream>
using namespace std;

/* Q. 두 정수 b와 a가 주어지면 a이상 b이하의 짝수를 모두 내림차순으로 출력하는 프로그램을 작성해보세요.

단, while문을 사용하여 해결해봅니다.*/
int main() {
    int a,b,i;
    cin >> b >> a;

    i=b;
    while(i>=a){
        if(i%2==0) cout << i << " ";
        i--;
    }
    return 0;
}