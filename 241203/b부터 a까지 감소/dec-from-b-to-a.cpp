#include <iostream>
using namespace std;

/// Q. a, b 두 자연수를 입력받아 b부터 a까지 1씩 감소하며 그 값을 출력하는 프로그램을 작성해보세요.
int main() {
    int a,b;
    cin >> a >> b;

    // 순서 맟추기
    /*if(a>b){
        int temp;
        temp =a;
        a=b;
        b=temp;
    }*/
    // 범위 맟추기
    // if(a<1) a=1;
    // if(b>100) b=100;

    for(int i=b ; i>=a; i--)
        cout << i << " ";

    return 0;
}