#include <iostream>
using namespace std;

/// Q. 두 정수 a와 b가 주어지면 a이상 b이하의 홀수를 모두 오름차순으로 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b;
    cin >> a >> b;

    // 순서 바꾸기
    /*if (a>b){
        int temp;
        temp =a;
        a=b;
        b=temp;
    }*/
    // 홀수화
    //if (a%2==0) a-=1;
    //if (b%2==0) b-=1;
    // 범위 제한 
    //if (a<1) a=1;
    //if (b>100) b=100;

    for(int i =a; i<=b; i+=2)
        cout << i << " ";

    return 0;
}