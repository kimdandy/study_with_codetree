#include <iostream>
using namespace std;

/* Q. 정수 a, b이 주어졌을 때, a부터 b까지의 자연수중 짝수만 출력하는 프로그램을 작성해보세요.

단, while문을 사용하여 해결해봅니다.*/
int main() {
    int a, b;
    cin >> a >> b;

    int i = a;
    while( i <=b){
        if(i%2==0) cout << i << " ";
        i ++;
    }
    return 0;
}