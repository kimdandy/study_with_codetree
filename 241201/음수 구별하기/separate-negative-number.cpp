#include <iostream>
using namespace std;
// if 조건문
/* if(조건) {
         조건이 참일 경우에만 수행되는 코드 작성
         }*/
        
// Q. 정수를 입력받아 출력하고 음수를 구별하는 프로그램을 작성
int main() {
    int n;
    cin >> n;

    cout << n;
    if (n<0) {
        cout << endl << "minus";
    }
    return 0;
}