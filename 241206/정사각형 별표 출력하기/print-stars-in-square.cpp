#include <iostream>
using namespace std;
///* for loop *///
/// 다중 중첩문
/*
for(){
    for() ~
}
*/

/* Q. 정수 n의 값을 입력받아 별표로 정사각형을 출력하는 프로그램을 아래 예를 참고하여 작성해보세요.

예)

n이 3인 경우

***
***
***

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout << "*";
        cout << endl;
    }
    return 0;
}