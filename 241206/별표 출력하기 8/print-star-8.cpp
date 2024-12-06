#include <iostream>
using namespace std;
///* 행에 따라 모양이 다른 경우 *///

/* Q. 정수 n의 값을 입력받아 별표를 출력하는 프로그램을 아래 예를 참고하여 작성해보세요. 
홀수번째 줄에는 *이 하나만 출력됩니다.

예)

n에 3를 입력받는 경우

*
* *
*
n에 4을 입력받는 경우

*
* *
*
* * * *

*/
int main() {
    int n; // 1<=n<=10
    cin >> n;

    for(int i=1;i<=n;i++){
        if(i%2==1) cout << "*";
        else{
            for(int j=1;j<=i;j++) cout << "* ";
        }
        cout << endl;
    }
    return 0;
}