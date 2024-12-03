#include <iostream>
using namespace std;

/* Q. 정수 n이 주어지면 *을 n개의 줄에 걸쳐 한 줄에 하나씩 출력하는 프로그램을 작성해보세요.

단, while 문을 사용하여 해결해봅니다.*/
int main() {
    int n;
    cin >> n;

    // 범위 조정
    //if(n>50) n=50;
    //else if(n<1) n=1;

    int i=0;
    while(i<n) { 
        cout << "*" << endl;
        i++;
        }

    return 0;
}