#include <iostream>
using namespace std;

/// Q. 어떤 수가 주어졌을 때 홀수면 아무 작업도 하지 않고, 짝수면 2로 나눈 몫을 출력하는 작업을 3번까지 반복하는 프로그램을 작성해보세요.
// 단, 주어지는 수 중 3개 이상의 짝수가 반드시 있다는 것을 가정해도 좋습니다.
int main() {
    int n; // n: 입력값들을 할당할 변수 , 1<=n<=100
    int cnt=0;
    for(;;){
        cin >> n;
        if(n%2==1) continue;
        else cout << n/2 << endl;
        cnt+=1;
        if (cnt ==3 ) break; // 
    }
    return 0;
}