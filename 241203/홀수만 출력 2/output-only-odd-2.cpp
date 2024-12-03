#include <iostream>
using namespace std;

/* Q. 두 정수 b와 a가 주어집니다.

b 이하 a 이상의 모든 홀수를 내림차순으로 출력하는 프로그램을 작성해보세요.*/
int main() {
    int a, b;
    cin >> b >> a;

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
    //if (b>100) b=99;

    for (int i=b;i>=a;i-=2)
        cout << i << " ";
    return 0;
}