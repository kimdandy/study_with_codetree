#include <iostream>
using namespace std;

/* Q. 숫자 25를 맞추는 게임을 합니다. 
주어지는 정수값이 25보다 작으면 Higher를, 25보다 크면 Lower를 출력하는 작업을 반복하다가, 25가 주어지면 Good을 출력하고 중단하는 프로그램을 작성해보세요.*/
int main() {
    int n; // n: 입력받은 수들을 할당할 변수 , 1<=n<=100
    while(1){
        cin >> n;
        if(n<25) cout << "Higher";
        else if(n>25) cout << "Lower";
        else {
            cout << "Good";
            break;
        }
        cout << endl;
    }
    return 0;
}