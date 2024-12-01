#include <iostream>
using namespace std;

// if else 조건문
/*
if (조건) {
  여기에 조건이 참일 경우에만 수행되는 코드 작성
}
else {
    여기에 조건이 거짓일 경우에만 수행되는 코드 작성
}
이 위치에 있는 코드는 조건과 무관하게 항상 수행됩니다.
*/

// Q. 점수를 입력받아 통과인지, 통과를 못 했다면 몇 점이 더 필요한지 출력하는 프로그램을 작성해주세요.
// 입력받은 정수가 80 이상이면 pass라고 출력하고, 그렇지 않다면 몇 점이 더 있어야 통과되는지를 "○ more score"라는 메시지로 출력합니다.
int main() {
    int n;
    cin >> n;

    if ( n >= 80 ){
        cout << "pass";
    }
    else {
        cout << 80-n << " more score";
    }
    return 0;
}