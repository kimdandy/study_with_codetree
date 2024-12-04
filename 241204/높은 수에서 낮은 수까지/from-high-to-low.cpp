#include <iostream>
using namespace std;

/// Q. 두 개의 정수a, b를 입력받아 큰 수부터 작은 수까지 차례대로 출력하는 프로그램을 작성해보세요.
int main() {
    int a, b;
    cin >> a >> b;

    if(a>=b){
        for(int i = a; i>=b; i--) cout << i <<" ";
    }
    else{
        for(int i = b;i>=a;i--) cout << i << " ";
    }
    return 0;
}